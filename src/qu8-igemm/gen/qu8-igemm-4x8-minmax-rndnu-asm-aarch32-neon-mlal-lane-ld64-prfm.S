// clang-format off
// Auto-generated file. Do not edit!
//   Template: src/qs8-igemm/4x8-aarch32-neon-mlal-lane-ld64.S.in
//   Generator: tools/xngen
//
// Copyright 2021 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.


#include "src/xnnpack/assembly.h"

.syntax unified

// void xnn_qu8_igemm_minmax_rndnu_ukernel_4x8__asm_aarch32_neon_mlal_lane_ld64_prfm
//     size_t mr,                                     (r0)
//     size_t nc,                                      r1
//     size_t kc,                                     (r2) -> r5 -> sp + 44
//     size_t ks,                                     (r3) -> sp + 48 -> r14
//     const uint8_t** restrict a,            sp + 88  -> r2
//     const void* restrict w,              sp + 92  -> r9
//     uint8_t* restrict c,                   sp + 96  -> r11
//     size_t cm_stride,                   sp + 100  -> (r6)
//     size_t cn_stride,                   sp + 104  -> (r7)
//     size_t a_offset,                    sp + 108 -> (r5)
//     const uint8_t* zero,                  sp + 112 -> (r7)
//     xnn_qu8_conv_minmax_params*params); sp + 116 -> (r5)

// d8-d15, r4-r11,r14(lr) need to be preserved if used. r13(sp),r15(pc) are reserved.

// Register usage
// A0   r3  d0-d1 q0
// A1  r12  d2-d3 q1
// A2  r10  d4-d5 q2
// A3   r0  d6-d7 q3
// B    r9  d10-d11 q5
// C0  r11 d16-d17  q8  d18-d19  q9
// C1   r4 d20-d21 q10  d22-d23 q11
// C2   r8 d24-d25 q12  d26-d27 q13
// C3   r6 d28-d29 q14  d30-d31 q15
// unused d13-d15

// params structure is 20 bytes
//  struct {
//    uint8_t kernel_zero_point;    d14
//    uint8_t padding[3];
//    int32_t right_pre_shift;         d12[0]
//    int32_t multiplier;              d12[1]
//    int32_t right_post_shift;        d13[0]
//    int16_t output_zero_point;       d13[2]
//    uint8_t output_min;           d13[6]
//    uint8_t output_max;           d13[7]
//  } rndnu_neon;

BEGIN_FUNCTION xnn_qu8_igemm_minmax_rndnu_ukernel_4x8__asm_aarch32_neon_mlal_lane_ld64_prfm
        # Push 88 bytes
        # r2 will be reloaded in outer loop.  r3 is ks
        PUSH        {r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}      // +44
        SUB         sp, sp, 4                           // +4
        VPUSH       {d10-d14}                           // +40 = 88

        LDR         r11, [sp, 96]           // c
        LDR         r6, [sp, 100]           // cm_stride
        LDR         r2, [sp, 88]            // a
        LDR         r9, [sp, 92]            // w
        LDR         r5, [sp, 116]           // params
        MOV         r14, r3                 // p = ks

        # Clamp C pointers
        CMP         r0, 2                   // if mr >= 2
        ADD         r4, r11, r6             //   c1 = c0 + cm_stride
        MOVLO       r4, r11                 // c1
                                        // if mr > 2
        ADD         r8, r4, r6              //   c2 = c1 + cm_stride
        MOVLS       r8, r4                  // c2
        CMP         r0, 4                   // if mr >=4
        ADD         r6, r8, r6              //   c3 = c2 + cm_stride
        MOVLO       r6, r8                  // c3

        # Load params values
        VLD1.8     {d14[]}, [r5]            // QU8 kernel_zero_point
        ADD        r5, r5, 4                // Skip padding
        VLDM        r5, {d12-d13}           // RNDNU params

        PLD         [r9,  64]               // Prefetch B
        PLD         [r9, 128]
        PLD         [r9, 192]
        PLD         [r9, 256]
        PLD         [r9, 320]
        PLD         [r9, 384]

        .p2align    3
0:
        # Load initial bias from w into accumulators
        VLDM        r9!, {d16-d19}          // Bias
        VMOV        q10, q8
        VMOV        q11, q9
        VMOV        q12, q8
        VMOV        q13, q9
        VMOV        q14, q8
        VMOV        q15, q9

        .p2align    3
1:
        # Load next 4 A pointers
        LDR         r3, [r2,  0]
        LDR         r12, [r2,  4]
        LDR         r10, [r2,  8]
        LDR         r0, [r2, 12]
        ADD         r2, r2, 16

        PLD         [r3, 64]
        PLD         [r12, 64]
        PLD         [r10, 64]
        PLD         [r0, 64]

        # Add a_offset
        LDR         r5, [sp, 108]           // a_offset
        LDR         r7, [sp, 112]           // zero
        CMP         r3,  r7                 // if a0 == zero
        ADD         r3,  r3, r5             // a0 += a_offset
        MOVEQ       r3,  r7                 //   a0 = zero, else += a0 + a_offset
        CMP         r12,  r7                // if a1 == zero
        ADD         r12, r12, r5            // a1 += a_offset
        MOVEQ       r12,  r7                //   a1 = zero, else += a1 + a_offset
        CMP         r10,  r7                // if a2 == zero
        ADD         r10, r10, r5            // a2 += a_offset
        MOVEQ       r10,  r7                //   a2 = zero, else += a2 + a_offset
        CMP         r0,  r7                 // if a3 == zero
        ADD         r0,  r0, r5             // a3 += a_offset
        LDR         r5, [sp, 44]            // kc
        MOVEQ       r0,  r7                 //   a3 = zero, else += a3 + a_offset

        SUBS        r5, r5, 8               // kc - 8
        BLO         4f                      // less than 8 channels?

        # Main loop - 8 bytes
        # 64 bytes for weights.
        .p2align    3
2:
        VLD1.8      {d0},  [r3]!            // A0
        VLD1.8      {d10},  [r9]!           // B
        VLD1.8      {d2}, [r12]!            // A1
        VLD1.8      {d4}, [r10]!            // A2
        VLD1.8      {d6},  [r0]!            // A3
        SUBS        r5, r5, 8
        PLD         [r3, 128]
        VMOVL.U8 q0, d0
        PLD         [r12, 128]
        VSUBL.U8    q5, d10, d14
        PLD         [r10, 128]
        VMOVL.U8 q1, d2
        PLD         [r0, 128]
        VMOVL.U8 q2, d4
        PLD         [r9, 448]
        VMOVL.U8 q3, d6
        VMLAL.S16   q8, d10, d0[0]
        VMLAL.S16   q9, d11, d0[0]
        VMLAL.S16   q10, d10, d2[0]
        VMLAL.S16   q11, d11, d2[0]
        VMLAL.S16   q12, d10, d4[0]
        VMLAL.S16   q13, d11, d4[0]
        VMLAL.S16   q14, d10, d6[0]
        VMLAL.S16   q15, d11, d6[0]

        VLD1.8      {d10},  [r9]!
        VSUBL.U8    q5, d10, d14
        VMLAL.S16   q8, d10, d0[1]
        VMLAL.S16   q9, d11, d0[1]
        VMLAL.S16   q10, d10, d2[1]
        VMLAL.S16   q11, d11, d2[1]
        VMLAL.S16   q12, d10, d4[1]
        VMLAL.S16   q13, d11, d4[1]
        VMLAL.S16   q14, d10, d6[1]
        VMLAL.S16   q15, d11, d6[1]

        VLD1.8      {d10},  [r9]!
        VSUBL.U8    q5, d10, d14
        VMLAL.S16   q8, d10, d0[2]
        VMLAL.S16   q9, d11, d0[2]
        VMLAL.S16   q10, d10, d2[2]
        VMLAL.S16   q11, d11, d2[2]
        VMLAL.S16   q12, d10, d4[2]
        VMLAL.S16   q13, d11, d4[2]
        VMLAL.S16   q14, d10, d6[2]
        VMLAL.S16   q15, d11, d6[2]

        VLD1.8      {d10},  [r9]!
        VSUBL.U8    q5, d10, d14
        VMLAL.S16   q8, d10, d0[3]
        VMLAL.S16   q9, d11, d0[3]
        VMLAL.S16   q10, d10, d2[3]
        VMLAL.S16   q11, d11, d2[3]
        VMLAL.S16   q12, d10, d4[3]
        VMLAL.S16   q13, d11, d4[3]
        VMLAL.S16   q14, d10, d6[3]
        VMLAL.S16   q15, d11, d6[3]

        VLD1.8      {d10},  [r9]!
        VSUBL.U8    q5, d10, d14
        VMLAL.S16   q8, d10, d1[0]
        VMLAL.S16   q9, d11, d1[0]
        VMLAL.S16   q10, d10, d3[0]
        VMLAL.S16   q11, d11, d3[0]
        VMLAL.S16   q12, d10, d5[0]
        VMLAL.S16   q13, d11, d5[0]
        VMLAL.S16   q14, d10, d7[0]
        VMLAL.S16   q15, d11, d7[0]

        VLD1.8      {d10},  [r9]!
        VSUBL.U8    q5, d10, d14
        VMLAL.S16   q8, d10, d1[1]
        VMLAL.S16   q9, d11, d1[1]
        VMLAL.S16   q10, d10, d3[1]
        VMLAL.S16   q11, d11, d3[1]
        VMLAL.S16   q12, d10, d5[1]
        VMLAL.S16   q13, d11, d5[1]
        VMLAL.S16   q14, d10, d7[1]
        VMLAL.S16   q15, d11, d7[1]

        VLD1.8      {d10},  [r9]!
        VSUBL.U8    q5, d10, d14
        VMLAL.S16   q8, d10, d1[2]
        VMLAL.S16   q9, d11, d1[2]
        VMLAL.S16   q10, d10, d3[2]
        VMLAL.S16   q11, d11, d3[2]
        VMLAL.S16   q12, d10, d5[2]
        VMLAL.S16   q13, d11, d5[2]
        VMLAL.S16   q14, d10, d7[2]
        VMLAL.S16   q15, d11, d7[2]

        VLD1.8      {d10},  [r9]!
        VSUBL.U8    q5, d10, d14
        VMLAL.S16   q8, d10, d1[3]
        VMLAL.S16   q9, d11, d1[3]
        VMLAL.S16   q10, d10, d3[3]
        VMLAL.S16   q11, d11, d3[3]
        VMLAL.S16   q12, d10, d5[3]
        VMLAL.S16   q13, d11, d5[3]
        VMLAL.S16   q14, d10, d7[3]
        VMLAL.S16   q15, d11, d7[3]
        BHS         2b

        # Is there a remainder?- 1-7 bytes of A
        ADDS        r5, r5, 8
        BNE         4f

3:
        # ks loop
        SUBS        r14, r14, 16            // ks -= MR * sizeof(void*)
        BHI         1b

        LDR         r7, [sp, 104]           // cn_stride
        LDR         r14, [sp, 48]           // p = ks

        # RNDNU quantization
        VDUP.32     q0, d12[0]              // right_pre_shift

        VQSHL.S32   q8,  q8, q0
        VQSHL.S32   q9,  q9, q0
        VQSHL.S32   q10, q10, q0
        VQSHL.S32   q11, q11, q0
        VQSHL.S32   q12, q12, q0
        VQSHL.S32   q13, q13, q0
        VQSHL.S32   q14, q14, q0
        VQSHL.S32   q15, q15, q0

        VDUP.32     q2, d13[0]              // right_post_shift

        VQDMULH.S32 q8,  q8, d12[1]     // multiplier
        VQDMULH.S32 q9,  q9, d12[1]
        VQDMULH.S32 q10, q10, d12[1]
        VQDMULH.S32 q11, q11, d12[1]
        VQDMULH.S32 q12, q12, d12[1]
        VQDMULH.S32 q13, q13, d12[1]
        VQDMULH.S32 q14, q14, d12[1]
        VQDMULH.S32 q15, q15, d12[1]

        VRSHL.S32   q8,  q8, q2
        VRSHL.S32   q9,  q9, q2
        VRSHL.S32   q10, q10, q2
        VRSHL.S32   q11, q11, q2
        VRSHL.S32   q12, q12, q2
        VRSHL.S32   q13, q13, q2
        VRSHL.S32   q14, q14, q2
        VRSHL.S32   q15, q15, q2

        VDUP.16     q0, d13[2]              // output_zero_point

        VQMOVN.S32  d16, q8
        VQMOVN.S32  d17, q9
        VQMOVN.S32  d18, q10
        VQMOVN.S32  d19, q11
        VQMOVN.S32  d20, q12
        VQMOVN.S32  d21, q13
        VQMOVN.S32  d22, q14
        VQMOVN.S32  d23, q15

        VQADD.S16   q8,  q8, q0
        VQADD.S16   q9,  q9, q0
        VQADD.S16   q10, q10, q0
        VQADD.S16   q11, q11, q0

        VDUP.8      q12, d13[6]             // output_min

        VQMOVUN.S16 d0,  q8
        VQMOVUN.S16 d1,  q9
        VQMOVUN.S16 d2, q10
        VQMOVUN.S16 d3, q11

        VDUP.8      q13, d13[7]             // output_max

        VMAX.U8 q0, q0, q12
        VMAX.U8 q1, q1, q12

        SUBS        r1, r1, 8               // nc -= 8

        VMIN.U8 q0, q0, q13
        VMIN.U8 q1, q1, q13

        # Store full 4 x 8
        BLO         5f
        VST1.8      {d3}, [r6], r7
        VST1.8      {d2}, [r8], r7
        VST1.8      {d1}, [r4], r7
        VST1.8      {d0}, [r11], r7
        SUB         r2, r2, r14             // a -= ks
        BHI         0b

        VPOP        {d10-d14}
        ADD         sp, sp, 12                          // skip pad of 4, r2, r3
        POP         {r4, r5, r6, r7, r8, r9, r10, r11, pc}

        # Remainder- 1 to 7 bytes of A
        .p2align    3
4:
        AND         r5, r5, 7               // kc remainder 1 to 7

        VLD1.8      {d0},  [r3]
        VLD1.8      {d10},  [r9]!
        VLD1.8      {d2}, [r12]
        VLD1.8      {d4}, [r10]
        VLD1.8      {d6},  [r0]

        VMOVL.U8 q0, d0
        VSUBL.U8    q5, d10, d14
        VMOVL.U8 q1, d2
        VMOVL.U8 q2, d4
        VMOVL.U8 q3, d6
        VMLAL.S16   q8, d10, d0[0]
        VMLAL.S16   q9, d11, d0[0]
        VMLAL.S16   q10, d10, d2[0]
        VMLAL.S16   q11, d11, d2[0]
        VMLAL.S16   q12, d10, d4[0]
        VMLAL.S16   q13, d11, d4[0]
        VMLAL.S16   q14, d10, d6[0]
        VMLAL.S16   q15, d11, d6[0]
        CMP         r5, 2
        BLO         3b

        VLD1.8      {d10},  [r9]!
        VSUBL.U8    q5, d10, d14
        VMLAL.S16   q8, d10, d0[1]
        VMLAL.S16   q9, d11, d0[1]
        VMLAL.S16   q10, d10, d2[1]
        VMLAL.S16   q11, d11, d2[1]
        VMLAL.S16   q12, d10, d4[1]
        VMLAL.S16   q13, d11, d4[1]
        VMLAL.S16   q14, d10, d6[1]
        VMLAL.S16   q15, d11, d6[1]
        BEQ         3b

        VLD1.8      {d10},  [r9]!
        VSUBL.U8    q5, d10, d14
        VMLAL.S16   q8, d10, d0[2]
        VMLAL.S16   q9, d11, d0[2]
        VMLAL.S16   q10, d10, d2[2]
        VMLAL.S16   q11, d11, d2[2]
        VMLAL.S16   q12, d10, d4[2]
        VMLAL.S16   q13, d11, d4[2]
        VMLAL.S16   q14, d10, d6[2]
        VMLAL.S16   q15, d11, d6[2]
        CMP         r5, 4
        BLO         3b

        VLD1.8      {d10},  [r9]!
        VSUBL.U8    q5, d10, d14
        VMLAL.S16   q8, d10, d0[3]
        VMLAL.S16   q9, d11, d0[3]
        VMLAL.S16   q10, d10, d2[3]
        VMLAL.S16   q11, d11, d2[3]
        VMLAL.S16   q12, d10, d4[3]
        VMLAL.S16   q13, d11, d4[3]
        VMLAL.S16   q14, d10, d6[3]
        VMLAL.S16   q15, d11, d6[3]
        BEQ         3b

        VLD1.8      {d10},  [r9]!
        VSUBL.U8    q5, d10, d14
        VMLAL.S16   q8, d10, d1[0]
        VMLAL.S16   q9, d11, d1[0]
        VMLAL.S16   q10, d10, d3[0]
        VMLAL.S16   q11, d11, d3[0]
        VMLAL.S16   q12, d10, d5[0]
        VMLAL.S16   q13, d11, d5[0]
        VMLAL.S16   q14, d10, d7[0]
        VMLAL.S16   q15, d11, d7[0]
        CMP         r5, 6
        BLO         3b

        VLD1.8      {d10},  [r9]!
        VSUBL.U8    q5, d10, d14
        VMLAL.S16   q8, d10, d1[1]
        VMLAL.S16   q9, d11, d1[1]
        VMLAL.S16   q10, d10, d3[1]
        VMLAL.S16   q11, d11, d3[1]
        VMLAL.S16   q12, d10, d5[1]
        VMLAL.S16   q13, d11, d5[1]
        VMLAL.S16   q14, d10, d7[1]
        VMLAL.S16   q15, d11, d7[1]
        BEQ         3b

        VLD1.8      {d10},  [r9]!
        VSUBL.U8    q5, d10, d14
        VMLAL.S16   q8, d10, d1[2]
        VMLAL.S16   q9, d11, d1[2]
        VMLAL.S16   q10, d10, d3[2]
        VMLAL.S16   q11, d11, d3[2]
        VMLAL.S16   q12, d10, d5[2]
        VMLAL.S16   q13, d11, d5[2]
        VMLAL.S16   q14, d10, d7[2]
        VMLAL.S16   q15, d11, d7[2]
        B           3b

        # Store odd width
        .p2align    3
5:
        TST         r1, 4
        BEQ         6f
        VST1.32     {d3[0]}, [r6]!
        VST1.32     {d2[0]}, [r8]!
        VST1.32     {d1[0]}, [r4]!
        VST1.32     {d0[0]}, [r11]!
        VEXT.8      q1, q1, q1, 4
        VEXT.8      q0, q0, q0, 4
6:
        TST         r1, 2
        BEQ         7f
        VST1.16     {d3[0]}, [r6]!
        VST1.16     {d2[0]}, [r8]!
        VST1.16     {d1[0]}, [r4]!
        VST1.16     {d0[0]}, [r11]!
        VEXT.8      q1, q1, q1, 2
        VEXT.8      q0, q0, q0, 2

7:
        TST         r1, 1
        BEQ         8f
        VST1.8      {d3[0]}, [r6]
        VST1.8      {d2[0]}, [r8]
        VST1.8      {d1[0]}, [r4]
        VST1.8      {d0[0]}, [r11]

8:
        VPOP        {d10-d14}
        ADD         sp, sp, 12                          // skip pad of 4, r2, r3
        POP         {r4, r5, r6, r7, r8, r9, r10, r11, pc}

END_FUNCTION xnn_qu8_igemm_minmax_rndnu_ukernel_4x8__asm_aarch32_neon_mlal_lane_ld64_prfm
#ifdef __ELF__
.section ".note.GNU-stack","",%progbits
#endif
