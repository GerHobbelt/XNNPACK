// Copyright (c) Facebook, Inc. and its affiliates.
// All rights reserved.
//
// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/qd8-f32-qs8w-gemm-minmax.yaml
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


TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, k_eq_1) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(1)
    .n(2)
    .k(1)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, strided_cn) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(1)
    .n(2)
    .k(1)
    .cn_stride(5)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, k_eq_1_strided_a) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(1)
    .n(2)
    .k(1)
    .a_stride(3)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, k_eq_1_subtile) {
  for (uint32_t n = 1; n <= 2; n++) {
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(m)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, k_eq_1_subtile_m) {
  for (uint32_t m = 1; m <= 1; m++) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(m)
      .n(2)
      .k(1)
      .iterations(1)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, k_eq_1_subtile_n) {
  for (uint32_t n = 1; n <= 2; n++) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(1)
      .n(n)
      .k(1)
      .iterations(1)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, k_gt_1) {
  for (size_t k = 2; k < 10; k++) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(1)
      .n(2)
      .k(k)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, k_gt_1_subtile) {
  for (size_t k = 2; k < 10; k++) {
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, n_gt_2) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, n_gt_2_strided_cn) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .cn_stride(5)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, n_gt_2_strided_a) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, n_gt_2_subtile) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, n_div_2) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, n_div_2_strided_cn) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .cn_stride(5)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, n_div_2_strided_a) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, n_div_2_subtile) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, strided_cm_subtile) {
  for (size_t k = 1; k <= 5; k += 2) {
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .cm_stride(5)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, qmin) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(1)
    .n(2)
    .k(1)
    .qmin(128)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, qmax) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(1)
    .n(2)
    .k(1)
    .qmax(128)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X2__SCALAR, strided_cm) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(1)
    .n(2)
    .k(1)
    .cm_stride(5)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params);
}


TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, k_eq_1) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(1)
    .n(4)
    .k(1)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, strided_cn) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(1)
    .n(4)
    .k(1)
    .cn_stride(7)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, k_eq_1_strided_a) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(1)
    .n(4)
    .k(1)
    .a_stride(3)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, k_eq_1_subtile) {
  for (uint32_t n = 1; n <= 4; n++) {
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(m)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, k_eq_1_subtile_m) {
  for (uint32_t m = 1; m <= 1; m++) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(m)
      .n(4)
      .k(1)
      .iterations(1)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, k_eq_1_subtile_n) {
  for (uint32_t n = 1; n <= 4; n++) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(1)
      .n(n)
      .k(1)
      .iterations(1)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, k_gt_1) {
  for (size_t k = 2; k < 10; k++) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(1)
      .n(4)
      .k(k)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, k_gt_1_subtile) {
  for (size_t k = 2; k < 10; k++) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, n_gt_4) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, n_gt_4_strided_cn) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .cn_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, n_gt_4_strided_a) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, n_gt_4_subtile) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, n_div_4) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, n_div_4_strided_cn) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .cn_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, n_div_4_strided_a) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, n_div_4_subtile) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, strided_cm_subtile) {
  for (size_t k = 1; k <= 5; k += 2) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .cm_stride(7)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, qmin) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(1)
    .n(4)
    .k(1)
    .qmin(128)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, qmax) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(1)
    .n(4)
    .k(1)
    .qmax(128)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X4__SCALAR, strided_cm) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(1)
    .n(4)
    .k(1)
    .cm_stride(7)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x4__scalar, xnn_init_f32_minmax_scalar_params);
}


TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, k_eq_1) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(8)
    .kr(1)
    .sr(1)
    .m(1)
    .n(8)
    .k(1)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, strided_cn) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(8)
    .kr(1)
    .sr(1)
    .m(1)
    .n(8)
    .k(1)
    .cn_stride(11)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, k_eq_1_strided_a) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(8)
    .kr(1)
    .sr(1)
    .m(1)
    .n(8)
    .k(1)
    .a_stride(3)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, k_eq_1_subtile) {
  for (uint32_t n = 1; n <= 8; n++) {
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, k_eq_1_subtile_m) {
  for (uint32_t m = 1; m <= 1; m++) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(m)
      .n(8)
      .k(1)
      .iterations(1)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, k_eq_1_subtile_n) {
  for (uint32_t n = 1; n <= 8; n++) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(n)
      .k(1)
      .iterations(1)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, k_gt_1) {
  for (size_t k = 2; k < 10; k++) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(k)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, k_gt_1_subtile) {
  for (size_t k = 2; k < 10; k++) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, n_gt_8) {
  for (uint32_t n = 9; n < 16; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, n_gt_8_strided_cn) {
  for (uint32_t n = 9; n < 16; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .cn_stride(11)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, n_gt_8_strided_a) {
  for (uint32_t n = 9; n < 16; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, n_gt_8_subtile) {
  for (uint32_t n = 9; n < 16; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, n_div_8) {
  for (uint32_t n = 16; n <= 24; n += 8) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, n_div_8_strided_cn) {
  for (uint32_t n = 16; n <= 24; n += 8) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .cn_stride(11)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, n_div_8_strided_a) {
  for (uint32_t n = 16; n <= 24; n += 8) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, n_div_8_subtile) {
  for (uint32_t n = 16; n <= 24; n += 8) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, strided_cm_subtile) {
  for (size_t k = 1; k <= 5; k += 2) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .cm_stride(11)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, qmin) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(8)
    .kr(1)
    .sr(1)
    .m(1)
    .n(8)
    .k(1)
    .qmin(128)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, qmax) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(8)
    .kr(1)
    .sr(1)
    .m(1)
    .n(8)
    .k(1)
    .qmax(128)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8__SCALAR, strided_cm) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(8)
    .kr(1)
    .sr(1)
    .m(1)
    .n(8)
    .k(1)
    .cm_stride(11)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8__scalar, xnn_init_f32_minmax_scalar_params);
}


TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, k_eq_1) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(2)
    .n(2)
    .k(1)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, strided_cn) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(2)
    .n(2)
    .k(1)
    .cn_stride(5)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, k_eq_1_strided_a) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(2)
    .n(2)
    .k(1)
    .a_stride(3)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, k_eq_1_subtile) {
  for (uint32_t n = 1; n <= 2; n++) {
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(m)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, k_eq_1_subtile_m) {
  for (uint32_t m = 1; m <= 2; m++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(m)
      .n(2)
      .k(1)
      .iterations(1)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, k_eq_1_subtile_n) {
  for (uint32_t n = 1; n <= 2; n++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(2)
      .n(n)
      .k(1)
      .iterations(1)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, k_gt_1) {
  for (size_t k = 2; k < 10; k++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(2)
      .n(2)
      .k(k)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, k_gt_1_subtile) {
  for (size_t k = 2; k < 10; k++) {
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, n_gt_2) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, n_gt_2_strided_cn) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .cn_stride(5)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, n_gt_2_strided_a) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, n_gt_2_subtile) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, n_div_2) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, n_div_2_strided_cn) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .cn_stride(5)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, n_div_2_strided_a) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, n_div_2_subtile) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, strided_cm_subtile) {
  for (size_t k = 1; k <= 5; k += 2) {
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .cm_stride(5)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, qmin) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(2)
    .n(2)
    .k(1)
    .qmin(128)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, qmax) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(2)
    .n(2)
    .k(1)
    .qmax(128)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X2__SCALAR, strided_cm) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(2)
    .n(2)
    .k(1)
    .cm_stride(5)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params);
}


TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, k_eq_1) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(2)
    .n(4)
    .k(1)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, strided_cn) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(2)
    .n(4)
    .k(1)
    .cn_stride(7)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, k_eq_1_strided_a) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(2)
    .n(4)
    .k(1)
    .a_stride(3)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, k_eq_1_subtile) {
  for (uint32_t n = 1; n <= 4; n++) {
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(m)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, k_eq_1_subtile_m) {
  for (uint32_t m = 1; m <= 2; m++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(m)
      .n(4)
      .k(1)
      .iterations(1)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, k_eq_1_subtile_n) {
  for (uint32_t n = 1; n <= 4; n++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(2)
      .n(n)
      .k(1)
      .iterations(1)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, k_gt_1) {
  for (size_t k = 2; k < 10; k++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(2)
      .n(4)
      .k(k)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, k_gt_1_subtile) {
  for (size_t k = 2; k < 10; k++) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, n_gt_4) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, n_gt_4_strided_cn) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .cn_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, n_gt_4_strided_a) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, n_gt_4_subtile) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, n_div_4) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, n_div_4_strided_cn) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .cn_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, n_div_4_strided_a) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, n_div_4_subtile) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, strided_cm_subtile) {
  for (size_t k = 1; k <= 5; k += 2) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .cm_stride(7)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, qmin) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(2)
    .n(4)
    .k(1)
    .qmin(128)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, qmax) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(2)
    .n(4)
    .k(1)
    .qmax(128)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X4__SCALAR, strided_cm) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(2)
    .n(4)
    .k(1)
    .cm_stride(7)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
}


TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, k_eq_1) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(8)
    .kr(1)
    .sr(1)
    .m(2)
    .n(8)
    .k(1)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, strided_cn) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(8)
    .kr(1)
    .sr(1)
    .m(2)
    .n(8)
    .k(1)
    .cn_stride(11)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, k_eq_1_strided_a) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(8)
    .kr(1)
    .sr(1)
    .m(2)
    .n(8)
    .k(1)
    .a_stride(3)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, k_eq_1_subtile) {
  for (uint32_t n = 1; n <= 8; n++) {
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, k_eq_1_subtile_m) {
  for (uint32_t m = 1; m <= 2; m++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(m)
      .n(8)
      .k(1)
      .iterations(1)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, k_eq_1_subtile_n) {
  for (uint32_t n = 1; n <= 8; n++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(2)
      .n(n)
      .k(1)
      .iterations(1)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, k_gt_1) {
  for (size_t k = 2; k < 10; k++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(2)
      .n(8)
      .k(k)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, k_gt_1_subtile) {
  for (size_t k = 2; k < 10; k++) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, n_gt_8) {
  for (uint32_t n = 9; n < 16; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, n_gt_8_strided_cn) {
  for (uint32_t n = 9; n < 16; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .cn_stride(11)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, n_gt_8_strided_a) {
  for (uint32_t n = 9; n < 16; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, n_gt_8_subtile) {
  for (uint32_t n = 9; n < 16; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, n_div_8) {
  for (uint32_t n = 16; n <= 24; n += 8) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, n_div_8_strided_cn) {
  for (uint32_t n = 16; n <= 24; n += 8) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .cn_stride(11)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, n_div_8_strided_a) {
  for (uint32_t n = 16; n <= 24; n += 8) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, n_div_8_subtile) {
  for (uint32_t n = 16; n <= 24; n += 8) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, strided_cm_subtile) {
  for (size_t k = 1; k <= 5; k += 2) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .cm_stride(11)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, qmin) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(8)
    .kr(1)
    .sr(1)
    .m(2)
    .n(8)
    .k(1)
    .qmin(128)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, qmax) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(8)
    .kr(1)
    .sr(1)
    .m(2)
    .n(8)
    .k(1)
    .qmax(128)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8__SCALAR, strided_cm) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(8)
    .kr(1)
    .sr(1)
    .m(2)
    .n(8)
    .k(1)
    .cm_stride(11)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params);
}


TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, k_eq_1) {
  GemmMicrokernelTester()
    .mr(4)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(4)
    .n(4)
    .k(1)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, strided_cn) {
  GemmMicrokernelTester()
    .mr(4)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(4)
    .n(4)
    .k(1)
    .cn_stride(7)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, k_eq_1_strided_a) {
  GemmMicrokernelTester()
    .mr(4)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(4)
    .n(4)
    .k(1)
    .a_stride(3)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, k_eq_1_subtile) {
  for (uint32_t n = 1; n <= 4; n++) {
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(m)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, k_eq_1_subtile_m) {
  for (uint32_t m = 1; m <= 4; m++) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(m)
      .n(4)
      .k(1)
      .iterations(1)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, k_eq_1_subtile_n) {
  for (uint32_t n = 1; n <= 4; n++) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(n)
      .k(1)
      .iterations(1)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, k_gt_1) {
  for (size_t k = 2; k < 10; k++) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(k)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, k_gt_1_subtile) {
  for (size_t k = 2; k < 10; k++) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, n_gt_4) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, n_gt_4_strided_cn) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(k)
        .cn_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, n_gt_4_strided_a) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, n_gt_4_subtile) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, n_div_4) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, n_div_4_strided_cn) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(k)
        .cn_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, n_div_4_strided_a) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, n_div_4_subtile) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, strided_cm_subtile) {
  for (size_t k = 1; k <= 5; k += 2) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .cm_stride(7)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, qmin) {
  GemmMicrokernelTester()
    .mr(4)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(4)
    .n(4)
    .k(1)
    .qmin(128)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, qmax) {
  GemmMicrokernelTester()
    .mr(4)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(4)
    .n(4)
    .k(1)
    .qmax(128)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(QD8_F32_QS8W_GEMM_MINMAX_4X4__SCALAR, strided_cm) {
  GemmMicrokernelTester()
    .mr(4)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(4)
    .n(4)
    .k(1)
    .cm_stride(7)
    .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x4__scalar, xnn_init_f32_minmax_scalar_params);
}


#if XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, k_eq_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(1)
      .n(8)
      .k(4)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(1)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, k_eq_4_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(1)
      .n(8)
      .k(4)
      .a_stride(7)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(1)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, k_lt_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, k_lt_4_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, k_lt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, k_gt_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, k_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, k_div_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, n_gt_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .a_stride(23)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, n_div_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, n_div_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .a_stride(23)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, qmin) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(1)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, qmax) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(1)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X8C4__NEONDOT, strided_cm) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(1)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x8c4__neondot, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, k_eq_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(1)
      .n(16)
      .k(4)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(1)
      .n(16)
      .k(4)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, k_eq_4_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(1)
      .n(16)
      .k(4)
      .a_stride(7)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(m)
        .n(16)
        .k(4)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(1)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, k_lt_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, k_lt_4_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, k_lt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, k_gt_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, k_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, k_div_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, n_gt_16) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, n_gt_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, n_gt_16_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .a_stride(23)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, n_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, n_div_16) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, n_div_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, n_div_16_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .a_stride(23)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, n_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, qmin) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(1)
      .n(16)
      .k(4)
      .qmin(128)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, qmax) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(1)
      .n(16)
      .k(4)
      .qmax(128)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_1X16C4__NEONDOT, strided_cm) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(1)
      .n(16)
      .k(4)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, k_eq_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(2)
      .n(8)
      .k(4)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(2)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, k_eq_4_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(2)
      .n(8)
      .k(4)
      .a_stride(7)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(2)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, k_lt_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(2)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, k_lt_4_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(2)
        .n(8)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, k_lt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, k_gt_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(2)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, k_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, k_div_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(2)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, n_gt_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .a_stride(23)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, n_div_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, n_div_8_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .a_stride(23)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, qmin) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(2)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, qmax) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(2)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X8C4__NEONDOT, strided_cm) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(2)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x8c4__neondot, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, k_eq_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(2)
      .n(16)
      .k(4)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(2)
      .n(16)
      .k(4)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, k_eq_4_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(2)
      .n(16)
      .k(4)
      .a_stride(7)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(m)
        .n(16)
        .k(4)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(2)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, k_lt_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, k_lt_4_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, k_lt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, k_gt_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, k_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, k_div_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, n_gt_16) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, n_gt_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, n_gt_16_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .a_stride(23)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, n_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, n_div_16) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, n_div_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, n_div_16_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .a_stride(23)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, n_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, qmin) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(2)
      .n(16)
      .k(4)
      .qmin(128)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, qmax) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(2)
      .n(16)
      .k(4)
      .qmax(128)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_2X16C4__NEONDOT, strided_cm) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(2)
      .n(16)
      .k(4)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_2x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, k_eq_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(3)
      .n(16)
      .k(4)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(3)
      .n(16)
      .k(4)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, k_eq_4_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(3)
      .n(16)
      .k(4)
      .a_stride(7)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t m = 1; m <= 3; m++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(m)
        .n(16)
        .k(4)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(3)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, k_lt_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(3)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, k_lt_4_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(3)
        .n(16)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, k_lt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, k_gt_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(3)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, k_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, k_div_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(3)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, n_gt_16) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, n_gt_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, n_gt_16_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .a_stride(23)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, n_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, n_div_16) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, n_div_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, n_div_16_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .a_stride(23)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, n_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, qmin) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(3)
      .n(16)
      .k(4)
      .qmin(128)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, qmax) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(3)
      .n(16)
      .k(4)
      .qmax(128)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_3X16C4__NEONDOT, strided_cm) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(3)
      .n(16)
      .k(4)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_3x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, k_eq_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(4)
      .n(16)
      .k(4)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(4)
      .n(16)
      .k(4)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, k_eq_4_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(4)
      .n(16)
      .k(4)
      .a_stride(7)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(m)
        .n(16)
        .k(4)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(4)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, k_lt_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, k_lt_4_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .a_stride(7)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, k_lt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, k_gt_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, k_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, k_div_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, n_gt_16) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, n_gt_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, n_gt_16_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .a_stride(23)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, n_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, n_div_16) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, n_div_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, n_div_16_strided_a) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .a_stride(23)
          .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, n_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, qmin) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(4)
      .n(16)
      .k(4)
      .qmin(128)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, qmax) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(4)
      .n(16)
      .k(4)
      .qmax(128)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }

  TEST(QD8_F32_QS8W_GEMM_MINMAX_4X16C4__NEONDOT, strided_cm) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(4)
      .n(16)
      .k(4)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qs8w_gemm_minmax_ukernel_4x16c4__neondot, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
