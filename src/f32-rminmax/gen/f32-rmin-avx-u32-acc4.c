// Auto-generated file. Do not edit!
//   Template: src/f32-rminmax/avx.c.in
//   Generator: tools/xngen
//
// Copyright 2023 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include <immintrin.h>

#include <xnnpack/common.h>
#include <xnnpack/reduce.h>


void xnn_f32_rmin_ukernel__avx_u32_acc4(
    size_t batch,
    const float* input,
    float* output,
    const union xnn_f32_default_params* params)
{
  assert(batch != 0);
  assert(batch % sizeof(float) == 0);
  assert(input != NULL);
  assert(output != NULL);

  __m256 vmin0 = _mm256_broadcast_ss(input);
  __m256 vmin1 = vmin0;
  __m256 vmin2 = vmin0;
  __m256 vmin3 = vmin0;
  for (; batch >= 32 * sizeof(float); batch -= 32 * sizeof(float)) {
    const __m256 vt0 = _mm256_loadu_ps(input);
    const __m256 vt1 = _mm256_loadu_ps(input + 8);
    const __m256 vt2 = _mm256_loadu_ps(input + 16);
    const __m256 vt3 = _mm256_loadu_ps(input + 24);
    input += 32;

    vmin0 = _mm256_min_ps(vmin0, vt0);
    vmin1 = _mm256_min_ps(vmin1, vt1);
    vmin2 = _mm256_min_ps(vmin2, vt2);
    vmin3 = _mm256_min_ps(vmin3, vt3);
  }
  vmin0 = _mm256_min_ps(vmin0, vmin1);
  vmin2 = _mm256_min_ps(vmin2, vmin3);
  vmin0 = _mm256_min_ps(vmin0, vmin2);
  for (; batch >= 8 * sizeof(float); batch -= 8 * sizeof(float)) {
    const __m256 vt = _mm256_loadu_ps(input);
    input += 8;

    vmin0 = _mm256_min_ps(vmin0, vt);
  }
  if XNN_UNLIKELY(batch != 0) {
    assert(batch >= 1 * sizeof(float));
    assert(batch <= 7 * sizeof(float));
    const __m256i vmask = _mm256_loadu_si256((const __m256i*) ((uintptr_t) &params->avx.mask_table[7] - batch));

    const __m256 vt = _mm256_maskload_ps(input, vmask);

    vmin0 = _mm256_blendv_ps(vmin0, _mm256_min_ps(vmin0, vt), _mm256_castsi256_ps(vmask));
  }
  __m128 vmin = _mm_min_ps(_mm256_castps256_ps128(vmin0), _mm256_extractf128_ps(vmin0, 1));
  vmin = _mm_min_ps(vmin, _mm_movehl_ps(vmin, vmin));
  vmin = _mm_min_ss(vmin, _mm_movehdup_ps(vmin));
  _mm_store_ss(output, vmin);
}
