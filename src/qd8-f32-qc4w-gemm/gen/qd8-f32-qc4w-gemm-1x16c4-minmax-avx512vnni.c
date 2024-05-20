// Auto-generated file. Do not edit!
//   Template: src/qs8-gemm/MRx16c4-avx512vnni.c.in
//   Generator: tools/xngen
//
// Copyright 2023 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include <immintrin.h>

#include <xnnpack/gemm.h>
#include <xnnpack/intrinsics-polyfill.h>
#include <xnnpack/math.h>
#include <xnnpack/unaligned.h>


void xnn_qd8_f32_qc4w_gemm_minmax_ukernel_1x16c4__avx512vnni(
    size_t mr,
    size_t nc,
    size_t kc,
    const int8_t* restrict a,
    size_t a_stride,
    const void* restrict w,
    float* restrict c,
    size_t cm_stride,
    size_t cn_stride,
    const union xnn_f32_qc4w_minmax_params params[restrict XNN_MIN_ELEMENTS(1)],
    const struct xnn_qd8_quantization_params quantization_params[restrict XNN_MIN_ELEMENTS(1)]) XNN_OOB_READS
{
  assert(mr != 0);
  assert(mr <= 1);
  assert(nc != 0);
  assert(kc != 0);
  assert(kc % sizeof(int8_t) == 0);
  assert(a != NULL);
  assert(w != NULL);
  assert(c != NULL);

  kc = round_up_po2(kc, 4 * sizeof(int8_t));
  const int8_t* a0 = a;
  float* c0 = c;

  const __m512i vinput_zero_point0 = _mm512_set1_epi32((int) quantization_params[0].zero_point + 128);
  const __m512 voutput_min = _mm512_set1_ps(params->avx512vnni.min);
  const __m512 voutput_max = _mm512_set1_ps(params->avx512vnni.max);
  const __m512i vsign_mask = _mm512_load_si512(params->avx512vnni.sign_mask);
  const __m512i vpermute_mask = _mm512_load_epi64(params->avx512vnni.permute_mask);
  const __m256i vvalue_mask = _mm256_load_si256((const __m256i*) params->avx512vnni.value_mask);
  do {
    const __m512i vksum0123456789ABCDEF = _mm512_loadu_epi32(w);
    __m512i vacc0x0123456789ABCDEF = _mm512_mullo_epi32(vksum0123456789ABCDEF, vinput_zero_point0);
    w = (const int32_t*) w + 16;

    size_t k = kc;
    do {
      __m512i va0x0123 = _mm512_set1_epi32((int) unaligned_load_u32(a0));
      a0 += 4;

      va0x0123 = _mm512_xor_epi32(va0x0123, vsign_mask);

      __m256i vb4b0123456789ABCDEF = _mm256_loadu_si256(w);
      const __m256i vb4bodd = _mm256_and_si256(vb4b0123456789ABCDEF, vvalue_mask);
      const __m256i vb4beven = _mm256_and_si256(_mm256_slli_epi16(vb4b0123456789ABCDEF, 4), vvalue_mask);
      const __m256i vb012389AB = _mm256_unpacklo_epi8(vb4beven, vb4bodd);
      const __m256i vb4567CDEF = _mm256_unpackhi_epi8(vb4beven, vb4bodd);
      __m512i vb0123456789ABCDEF = _mm512_permutex2var_epi64(_mm512_castsi256_si512(vb012389AB), vpermute_mask, _mm512_castsi256_si512(vb4567CDEF));

      vacc0x0123456789ABCDEF = _mm512_dpbusd_epi32(vacc0x0123456789ABCDEF, va0x0123, vb0123456789ABCDEF);

      w = (const int8_t*) w + 32;
      k -= 4 * sizeof(int8_t);
    } while (k != 0);

    vacc0x0123456789ABCDEF = _mm512_srai_epi32(vacc0x0123456789ABCDEF, 4);
    __m512 vscaled0x0123456789ABCDEF = _mm512_cvtepi32_ps(vacc0x0123456789ABCDEF);

    vscaled0x0123456789ABCDEF = _mm512_mul_ps(vscaled0x0123456789ABCDEF, _mm512_set1_ps(quantization_params[0].inv_scale));

    const __m512 vfilter_output_scale0123456789ABCDEF = _mm512_loadu_ps((const float*) w);
    const __m512 vbias0123456789ABCDEF = _mm512_loadu_ps((const float*) w + 16);
    w = (const float*) w + 32;

    vscaled0x0123456789ABCDEF = _mm512_fmadd_ps(vscaled0x0123456789ABCDEF, vfilter_output_scale0123456789ABCDEF, vbias0123456789ABCDEF);

    vscaled0x0123456789ABCDEF = _mm512_max_ps(vscaled0x0123456789ABCDEF, voutput_min);

    vscaled0x0123456789ABCDEF = _mm512_min_ps(vscaled0x0123456789ABCDEF, voutput_max);

    if(nc >= 16) {
      _mm512_storeu_ps(c0, vscaled0x0123456789ABCDEF);

      a0 = (const int8_t*) ((uintptr_t) a0 - kc);

      c0 = (float*) ((uintptr_t) c0 + cn_stride);

      nc -= 16;
    } else {
      // Prepare mask for valid 32-bit elements (depends on nc).
      const __mmask16 vmask = _cvtu32_mask16((UINT32_C(1) << nc) - 1);
      _mm512_mask_storeu_ps(c0, vmask, vscaled0x0123456789ABCDEF);
      nc = 0;
    }
  } while (nc != 0);
}
