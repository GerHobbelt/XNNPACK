// clang-format off
// Auto-generated file. Do not edit!
//   Template: src/f32-vsqrt/avx-rsqrt.c.in
//   Generator: tools/xngen
//
// Copyright 2024 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>
#include <immintrin.h>
#include <stddef.h>
#include <stdint.h>
#include <xmmintrin.h>
#include "src/xnnpack/common.h"
#include "src/xnnpack/microparams.h"
#include "src/xnnpack/vunary.h"


// In the following, we first compute the _reciprocal_ square root of an input
// `a` and then multiply it with `a` to produce the square root.
//
// We compute the reciprocal square root using a single Newton-Raphson step on
// the equation $x^{-2} - a$, which expands to:
//
//  $$x_{k+1} = 0.5 * x_k * (3.0 - a * x_k^2)$$
//
// So we do the following steps:
//
//  1. t0 = x_k
//  2. t1 = t0 * t0   (x_k^2)
//  3. t2 = a * t1    (a * x_k^2)
//  4. t3 = 3.0 - t2  (3.0 - a * x_k^2)
//  5. t4 = 0.5 * t0  (0.5 * x_k)
//  6. t5 = t3 * t4   (0.5 * x_k * (3.0 - a * x_k^2))
//  7. y = a * t5     (a * a^{-1/2})
//
// Where $x_k$ is the original 14-bit approximation and `t5` contains the final
// 24-bit approximation $x_{k+1}$.

void xnn_f32_vsqrt_ukernel__avx_rsqrt_u8(
    size_t batch, const float* input, float* output,
    const struct xnn_f32_default_params params[restrict XNN_MIN_ELEMENTS(1)])
    XNN_OOB_READS {
  static const int32_t mask_table[14] = {-1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0};

  assert(batch != 0);
  assert(batch % sizeof(float) == 0);
  assert(input != NULL);
  assert(output != NULL);

  // Constants for the Newton-Raphson iteration.
  const __m256 kThree = _mm256_set1_ps(3.0f);
  const __m256 kHalf = _mm256_set1_ps(0.5f);

  for (; batch >= 8 * sizeof(float); batch -= 8 * sizeof(float)) {
    const __m256 vx = _mm256_loadu_ps(input);
    input += 8;

    // Create a mask of the +/-0 inputs, which will be flushed to zero later.
    const __m256 vinf_mask = _mm256_cmp_ps(vx, _mm256_setzero_ps(), _CMP_EQ_OQ);

    // Generate the initial 12-bit approximation.
    const __m256 vt0 = _mm256_rsqrt_ps(vx);

    // Do a single Newton-Raphson step as described above.
    const __m256 vt1 = _mm256_mul_ps(vt0, vt0);
    const __m256 vt2 = _mm256_mul_ps(vx, vt1);
    const __m256 vt3 = _mm256_sub_ps(kThree, vt2);
    const __m256 vt4 = _mm256_mul_ps(kHalf, vt0);
    const __m256 vt5 = _mm256_mul_ps(vt3, vt4);
    const __m256 vt6 = _mm256_andnot_ps(vinf_mask, vt5);
    const __m256 vy = _mm256_mul_ps(vx, vt6);

    _mm256_storeu_ps(output, vy);
    output += 8;
  }
  if XNN_UNLIKELY(batch != 0) {
    assert(batch >= 1 * sizeof(float));
    assert(batch <= 7 * sizeof(float));
    const __m256i vmask = _mm256_loadu_si256(
        (const __m256i*)((uintptr_t)&mask_table[7] - batch));

    const __m256 vx = _mm256_maskload_ps(input, vmask);

    // Create a mask of the +/-0 inputs, which will be flushed to zero later.
    const __m256 vinf_mask = _mm256_cmp_ps(vx, _mm256_setzero_ps(), _CMP_EQ_OQ);

    // Generate the initial 12-bit approximation.
    const __m256 vt0 = _mm256_rsqrt_ps(vx);

    // Do a single Newton-Raphson step as described above.
    const __m256 vt1 = _mm256_mul_ps(vt0, vt0);
    const __m256 vt2 = _mm256_mul_ps(vx, vt1);
    const __m256 vt3 = _mm256_sub_ps(kThree, vt2);
    const __m256 vt4 = _mm256_mul_ps(kHalf, vt0);
    const __m256 vt5 = _mm256_mul_ps(vt3, vt4);
    const __m256 vt6 = _mm256_andnot_ps(vinf_mask, vt5);
    __m256 vy = _mm256_mul_ps(vx, vt6);

    __m128 vy_lo = _mm256_castps256_ps128(vy);
    if (batch & (4 * sizeof(float))) {
      _mm_storeu_ps(output, vy_lo);
      vy_lo = _mm256_extractf128_ps(vy, 1);
      output += 4;
    }
    if (batch & (2 * sizeof(float))) {
      _mm_storel_pi((__m64*) output, vy_lo);
      vy_lo = _mm_movehl_ps(vy_lo, vy_lo);
      output += 2;
    }
    if (batch & (1 * sizeof(float))) {
      _mm_store_ss(output, vy_lo);
    }
  }
}
