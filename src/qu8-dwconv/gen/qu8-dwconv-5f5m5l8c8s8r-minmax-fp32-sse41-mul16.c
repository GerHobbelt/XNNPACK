// Auto-generated file. Do not edit!
//   Template: src/qs8-dwconv/multipass-sse-mul16.c.in
//   Generator: tools/xngen
//
// Copyright 2023 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include <smmintrin.h>

#include <xnnpack/dwconv.h>
#include <xnnpack/math.h>
#include <xnnpack/unaligned.h>


void xnn_qu8_dwconv_minmax_fp32_ukernel_5f5m5l8c8s8r__sse41_mul16(
    size_t channels,
    size_t output_width,
    const uint8_t** input,
    const void* weights,
    uint8_t* output,
    intptr_t input_stride,
    size_t output_increment,
    size_t input_offset,
    const uint8_t* zero,
    size_t kernel_size,
    uint32_t* buffer,
    const union xnn_qu8_conv_minmax_params params[restrict XNN_MIN_ELEMENTS(1)]) XNN_OOB_READS
{
  assert(channels != 0);
  assert(output_width != 0);
  assert(kernel_size > 5);

  const __m128i vk_zero_point = _mm_load_si128((const __m128i*) params->fp32_sse2.kernel_zero_point);

  do {
    const void* w = weights;

    // First pass to process 5 inputs.
    {
      uint32_t* b = buffer;
      const uint8_t* i0 = input[0];
      assert(i0 != NULL);
      if XNN_UNPREDICTABLE(i0 != zero) {
        i0 = (const uint8_t*) ((uintptr_t) i0 + input_offset);
      }
      const uint8_t* i1 = input[1];
      assert(i1 != NULL);
      if XNN_UNPREDICTABLE(i1 != zero) {
        i1 = (const uint8_t*) ((uintptr_t) i1 + input_offset);
      }
      const uint8_t* i2 = input[2];
      assert(i2 != NULL);
      if XNN_UNPREDICTABLE(i2 != zero) {
        i2 = (const uint8_t*) ((uintptr_t) i2 + input_offset);
      }
      const uint8_t* i3 = input[3];
      assert(i3 != NULL);
      if XNN_UNPREDICTABLE(i3 != zero) {
        i3 = (const uint8_t*) ((uintptr_t) i3 + input_offset);
      }
      const uint8_t* i4 = input[4];
      assert(i4 != NULL);
      if XNN_UNPREDICTABLE(i4 != zero) {
        i4 = (const uint8_t*) ((uintptr_t) i4 + input_offset);
      }
      input += 5;

      size_t c = round_up_po2(channels, 8);

      for (; c >= 8; c -= 8) {
        __m128i vacc0123 = _mm_loadu_si128((const __m128i*) w);
        __m128i vacc4567 = _mm_loadu_si128((const __m128i*) ((const int32_t*) w + 4));



        const __m128i vi0x01234567 = _mm_loadl_epi64((const __m128i*) i0);
        const __m128i vxi0x01234567 = _mm_cvtepu8_epi16(vi0x01234567);
        const __m128i vk0x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 8 * sizeof(int32_t) + 0 * sizeof(uint8_t)));
        const __m128i vxk0x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk0x01234567), vk_zero_point);
        i0 += 8;


        const __m128i vprod0x01234567lo = _mm_mullo_epi16(vxi0x01234567, vxk0x01234567);
        const __m128i vprod0x01234567hi = _mm_mulhi_epi16(vxi0x01234567, vxk0x01234567);

        vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod0x01234567lo, vprod0x01234567hi));
        vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod0x01234567lo, vprod0x01234567hi));

        const __m128i vi1x01234567 = _mm_loadl_epi64((const __m128i*) i1);
        const __m128i vxi1x01234567 = _mm_cvtepu8_epi16(vi1x01234567);
        const __m128i vk1x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 8 * sizeof(int32_t) + 8 * sizeof(uint8_t)));
        const __m128i vxk1x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk1x01234567), vk_zero_point);
        i1 += 8;


        const __m128i vprod1x01234567lo = _mm_mullo_epi16(vxi1x01234567, vxk1x01234567);
        const __m128i vprod1x01234567hi = _mm_mulhi_epi16(vxi1x01234567, vxk1x01234567);

        vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod1x01234567lo, vprod1x01234567hi));
        vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod1x01234567lo, vprod1x01234567hi));

        const __m128i vi2x01234567 = _mm_loadl_epi64((const __m128i*) i2);
        const __m128i vxi2x01234567 = _mm_cvtepu8_epi16(vi2x01234567);
        const __m128i vk2x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 8 * sizeof(int32_t) + 16 * sizeof(uint8_t)));
        const __m128i vxk2x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk2x01234567), vk_zero_point);
        i2 += 8;


        const __m128i vprod2x01234567lo = _mm_mullo_epi16(vxi2x01234567, vxk2x01234567);
        const __m128i vprod2x01234567hi = _mm_mulhi_epi16(vxi2x01234567, vxk2x01234567);

        vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod2x01234567lo, vprod2x01234567hi));
        vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod2x01234567lo, vprod2x01234567hi));

        const __m128i vi3x01234567 = _mm_loadl_epi64((const __m128i*) i3);
        const __m128i vxi3x01234567 = _mm_cvtepu8_epi16(vi3x01234567);
        const __m128i vk3x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 8 * sizeof(int32_t) + 24 * sizeof(uint8_t)));
        const __m128i vxk3x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk3x01234567), vk_zero_point);
        i3 += 8;


        const __m128i vprod3x01234567lo = _mm_mullo_epi16(vxi3x01234567, vxk3x01234567);
        const __m128i vprod3x01234567hi = _mm_mulhi_epi16(vxi3x01234567, vxk3x01234567);

        vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod3x01234567lo, vprod3x01234567hi));
        vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod3x01234567lo, vprod3x01234567hi));

        const __m128i vi4x01234567 = _mm_loadl_epi64((const __m128i*) i4);
        const __m128i vxi4x01234567 = _mm_cvtepu8_epi16(vi4x01234567);
        const __m128i vk4x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 8 * sizeof(int32_t) + 32 * sizeof(uint8_t)));
        const __m128i vxk4x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk4x01234567), vk_zero_point);
        i4 += 8;


        const __m128i vprod4x01234567lo = _mm_mullo_epi16(vxi4x01234567, vxk4x01234567);
        const __m128i vprod4x01234567hi = _mm_mulhi_epi16(vxi4x01234567, vxk4x01234567);

        vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod4x01234567lo, vprod4x01234567hi));
        vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod4x01234567lo, vprod4x01234567hi));

        w = (const void*) ((uintptr_t) w + 8 * sizeof(int32_t) + 40 * sizeof(uint8_t));

        _mm_storeu_si128((__m128i*) b, vacc0123);
        _mm_storeu_si128((__m128i*) (b + 4), vacc4567);
        b += 8;
      }

      assert(c == 0);
    }

    // Middle pass to process 5 inputs in each iteration.
    for (size_t ks = kernel_size - 5; ks > 5; ks -= 5) {
      uint32_t* b = buffer;
      const uint8_t* i0 = input[0];
      assert(i0 != NULL);
      if XNN_UNPREDICTABLE(i0 != zero) {
        i0 = (const uint8_t*) ((uintptr_t) i0 + input_offset);
      }
      const uint8_t* i1 = input[1];
      assert(i1 != NULL);
      if XNN_UNPREDICTABLE(i1 != zero) {
        i1 = (const uint8_t*) ((uintptr_t) i1 + input_offset);
      }
      const uint8_t* i2 = input[2];
      assert(i2 != NULL);
      if XNN_UNPREDICTABLE(i2 != zero) {
        i2 = (const uint8_t*) ((uintptr_t) i2 + input_offset);
      }
      const uint8_t* i3 = input[3];
      assert(i3 != NULL);
      if XNN_UNPREDICTABLE(i3 != zero) {
        i3 = (const uint8_t*) ((uintptr_t) i3 + input_offset);
      }
      const uint8_t* i4 = input[4];
      assert(i4 != NULL);
      if XNN_UNPREDICTABLE(i4 != zero) {
        i4 = (const uint8_t*) ((uintptr_t) i4 + input_offset);
      }
      input += 5;

      size_t c = round_up_po2(channels, 8);

      for (; c >= 8; c -= 8) {
        __m128i vacc0123 = _mm_loadu_si128((const __m128i*) b);
        __m128i vacc4567 = _mm_loadu_si128((const __m128i*) (b + 4));



        const __m128i vi0x01234567 = _mm_loadl_epi64((const __m128i*) i0);
        const __m128i vxi0x01234567 = _mm_cvtepu8_epi16(vi0x01234567);
        const __m128i vk0x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 0 * sizeof(uint8_t)));
        const __m128i vxk0x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk0x01234567), vk_zero_point);
        i0 += 8;


        const __m128i vprod0x01234567lo = _mm_mullo_epi16(vxi0x01234567, vxk0x01234567);
        const __m128i vprod0x01234567hi = _mm_mulhi_epi16(vxi0x01234567, vxk0x01234567);

        vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod0x01234567lo, vprod0x01234567hi));
        vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod0x01234567lo, vprod0x01234567hi));

        const __m128i vi1x01234567 = _mm_loadl_epi64((const __m128i*) i1);
        const __m128i vxi1x01234567 = _mm_cvtepu8_epi16(vi1x01234567);
        const __m128i vk1x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 8 * sizeof(uint8_t)));
        const __m128i vxk1x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk1x01234567), vk_zero_point);
        i1 += 8;


        const __m128i vprod1x01234567lo = _mm_mullo_epi16(vxi1x01234567, vxk1x01234567);
        const __m128i vprod1x01234567hi = _mm_mulhi_epi16(vxi1x01234567, vxk1x01234567);

        vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod1x01234567lo, vprod1x01234567hi));
        vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod1x01234567lo, vprod1x01234567hi));

        const __m128i vi2x01234567 = _mm_loadl_epi64((const __m128i*) i2);
        const __m128i vxi2x01234567 = _mm_cvtepu8_epi16(vi2x01234567);
        const __m128i vk2x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 16 * sizeof(uint8_t)));
        const __m128i vxk2x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk2x01234567), vk_zero_point);
        i2 += 8;


        const __m128i vprod2x01234567lo = _mm_mullo_epi16(vxi2x01234567, vxk2x01234567);
        const __m128i vprod2x01234567hi = _mm_mulhi_epi16(vxi2x01234567, vxk2x01234567);

        vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod2x01234567lo, vprod2x01234567hi));
        vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod2x01234567lo, vprod2x01234567hi));

        const __m128i vi3x01234567 = _mm_loadl_epi64((const __m128i*) i3);
        const __m128i vxi3x01234567 = _mm_cvtepu8_epi16(vi3x01234567);
        const __m128i vk3x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 24 * sizeof(uint8_t)));
        const __m128i vxk3x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk3x01234567), vk_zero_point);
        i3 += 8;


        const __m128i vprod3x01234567lo = _mm_mullo_epi16(vxi3x01234567, vxk3x01234567);
        const __m128i vprod3x01234567hi = _mm_mulhi_epi16(vxi3x01234567, vxk3x01234567);

        vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod3x01234567lo, vprod3x01234567hi));
        vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod3x01234567lo, vprod3x01234567hi));

        const __m128i vi4x01234567 = _mm_loadl_epi64((const __m128i*) i4);
        const __m128i vxi4x01234567 = _mm_cvtepu8_epi16(vi4x01234567);
        const __m128i vk4x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 32 * sizeof(uint8_t)));
        const __m128i vxk4x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk4x01234567), vk_zero_point);
        i4 += 8;


        const __m128i vprod4x01234567lo = _mm_mullo_epi16(vxi4x01234567, vxk4x01234567);
        const __m128i vprod4x01234567hi = _mm_mulhi_epi16(vxi4x01234567, vxk4x01234567);

        vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod4x01234567lo, vprod4x01234567hi));
        vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod4x01234567lo, vprod4x01234567hi));

        w = (const void*) ((uintptr_t) w + 40 * sizeof(uint8_t));

        _mm_storeu_si128((__m128i*) (b), vacc0123);
        _mm_storeu_si128((__m128i*) (b + 4), vacc4567);
        b += 8;
      }

      assert(c == 0);
    }

    // Last pass to process up to 5 inputs.
    {
      uint32_t* b = buffer;
      const uint8_t* i0 = input[0];
      assert(i0 != NULL);
      if XNN_UNPREDICTABLE(i0 != zero) {
        i0 = (const uint8_t*) ((uintptr_t) i0 + input_offset);
      }
      const uint8_t* i1 = input[1];
      assert(i1 != NULL);
      if XNN_UNPREDICTABLE(i1 != zero) {
        i1 = (const uint8_t*) ((uintptr_t) i1 + input_offset);
      }
      const uint8_t* i2 = input[2];
      assert(i2 != NULL);
      if XNN_UNPREDICTABLE(i2 != zero) {
        i2 = (const uint8_t*) ((uintptr_t) i2 + input_offset);
      }
      const uint8_t* i3 = input[3];
      assert(i3 != NULL);
      if XNN_UNPREDICTABLE(i3 != zero) {
        i3 = (const uint8_t*) ((uintptr_t) i3 + input_offset);
      }
      const uint8_t* i4 = input[4];
      assert(i4 != NULL);
      if XNN_UNPREDICTABLE(i4 != zero) {
        i4 = (const uint8_t*) ((uintptr_t) i4 + input_offset);
      }

      size_t c = channels;

      for (; c >= 8; c -= 8) {
        __m128i vacc0123 = _mm_loadu_si128((const __m128i*) b);
        __m128i vacc4567 = _mm_loadu_si128((const __m128i*) (b + 4));
        b += 8;


        const __m128i vi0x01234567 = _mm_loadl_epi64((const __m128i*) i0);
        const __m128i vxi0x01234567 = _mm_cvtepu8_epi16(vi0x01234567);
        const __m128i vk0x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 0 * sizeof(uint8_t)));
        const __m128i vxk0x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk0x01234567), vk_zero_point);
        i0 += 8;


        const __m128i vprod0x01234567lo = _mm_mullo_epi16(vxi0x01234567, vxk0x01234567);
        const __m128i vprod0x01234567hi = _mm_mulhi_epi16(vxi0x01234567, vxk0x01234567);

        vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod0x01234567lo, vprod0x01234567hi));
        vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod0x01234567lo, vprod0x01234567hi));

        const __m128i vi1x01234567 = _mm_loadl_epi64((const __m128i*) i1);
        const __m128i vxi1x01234567 = _mm_cvtepu8_epi16(vi1x01234567);
        const __m128i vk1x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 8 * sizeof(uint8_t)));
        const __m128i vxk1x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk1x01234567), vk_zero_point);
        i1 += 8;


        const __m128i vprod1x01234567lo = _mm_mullo_epi16(vxi1x01234567, vxk1x01234567);
        const __m128i vprod1x01234567hi = _mm_mulhi_epi16(vxi1x01234567, vxk1x01234567);

        vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod1x01234567lo, vprod1x01234567hi));
        vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod1x01234567lo, vprod1x01234567hi));

        const __m128i vi2x01234567 = _mm_loadl_epi64((const __m128i*) i2);
        const __m128i vxi2x01234567 = _mm_cvtepu8_epi16(vi2x01234567);
        const __m128i vk2x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 16 * sizeof(uint8_t)));
        const __m128i vxk2x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk2x01234567), vk_zero_point);
        i2 += 8;


        const __m128i vprod2x01234567lo = _mm_mullo_epi16(vxi2x01234567, vxk2x01234567);
        const __m128i vprod2x01234567hi = _mm_mulhi_epi16(vxi2x01234567, vxk2x01234567);

        vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod2x01234567lo, vprod2x01234567hi));
        vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod2x01234567lo, vprod2x01234567hi));

        const __m128i vi3x01234567 = _mm_loadl_epi64((const __m128i*) i3);
        const __m128i vxi3x01234567 = _mm_cvtepu8_epi16(vi3x01234567);
        const __m128i vk3x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 24 * sizeof(uint8_t)));
        const __m128i vxk3x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk3x01234567), vk_zero_point);
        i3 += 8;


        const __m128i vprod3x01234567lo = _mm_mullo_epi16(vxi3x01234567, vxk3x01234567);
        const __m128i vprod3x01234567hi = _mm_mulhi_epi16(vxi3x01234567, vxk3x01234567);

        vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod3x01234567lo, vprod3x01234567hi));
        vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod3x01234567lo, vprod3x01234567hi));

        const __m128i vi4x01234567 = _mm_loadl_epi64((const __m128i*) i4);
        const __m128i vxi4x01234567 = _mm_cvtepu8_epi16(vi4x01234567);
        const __m128i vk4x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 32 * sizeof(uint8_t)));
        const __m128i vxk4x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk4x01234567), vk_zero_point);
        i4 += 8;


        const __m128i vprod4x01234567lo = _mm_mullo_epi16(vxi4x01234567, vxk4x01234567);
        const __m128i vprod4x01234567hi = _mm_mulhi_epi16(vxi4x01234567, vxk4x01234567);

        vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod4x01234567lo, vprod4x01234567hi));
        vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod4x01234567lo, vprod4x01234567hi));

        w = (const void*) ((uintptr_t) w + 40 * sizeof(uint8_t));

        __m128 vscaled0123 = _mm_cvtepi32_ps(vacc0123);
        __m128 vscaled4567 = _mm_cvtepi32_ps(vacc4567);

        const __m128 vscale = _mm_load_ps(params->fp32_sse2.scale);
        vscaled0123 = _mm_mul_ps(vscaled0123, vscale);
        vscaled4567 = _mm_mul_ps(vscaled4567, vscale);

        const __m128 voutput_max_less_zero_point = _mm_load_ps(params->fp32_sse2.output_max_less_zero_point);
        vscaled0123 = _mm_min_ps(vscaled0123, voutput_max_less_zero_point);
        vscaled4567 = _mm_min_ps(vscaled4567, voutput_max_less_zero_point);

        vacc0123 = _mm_cvtps_epi32(vscaled0123);
        vacc4567 = _mm_cvtps_epi32(vscaled4567);

        const __m128i voutput_zero_point = _mm_load_si128((const __m128i*) params->fp32_sse2.output_zero_point);
        __m128i vout01234567 = _mm_adds_epi16(_mm_packs_epi32(vacc0123, vacc4567), voutput_zero_point);

        __m128i vout0123456701234567 = _mm_packus_epi16(vout01234567, vout01234567);

        const __m128i voutput_min = _mm_load_si128((const __m128i*) params->fp32_sse2.output_min);
        vout0123456701234567 = _mm_max_epu8(vout0123456701234567, voutput_min);

        _mm_storel_epi64((__m128i*) output, vout0123456701234567);
        output += 8;
      }

      if XNN_UNLIKELY(c != 0) {
        {
          __m128i vacc0123 = _mm_loadu_si128((const __m128i*) b);
          __m128i vacc4567 = _mm_loadu_si128((const __m128i*) (b + 4));
          b += 8;


          const __m128i vi0x01234567 = _mm_loadl_epi64((const __m128i*) i0);
          const __m128i vxi0x01234567 = _mm_cvtepu8_epi16(vi0x01234567);
          const __m128i vk0x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 0 * sizeof(uint8_t)));
          const __m128i vxk0x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk0x01234567), vk_zero_point);


          const __m128i vprod0x01234567lo = _mm_mullo_epi16(vxi0x01234567, vxk0x01234567);
          const __m128i vprod0x01234567hi = _mm_mulhi_epi16(vxi0x01234567, vxk0x01234567);

          vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod0x01234567lo, vprod0x01234567hi));
          vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod0x01234567lo, vprod0x01234567hi));

          const __m128i vi1x01234567 = _mm_loadl_epi64((const __m128i*) i1);
          const __m128i vxi1x01234567 = _mm_cvtepu8_epi16(vi1x01234567);
          const __m128i vk1x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 8 * sizeof(uint8_t)));
          const __m128i vxk1x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk1x01234567), vk_zero_point);


          const __m128i vprod1x01234567lo = _mm_mullo_epi16(vxi1x01234567, vxk1x01234567);
          const __m128i vprod1x01234567hi = _mm_mulhi_epi16(vxi1x01234567, vxk1x01234567);

          vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod1x01234567lo, vprod1x01234567hi));
          vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod1x01234567lo, vprod1x01234567hi));

          const __m128i vi2x01234567 = _mm_loadl_epi64((const __m128i*) i2);
          const __m128i vxi2x01234567 = _mm_cvtepu8_epi16(vi2x01234567);
          const __m128i vk2x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 16 * sizeof(uint8_t)));
          const __m128i vxk2x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk2x01234567), vk_zero_point);


          const __m128i vprod2x01234567lo = _mm_mullo_epi16(vxi2x01234567, vxk2x01234567);
          const __m128i vprod2x01234567hi = _mm_mulhi_epi16(vxi2x01234567, vxk2x01234567);

          vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod2x01234567lo, vprod2x01234567hi));
          vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod2x01234567lo, vprod2x01234567hi));

          const __m128i vi3x01234567 = _mm_loadl_epi64((const __m128i*) i3);
          const __m128i vxi3x01234567 = _mm_cvtepu8_epi16(vi3x01234567);
          const __m128i vk3x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 24 * sizeof(uint8_t)));
          const __m128i vxk3x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk3x01234567), vk_zero_point);


          const __m128i vprod3x01234567lo = _mm_mullo_epi16(vxi3x01234567, vxk3x01234567);
          const __m128i vprod3x01234567hi = _mm_mulhi_epi16(vxi3x01234567, vxk3x01234567);

          vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod3x01234567lo, vprod3x01234567hi));
          vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod3x01234567lo, vprod3x01234567hi));

          const __m128i vi4x01234567 = _mm_loadl_epi64((const __m128i*) i4);
          const __m128i vxi4x01234567 = _mm_cvtepu8_epi16(vi4x01234567);
          const __m128i vk4x01234567 = _mm_loadl_epi64((const __m128i*) ((uintptr_t) w + 32 * sizeof(uint8_t)));
          const __m128i vxk4x01234567 = _mm_sub_epi16(_mm_cvtepu8_epi16(vk4x01234567), vk_zero_point);


          const __m128i vprod4x01234567lo = _mm_mullo_epi16(vxi4x01234567, vxk4x01234567);
          const __m128i vprod4x01234567hi = _mm_mulhi_epi16(vxi4x01234567, vxk4x01234567);

          vacc0123 = _mm_add_epi32(vacc0123, _mm_unpacklo_epi16(vprod4x01234567lo, vprod4x01234567hi));
          vacc4567 = _mm_add_epi32(vacc4567, _mm_unpackhi_epi16(vprod4x01234567lo, vprod4x01234567hi));

          __m128 vscaled0123 = _mm_cvtepi32_ps(vacc0123);
          __m128 vscaled4567 = _mm_cvtepi32_ps(vacc4567);

          const __m128 vscale = _mm_load_ps(params->fp32_sse2.scale);
          vscaled0123 = _mm_mul_ps(vscaled0123, vscale);
          vscaled4567 = _mm_mul_ps(vscaled4567, vscale);


          const __m128 voutput_max_less_zero_point = _mm_load_ps(params->fp32_sse2.output_max_less_zero_point);
          vscaled0123 = _mm_min_ps(vscaled0123, voutput_max_less_zero_point);
          vscaled4567 = _mm_min_ps(vscaled4567, voutput_max_less_zero_point);

          vacc0123 = _mm_cvtps_epi32(vscaled0123);
          vacc4567 = _mm_cvtps_epi32(vscaled4567);

          const __m128i voutput_zero_point = _mm_load_si128((const __m128i*) params->fp32_sse2.output_zero_point);
          __m128i vout01234567 = _mm_adds_epi16(_mm_packs_epi32(vacc0123, vacc4567), voutput_zero_point);

          __m128i vout0123456701234567 = _mm_packus_epi16(vout01234567, vout01234567);

          vout0123456701234567 = _mm_max_epu8(vout0123456701234567, _mm_load_si128((const __m128i*) params->fp32_sse2.output_min));

          if (c & 4) {
            unaligned_store_u32(output, (uint32_t) _mm_cvtsi128_si32(vout0123456701234567));
            vout0123456701234567 = _mm_srli_epi64(vout0123456701234567, 32);
            output += 4;
          }
          if (c & 2) {
            unaligned_store_u16(output, (uint16_t) _mm_extract_epi16(vout0123456701234567, 0));
            vout0123456701234567 = _mm_srli_epi32(vout0123456701234567, 16);
            output += 2;
          }
          if (c & 1) {
            *output = (uint8_t) _mm_extract_epi8(vout0123456701234567, 0);
            output += 1;
          }
        }
      }
    }

    input = (const uint8_t**) ((uintptr_t) input + input_stride);
    output = (uint8_t*) ((uintptr_t) output + output_increment);
  } while (--output_width != 0);
}
