// Auto-generated file. Do not edit!
//   Template: src/f32-vtanh/avx512skx-expm1minus.c.in
//   Generator: tools/xngen
//
// Copyright 2023 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>
#include <stddef.h>
#include <stdint.h>

#include <immintrin.h>

#include <xnnpack/common.h>
#include <xnnpack/intrinsics-polyfill.h>
#include <xnnpack/microparams.h>
#include <xnnpack/vunary.h>


void xnn_f32_vtanh_ukernel__avx512skx_expm1minus_rr1_lut4_p4h3ts_perm_nr1adj_u64(
    size_t batch,
    const float* input,
    float* output,
    const union xnn_f32_tanh_params params[restrict XNN_MIN_ELEMENTS(1)]) XNN_OOB_READS
{
  assert(batch != 0);
  assert(batch % sizeof(float) == 0);
  assert(input != NULL);
  assert(output != NULL);

  const __m512 vsat_cutoff = _mm512_set1_ps(params->avx512_expm1minus_rr1_lut4_p4h3_perm.sat_cutoff);
  const __m512 vminus_log2e = _mm512_set1_ps(params->avx512_expm1minus_rr1_lut4_p4h3_perm.minus_log2e);
  const __m512 vmagic_bias = _mm512_set1_ps(params->avx512_expm1minus_rr1_lut4_p4h3_perm.magic_bias);
  const __m512 vtable = _mm512_load_ps(params->avx512_expm1minus_rr1_lut4_p4h3_perm.table);
  const __m512 vln2 = _mm512_set1_ps(params->avx512_expm1minus_rr1_lut4_p4h3_perm.ln2);
  const __m512 vc4 = _mm512_set1_ps(params->avx512_expm1minus_rr1_lut4_p4h3_perm.c4);
  const __m512 vc3 = _mm512_set1_ps(params->avx512_expm1minus_rr1_lut4_p4h3_perm.c3);
  const __m512 vc2 = _mm512_set1_ps(params->avx512_expm1minus_rr1_lut4_p4h3_perm.c2);
  const __m512 vminus_two = _mm512_set1_ps(params->avx512_expm1minus_rr1_lut4_p4h3_perm.minus_two);
  const __m512 vone = _mm512_set1_ps(params->avx512_expm1minus_rr1_lut4_p4h3_perm.one);
  const __m512i vsign_mask = _mm512_set1_epi32((int) params->avx512_expm1minus_rr1_lut4_p4h3_perm.sign_mask);

  for (; batch >= 64 * sizeof(float); batch -= 64 * sizeof(float)) {
    const __m512 vx0 = _mm512_loadu_ps(input);
    const __m512 vx1 = _mm512_loadu_ps(input + 16);
    const __m512 vx2 = _mm512_loadu_ps(input + 32);
    const __m512 vx3 = _mm512_loadu_ps(input + 48);
    input += 64;

    const __mmask16 vnan_mask0 = _mm512_cmp_ps_mask(vx0, vx0, _CMP_EQ_OQ);
    __m512 vz0 = _mm512_range_ps(vsat_cutoff, vx0, 0xA);
    vz0 = _mm512_mask_blend_ps(vnan_mask0, vx0, vz0);
    const __mmask16 vnan_mask1 = _mm512_cmp_ps_mask(vx1, vx1, _CMP_EQ_OQ);
    __m512 vz1 = _mm512_range_ps(vsat_cutoff, vx1, 0xA);
    vz1 = _mm512_mask_blend_ps(vnan_mask1, vx1, vz1);
    const __mmask16 vnan_mask2 = _mm512_cmp_ps_mask(vx2, vx2, _CMP_EQ_OQ);
    __m512 vz2 = _mm512_range_ps(vsat_cutoff, vx2, 0xA);
    vz2 = _mm512_mask_blend_ps(vnan_mask2, vx2, vz2);
    const __mmask16 vnan_mask3 = _mm512_cmp_ps_mask(vx3, vx3, _CMP_EQ_OQ);
    __m512 vz3 = _mm512_range_ps(vsat_cutoff, vx3, 0xA);
    vz3 = _mm512_mask_blend_ps(vnan_mask3, vx3, vz3);
    __m512 vn0 = _mm512_fmadd_ps(vz0, vminus_log2e, vmagic_bias);
    __m512 vn1 = _mm512_fmadd_ps(vz1, vminus_log2e, vmagic_bias);
    __m512 vn2 = _mm512_fmadd_ps(vz2, vminus_log2e, vmagic_bias);
    __m512 vn3 = _mm512_fmadd_ps(vz3, vminus_log2e, vmagic_bias);

    const __m512i ve0 = _mm512_slli_epi32(_mm512_castps_si512(vn0), 21);
    const __m512i ve1 = _mm512_slli_epi32(_mm512_castps_si512(vn1), 21);
    const __m512i ve2 = _mm512_slli_epi32(_mm512_castps_si512(vn2), 21);
    const __m512i ve3 = _mm512_slli_epi32(_mm512_castps_si512(vn3), 21);

    const __m512i vl0 = _mm512_castps_si512(_mm512_permutevar_ps(vtable, _mm512_castps_si512(vn0)));
    const __m512i vl1 = _mm512_castps_si512(_mm512_permutevar_ps(vtable, _mm512_castps_si512(vn1)));
    const __m512i vl2 = _mm512_castps_si512(_mm512_permutevar_ps(vtable, _mm512_castps_si512(vn2)));
    const __m512i vl3 = _mm512_castps_si512(_mm512_permutevar_ps(vtable, _mm512_castps_si512(vn3)));

    const __m512 vs0 = _mm512_castsi512_ps(_mm512_add_epi32(vl0, ve0));
    vn0 = _mm512_sub_ps(vn0, vmagic_bias);
    const __m512 vs1 = _mm512_castsi512_ps(_mm512_add_epi32(vl1, ve1));
    vn1 = _mm512_sub_ps(vn1, vmagic_bias);
    const __m512 vs2 = _mm512_castsi512_ps(_mm512_add_epi32(vl2, ve2));
    vn2 = _mm512_sub_ps(vn2, vmagic_bias);
    const __m512 vs3 = _mm512_castsi512_ps(_mm512_add_epi32(vl3, ve3));
    vn3 = _mm512_sub_ps(vn3, vmagic_bias);

    const __m512 vt0 = _mm512_fmadd_ps(vn0, vln2, vz0);
    const __m512 vt1 = _mm512_fmadd_ps(vn1, vln2, vz1);
    const __m512 vt2 = _mm512_fmadd_ps(vn2, vln2, vz2);
    const __m512 vt3 = _mm512_fmadd_ps(vn3, vln2, vz3);

    __m512 vp0 = vc4;
    __m512 vp1 = vc4;
    __m512 vp2 = vc4;
    __m512 vp3 = vc4;
    vp0 = _mm512_fmadd_ps(vp0, vt0, vc3);
    vp1 = _mm512_fmadd_ps(vp1, vt1, vc3);
    vp2 = _mm512_fmadd_ps(vp2, vt2, vc3);
    vp3 = _mm512_fmadd_ps(vp3, vt3, vc3);
    vp0 = _mm512_fmadd_ps(vp0, vt0, vc2);
    vp1 = _mm512_fmadd_ps(vp1, vt1, vc2);
    vp2 = _mm512_fmadd_ps(vp2, vt2, vc2);
    vp3 = _mm512_fmadd_ps(vp3, vt3, vc2);
    vp0 = _mm512_fmadd_ps(vp0, vt0, vminus_two);
    vp1 = _mm512_fmadd_ps(vp1, vt1, vminus_two);
    vp2 = _mm512_fmadd_ps(vp2, vt2, vminus_two);
    vp3 = _mm512_fmadd_ps(vp3, vt3, vminus_two);

    const __m512 vts0 = _mm512_mul_ps(vt0, vs0);
    const __m512 vsmo0 = _mm512_sub_ps(vs0, vone);
    const __m512 vts1 = _mm512_mul_ps(vt1, vs1);
    const __m512 vsmo1 = _mm512_sub_ps(vs1, vone);
    const __m512 vts2 = _mm512_mul_ps(vt2, vs2);
    const __m512 vsmo2 = _mm512_sub_ps(vs2, vone);
    const __m512 vts3 = _mm512_mul_ps(vt3, vs3);
    const __m512 vsmo3 = _mm512_sub_ps(vs3, vone);
    const __m512 vemo0 = _mm512_fmadd_ps(vp0, vts0, vsmo0);
    const __m512 vemo1 = _mm512_fmadd_ps(vp1, vts1, vsmo1);
    const __m512 vemo2 = _mm512_fmadd_ps(vp2, vts2, vsmo2);
    const __m512 vemo3 = _mm512_fmadd_ps(vp3, vts3, vsmo3);
    const __m512 vepo0 = _mm512_sub_ps(vemo0, vminus_two);
    const __m512 vepo1 = _mm512_sub_ps(vemo1, vminus_two);
    const __m512 vepo2 = _mm512_sub_ps(vemo2, vminus_two);
    const __m512 vepo3 = _mm512_sub_ps(vemo3, vminus_two);

    __m512 vrepo0 = _mm512_rcp14_ps(vepo0);
    __m512 vrepo1 = _mm512_rcp14_ps(vepo1);
    __m512 vrepo2 = _mm512_rcp14_ps(vepo2);
    __m512 vrepo3 = _mm512_rcp14_ps(vepo3);
    const __m512 verepo0 = _mm512_fnmadd_ps(vrepo0, vepo0, vone);
    const __m512 verepo1 = _mm512_fnmadd_ps(vrepo1, vepo1, vone);
    const __m512 verepo2 = _mm512_fnmadd_ps(vrepo2, vepo2, vone);
    const __m512 verepo3 = _mm512_fnmadd_ps(vrepo3, vepo3, vone);
    vrepo0 = _mm512_fmadd_ps(verepo0, vrepo0, vrepo0);
    vrepo1 = _mm512_fmadd_ps(verepo1, vrepo1, vrepo1);
    vrepo2 = _mm512_fmadd_ps(verepo2, vrepo2, vrepo2);
    vrepo3 = _mm512_fmadd_ps(verepo3, vrepo3, vrepo3);

    __m512 vy0 = _mm512_mul_ps(vemo0, vrepo0);
    __m512 vy1 = _mm512_mul_ps(vemo1, vrepo1);
    __m512 vy2 = _mm512_mul_ps(vemo2, vrepo2);
    __m512 vy3 = _mm512_mul_ps(vemo3, vrepo3);
    const __m512 vey0 = _mm512_fnmadd_ps(vy0, vepo0, vemo0);
    const __m512 vey1 = _mm512_fnmadd_ps(vy1, vepo1, vemo1);
    const __m512 vey2 = _mm512_fnmadd_ps(vy2, vepo2, vemo2);
    const __m512 vey3 = _mm512_fnmadd_ps(vy3, vepo3, vemo3);
    vy0 = _mm512_fmadd_ps(vey0, vrepo0, vy0);
    vy1 = _mm512_fmadd_ps(vey1, vrepo1, vy1);
    vy2 = _mm512_fmadd_ps(vey2, vrepo2, vy2);
    vy3 = _mm512_fmadd_ps(vey3, vrepo3, vy3);
    vy0 = _mm512_castsi512_ps(_mm512_ternarylogic_epi32(_mm512_castps_si512(vy0), _mm512_castps_si512(vx0), vsign_mask, 0xD8));
    vy1 = _mm512_castsi512_ps(_mm512_ternarylogic_epi32(_mm512_castps_si512(vy1), _mm512_castps_si512(vx1), vsign_mask, 0xD8));
    vy2 = _mm512_castsi512_ps(_mm512_ternarylogic_epi32(_mm512_castps_si512(vy2), _mm512_castps_si512(vx2), vsign_mask, 0xD8));
    vy3 = _mm512_castsi512_ps(_mm512_ternarylogic_epi32(_mm512_castps_si512(vy3), _mm512_castps_si512(vx3), vsign_mask, 0xD8));

    _mm512_storeu_ps(output, vy0);
    _mm512_storeu_ps(output + 16, vy1);
    _mm512_storeu_ps(output + 32, vy2);
    _mm512_storeu_ps(output + 48, vy3);
    output += 64;
  }
  for (; batch >= 16 * sizeof(float); batch -= 16 * sizeof(float)) {
    const __m512 vx = _mm512_loadu_ps(input);
    input += 16;

    const __mmask16 vnan_mask = _mm512_cmp_ps_mask(vx, vx, _CMP_EQ_OQ);
    __m512 vz = _mm512_range_ps(vsat_cutoff, vx, 0xA);
    vz = _mm512_mask_blend_ps(vnan_mask, vx, vz);
    __m512 vn = _mm512_fmadd_ps(vz, vminus_log2e, vmagic_bias);

    const __m512i ve = _mm512_slli_epi32(_mm512_castps_si512(vn), 21);

    const __m512i vl = _mm512_castps_si512(_mm512_permutevar_ps(vtable, _mm512_castps_si512(vn)));

    const __m512 vs = _mm512_castsi512_ps(_mm512_add_epi32(vl, ve));

    vn = _mm512_sub_ps(vn, vmagic_bias);

    const __m512 vt = _mm512_fmadd_ps(vn, vln2, vz);

    __m512 vp = vc4;
    vp = _mm512_fmadd_ps(vp, vt, vc3);
    vp = _mm512_fmadd_ps(vp, vt, vc2);
    vp = _mm512_fmadd_ps(vp, vt, vminus_two);

    const __m512 vts = _mm512_mul_ps(vt, vs);
    const __m512 vsmo = _mm512_sub_ps(vs, vone);
    const __m512 vemo = _mm512_fmadd_ps(vp, vts, vsmo);
    const __m512 vepo = _mm512_sub_ps(vemo, vminus_two);

    __m512 vrepo = _mm512_rcp14_ps(vepo);
    const __m512 verepo = _mm512_fnmadd_ps(vrepo, vepo, vone);
    vrepo = _mm512_fmadd_ps(verepo, vrepo, vrepo);

    __m512 vy = _mm512_mul_ps(vemo, vrepo);
    const __m512 vey = _mm512_fnmadd_ps(vy, vepo, vemo);
    vy = _mm512_fmadd_ps(vey, vrepo, vy);
    vy = _mm512_castsi512_ps(_mm512_ternarylogic_epi32(_mm512_castps_si512(vy), _mm512_castps_si512(vx), vsign_mask, 0xD8));

    _mm512_storeu_ps(output, vy);
    output += 16;
  }
  if XNN_UNLIKELY(batch != 0) {
    assert(batch >= 1 * sizeof(float));
    assert(batch <= 15 * sizeof(float));

    // Prepare mask for valid 32-bit elements (depends on batch).
    batch >>= XNN_LOG2_SIZEOF_FLOAT;
    const __mmask16 vmask = _cvtu32_mask16((uint32_t) ((UINT32_C(1) << batch) - UINT32_C(1)));

    const __m512 vx = _mm512_maskz_loadu_ps(vmask, input);

    const __mmask16 vnan_mask = _mm512_cmp_ps_mask(vx, vx, _CMP_EQ_OQ);
    __m512 vz = _mm512_range_ps(vsat_cutoff, vx, 0xA);
    vz = _mm512_mask_blend_ps(vnan_mask, vx, vz);
    __m512 vn = _mm512_fmadd_ps(vz, vminus_log2e, vmagic_bias);

    const __m512i ve = _mm512_slli_epi32(_mm512_castps_si512(vn), 21);

    const __m512i vl = _mm512_castps_si512(_mm512_permutevar_ps(vtable, _mm512_castps_si512(vn)));

    const __m512 vs = _mm512_castsi512_ps(_mm512_add_epi32(vl, ve));

    vn = _mm512_sub_ps(vn, vmagic_bias);

    const __m512 vt = _mm512_fmadd_ps(vn, vln2, vz);

    __m512 vp = vc4;
    vp = _mm512_fmadd_ps(vp, vt, vc3);
    vp = _mm512_fmadd_ps(vp, vt, vc2);
    vp = _mm512_fmadd_ps(vp, vt, vminus_two);

    const __m512 vts = _mm512_mul_ps(vt, vs);
    const __m512 vsmo = _mm512_sub_ps(vs, vone);
    const __m512 vemo = _mm512_fmadd_ps(vp, vts, vsmo);
    const __m512 vepo = _mm512_sub_ps(vemo, vminus_two);

    __m512 vrepo = _mm512_rcp14_ps(vepo);
    const __m512 verepo = _mm512_fnmadd_ps(vrepo, vepo, vone);
    vrepo = _mm512_fmadd_ps(verepo, vrepo, vrepo);

    __m512 vy = _mm512_mul_ps(vemo, vrepo);
    const __m512 vey = _mm512_fnmadd_ps(vy, vepo, vemo);
    vy = _mm512_fmadd_ps(vey, vrepo, vy);
    vy = _mm512_castsi512_ps(_mm512_ternarylogic_epi32(_mm512_castps_si512(vy), _mm512_castps_si512(vx), vsign_mask, 0xD8));

    _mm512_mask_storeu_ps(output, vmask, vy);
  }
}
