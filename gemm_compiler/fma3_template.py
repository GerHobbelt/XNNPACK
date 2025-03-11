#!/usr/bin/env python3
# Copyright 2024 Google LLC
#
# This source code is licensed under the BSD-style license found in the
# LICENSE file in the root directory of this source tree.

from gemm_compiler import x64_template


class Fma3(x64_template.X64):
  """All SIMD features for fma3."""

  def isa(self):
    return 'fma3'

  def register_bytes(self):
    return 32

  def prefix(self):
    return 'y'

  def n_step(self) -> int:
    return 8

  def a_registers(self, idx):
    registers = ['ymm2', 'ymm3', 'ymm4', 'ymm5']
    assert idx < len(registers)
    return registers[idx]

  def w_registers(self):
    return ['ymm14', 'ymm15']

  def input_asm(self):
    in_asm = {
        'loop': [
            'vbroadcastss {AM}, DWORD PTR [{AM_ptr} + {a_offset}]\n',
        ]
    }
    return in_asm

  def weights_asm(self) -> dict[str, list[str]]:
    w_asm = {
        'loop': [
            'vmovaps  {W}, [{W_ptr} + {offset}]\n',
        ],
        'after': ['add {W}, {w_step}\n'],
    }
    return w_asm

  def compute_asm(self):
    c_asm = {
        'loop': ['vfmadd231ps  y{ACC}, {A}, {W}\n'],
    }
    return c_asm

  def load_bias(self):
    return 'vmovaps  y{ACC}, [{W} + {offset}]\n'

  def copy_simd_register(self, prefix, src, dst):
    return f'vmovaps {prefix}{dst}, {prefix}{src}\n'

  def clamp_min(self, reg, prefix):
    max_reg = self.max_register()
    return f'vminps  {prefix}{reg}, {prefix}{max_reg}, {prefix}{reg}\n'

  def clamp_max(self, reg, prefix):
    min_reg = self.min_register()
    return f'vmaxps  {prefix}{reg}, {prefix}{min_reg}, {prefix}{reg}\n'

  def store(self):
    accumulators = self.acc_registers()
    cm_registers = self.cm_registers()
    nc_reg = self.nc_register()
    nc_lo = self.register_map_byte(nc_reg)
    asm_string = """
    cmp {nc}, {n_step}
    jl .Ltail_{N_2}
    """.format(
        n_step=self.n * self.n_step(),
        N_2=(self.n * self.n_step()) // 2,
        nc=nc_reg,
    )
    for mr in range(0, self.m):
      asm_string += 'vmovups  [{c_reg}], y{ACC}\n'.format(
          ACC=accumulators[mr], c_reg=cm_registers[mr]
      )
      for nr in range(1, self.n):
        asm_string += 'vmovups  [{c_reg} + {offset}], y{ACC}\n'.format(
            ACC=accumulators[self.m * nr + mr],
            c_reg=cm_registers[mr],
            offset=self.register_bytes() * nr,
        )
    for mr in range(0, self.m):
      asm_string += 'add {cm}, {cn_stride}\n'.format(
          cn_stride=self.n * self.register_bytes(), cm=cm_registers[mr]
      )
    check = """
    sub {nc}, {n_step}
    jne {OUTER}
    jmp return""".format(
        n_step=(self.n * self.n_step()), nc=nc_reg, OUTER=self.labels()[self.m]
    )
    asm_string += check
    if self.n > 1:
      asm_string += """
      .Ltail_{N}:
      test {nc_lo}, {N}
      jz .Ltail_{N_2}\n""".format(
          N=self.n * self.n_step(),
          N_2=(self.n * self.n_step()) // 2,
          nc_lo=nc_lo,
      )
      for mr in range(0, self.m):
        asm_string += 'vmovups  [{c_reg}], y{ACC}\n'.format(
            ACC=accumulators[mr], c_reg=cm_registers[mr]
        )
      for nr in range(1, self.n):
        for mr in range(0, self.m):
          asm_string += 'vmovups  [{c_reg} + {offset}], y{ACC}\n'.format(
              ACC=accumulators[self.m * nr + mr],
              c_reg=cm_registers[mr],
              offset=self.register_bytes() * nr,
          )
        for mr in range(0, self.m):
          asm_string += 'vmovaps  y{ACC0}, y{ACC1}\n'.format(
              ACC0=accumulators[mr], ACC1=accumulators[mr + self.m * nr]
          )
      for mr in range(0, self.m):
        asm_string += 'add {cm}, 32\n'.format(cm=cm_registers[mr])
    asm_string += """
\n.Ltail_d:
    test {nc_lo}, 4
    jz .Ltail_d\n""".format(nc_lo=nc_lo)
    for mr in range(0, self.m):
      asm_string += 'vmovups  [{c_reg}], x{ACC}\n'.format(
          ACC=accumulators[mr], c_reg=cm_registers[mr]
      )
    for mr in range(0, self.m):
      asm_string += 'add  {c_reg}, 16\n'.format(c_reg=cm_registers[mr])
    for mr in range(0, self.m):
      asm_string += 'vextractf128 x{ACC}, y{ACC}, 1\n'.format(
          ACC=accumulators[mr]
      )
    asm_string += """
\n.Ltail_d:
    test {nc_lo}, 2
    jz .Ltail_d\n""".format(nc_lo=nc_lo)
    for mr in range(0, self.m):
      asm_string += 'vmovlps  QWORD PTR [{c_reg}], x{ACC}\n'.format(
          ACC=accumulators[mr], c_reg=cm_registers[mr]
      )
    for mr in range(0, self.m):
      asm_string += 'add {c_reg}, 8\n'.format(c_reg=cm_registers[mr])
    for mr in range(0, self.m):
      asm_string += 'vmovhlps x{ACC}, x{ACC}, x{ACC}\n'.format(
          ACC=accumulators[mr]
      )
    asm_string += """
\n.Ltail_d:
    test {nc_lo}, 1
    jz .Lreturn\n""".format(nc_lo=nc_lo)
    for mr in range(0, self.m):
      asm_string += 'vmovss  DWORD PTR [{c_reg}], x{ACC}\n'.format(
          ACC=accumulators[mr], c_reg=cm_registers[mr]
      )

    return asm_string
