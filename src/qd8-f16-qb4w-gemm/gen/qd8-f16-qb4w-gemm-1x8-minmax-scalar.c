// Auto-generated file. Do not edit!
//   Template: src/qs8-gemm/scalar-qd8-f16-qb4w.c.in
//   Generator: tools/xngen
//
// Copyright 2021 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include <xnnpack/gemm.h>
#include <xnnpack/math.h>
#include <xnnpack/unaligned.h>
#include <fp16/fp16.h>


void xnn_qd8_f16_qb4w_gemm_minmax_ukernel_1x8__scalar(
    size_t mr,
    size_t nc,
    size_t kc,
    size_t bl,
    const int8_t* __restrict__ a,
    size_t a_stride,
    const void* __restrict__ w,
    void* __restrict__ c,
    size_t cm_stride,
    size_t cn_stride,
    const union xnn_f16_qc4w_minmax_params params[XNN_MIN_ELEMENTS(1)],
    const struct xnn_qd8_quantization_params quantization_params[XNN_MIN_ELEMENTS(1)])
{
  assert(mr != 0);
  assert(mr <= 1);
  assert(nc != 0);
  assert(kc != 0);
  assert(bl != 0);
  assert(bl <= kc);
  assert(kc % bl == 0);

  const int8_t* a0 = (const int8_t*) ((uintptr_t) a + a_stride * 0);
  uint16_t* c0 = (uint16_t*) ((uintptr_t) c + cm_stride * 0);

  kc = round_up_po2(kc, 2);
  do {
    const float vksum0 = unaligned_indexed_load_f32(w, 0);
    const float vksum1 = unaligned_indexed_load_f32(w, 1);
    const float vksum2 = unaligned_indexed_load_f32(w, 2);
    const float vksum3 = unaligned_indexed_load_f32(w, 3);
    const float vksum4 = unaligned_indexed_load_f32(w, 4);
    const float vksum5 = unaligned_indexed_load_f32(w, 5);
    const float vksum6 = unaligned_indexed_load_f32(w, 6);
    const float vksum7 = unaligned_indexed_load_f32(w, 7);
    w = (const float*) w + 8;

    const float vinput_zero_point0 = (float) quantization_params[0].zero_point;

    float vout0x0 = vinput_zero_point0 * vksum0;
    float vout0x1 = vinput_zero_point0 * vksum1;
    float vout0x2 = vinput_zero_point0 * vksum2;
    float vout0x3 = vinput_zero_point0 * vksum3;
    float vout0x4 = vinput_zero_point0 * vksum4;
    float vout0x5 = vinput_zero_point0 * vksum5;
    float vout0x6 = vinput_zero_point0 * vksum6;
    float vout0x7 = vinput_zero_point0 * vksum7;

    size_t n_blocks = kc / bl;

    for (size_t nb=0; nb<n_blocks; ++nb){
      int32_t vacc0x0 = 0;
      int32_t vacc0x1 = 0;
      int32_t vacc0x2 = 0;
      int32_t vacc0x3 = 0;
      int32_t vacc0x4 = 0;
      int32_t vacc0x5 = 0;
      int32_t vacc0x6 = 0;
      int32_t vacc0x7 = 0;

      for (size_t k=bl; k >= 2 * sizeof(int8_t); k -= 2 * sizeof(int8_t)) {
        const int32_t va0c0 = (int32_t) a0[0];
        const int32_t va0c1 = (int32_t) a0[1];
        a0 += 2;

        const uint8_t vbi0 = ((const uint8_t*) w)[0];
        const uint8_t vbi1 = ((const uint8_t*) w)[1];
        const uint8_t vbi2 = ((const uint8_t*) w)[2];
        const uint8_t vbi3 = ((const uint8_t*) w)[3];
        const uint8_t vbi4 = ((const uint8_t*) w)[4];
        const uint8_t vbi5 = ((const uint8_t*) w)[5];
        const uint8_t vbi6 = ((const uint8_t*) w)[6];
        const uint8_t vbi7 = ((const uint8_t*) w)[7];
        w = (const uint8_t*) w + 8;

        const int32_t vb0c0 = (int32_t) (int8_t) (vbi0 << 4);
        const int32_t vb0c1 = (int32_t) (int8_t) (vbi0 & 0xF0);
        const int32_t vb1c0 = (int32_t) (int8_t) (vbi1 << 4);
        const int32_t vb1c1 = (int32_t) (int8_t) (vbi1 & 0xF0);
        const int32_t vb2c0 = (int32_t) (int8_t) (vbi2 << 4);
        const int32_t vb2c1 = (int32_t) (int8_t) (vbi2 & 0xF0);
        const int32_t vb3c0 = (int32_t) (int8_t) (vbi3 << 4);
        const int32_t vb3c1 = (int32_t) (int8_t) (vbi3 & 0xF0);
        const int32_t vb4c0 = (int32_t) (int8_t) (vbi4 << 4);
        const int32_t vb4c1 = (int32_t) (int8_t) (vbi4 & 0xF0);
        const int32_t vb5c0 = (int32_t) (int8_t) (vbi5 << 4);
        const int32_t vb5c1 = (int32_t) (int8_t) (vbi5 & 0xF0);
        const int32_t vb6c0 = (int32_t) (int8_t) (vbi6 << 4);
        const int32_t vb6c1 = (int32_t) (int8_t) (vbi6 & 0xF0);
        const int32_t vb7c0 = (int32_t) (int8_t) (vbi7 << 4);
        const int32_t vb7c1 = (int32_t) (int8_t) (vbi7 & 0xF0);

        vacc0x0 += va0c0 * vb0c0;
        vacc0x1 += va0c0 * vb1c0;
        vacc0x2 += va0c0 * vb2c0;
        vacc0x3 += va0c0 * vb3c0;
        vacc0x4 += va0c0 * vb4c0;
        vacc0x5 += va0c0 * vb5c0;
        vacc0x6 += va0c0 * vb6c0;
        vacc0x7 += va0c0 * vb7c0;
        vacc0x0 += va0c1 * vb0c1;
        vacc0x1 += va0c1 * vb1c1;
        vacc0x2 += va0c1 * vb2c1;
        vacc0x3 += va0c1 * vb3c1;
        vacc0x4 += va0c1 * vb4c1;
        vacc0x5 += va0c1 * vb5c1;
        vacc0x6 += va0c1 * vb6c1;
        vacc0x7 += va0c1 * vb7c1;
      }

      float vf0x0 = vacc0x0;
      float vf0x1 = vacc0x1;
      float vf0x2 = vacc0x2;
      float vf0x3 = vacc0x3;
      float vf0x4 = vacc0x4;
      float vf0x5 = vacc0x5;
      float vf0x6 = vacc0x6;
      float vf0x7 = vacc0x7;

      const float vfilter_output_scale0 = unaligned_indexed_load_f32(w, 0);
      w = (const float*) w + 1;
      vf0x0 *= vfilter_output_scale0;
      const float vfilter_output_scale1 = unaligned_indexed_load_f32(w, 0);
      w = (const float*) w + 1;
      vf0x1 *= vfilter_output_scale1;
      const float vfilter_output_scale2 = unaligned_indexed_load_f32(w, 0);
      w = (const float*) w + 1;
      vf0x2 *= vfilter_output_scale2;
      const float vfilter_output_scale3 = unaligned_indexed_load_f32(w, 0);
      w = (const float*) w + 1;
      vf0x3 *= vfilter_output_scale3;
      const float vfilter_output_scale4 = unaligned_indexed_load_f32(w, 0);
      w = (const float*) w + 1;
      vf0x4 *= vfilter_output_scale4;
      const float vfilter_output_scale5 = unaligned_indexed_load_f32(w, 0);
      w = (const float*) w + 1;
      vf0x5 *= vfilter_output_scale5;
      const float vfilter_output_scale6 = unaligned_indexed_load_f32(w, 0);
      w = (const float*) w + 1;
      vf0x6 *= vfilter_output_scale6;
      const float vfilter_output_scale7 = unaligned_indexed_load_f32(w, 0);
      w = (const float*) w + 1;
      vf0x7 *= vfilter_output_scale7;

      vout0x0 += vf0x0;
      vout0x1 += vf0x1;
      vout0x2 += vf0x2;
      vout0x3 += vf0x3;
      vout0x4 += vf0x4;
      vout0x5 += vf0x5;
      vout0x6 += vf0x6;
      vout0x7 += vf0x7;
    }

    vout0x0 /= 16;
    vout0x1 /= 16;
    vout0x2 /= 16;
    vout0x3 /= 16;
    vout0x4 /= 16;
    vout0x5 /= 16;
    vout0x6 /= 16;
    vout0x7 /= 16;

    const float vinput_scale0 = quantization_params[0].inv_scale;
    vout0x0 *= vinput_scale0;
    vout0x1 *= vinput_scale0;
    vout0x2 *= vinput_scale0;
    vout0x3 *= vinput_scale0;
    vout0x4 *= vinput_scale0;
    vout0x5 *= vinput_scale0;
    vout0x6 *= vinput_scale0;
    vout0x7 *= vinput_scale0;

    const float vbias0 = unaligned_indexed_load_f32(w, 0);
    vout0x0 += vbias0;
    const float vbias1 = unaligned_indexed_load_f32(w, 1);
    vout0x1 += vbias1;
    const float vbias2 = unaligned_indexed_load_f32(w, 2);
    vout0x2 += vbias2;
    const float vbias3 = unaligned_indexed_load_f32(w, 3);
    vout0x3 += vbias3;
    const float vbias4 = unaligned_indexed_load_f32(w, 4);
    vout0x4 += vbias4;
    const float vbias5 = unaligned_indexed_load_f32(w, 5);
    vout0x5 += vbias5;
    const float vbias6 = unaligned_indexed_load_f32(w, 6);
    vout0x6 += vbias6;
    const float vbias7 = unaligned_indexed_load_f32(w, 7);
    vout0x7 += vbias7;
    w = (const float*) w + 8;

    const float voutput_min = fp16_ieee_to_fp32_value(params->fp16arith.min);
    vout0x0 = math_max_f32(vout0x0, voutput_min);
    vout0x1 = math_max_f32(vout0x1, voutput_min);
    vout0x2 = math_max_f32(vout0x2, voutput_min);
    vout0x3 = math_max_f32(vout0x3, voutput_min);
    vout0x4 = math_max_f32(vout0x4, voutput_min);
    vout0x5 = math_max_f32(vout0x5, voutput_min);
    vout0x6 = math_max_f32(vout0x6, voutput_min);
    vout0x7 = math_max_f32(vout0x7, voutput_min);

    const float voutput_max = fp16_ieee_to_fp32_value(params->fp16arith.max);
    vout0x0 = math_min_f32(vout0x0, voutput_max);
    vout0x1 = math_min_f32(vout0x1, voutput_max);
    vout0x2 = math_min_f32(vout0x2, voutput_max);
    vout0x3 = math_min_f32(vout0x3, voutput_max);
    vout0x4 = math_min_f32(vout0x4, voutput_max);
    vout0x5 = math_min_f32(vout0x5, voutput_max);
    vout0x6 = math_min_f32(vout0x6, voutput_max);
    vout0x7 = math_min_f32(vout0x7, voutput_max);

    if XNN_LIKELY(nc >= 8) {
        c0[0] = fp16_ieee_from_fp32_value(vout0x0);
        c0[1] = fp16_ieee_from_fp32_value(vout0x1);
        c0[2] = fp16_ieee_from_fp32_value(vout0x2);
        c0[3] = fp16_ieee_from_fp32_value(vout0x3);
        c0[4] = fp16_ieee_from_fp32_value(vout0x4);
        c0[5] = fp16_ieee_from_fp32_value(vout0x5);
        c0[6] = fp16_ieee_from_fp32_value(vout0x6);
        c0[7] = fp16_ieee_from_fp32_value(vout0x7);

        a0 = (const int8_t*) ((uintptr_t) a0 - kc);

        c0 = (uint16_t*) ((uintptr_t) c0 + cn_stride);

      nc -= 8;
    } else {
      if (nc & 4) {
          c0[0] = fp16_ieee_from_fp32_value(vout0x0);
          c0[1] = fp16_ieee_from_fp32_value(vout0x1);
          c0[2] = fp16_ieee_from_fp32_value(vout0x2);
          c0[3] = fp16_ieee_from_fp32_value(vout0x3);
          c0 += 4;
          vout0x0 = vout0x4;
          vout0x1 = vout0x5;
          vout0x2 = vout0x6;
      }
      if (nc & 2) {
          c0[0] = fp16_ieee_from_fp32_value(vout0x0);
          c0[1] = fp16_ieee_from_fp32_value(vout0x1);
          c0 += 2;
          vout0x0 = vout0x2;
          vout0x1 = vout0x3;
          vout0x2 = vout0x4;
          vout0x3 = vout0x5;
          vout0x4 = vout0x6;
      }
      if (nc & 1) {
          c0[0] = fp16_ieee_from_fp32_value(vout0x0);
          c0 += 1;
      }

      nc = 0;
    }
  } while (nc != 0);
}
