// Auto-generated file. Do not edit!
//   Template: src/f32-rminmax/sse.c.in
//   Generator: tools/xngen
//
// Copyright 2023 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include <xmmintrin.h>

#include <xnnpack/common.h>
#include <xnnpack/reduce.h>


void xnn_f32_rmin_ukernel__sse_u4(
    size_t batch,
    const float* input,
    float* output,
    const union xnn_f32_default_params params[restrict XNN_MIN_ELEMENTS(1)])
{
  assert(batch != 0);
  assert(batch % sizeof(float) == 0);
  assert(input != NULL);
  assert(output != NULL);

  __m128 vmin0 = _mm_load_ss(input);
  vmin0 = _mm_shuffle_ps(vmin0, vmin0, _MM_SHUFFLE(0, 0, 0, 0));
  for (; batch >= 4 * sizeof(float); batch -= 4 * sizeof(float)) {
    const __m128 vt = _mm_loadu_ps(input);
    input += 4;

    vmin0 = _mm_min_ps(vmin0, vt);
  }
  if XNN_UNLIKELY(batch != 0) {
    do {
      const __m128 vt = _mm_load_ss(input);
      input += 1;
      vmin0 = _mm_min_ss(vmin0, vt);
      batch -= sizeof(float);
    } while (batch != 0);
  }
  vmin0 = _mm_min_ps(vmin0, _mm_movehl_ps(vmin0, vmin0));
  vmin0 = _mm_min_ss(vmin0, _mm_shuffle_ps(vmin0, vmin0, _MM_SHUFFLE(1, 1, 1, 1)));
  _mm_store_ss(output, vmin0);
}
