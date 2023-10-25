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


TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, k_eq_2) {
  GemmMicrokernelTester()
    .mr(3)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(3)
    .n(2)
    .k(2)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, strided_cn) {
  GemmMicrokernelTester()
    .mr(3)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(3)
    .n(2)
    .k(2)
    .cn_stride(5)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, k_eq_2_subtile) {
  for (uint32_t n = 1; n <= 2; n++) {
    for (uint32_t m = 1; m <= 3; m++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(m)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, k_eq_2_subtile_m) {
  for (uint32_t m = 1; m <= 3; m++) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(m)
      .n(2)
      .k(2)
      .iterations(1)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, k_eq_2_subtile_n) {
  for (uint32_t n = 1; n <= 2; n++) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(3)
      .n(n)
      .k(2)
      .iterations(1)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, k_lt_2) {
  for (size_t k = 1; k < 2; k++) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(3)
      .n(2)
      .k(k)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, k_lt_2_subtile) {
  for (size_t k = 1; k < 2; k++) {
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, k_gt_2) {
  for (size_t k = 3; k < 4; k++) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(3)
      .n(2)
      .k(k)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, k_gt_2_subtile) {
  for (size_t k = 3; k < 4; k++) {
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, k_div_2) {
  for (size_t k = 4; k <= 20; k += 2) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(3)
      .n(2)
      .k(k)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, k_div_2_subtile) {
  for (size_t k = 4; k <= 20; k += 2) {
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, n_gt_2) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(3)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, n_gt_2_strided_cn) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(3)
        .n(n)
        .k(k)
        .cn_stride(5)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, n_gt_2_subtile) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, n_div_2) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(3)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, n_div_2_strided_cn) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(3)
        .n(n)
        .k(k)
        .cn_stride(5)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, n_div_2_subtile) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, small_kernel) {
  for (size_t k = 1; k <= 10; k += 3) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(3)
      .n(2)
      .k(k)
      .ks(3)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, small_kernel_subtile) {
  for (size_t k = 1; k <= 10; k += 3) {
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .ks(3)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, n_gt_2_small_kernel) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(3)
        .n(n)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, n_div_2_small_kernel) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(3)
        .n(n)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, strided_cm_subtile) {
  for (size_t k = 1; k <= 10; k += 3) {
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .cm_stride(5)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, a_offset) {
  for (size_t k = 1; k <= 10; k += 3) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(3)
      .n(2)
      .k(k)
      .ks(3)
      .a_offset(37)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, zero) {
  for (size_t k = 1; k <= 10; k += 3) {
    for (uint32_t mz = 0; mz < 3; mz++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(3)
        .n(2)
        .k(k)
        .ks(3)
        .a_offset(37)
        .zero_index(mz)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, qmin) {
  GemmMicrokernelTester()
    .mr(3)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(3)
    .n(2)
    .k(2)
    .qmin(128)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, qmax) {
  GemmMicrokernelTester()
    .mr(3)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(3)
    .n(2)
    .k(2)
    .qmax(128)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X2__SCALAR, strided_cm) {
  GemmMicrokernelTester()
    .mr(3)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(3)
    .n(2)
    .k(2)
    .cm_stride(5)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}


TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, k_eq_2) {
  GemmMicrokernelTester()
    .mr(4)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(4)
    .n(2)
    .k(2)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, strided_cn) {
  GemmMicrokernelTester()
    .mr(4)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(4)
    .n(2)
    .k(2)
    .cn_stride(5)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, k_eq_2_subtile) {
  for (uint32_t n = 1; n <= 2; n++) {
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(m)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, k_eq_2_subtile_m) {
  for (uint32_t m = 1; m <= 4; m++) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(m)
      .n(2)
      .k(2)
      .iterations(1)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, k_eq_2_subtile_n) {
  for (uint32_t n = 1; n <= 2; n++) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(4)
      .n(n)
      .k(2)
      .iterations(1)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, k_lt_2) {
  for (size_t k = 1; k < 2; k++) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(4)
      .n(2)
      .k(k)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, k_lt_2_subtile) {
  for (size_t k = 1; k < 2; k++) {
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, k_gt_2) {
  for (size_t k = 3; k < 4; k++) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(4)
      .n(2)
      .k(k)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, k_gt_2_subtile) {
  for (size_t k = 3; k < 4; k++) {
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, k_div_2) {
  for (size_t k = 4; k <= 20; k += 2) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(4)
      .n(2)
      .k(k)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, k_div_2_subtile) {
  for (size_t k = 4; k <= 20; k += 2) {
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, n_gt_2) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, n_gt_2_strided_cn) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(k)
        .cn_stride(5)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, n_gt_2_subtile) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, n_div_2) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, n_div_2_strided_cn) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(k)
        .cn_stride(5)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, n_div_2_subtile) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, small_kernel) {
  for (size_t k = 1; k <= 10; k += 3) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(4)
      .n(2)
      .k(k)
      .ks(3)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, small_kernel_subtile) {
  for (size_t k = 1; k <= 10; k += 3) {
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .ks(3)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, n_gt_2_small_kernel) {
  for (uint32_t n = 3; n < 4; n++) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, n_div_2_small_kernel) {
  for (uint32_t n = 4; n <= 6; n += 2) {
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, strided_cm_subtile) {
  for (size_t k = 1; k <= 10; k += 3) {
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .cm_stride(5)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, a_offset) {
  for (size_t k = 1; k <= 10; k += 3) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(4)
      .n(2)
      .k(k)
      .ks(3)
      .a_offset(43)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, zero) {
  for (size_t k = 1; k <= 10; k += 3) {
    for (uint32_t mz = 0; mz < 4; mz++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .ks(3)
        .a_offset(43)
        .zero_index(mz)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, qmin) {
  GemmMicrokernelTester()
    .mr(4)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(4)
    .n(2)
    .k(2)
    .qmin(128)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, qmax) {
  GemmMicrokernelTester()
    .mr(4)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(4)
    .n(2)
    .k(2)
    .qmax(128)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}

TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X2__SCALAR, strided_cm) {
  GemmMicrokernelTester()
    .mr(4)
    .nr(2)
    .kr(1)
    .sr(1)
    .m(4)
    .n(2)
    .k(2)
    .cm_stride(5)
    .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x2__scalar, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
}


#if XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, k_eq_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(1)
      .n(8)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(1)
      .n(8)
      .k(16)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, k_eq_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, k_eq_16_subtile_m) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(m)
        .n(8)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, k_eq_16_subtile_n) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(1)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, k_lt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, k_gt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, k_div_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, k_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, n_div_8) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, a_offset) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, zero) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
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
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, qmin) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(1)
      .n(8)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, qmax) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(1)
      .n(8)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_1X8C8__NEONI8MM, strided_cm) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(1)
      .n(8)
      .k(16)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_1x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


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


#if XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, k_eq_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(2)
      .n(8)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(2)
      .n(8)
      .k(16)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, k_eq_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, k_eq_16_subtile_m) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(m)
        .n(8)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, k_eq_16_subtile_n) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(2)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, k_lt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(2)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, k_gt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(2)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, k_div_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(2)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, k_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, n_div_8) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(2)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, a_offset) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(2)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, zero) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t mz = 0; mz < 2; mz++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(2)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, qmin) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(2)
      .n(8)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, qmax) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(2)
      .n(8)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_2X8C8__NEONI8MM, strided_cm) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(2)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(2)
      .n(8)
      .k(16)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_2x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


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


#if XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, k_eq_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(3)
      .n(16)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(3)
      .n(16)
      .k(16)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, k_eq_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, k_eq_16_subtile_m) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, k_eq_16_subtile_n) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, k_lt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(3)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, k_gt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(3)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, k_div_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(3)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, k_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, n_gt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, n_gt_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, n_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, n_div_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, n_div_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, n_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, n_gt_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, n_div_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, a_offset) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, zero) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, qmin) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(3)
      .n(16)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, qmax) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(3)
      .n(16)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_3X16C8__NEONI8MM, strided_cm) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(3)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(3)
      .n(16)
      .k(16)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_3x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, k_eq_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(4)
      .n(8)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(4)
      .n(8)
      .k(16)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, k_eq_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, k_eq_16_subtile_m) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(m)
        .n(8)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, k_eq_16_subtile_n) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(4)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, k_lt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, k_gt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, k_div_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, k_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, n_div_8) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, a_offset) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(331)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, zero) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(331)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, qmin) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(4)
      .n(8)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, qmax) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(4)
      .n(8)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X8C8__NEONI8MM, strided_cm) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(4)
      .n(8)
      .k(16)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, k_eq_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(4)
      .n(16)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(4)
      .n(16)
      .k(16)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, k_eq_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, k_eq_16_subtile_m) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(m)
        .n(16)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, k_eq_16_subtile_n) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(4)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, k_lt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, k_gt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, k_div_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, k_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, n_gt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, n_gt_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, n_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, n_div_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, n_div_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, n_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, n_gt_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, n_div_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(8)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, a_offset) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(331)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, zero) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
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
          .a_offset(331)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, qmin) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(4)
      .n(16)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, qmax) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(4)
      .n(16)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_4X16C8__NEONI8MM, strided_cm) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(4)
      .n(16)
      .k(16)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_4x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, k_eq_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(6)
      .n(8)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(6)
      .n(8)
      .k(16)
      .cn_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, k_eq_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, k_eq_16_subtile_m) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(m)
        .n(8)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, k_eq_16_subtile_n) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(6)
        .n(n)
        .k(16)
        .iterations(1)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, k_lt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, k_gt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, k_div_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, k_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, n_div_8) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 80; k += 17) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(8)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, a_offset) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(8)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(487)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, zero) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k <= 80; k += 17) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(8)
          .sr(1)
          .m(6)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(487)
          .zero_index(mz)
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, qmin) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(6)
      .n(8)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, qmax) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(6)
      .n(8)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X8C8__NEONI8MM, strided_cm) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(8)
      .sr(1)
      .m(6)
      .n(8)
      .k(16)
      .cm_stride(11)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x8c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


#if XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)
  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, k_eq_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(16)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(16)
      .cn_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, k_eq_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, k_eq_16_subtile_m) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, k_eq_16_subtile_n) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, k_lt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, k_gt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, k_div_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    for (size_t k = 32; k <= 160; k += 16) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(16)
        .kr(8)
        .sr(1)
        .m(6)
        .n(16)
        .k(k)
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, k_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, n_gt_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, n_gt_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, n_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, n_div_16) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, n_div_16_strided_cn) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, n_div_16_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, n_gt_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, n_div_16_small_kernel) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
            .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
        }
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, a_offset) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
        .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, zero) {
    TEST_REQUIRES_ARM_NEON_I8MM;
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
          .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
      }
    }
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, qmin) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(16)
      .qmin(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, qmax) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(16)
      .qmax(128)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }

  TEST(QD8_F32_QC8W_IGEMM_MINMAX_6X16C8__NEONI8MM, strided_cm) {
    TEST_REQUIRES_ARM_NEON_I8MM;
    GemmMicrokernelTester()
      .mr(6)
      .nr(16)
      .kr(8)
      .sr(1)
      .m(6)
      .n(16)
      .k(16)
      .cm_stride(19)
      .Test(xnn_qd8_f32_qc8w_igemm_minmax_ukernel_6x16c8__neoni8mm, xnn_init_f32_minmax_scalar_params, xnn_pack_qs8_conv_goki_w);
  }
#endif  // XNN_ENABLE_ARM_I8MM && (XNN_ARCH_ARM || XNN_ARCH_ARM64)


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
