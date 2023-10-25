// Copyright (c) Facebook, Inc. and its affiliates.
// All rights reserved.
//
// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/qc8-gemm-jit-fp32.yaml
//   Generator: tools/generate-gemm-test.py


#include <gtest/gtest.h>

#include <xnnpack/allocator.h>
#include <xnnpack/common.h>
#include <xnnpack/isa-checks.h>
#include <xnnpack/microparams-init.h>

#include <xnnpack/gemm.h>
#include <xnnpack/igemm.h>
#include <xnnpack/ppmm.h>
#include "gemm-microkernel-tester.h"


#if XNN_ARCH_ARM && XNN_PLATFORM_JIT
  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, k_eq_8) {
    TEST_REQUIRES_ARM_NEON_V8;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, strided_cn) {
    TEST_REQUIRES_ARM_NEON_V8;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, k_eq_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_V8;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .a_stride(11)
      .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(8)
        .iterations(1)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, k_lt_8) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, k_lt_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .a_stride(11)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
        }
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, k_gt_8) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, k_gt_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .a_stride(19)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
        }
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, k_div_8) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, k_div_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .a_stride(83)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
        }
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, n_gt_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .a_stride(43)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
        }
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, n_div_8) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, n_div_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .a_stride(43)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
        }
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
        }
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, qmin) {
    TEST_REQUIRES_ARM_NEON_V8;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, qmax) {
    TEST_REQUIRES_ARM_NEON_V8;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_LD64, strided_cm) {
    TEST_REQUIRES_ARM_NEON_V8;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
  }
#endif  // XNN_ARCH_ARM && XNN_PLATFORM_JIT


#if XNN_ARCH_ARM && XNN_PLATFORM_JIT
  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, k_eq_8) {
    TEST_REQUIRES_ARM_NEON_V8;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, strided_cn) {
    TEST_REQUIRES_ARM_NEON_V8;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, k_eq_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_V8;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .a_stride(11)
      .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(8)
        .iterations(1)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, k_lt_8) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, k_lt_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .a_stride(11)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
        }
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, k_gt_8) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, k_gt_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .a_stride(19)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
        }
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, k_div_8) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, k_div_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .a_stride(83)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
        }
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, n_gt_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .a_stride(43)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
        }
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, n_div_8) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, n_div_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .a_stride(43)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
        }
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_V8;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
        }
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, qmin) {
    TEST_REQUIRES_ARM_NEON_V8;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, qmax) {
    TEST_REQUIRES_ARM_NEON_V8;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8__AARCH32_NEONV8_MLAL_LANE_PRFM_LD64, strided_cm) {
    TEST_REQUIRES_ARM_NEON_V8;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8__aarch32_neonv8_mlal_lane_prfm_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
  }
#endif  // XNN_ARCH_ARM && XNN_PLATFORM_JIT


#if XNN_ENABLE_ARM_DOTPROD && XNN_ARCH_ARM && XNN_PLATFORM_JIT
  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, k_eq_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, k_eq_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .a_stride(11)
      .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(m)
        .n(8)
        .k(8)
        .iterations(1)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(4)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, k_lt_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, k_lt_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .a_stride(11)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
        }
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, k_gt_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, k_gt_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .a_stride(19)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
        }
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, k_div_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, k_div_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .a_stride(83)
        .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
        }
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, n_gt_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .a_stride(43)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
        }
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, n_div_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, n_div_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .a_stride(43)
          .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
        }
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
        }
      }
    }
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, qmin) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, qmax) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
  }

  TEST(GENERATE_QC8_GEMM_FP32_4X8C4__AARCH32_NEONDOT_LD64, strided_cm) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_generate_qc8_gemm_fp32_ukernel_4x8c4__aarch32_neondot_ld64, xnn_init_qc8_conv_minmax_fp32_neonv8_params, xnn_qs8_requantize_fp32);
  }
#endif  // XNN_ENABLE_ARM_DOTPROD && XNN_ARCH_ARM && XNN_PLATFORM_JIT
