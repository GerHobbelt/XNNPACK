// Copyright (c) Facebook, Inc. and its affiliates.
// All rights reserved.
//
// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/qd8-f32-qc8w-igemm-minmax.yaml
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


TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, k_eq_2) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(1)
    .n(2)
    .k(2)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, strided_cn) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(1)
    .n(2)
    .k(2)
    .cn_stride(5)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, k_eq_2_subtile) {
  for (uint32_t n = 1; n <= 2; n++) {
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(m)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, k_eq_2_subtile_m) {
  for (uint32_t m = 1; m <= 1; m++) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(m)
      .n(2)
      .k(2)
      .iterations(1)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, k_eq_2_subtile_n) {
  for (uint32_t n = 1; n <= 2; n++) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(1)
      .n(n)
      .k(2)
      .iterations(1)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, k_lt_2) {
  for (size_t k = 1; k < 2; k++) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(1)
      .n(2)
      .k(k)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, k_lt_2_subtile) {
  for (size_t k = 1; k < 2; k++) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, k_gt_2) {
  for (size_t k = 3; k < 4; k++) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(1)
      .n(2)
      .k(k)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, k_gt_2_subtile) {
  for (size_t k = 3; k < 4; k++) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, k_div_2) {
  for (size_t k = 4; k <= 20; k += 2) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(1)
      .n(2)
      .k(k)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, k_div_2_subtile) {
  for (size_t k = 4; k <= 20; k += 2) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, n_gt_2) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, n_gt_2_strided_cn) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .cn_stride(5)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, n_gt_2_subtile) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, n_div_2) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, n_div_2_strided_cn) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .cn_stride(5)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, n_div_2_subtile) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 10; k += 3) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, small_kernel) {
  for (size_t k = 1; k <= 10; k += 3) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(1)
      .n(2)
      .k(k)
      .ks(3)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, small_kernel_subtile) {
  for (size_t k = 1; k <= 10; k += 3) {
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
          .ks(3)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, n_gt_2_small_kernel) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, n_div_2_small_kernel) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, strided_cm_subtile) {
  for (size_t k = 1; k <= 10; k += 3) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, a_offset) {
  for (size_t k = 1; k <= 10; k += 3) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(1)
      .n(2)
      .k(k)
      .ks(3)
      .a_offset(13)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, zero) {
  for (size_t k = 1; k <= 10; k += 3) {
    for (uint32_t mz = 0; mz < 1; mz++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(1)
        .n(2)
        .k(k)
        .ks(3)
        .a_offset(13)
        .zero_index(mz)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, qmin) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(1)
    .n(2)
    .k(2)
    .qmin(128)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, qmax) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(1)
    .n(2)
    .k(2)
    .qmax(128)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X2__SCALAR, strided_cm) {
  GemmMicrokernelTester()
    .mr(1)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(1)
    .n(2)
    .k(2)
    .cm_stride(5)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}


TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, k_eq_2) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(2)
    .n(2)
    .k(2)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, strided_cn) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(2)
    .n(2)
    .k(2)
    .cn_stride(5)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, k_eq_2_subtile) {
  for (uint32_t n = 1; n <= 2; n++) {
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(m)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, k_eq_2_subtile_m) {
  for (uint32_t m = 1; m <= 2; m++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(m)
      .n(2)
      .k(2)
      .iterations(1)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, k_eq_2_subtile_n) {
  for (uint32_t n = 1; n <= 2; n++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(2)
      .n(n)
      .k(2)
      .iterations(1)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, k_lt_2) {
  for (size_t k = 1; k < 2; k++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(2)
      .n(2)
      .k(k)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, k_lt_2_subtile) {
  for (size_t k = 1; k < 2; k++) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, k_gt_2) {
  for (size_t k = 3; k < 4; k++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(2)
      .n(2)
      .k(k)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, k_gt_2_subtile) {
  for (size_t k = 3; k < 4; k++) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, k_div_2) {
  for (size_t k = 4; k <= 20; k += 2) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(2)
      .n(2)
      .k(k)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, k_div_2_subtile) {
  for (size_t k = 4; k <= 20; k += 2) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, n_gt_2) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, n_gt_2_strided_cn) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .cn_stride(5)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, n_gt_2_subtile) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, n_div_2) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, n_div_2_strided_cn) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .cn_stride(5)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, n_div_2_subtile) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 10; k += 3) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, small_kernel) {
  for (size_t k = 1; k <= 10; k += 3) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(2)
      .n(2)
      .k(k)
      .ks(3)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, small_kernel_subtile) {
  for (size_t k = 1; k <= 10; k += 3) {
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
          .ks(3)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, n_gt_2_small_kernel) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, n_div_2_small_kernel) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, strided_cm_subtile) {
  for (size_t k = 1; k <= 10; k += 3) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, a_offset) {
  for (size_t k = 1; k <= 10; k += 3) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(2)
      .n(2)
      .k(k)
      .ks(3)
      .a_offset(23)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, zero) {
  for (size_t k = 1; k <= 10; k += 3) {
    for (uint32_t mz = 0; mz < 2; mz++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(2)
        .k(k)
        .ks(3)
        .a_offset(23)
        .zero_index(mz)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, qmin) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(2)
    .n(2)
    .k(2)
    .qmin(128)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, qmax) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(2)
    .n(2)
    .k(2)
    .qmax(128)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__SCALAR, strided_cm) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(2)
    .n(2)
    .k(2)
    .cm_stride(5)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}


TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, k_eq_2) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(8)
    .kr(1)
    .sr(1)
    .m(2)
    .n(8)
    .k(2)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, strided_cn) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(8)
    .kr(1)
    .sr(1)
    .m(2)
    .n(8)
    .k(2)
    .cn_stride(11)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, k_eq_2_subtile) {
  for (uint32_t n = 1; n <= 8; n++) {
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, k_eq_2_subtile_m) {
  for (uint32_t m = 1; m <= 2; m++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(m)
      .n(8)
      .k(2)
      .iterations(1)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, k_eq_2_subtile_n) {
  for (uint32_t n = 1; n <= 8; n++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(2)
      .n(n)
      .k(2)
      .iterations(1)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, k_lt_2) {
  for (size_t k = 1; k < 2; k++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(2)
      .n(8)
      .k(k)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, k_lt_2_subtile) {
  for (size_t k = 1; k < 2; k++) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, k_gt_2) {
  for (size_t k = 3; k < 4; k++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(2)
      .n(8)
      .k(k)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, k_gt_2_subtile) {
  for (size_t k = 3; k < 4; k++) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, k_div_2) {
  for (size_t k = 4; k <= 20; k += 2) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(2)
      .n(8)
      .k(k)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, k_div_2_subtile) {
  for (size_t k = 4; k <= 20; k += 2) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, n_gt_8) {
  for (uint32_t n = 9; n < 16; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, n_gt_8_strided_cn) {
  for (uint32_t n = 9; n < 16; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .cn_stride(11)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, n_gt_8_subtile) {
  for (uint32_t n = 9; n < 16; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, n_div_8) {
  for (uint32_t n = 16; n <= 24; n += 8) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, n_div_8_strided_cn) {
  for (uint32_t n = 16; n <= 24; n += 8) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .cn_stride(11)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, n_div_8_subtile) {
  for (uint32_t n = 16; n <= 24; n += 8) {
    for (size_t k = 1; k <= 10; k += 3) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, small_kernel) {
  for (size_t k = 1; k <= 10; k += 3) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(2)
      .n(8)
      .k(k)
      .ks(3)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, small_kernel_subtile) {
  for (size_t k = 1; k <= 10; k += 3) {
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
          .ks(3)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, n_gt_8_small_kernel) {
  for (uint32_t n = 9; n < 16; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, n_div_8_small_kernel) {
  for (uint32_t n = 16; n <= 24; n += 8) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, strided_cm_subtile) {
  for (size_t k = 1; k <= 10; k += 3) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, a_offset) {
  for (size_t k = 1; k <= 10; k += 3) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(2)
      .n(8)
      .k(k)
      .ks(3)
      .a_offset(23)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, zero) {
  for (size_t k = 1; k <= 10; k += 3) {
    for (uint32_t mz = 0; mz < 2; mz++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(23)
        .zero_index(mz)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, qmin) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(8)
    .kr(1)
    .sr(1)
    .m(2)
    .n(8)
    .k(2)
    .qmin(128)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, qmax) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(8)
    .kr(1)
    .sr(1)
    .m(2)
    .n(8)
    .k(2)
    .qmax(128)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__SCALAR, strided_cm) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(8)
    .kr(1)
    .sr(1)
    .m(2)
    .n(8)
    .k(2)
    .cm_stride(11)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, k_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, k_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, k_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, k_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 16; k <= 80; k += 8) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
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
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(43)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(43)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, k_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, k_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, k_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, k_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 16; k <= 80; k += 8) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
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
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(43)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(43)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8__NEON_MLAL_LANE_PRFM, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, k_eq_16) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(2)
      .sr(4)
      .m(1)
      .n(8)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(2)
      .sr(4)
      .m(1)
      .n(8)
      .k(16)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, k_eq_16_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(2)
          .sr(4)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, k_eq_16_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(2)
        .sr(4)
        .m(m)
        .n(8)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, k_eq_16_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(2)
        .sr(4)
        .m(1)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, k_lt_16) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(2)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, k_gt_16) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(2)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, k_div_16) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(2)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, k_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 32; k <= 160; k += 16) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(2)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(2)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(2)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(2)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(2)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(2)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(2)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(2)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(2)
          .sr(4)
          .m(1)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(2)
      .sr(4)
      .m(1)
      .n(8)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(2)
      .sr(4)
      .m(1)
      .n(8)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C2S4__NEON_MLAL, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(2)
      .sr(4)
      .m(1)
      .n(8)
      .k(16)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c2s4__neon_mlal, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, k_eq_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(m)
        .n(8)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(1)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, k_lt_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, k_gt_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, k_div_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, n_div_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, small_kernel) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, a_offset) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(43)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, zero) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(43)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, qmin) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, qmax) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONDOT_LD64, strided_cm) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neondot_ld64, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, k_eq_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(1)
      .n(16)
      .k(4)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, strided_cn) {
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
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, k_eq_4_subtile) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, k_eq_4_subtile_m) {
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, k_eq_4_subtile_n) {
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, k_lt_4) {
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, k_lt_4_subtile) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, k_gt_4) {
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, k_gt_4_subtile) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, k_div_4) {
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, k_div_4_subtile) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, n_gt_16) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, n_gt_16_strided_cn) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, n_gt_16_subtile) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, n_div_16) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, n_div_16_strided_cn) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, n_div_16_subtile) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, small_kernel) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, small_kernel_subtile) {
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
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, n_gt_16_small_kernel) {
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
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, n_div_16_small_kernel) {
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
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, strided_cm_subtile) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, a_offset) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(23)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, zero) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(1)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(23)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, qmin) {
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
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, qmax) {
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
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C4__NEONDOT, strided_cm) {
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
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, k_eq_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(1)
      .n(16)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(1)
      .n(16)
      .k(16)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, k_eq_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, k_eq_16_subtile_m) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(m)
        .n(16)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, k_eq_16_subtile_n) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(1)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, k_lt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, k_gt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, k_div_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, k_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, n_gt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, n_gt_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, n_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, n_div_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, n_div_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, n_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, n_gt_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, n_div_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, a_offset) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, zero) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, qmin) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(1)
      .n(16)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, qmax) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(1)
      .n(16)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__NEONI8MM, strided_cm) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(1)
      .n(16)
      .k(16)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, k_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(2)
      .n(8)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(2)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, k_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, k_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, k_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 16; k <= 80; k += 8) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
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
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(2)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 2; mz++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(2)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(2)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(2)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8__NEON_MLAL_LANE_PRFM, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(2)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, k_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(2)
      .n(16)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(2)
      .n(16)
      .k(8)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(m)
        .n(16)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, k_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, k_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, k_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, n_gt_16) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, n_gt_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, n_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, n_div_16) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, n_div_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, n_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, n_gt_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, n_div_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 2; mz++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(2)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(2)
      .n(16)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(2)
      .n(16)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16__NEON_MLAL_LANE, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(2)
      .n(16)
      .k(8)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, k_eq_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(2)
      .n(16)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(2)
      .n(16)
      .k(16)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, k_eq_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, k_eq_16_subtile_m) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(m)
        .n(16)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, k_eq_16_subtile_n) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(2)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, k_lt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, k_gt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, k_div_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, k_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, n_gt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, n_gt_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, n_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, n_div_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, n_div_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, n_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, n_gt_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, n_div_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, a_offset) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, zero) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t mz = 0; mz < 2; mz++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, qmin) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(2)
      .n(16)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, qmax) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(2)
      .n(16)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__NEONI8MM, strided_cm) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(2)
      .n(16)
      .k(16)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, k_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 3; m++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, k_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, k_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, k_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(127)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 3; mz++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(127)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, k_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 3; m++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, k_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, k_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, k_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(127)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 3; mz++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(127)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8__NEON_MLAL_LANE_PRFM, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, k_eq_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(3)
      .n(8)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(3)
      .n(8)
      .k(16)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, k_eq_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, k_eq_16_subtile_m) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t m = 1; m <= 3; m++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(m)
        .n(8)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, k_eq_16_subtile_n) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(3)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, k_lt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, k_gt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, k_div_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, k_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, n_div_8) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, a_offset) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(251)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, zero) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t mz = 0; mz < 3; mz++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(3)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(251)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, qmin) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(3)
      .n(8)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, qmax) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(3)
      .n(8)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__NEONI8MM, strided_cm) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(3)
      .n(8)
      .k(16)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, k_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, k_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, k_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, k_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
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
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
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
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
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
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, k_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, k_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, k_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, k_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
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
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
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
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
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
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8__NEON_MLAL_LANE_PRFM, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ENABLE_ARM_DOTPROD && XNN_ARCH_ARM && XNN_ENABLE_ASSEMBLY
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, k_eq_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, strided_cn) {
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
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, k_eq_8_subtile) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, k_eq_8_subtile_m) {
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, k_eq_8_subtile_n) {
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, k_lt_8) {
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, k_lt_8_subtile) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, k_gt_8) {
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, k_gt_8_subtile) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, k_div_8) {
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, k_div_8_subtile) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, n_gt_8) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, n_gt_8_strided_cn) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, n_gt_8_subtile) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, n_div_8) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, n_div_8_strided_cn) {
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, n_div_8_subtile) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, small_kernel) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, small_kernel_subtile) {
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
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, n_gt_8_small_kernel) {
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
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, n_div_8_small_kernel) {
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
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, strided_cm_subtile) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, a_offset) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, zero) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, qmin) {
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
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, qmax) {
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
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C4__ASM_AARCH32_NEONDOT_CORTEX_A55, strided_cm) {
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
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c4__asm_aarch32_neondot_cortex_a55, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_DOTPROD && XNN_ARCH_ARM && XNN_ENABLE_ASSEMBLY


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, k_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(8)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(m)
        .n(16)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, k_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, k_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, k_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, n_gt_16) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, n_gt_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, n_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, n_div_16) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, n_div_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, n_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, n_gt_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, n_div_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16__NEON_MLAL_LANE_PRFM, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(8)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ENABLE_ARM_DOTPROD && XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, k_eq_16) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(4)
      .n(16)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(4)
      .n(16)
      .k(16)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, k_eq_16_subtile) {
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
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, k_eq_16_subtile_m) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(m)
        .n(16)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, k_eq_16_subtile_n) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(4)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, k_lt_16) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 16; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, k_gt_16) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 17; k < 32; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, k_div_16) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, k_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 32; k <= 160; k += 16) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, n_gt_16) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, n_gt_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, n_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, n_div_16) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, n_div_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, n_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, small_kernel) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 80; k += 17) {
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
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, n_gt_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, n_div_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 80; k += 17) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, a_offset) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(331)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, zero) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(331)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, qmin) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(4)
      .n(16)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, qmax) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(4)
      .n(16)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__ASM_AARCH64_NEONDOT_LD128, strided_cm) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(4)
      .n(16)
      .k(16)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__asm_aarch64_neondot_ld128, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_DOTPROD && XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, k_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, k_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, k_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, k_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(251)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(251)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8__NEON_MLAL_LANE_PRFM, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8__neon_mlal_lane_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, k_eq_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(6)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, k_lt_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, k_lt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, k_gt_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, k_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, k_div_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, n_div_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, small_kernel) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, a_offset) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(127)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, zero) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(6)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(127)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, qmin) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, qmax) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C4__NEONDOT, strided_cm) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, k_eq_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(6)
      .n(16)
      .k(4)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(6)
      .n(16)
      .k(4)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(m)
        .n(16)
        .k(4)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(6)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, k_lt_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, k_lt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, k_gt_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, k_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, k_div_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, n_gt_16) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, n_gt_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, n_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, n_div_16) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, n_div_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, n_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, small_kernel) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, n_gt_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, n_div_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, a_offset) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(127)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, zero) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(6)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(127)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, qmin) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(6)
      .n(16)
      .k(4)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, qmax) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(6)
      .n(16)
      .k(4)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C4__NEONDOT, strided_cm) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(6)
      .n(16)
      .k(4)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, k_eq_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(8)
      .n(8)
      .k(4)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(8)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 8; m++) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t m = 1; m <= 8; m++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(8)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, k_lt_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(8)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, k_lt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, k_gt_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(8)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, k_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, k_div_4) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(8)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, n_div_8) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, small_kernel) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(8)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, a_offset) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(4)
        .sr(1)
        .m(8)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, zero) {
    TEST_REQUIRES_ARM_NEON_DOT;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 8; mz++) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(4)
          .sr(1)
          .m(8)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, qmin) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(8)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, qmax) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(8)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C4__NEONDOT, strided_cm) {
    TEST_REQUIRES_ARM_NEON_DOT;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(4)
      .sr(1)
      .m(8)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c4__neondot, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_DOTPROD && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, k_eq_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(8)
      .n(8)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(8)
      .n(8)
      .k(16)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, k_eq_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 8; m++) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, k_eq_16_subtile_m) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t m = 1; m <= 8; m++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(m)
        .n(8)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, k_eq_16_subtile_n) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(8)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, k_lt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(8)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, k_gt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(8)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, k_div_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(8)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, k_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, n_div_8) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(8)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, a_offset) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(8)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(643)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, zero) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t mz = 0; mz < 8; mz++) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(8)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(643)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, qmin) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(8)
      .n(8)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, qmax) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(8)
      .n(8)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X8C8__NEONI8MM, strided_cm) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(8)
      .n(8)
      .k(16)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, k_eq_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(8)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(8)
      .n(16)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(8)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(8)
      .n(16)
      .k(16)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, k_eq_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 8; m++) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, k_eq_16_subtile_m) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t m = 1; m <= 8; m++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(m)
        .n(16)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, k_eq_16_subtile_n) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(8)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, k_lt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(8)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, k_gt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(8)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, k_div_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(8)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, k_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, n_gt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, n_gt_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, n_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, n_div_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, n_div_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, n_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(8)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, n_gt_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, n_div_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, a_offset) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(8)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(643)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, zero) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t mz = 0; mz < 8; mz++) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(8)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(643)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, qmin) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(8)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(8)
      .n(16)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, qmax) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(8)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(8)
      .n(16)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__NEONI8MM, strided_cm) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(8)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(8)
      .n(16)
      .k(16)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, k_eq_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(1)
      .n(16)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, strided_cn) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(1)
      .n(16)
      .k(8)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, k_eq_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(m)
        .n(16)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(1)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, k_lt_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, k_lt_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, k_gt_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, k_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, k_div_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, k_div_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, n_gt_16) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, n_div_16) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, small_kernel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, a_offset) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(43)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, zero) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(43)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, qmin) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(1)
      .n(16)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, qmax) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(1)
      .n(16)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512SKX, strided_cm) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(1)
      .n(16)
      .k(8)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, k_eq_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, strided_cn) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(8)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, k_eq_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(m)
        .n(16)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, k_lt_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, k_lt_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, k_gt_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, k_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, k_div_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, k_div_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, n_gt_16) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, n_div_16) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, small_kernel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, a_offset) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(251)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, zero) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(251)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, qmin) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, qmax) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX, strided_cm) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(8)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, k_eq_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(4)
      .n(16)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, strided_cn) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(4)
      .n(16)
      .k(8)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, k_eq_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(m)
        .n(16)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(4)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, k_lt_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, k_lt_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, k_gt_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, k_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, k_div_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, k_div_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, n_gt_16) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, n_div_16) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, small_kernel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, a_offset) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, zero) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(4)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, qmin) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(4)
      .n(16)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, qmax) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(4)
      .n(16)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__AVX512SKX_PRFM, strided_cm) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(4)
      .n(16)
      .k(8)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, k_eq_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(5)
      .n(16)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, strided_cn) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(5)
      .n(16)
      .k(8)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, k_eq_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 5; m++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t m = 1; m <= 5; m++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(m)
        .n(16)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(5)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, k_lt_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, k_lt_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, k_gt_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, k_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, k_div_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, k_div_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, n_gt_16) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, n_div_16) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, small_kernel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, a_offset) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(211)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, zero) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 5; mz++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(5)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(211)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, qmin) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(5)
      .n(16)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, qmax) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(5)
      .n(16)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512SKX_PRFM, strided_cm) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(5)
      .n(16)
      .k(8)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, k_eq_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, strided_cn) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(8)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, k_eq_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(m)
        .n(16)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, k_lt_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, k_lt_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, k_gt_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, k_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, k_div_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, k_div_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, n_gt_16) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, n_div_16) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, small_kernel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, a_offset) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(251)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, zero) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(251)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, qmin) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, qmax) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512SKX_PRFM, strided_cm) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(8)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, k_eq_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(8)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(8)
      .n(16)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, strided_cn) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(8)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(8)
      .n(16)
      .k(8)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, k_eq_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 8; m++) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t m = 1; m <= 8; m++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(m)
        .n(16)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(8)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, k_lt_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(8)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, k_lt_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, k_gt_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(8)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, k_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, k_div_8) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(8)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, k_div_8_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, n_gt_16) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, n_div_16) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, small_kernel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(8)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, a_offset) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(8)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(331)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, zero) {
    TEST_REQUIRES_X86_AVX512SKX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 8; mz++) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(8)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(331)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, qmin) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(8)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(8)
      .n(16)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, qmax) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(8)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(8)
      .n(16)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_8X16C8__AVX512SKX_PRFM, strided_cm) {
    TEST_REQUIRES_X86_AVX512SKX;
    GemmMicrokernelTester()
      .mr(8)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(8)
      .n(16)
      .k(8)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_8x16c8__avx512skx_prfm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, k_eq_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(3)
      .n(16)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(3)
      .n(16)
      .k(8)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, k_eq_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t m = 1; m <= 3; m++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(m)
        .n(16)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(3)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, k_lt_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(3)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, k_lt_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 8; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, k_gt_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(3)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, k_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 9; k < 16; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, k_div_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(3)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, k_div_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 16; k <= 80; k += 8) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, n_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, n_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(3)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
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
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, a_offset) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(3)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(127)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, zero) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 3; mz++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(3)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(127)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, qmin) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(3)
      .n(16)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, qmax) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(3)
      .n(16)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C4__AVX512VNNI, strided_cm) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(3)
      .n(16)
      .k(8)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, k_eq_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(4)
      .n(16)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(4)
      .n(16)
      .k(8)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, k_eq_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(m)
        .n(16)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(4)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, k_lt_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, k_lt_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 8; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, k_gt_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, k_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 9; k < 16; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, k_div_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, k_div_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 16; k <= 80; k += 8) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, n_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, n_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
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
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, a_offset) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, zero) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(4)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, qmin) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(4)
      .n(16)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, qmax) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(4)
      .n(16)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C4__AVX512VNNI, strided_cm) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(4)
      .n(16)
      .k(8)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, k_eq_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(7)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(7)
      .n(16)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(7)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(7)
      .n(16)
      .k(8)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, k_eq_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 7; m++) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t m = 1; m <= 7; m++) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(m)
        .n(16)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(7)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, k_lt_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(7)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, k_lt_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, k_gt_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(7)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, k_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, k_div_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(7)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, k_div_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, n_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, n_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(7)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, a_offset) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(7)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(283)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, zero) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 7; mz++) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(7)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(283)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, qmin) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(7)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(7)
      .n(16)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, qmax) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(7)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(7)
      .n(16)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI, strided_cm) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(7)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(7)
      .n(16)
      .k(8)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, k_eq_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(2)
      .n(16)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(2)
      .n(16)
      .k(8)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, k_eq_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(m)
        .n(16)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(2)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, k_lt_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, k_lt_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 8; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, k_gt_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, k_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 9; k < 16; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, k_div_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, k_div_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 16; k <= 80; k += 8) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, n_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, n_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
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
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, a_offset) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, zero) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 2; mz++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(2)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, qmin) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(2)
      .n(16)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, qmax) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(2)
      .n(16)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C4__AVX512VNNI_PRFM, strided_cm) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(2)
      .n(16)
      .k(8)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, k_eq_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(7)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(7)
      .n(16)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(7)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(7)
      .n(16)
      .k(8)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, k_eq_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 7; m++) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t m = 1; m <= 7; m++) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(m)
        .n(16)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(7)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, k_lt_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(7)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, k_lt_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, k_gt_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(7)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, k_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, k_div_8) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(7)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, k_div_8_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, n_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, n_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(7)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, a_offset) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(4)
        .sr(1)
        .m(7)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(283)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, zero) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 7; mz++) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(4)
          .sr(1)
          .m(7)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(283)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, qmin) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(7)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(7)
      .n(16)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, qmax) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(7)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(7)
      .n(16)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C4__AVX512VNNI_PRFM, strided_cm) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(7)
      .nr(16)
      .kr(4)
      .sr(1)
      .m(7)
      .n(16)
      .k(8)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c4__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, k_eq_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(2)
      .n(16)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(2)
      .n(16)
      .k(16)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, k_eq_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, k_eq_16_subtile_m) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(m)
        .n(16)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, k_eq_16_subtile_n) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(2)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, k_lt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, k_lt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, k_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, k_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, k_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, k_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 32; k <= 160; k += 16) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, n_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, n_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, a_offset) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, zero) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t mz = 0; mz < 2; mz++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, qmin) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(2)
      .n(16)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, qmax) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(2)
      .n(16)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI, strided_cm) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(2)
      .n(16)
      .k(16)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, k_eq_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(3)
      .n(16)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(3)
      .n(16)
      .k(16)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, k_eq_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, k_eq_16_subtile_m) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t m = 1; m <= 3; m++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(m)
        .n(16)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, k_eq_16_subtile_n) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(3)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, k_lt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(3)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, k_lt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, k_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(3)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, k_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, k_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(3)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, k_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 32; k <= 160; k += 16) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, n_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, n_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(3)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, a_offset) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(3)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(251)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, zero) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t mz = 0; mz < 3; mz++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(3)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(251)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, qmin) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(3)
      .n(16)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, qmax) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(3)
      .n(16)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__AVX512VNNI, strided_cm) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(3)
      .n(16)
      .k(16)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, k_eq_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(5)
      .n(16)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(5)
      .n(16)
      .k(16)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, k_eq_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 5; m++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, k_eq_16_subtile_m) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t m = 1; m <= 5; m++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(m)
        .n(16)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, k_eq_16_subtile_n) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(5)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, k_lt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, k_lt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, k_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, k_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, k_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, k_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 32; k <= 160; k += 16) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, n_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, n_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, a_offset) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(409)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, zero) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t mz = 0; mz < 5; mz++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(5)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(409)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, qmin) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(5)
      .n(16)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, qmax) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(5)
      .n(16)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_5X16C8__AVX512VNNI, strided_cm) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(5)
      .n(16)
      .k(16)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_5x16c8__avx512vnni, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, k_eq_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(1)
      .n(16)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(1)
      .n(16)
      .k(16)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, k_eq_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, k_eq_16_subtile_m) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(m)
        .n(16)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, k_eq_16_subtile_n) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(1)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, k_lt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, k_lt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, k_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, k_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, k_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, k_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 32; k <= 160; k += 16) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, n_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, n_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, a_offset) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, zero) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(1)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, qmin) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(1)
      .n(16)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, qmax) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(1)
      .n(16)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X16C8__AVX512VNNI_PRFM, strided_cm) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(1)
      .n(16)
      .k(16)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, k_eq_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(2)
      .n(16)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(2)
      .n(16)
      .k(16)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, k_eq_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, k_eq_16_subtile_m) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(m)
        .n(16)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, k_eq_16_subtile_n) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(2)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, k_lt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, k_lt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, k_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, k_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, k_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, k_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 32; k <= 160; k += 16) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, n_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, n_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, a_offset) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(2)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, zero) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t mz = 0; mz < 2; mz++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(2)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, qmin) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(2)
      .n(16)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, qmax) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(2)
      .n(16)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X16C8__AVX512VNNI_PRFM, strided_cm) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(2)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(2)
      .n(16)
      .k(16)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, k_eq_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(16)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, k_eq_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, k_eq_16_subtile_m) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(m)
        .n(16)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, k_eq_16_subtile_n) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, k_lt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, k_lt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, k_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, k_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, k_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, k_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 32; k <= 160; k += 16) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, n_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, n_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, a_offset) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(487)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, zero) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(6)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(487)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, qmin) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, qmax) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__AVX512VNNI_PRFM, strided_cm) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(16)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, k_eq_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(7)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(7)
      .n(16)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(7)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(7)
      .n(16)
      .k(16)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, k_eq_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 7; m++) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, k_eq_16_subtile_m) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t m = 1; m <= 7; m++) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(m)
        .n(16)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, k_eq_16_subtile_n) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(7)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, k_lt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(7)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, k_lt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, k_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(7)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, k_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, k_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(7)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, k_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 32; k <= 160; k += 16) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, n_gt_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, n_div_16) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(7)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(16)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, a_offset) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(7)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(563)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, zero) {
    TEST_REQUIRES_X86_AVX512VNNI;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t mz = 0; mz < 7; mz++) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(7)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(563)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, qmin) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(7)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(7)
      .n(16)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, qmax) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(7)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(7)
      .n(16)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_7X16C8__AVX512VNNI_PRFM, strided_cm) {
    TEST_REQUIRES_X86_AVX512VNNI;
    GemmMicrokernelTester()
      .mr(7)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(7)
      .n(16)
      .k(16)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_7x16c8__avx512vnni_prfm, xnn_init_f32_minmax_avx512vnni_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, k_eq_2) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(2)
      .n(2)
      .k(2)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, strided_cn) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(2)
      .n(2)
      .k(2)
      .cn_stride(5)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, k_eq_2_subtile) {
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(2)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, k_eq_2_subtile_m) {
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(m)
        .n(2)
        .k(2)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, k_eq_2_subtile_n) {
    for (uint32_t n = 1; n <= 2; n++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, k_lt_2) {
    for (size_t k = 1; k < 2; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(2)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, k_lt_2_subtile) {
    for (size_t k = 1; k < 2; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, k_gt_2) {
    for (size_t k = 3; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(2)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, k_gt_2_subtile) {
    for (size_t k = 3; k < 4; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, k_div_2) {
    for (size_t k = 4; k <= 20; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(2)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, k_div_2_subtile) {
    for (size_t k = 4; k <= 20; k += 2) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, n_gt_2) {
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, n_gt_2_strided_cn) {
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(5)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, n_gt_2_subtile) {
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, n_div_2) {
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, n_div_2_strided_cn) {
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(5)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, n_div_2_subtile) {
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 10; k += 3) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, small_kernel) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(2)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, small_kernel_subtile) {
    for (size_t k = 1; k <= 10; k += 3) {
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
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, n_gt_2_small_kernel) {
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, n_div_2_small_kernel) {
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, strided_cm_subtile) {
    for (size_t k = 1; k <= 10; k += 3) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, a_offset) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(2)
        .n(2)
        .k(k)
        .ks(3)
        .a_offset(23)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, zero) {
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t mz = 0; mz < 2; mz++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(2)
          .n(2)
          .k(k)
          .ks(3)
          .a_offset(23)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, qmin) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(2)
      .n(2)
      .k(2)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, qmax) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(2)
      .n(2)
      .k(2)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X2__WASM, strided_cm) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(2)
      .n(2)
      .k(2)
      .cm_stride(5)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x2__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, k_eq_2) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(2)
      .n(4)
      .k(2)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, strided_cn) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(2)
      .n(4)
      .k(2)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, k_eq_2_subtile) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(2)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, k_eq_2_subtile_m) {
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(m)
        .n(4)
        .k(2)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, k_eq_2_subtile_n) {
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, k_lt_2) {
    for (size_t k = 1; k < 2; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, k_lt_2_subtile) {
    for (size_t k = 1; k < 2; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, k_gt_2) {
    for (size_t k = 3; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, k_gt_2_subtile) {
    for (size_t k = 3; k < 4; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, k_div_2) {
    for (size_t k = 4; k <= 20; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, k_div_2_subtile) {
    for (size_t k = 4; k <= 20; k += 2) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, n_gt_4) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, n_gt_4_strided_cn) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, n_gt_4_subtile) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, n_div_4) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, n_div_4_strided_cn) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, n_div_4_subtile) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 10; k += 3) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, small_kernel) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, small_kernel_subtile) {
    for (size_t k = 1; k <= 10; k += 3) {
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
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, n_gt_4_small_kernel) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, n_div_4_small_kernel) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, strided_cm_subtile) {
    for (size_t k = 1; k <= 10; k += 3) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, a_offset) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(23)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, zero) {
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t mz = 0; mz < 2; mz++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(2)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(23)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, qmin) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(2)
      .n(4)
      .k(2)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, qmax) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(2)
      .n(4)
      .k(2)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4__WASM, strided_cm) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(2)
      .n(4)
      .k(2)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, k_eq_2) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(2)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, strided_cn) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(2)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, k_eq_2_subtile) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(2)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, k_eq_2_subtile_m) {
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(m)
        .n(4)
        .k(2)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, k_eq_2_subtile_n) {
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, k_lt_2) {
    for (size_t k = 1; k < 2; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, k_lt_2_subtile) {
    for (size_t k = 1; k < 2; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, k_gt_2) {
    for (size_t k = 3; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, k_gt_2_subtile) {
    for (size_t k = 3; k < 4; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, k_div_2) {
    for (size_t k = 4; k <= 20; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, k_div_2_subtile) {
    for (size_t k = 4; k <= 20; k += 2) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, n_gt_4) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, n_gt_4_strided_cn) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, n_gt_4_subtile) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, n_div_4) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, n_div_4_strided_cn) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, n_div_4_subtile) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 10; k += 3) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, small_kernel) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, small_kernel_subtile) {
    for (size_t k = 1; k <= 10; k += 3) {
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
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, n_gt_4_small_kernel) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, n_div_4_small_kernel) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, strided_cm_subtile) {
    for (size_t k = 1; k <= 10; k += 3) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, a_offset) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(43)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, zero) {
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(43)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, qmin) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(2)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, qmax) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(2)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4__WASM, strided_cm) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(2)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4__wasm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, k_eq_8) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(2)
      .sr(4)
      .m(1)
      .n(4)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, strided_cn) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(2)
      .sr(4)
      .m(1)
      .n(4)
      .k(8)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, k_eq_8_subtile) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, k_eq_8_subtile_m) {
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(m)
        .n(4)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, k_eq_8_subtile_n) {
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(1)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, k_lt_8) {
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(1)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, k_lt_8_subtile) {
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, k_gt_8) {
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(1)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, k_gt_8_subtile) {
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, k_div_8) {
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(1)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, k_div_8_subtile) {
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, n_gt_4) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, n_gt_4_strided_cn) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, n_gt_4_subtile) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, n_div_4) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, n_div_4_strided_cn) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, n_div_4_subtile) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, small_kernel) {
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(1)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, small_kernel_subtile) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, n_gt_4_small_kernel) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, n_div_4_small_kernel) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, strided_cm_subtile) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, a_offset) {
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(1)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(43)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, zero) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(1)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(43)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, qmin) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(2)
      .sr(4)
      .m(1)
      .n(4)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, qmax) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(2)
      .sr(4)
      .m(1)
      .n(4)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C2S4__WASMSIMD_DOT16X2_LD64, strided_cm) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(2)
      .sr(4)
      .m(1)
      .n(4)
      .k(8)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, k_eq_8) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(2)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, strided_cn) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(2)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, k_eq_8_subtile) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(2)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, k_eq_8_subtile_m) {
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(2)
        .sr(1)
        .m(m)
        .n(4)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, k_eq_8_subtile_n) {
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(2)
        .sr(1)
        .m(2)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, k_lt_8) {
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(2)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, k_lt_8_subtile) {
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(2)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, k_gt_8) {
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(2)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, k_gt_8_subtile) {
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(2)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, k_div_8) {
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(2)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, k_div_8_subtile) {
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(2)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, n_gt_4) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(2)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, n_gt_4_strided_cn) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(2)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, n_gt_4_subtile) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(2)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, n_div_4) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(2)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, n_div_4_strided_cn) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(2)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, n_div_4_subtile) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(2)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, small_kernel) {
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(2)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, small_kernel_subtile) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(2)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, n_gt_4_small_kernel) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(2)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, n_div_4_small_kernel) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(2)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, strided_cm_subtile) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(2)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, a_offset) {
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(2)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, zero) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 2; mz++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(2)
          .sr(1)
          .m(2)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, qmin) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(2)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, qmax) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(2)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C2__WASMSIMD_DOT16X2_LD128, strided_cm) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(2)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c2__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, k_eq_8) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, strided_cn) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, k_eq_8_subtile) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, k_eq_8_subtile_m) {
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(m)
        .n(4)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, k_eq_8_subtile_n) {
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, k_lt_8) {
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, k_lt_8_subtile) {
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, k_gt_8) {
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, k_gt_8_subtile) {
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, k_div_8) {
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, k_div_8_subtile) {
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, n_gt_4) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, n_gt_4_strided_cn) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, n_gt_4_subtile) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, n_div_4) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, n_div_4_strided_cn) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, n_div_4_subtile) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, small_kernel) {
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, small_kernel_subtile) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, n_gt_4_small_kernel) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, n_div_4_small_kernel) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, strided_cm_subtile) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, a_offset) {
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, zero) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 2; mz++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, qmin) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, qmax) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__WASMSIMD_DOT16X2_LD64, strided_cm) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, k_eq_16) {
    TEST_REQUIRES_WASM_SDOT;
    GemmMicrokernelTester()
      .mr(3)
      .nr(4)
      .kr(16)
      .sr(1)
      .m(3)
      .n(4)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, strided_cn) {
    TEST_REQUIRES_WASM_SDOT;
    GemmMicrokernelTester()
      .mr(3)
      .nr(4)
      .kr(16)
      .sr(1)
      .m(3)
      .n(4)
      .k(16)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, k_eq_16_subtile) {
    TEST_REQUIRES_WASM_SDOT;
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(4)
          .kr(16)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, k_eq_16_subtile_m) {
    TEST_REQUIRES_WASM_SDOT;
    for (uint32_t m = 1; m <= 3; m++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(4)
        .kr(16)
        .sr(1)
        .m(m)
        .n(4)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, k_eq_16_subtile_n) {
    TEST_REQUIRES_WASM_SDOT;
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(4)
        .kr(16)
        .sr(1)
        .m(3)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, k_lt_16) {
    TEST_REQUIRES_WASM_SDOT;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(4)
        .kr(16)
        .sr(1)
        .m(3)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, k_lt_16_subtile) {
    TEST_REQUIRES_WASM_SDOT;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(4)
            .kr(16)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, k_gt_16) {
    TEST_REQUIRES_WASM_SDOT;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(4)
        .kr(16)
        .sr(1)
        .m(3)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, k_gt_16_subtile) {
    TEST_REQUIRES_WASM_SDOT;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(4)
            .kr(16)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, k_div_16) {
    TEST_REQUIRES_WASM_SDOT;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(4)
        .kr(16)
        .sr(1)
        .m(3)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, k_div_16_subtile) {
    TEST_REQUIRES_WASM_SDOT;
    for (size_t k = 32; k <= 160; k += 16) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(4)
            .kr(16)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, n_gt_4) {
    TEST_REQUIRES_WASM_SDOT;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(4)
          .kr(16)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, n_gt_4_strided_cn) {
    TEST_REQUIRES_WASM_SDOT;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(4)
          .kr(16)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, n_gt_4_subtile) {
    TEST_REQUIRES_WASM_SDOT;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(4)
            .kr(16)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, n_div_4) {
    TEST_REQUIRES_WASM_SDOT;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(4)
          .kr(16)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, n_div_4_strided_cn) {
    TEST_REQUIRES_WASM_SDOT;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(4)
          .kr(16)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, n_div_4_subtile) {
    TEST_REQUIRES_WASM_SDOT;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(4)
            .kr(16)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, small_kernel) {
    TEST_REQUIRES_WASM_SDOT;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(4)
        .kr(16)
        .sr(1)
        .m(3)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, small_kernel_subtile) {
    TEST_REQUIRES_WASM_SDOT;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(4)
            .kr(16)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, n_gt_4_small_kernel) {
    TEST_REQUIRES_WASM_SDOT;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(4)
          .kr(16)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, n_div_4_small_kernel) {
    TEST_REQUIRES_WASM_SDOT;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(4)
          .kr(16)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, strided_cm_subtile) {
    TEST_REQUIRES_WASM_SDOT;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(4)
            .kr(16)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, a_offset) {
    TEST_REQUIRES_WASM_SDOT;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(4)
        .kr(16)
        .sr(1)
        .m(3)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(251)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, zero) {
    TEST_REQUIRES_WASM_SDOT;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t mz = 0; mz < 3; mz++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(4)
          .kr(16)
          .sr(1)
          .m(3)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(251)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, qmin) {
    TEST_REQUIRES_WASM_SDOT;
    GemmMicrokernelTester()
      .mr(3)
      .nr(4)
      .kr(16)
      .sr(1)
      .m(3)
      .n(4)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, qmax) {
    TEST_REQUIRES_WASM_SDOT;
    GemmMicrokernelTester()
      .mr(3)
      .nr(4)
      .kr(16)
      .sr(1)
      .m(3)
      .n(4)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C16__WASMSDOT, strided_cm) {
    TEST_REQUIRES_WASM_SDOT;
    GemmMicrokernelTester()
      .mr(3)
      .nr(4)
      .kr(16)
      .sr(1)
      .m(3)
      .n(4)
      .k(16)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c16__wasmsdot, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, k_eq_8) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(2)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, strided_cn) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(2)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, k_eq_8_subtile) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, k_eq_8_subtile_m) {
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(1)
        .m(m)
        .n(4)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, k_eq_8_subtile_n) {
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(1)
        .m(4)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, k_lt_8) {
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, k_lt_8_subtile) {
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, k_gt_8) {
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, k_gt_8_subtile) {
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, k_div_8) {
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, k_div_8_subtile) {
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, n_gt_4) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, n_gt_4_strided_cn) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, n_gt_4_subtile) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, n_div_4) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, n_div_4_strided_cn) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, n_div_4_subtile) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, small_kernel) {
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, small_kernel_subtile) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, n_gt_4_small_kernel) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, n_div_4_small_kernel) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, strided_cm_subtile) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, a_offset) {
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, zero) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(1)
          .m(4)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, qmin) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(2)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, qmax) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(2)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2__WASMSIMD_DOT16X2_LD64, strided_cm) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(2)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, k_eq_8) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(2)
      .sr(4)
      .m(4)
      .n(4)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, strided_cn) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(2)
      .sr(4)
      .m(4)
      .n(4)
      .k(8)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, k_eq_8_subtile) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, k_eq_8_subtile_m) {
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(m)
        .n(4)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, k_eq_8_subtile_n) {
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(4)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, k_lt_8) {
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, k_lt_8_subtile) {
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, k_gt_8) {
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, k_gt_8_subtile) {
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, k_div_8) {
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, k_div_8_subtile) {
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, n_gt_4) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, n_gt_4_strided_cn) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, n_gt_4_subtile) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, n_div_4) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, n_div_4_strided_cn) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, n_div_4_subtile) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, small_kernel) {
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(4)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, small_kernel_subtile) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, n_gt_4_small_kernel) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, n_div_4_small_kernel) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, strided_cm_subtile) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, a_offset) {
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(4)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, zero) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(4)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, qmin) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(2)
      .sr(4)
      .m(4)
      .n(4)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, qmax) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(2)
      .sr(4)
      .m(4)
      .n(4)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD64, strided_cm) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(2)
      .sr(4)
      .m(4)
      .n(4)
      .k(8)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld64, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, k_eq_8) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(2)
      .sr(4)
      .m(4)
      .n(4)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, strided_cn) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(2)
      .sr(4)
      .m(4)
      .n(4)
      .k(8)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, k_eq_8_subtile) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, k_eq_8_subtile_m) {
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(m)
        .n(4)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, k_eq_8_subtile_n) {
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(4)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, k_lt_8) {
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, k_lt_8_subtile) {
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, k_gt_8) {
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, k_gt_8_subtile) {
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, k_div_8) {
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, k_div_8_subtile) {
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, n_gt_4) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, n_gt_4_strided_cn) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, n_gt_4_subtile) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, n_div_4) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, n_div_4_strided_cn) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, n_div_4_subtile) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, small_kernel) {
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(4)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, small_kernel_subtile) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, n_gt_4_small_kernel) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, n_div_4_small_kernel) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, strided_cm_subtile) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(2)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, a_offset) {
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(2)
        .sr(4)
        .m(4)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, zero) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(2)
          .sr(4)
          .m(4)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, qmin) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(2)
      .sr(4)
      .m(4)
      .n(4)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, qmax) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(2)
      .sr(4)
      .m(4)
      .n(4)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C2S4__WASMSIMD_DOT16X2_LD128, strided_cm) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(2)
      .sr(4)
      .m(4)
      .n(4)
      .k(8)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c2s4__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, k_eq_8) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, strided_cn) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, k_eq_8_subtile) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, k_eq_8_subtile_m) {
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(m)
        .n(4)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, k_eq_8_subtile_n) {
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(4)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, k_lt_8) {
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, k_lt_8_subtile) {
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, k_gt_8) {
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, k_gt_8_subtile) {
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, k_div_8) {
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, k_div_8_subtile) {
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, n_gt_4) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, n_gt_4_strided_cn) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, n_gt_4_subtile) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, n_div_4) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, n_div_4_strided_cn) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, n_div_4_subtile) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, small_kernel) {
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, small_kernel_subtile) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, n_gt_4_small_kernel) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, n_div_4_small_kernel) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, strided_cm_subtile) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, a_offset) {
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, zero) {
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, qmin) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, qmax) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__WASMSIMD_DOT16X2_LD128, strided_cm) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__wasmsimd_dot16x2_ld128, xnn_init_f32_minmax_wasmsimd_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, k_eq_8) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(1)
      .n(4)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, strided_cn) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(1)
      .n(4)
      .k(8)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, k_eq_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(m)
        .n(4)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(1)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, k_lt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(1)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, k_lt_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, k_gt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(1)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, k_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, k_div_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(1)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, k_div_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, n_gt_4) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, n_gt_4_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, n_gt_4_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, n_div_4) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, n_div_4_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, n_div_4_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(1)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, n_gt_4_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, n_div_4_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, a_offset) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(1)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(43)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, zero) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(43)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, qmin) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(1)
      .n(4)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, qmax) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(1)
      .n(4)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__AVX_LD64, strided_cm) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(1)
      .n(4)
      .k(8)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, k_eq_8) {
    TEST_REQUIRES_X86_SSE41;
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(1)
      .n(4)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, strided_cn) {
    TEST_REQUIRES_X86_SSE41;
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(1)
      .n(4)
      .k(8)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, k_eq_8_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(m)
        .n(4)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(1)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, k_lt_8) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(1)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, k_lt_8_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, k_gt_8) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(1)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, k_gt_8_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, k_div_8) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(1)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, k_div_8_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, n_gt_4) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, n_gt_4_strided_cn) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, n_gt_4_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, n_div_4) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, n_div_4_strided_cn) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, n_div_4_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, small_kernel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(1)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, small_kernel_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, n_gt_4_small_kernel) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, n_div_4_small_kernel) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, strided_cm_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, a_offset) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(1)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(43)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, zero) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(43)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, qmin) {
    TEST_REQUIRES_X86_SSE41;
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(1)
      .n(4)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, qmax) {
    TEST_REQUIRES_X86_SSE41;
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(1)
      .n(4)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__SSE41_LD128, strided_cm) {
    TEST_REQUIRES_X86_SSE41;
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(1)
      .n(4)
      .k(8)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, k_eq_8) {
    TEST_REQUIRES_X86_XOP;
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(1)
      .n(4)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, strided_cn) {
    TEST_REQUIRES_X86_XOP;
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(1)
      .n(4)
      .k(8)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, k_eq_8_subtile) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(m)
        .n(4)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(1)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, k_lt_8) {
    TEST_REQUIRES_X86_XOP;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(1)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, k_lt_8_subtile) {
    TEST_REQUIRES_X86_XOP;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, k_gt_8) {
    TEST_REQUIRES_X86_XOP;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(1)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, k_gt_8_subtile) {
    TEST_REQUIRES_X86_XOP;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, k_div_8) {
    TEST_REQUIRES_X86_XOP;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(1)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, k_div_8_subtile) {
    TEST_REQUIRES_X86_XOP;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, n_gt_4) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, n_gt_4_strided_cn) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, n_gt_4_subtile) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, n_div_4) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, n_div_4_strided_cn) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, n_div_4_subtile) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, small_kernel) {
    TEST_REQUIRES_X86_XOP;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(1)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, small_kernel_subtile) {
    TEST_REQUIRES_X86_XOP;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, n_gt_4_small_kernel) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, n_div_4_small_kernel) {
    TEST_REQUIRES_X86_XOP;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, strided_cm_subtile) {
    TEST_REQUIRES_X86_XOP;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, a_offset) {
    TEST_REQUIRES_X86_XOP;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(1)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(43)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, zero) {
    TEST_REQUIRES_X86_XOP;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(1)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(43)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, qmin) {
    TEST_REQUIRES_X86_XOP;
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(1)
      .n(4)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, qmax) {
    TEST_REQUIRES_X86_XOP;
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(1)
      .n(4)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X4C8__XOP_LD128, strided_cm) {
    TEST_REQUIRES_X86_XOP;
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(1)
      .n(4)
      .k(8)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x4c8__xop_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, k_eq_8) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, strided_cn) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, k_eq_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(m)
        .n(4)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, k_lt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, k_lt_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, k_gt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, k_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, k_div_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, k_div_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, n_gt_4) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, n_gt_4_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, n_gt_4_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, n_div_4) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, n_div_4_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, n_div_4_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, n_gt_4_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, n_div_4_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, a_offset) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, zero) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 2; mz++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, qmin) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, qmax) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD64, strided_cm) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, k_eq_8) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, strided_cn) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, k_eq_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(m)
        .n(4)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, k_lt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, k_lt_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, k_gt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, k_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, k_div_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, k_div_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, n_gt_4) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, n_gt_4_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, n_gt_4_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, n_div_4) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, n_div_4_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, n_div_4_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, n_gt_4_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, n_div_4_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, a_offset) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, zero) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 2; mz++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, qmin) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, qmax) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__AVX_LD128, strided_cm) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, k_eq_8) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, strided_cn) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, k_eq_8_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(m)
        .n(4)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, k_lt_8) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, k_lt_8_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, k_gt_8) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, k_gt_8_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, k_div_8) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, k_div_8_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, n_gt_4) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, n_gt_4_strided_cn) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, n_gt_4_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, n_div_4) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, n_div_4_strided_cn) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, n_div_4_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, small_kernel) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, small_kernel_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, n_gt_4_small_kernel) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, n_div_4_small_kernel) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, strided_cm_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, a_offset) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, zero) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 2; mz++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, qmin) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, qmax) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE2_LD64, strided_cm) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, k_eq_8) {
    TEST_REQUIRES_X86_SSE41;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, strided_cn) {
    TEST_REQUIRES_X86_SSE41;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, k_eq_8_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(m)
        .n(4)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, k_lt_8) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, k_lt_8_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, k_gt_8) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, k_gt_8_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, k_div_8) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, k_div_8_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, n_gt_4) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, n_gt_4_strided_cn) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, n_gt_4_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, n_div_4) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, n_div_4_strided_cn) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, n_div_4_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, small_kernel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, small_kernel_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, n_gt_4_small_kernel) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, n_div_4_small_kernel) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, strided_cm_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, a_offset) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, zero) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 2; mz++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(2)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, qmin) {
    TEST_REQUIRES_X86_SSE41;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, qmax) {
    TEST_REQUIRES_X86_SSE41;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X4C8__SSE41_LD128, strided_cm) {
    TEST_REQUIRES_X86_SSE41;
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(2)
      .n(4)
      .k(8)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x4c8__sse41_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, k_eq_8) {
    TEST_REQUIRES_X86_SSE41;
    GemmMicrokernelTester()
      .mr(3)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(3)
      .n(4)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, strided_cn) {
    TEST_REQUIRES_X86_SSE41;
    GemmMicrokernelTester()
      .mr(3)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(3)
      .n(4)
      .k(8)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, k_eq_8_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t m = 1; m <= 3; m++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(m)
        .n(4)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(3)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, k_lt_8) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(3)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, k_lt_8_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, k_gt_8) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(3)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, k_gt_8_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, k_div_8) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(3)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, k_div_8_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, n_gt_4) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, n_gt_4_strided_cn) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, n_gt_4_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, n_div_4) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, n_div_4_strided_cn) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, n_div_4_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, small_kernel) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(3)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, small_kernel_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, n_gt_4_small_kernel) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, n_div_4_small_kernel) {
    TEST_REQUIRES_X86_SSE41;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, strided_cm_subtile) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, a_offset) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(3)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(127)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, zero) {
    TEST_REQUIRES_X86_SSE41;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 3; mz++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(3)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(127)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, qmin) {
    TEST_REQUIRES_X86_SSE41;
    GemmMicrokernelTester()
      .mr(3)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(3)
      .n(4)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, qmax) {
    TEST_REQUIRES_X86_SSE41;
    GemmMicrokernelTester()
      .mr(3)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(3)
      .n(4)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X4C8__SSE41_LD64, strided_cm) {
    TEST_REQUIRES_X86_SSE41;
    GemmMicrokernelTester()
      .mr(3)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(3)
      .n(4)
      .k(8)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x4c8__sse41_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, k_eq_8) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, strided_cn) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, k_eq_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(m)
        .n(4)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(4)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, k_lt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, k_lt_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, k_gt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, k_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, k_div_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, k_div_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, n_gt_4) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, n_gt_4_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, n_gt_4_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, n_div_4) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, n_div_4_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, n_div_4_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, n_gt_4_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, n_div_4_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, a_offset) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, zero) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, qmin) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, qmax) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__AVX_LD128, strided_cm) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__avx_ld128, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, k_eq_8) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, strided_cn) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .cn_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, k_eq_8_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(m)
        .n(4)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(4)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, k_lt_8) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, k_lt_8_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, k_gt_8) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, k_gt_8_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, k_div_8) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, k_div_8_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, n_gt_4) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, n_gt_4_strided_cn) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, n_gt_4_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, n_div_4) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, n_div_4_strided_cn) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, n_div_4_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, small_kernel) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, small_kernel_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, n_gt_4_small_kernel) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, n_div_4_small_kernel) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, strided_cm_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, a_offset) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(8)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, zero) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(8)
          .sr(1)
          .m(4)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, qmin) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, qmax) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X4C8__SSE2_LD64, strided_cm) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(8)
      .sr(1)
      .m(4)
      .n(4)
      .k(8)
      .cm_stride(7)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x4c8__sse2_ld64, xnn_init_f32_minmax_sse_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, k_eq_8) {
    TEST_REQUIRES_X86_AVX2;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, strided_cn) {
    TEST_REQUIRES_X86_AVX2;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, k_eq_8_subtile) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(m)
        .n(8)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(1)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, k_lt_8) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, k_lt_8_subtile) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, k_gt_8) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, k_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, k_div_8) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, k_div_8_subtile) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, n_gt_8) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, n_gt_8_strided_cn) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, n_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, n_div_8) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, n_div_8_strided_cn) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, n_div_8_subtile) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, small_kernel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, n_gt_8_small_kernel) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, n_div_8_small_kernel) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, a_offset) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(43)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, zero) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(43)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, qmin) {
    TEST_REQUIRES_X86_AVX2;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, qmax) {
    TEST_REQUIRES_X86_AVX2;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__AVX2, strided_cm) {
    TEST_REQUIRES_X86_AVX2;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, k_eq_8) {
    TEST_REQUIRES_X86_AVX2;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(3)
      .n(8)
      .k(8)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, strided_cn) {
    TEST_REQUIRES_X86_AVX2;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(3)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, k_eq_8_subtile) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, k_eq_8_subtile_m) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t m = 1; m <= 3; m++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(m)
        .n(8)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, k_eq_8_subtile_n) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(3)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, k_lt_8) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, k_lt_8_subtile) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, k_gt_8) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, k_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, k_div_8) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 16; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, k_div_8_subtile) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 16; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, n_gt_8) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, n_gt_8_strided_cn) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, n_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, n_div_8) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, n_div_8_strided_cn) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, n_div_8_subtile) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, small_kernel) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, n_gt_8_small_kernel) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, n_div_8_small_kernel) {
    TEST_REQUIRES_X86_AVX2;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, a_offset) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(127)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, zero) {
    TEST_REQUIRES_X86_AVX2;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 3; mz++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(3)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(127)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, qmin) {
    TEST_REQUIRES_X86_AVX2;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(3)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, qmax) {
    TEST_REQUIRES_X86_AVX2;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(3)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X8C8__AVX2, strided_cm) {
    TEST_REQUIRES_X86_AVX2;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(3)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x8c8__avx2, xnn_init_f32_minmax_avx_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64
