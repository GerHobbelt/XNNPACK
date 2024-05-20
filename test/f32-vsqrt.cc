// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/f32-vsqrt.yaml
//   Generator: tools/generate-vunary-test.py


#include <array>
#include <cmath>
#include <cstddef>
#include <limits>

#include <xnnpack/common.h>
#include <xnnpack/isa-checks.h>
#include <xnnpack/microparams-init.h>
#include <xnnpack/microparams.h>
#include <xnnpack/vunary.h>

#include <gtest/gtest.h>
#include "vunary-microkernel-tester.h"


#if XNN_ARCH_ARM64
  TEST(F32_VSQRT__AARCH64_NEON_SQRT_U4, batch_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_vsqrt_ukernel__aarch64_neon_sqrt_u4);
  }

  TEST(F32_VSQRT__AARCH64_NEON_SQRT_U4, batch_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__aarch64_neon_sqrt_u4);
    }
  }

  TEST(F32_VSQRT__AARCH64_NEON_SQRT_U4, batch_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size < 4; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__aarch64_neon_sqrt_u4);
    }
  }

  TEST(F32_VSQRT__AARCH64_NEON_SQRT_U4, batch_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 4 + 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__aarch64_neon_sqrt_u4);
    }
  }

  TEST(F32_VSQRT__AARCH64_NEON_SQRT_U4, inplace) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__aarch64_neon_sqrt_u4);
    }
  }

  TEST(F32_VSQRT__AARCH64_NEON_SQRT_U4, special_values) {
    TEST_REQUIRES_ARM_NEON;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    xnn_f32_vsqrt_ukernel__aarch64_neon_sqrt_u4(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_VSQRT__AARCH64_NEON_SQRT_U8, batch_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vsqrt_ukernel__aarch64_neon_sqrt_u8);
  }

  TEST(F32_VSQRT__AARCH64_NEON_SQRT_U8, batch_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__aarch64_neon_sqrt_u8);
    }
  }

  TEST(F32_VSQRT__AARCH64_NEON_SQRT_U8, batch_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__aarch64_neon_sqrt_u8);
    }
  }

  TEST(F32_VSQRT__AARCH64_NEON_SQRT_U8, batch_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 8 + 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__aarch64_neon_sqrt_u8);
    }
  }

  TEST(F32_VSQRT__AARCH64_NEON_SQRT_U8, inplace) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__aarch64_neon_sqrt_u8);
    }
  }

  TEST(F32_VSQRT__AARCH64_NEON_SQRT_U8, special_values) {
    TEST_REQUIRES_ARM_NEON;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    xnn_f32_vsqrt_ukernel__aarch64_neon_sqrt_u8(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_VSQRT__AARCH64_NEON_SQRT_U16, batch_eq_16) {
    TEST_REQUIRES_ARM_NEON;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_vsqrt_ukernel__aarch64_neon_sqrt_u16);
  }

  TEST(F32_VSQRT__AARCH64_NEON_SQRT_U16, batch_div_16) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__aarch64_neon_sqrt_u16);
    }
  }

  TEST(F32_VSQRT__AARCH64_NEON_SQRT_U16, batch_lt_16) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__aarch64_neon_sqrt_u16);
    }
  }

  TEST(F32_VSQRT__AARCH64_NEON_SQRT_U16, batch_gt_16) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 16 + 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__aarch64_neon_sqrt_u16);
    }
  }

  TEST(F32_VSQRT__AARCH64_NEON_SQRT_U16, inplace) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__aarch64_neon_sqrt_u16);
    }
  }

  TEST(F32_VSQRT__AARCH64_NEON_SQRT_U16, special_values) {
    TEST_REQUIRES_ARM_NEON;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    xnn_f32_vsqrt_ukernel__aarch64_neon_sqrt_u16(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ENABLE_RISCV_VECTOR && XNN_ARCH_RISCV
  TEST(F32_VSQRT__RVV_SQRT_U1V, batch_eq_1v) {
    TEST_REQUIRES_RISCV_VECTOR;
    VUnaryMicrokernelTester()
      .batch_size(1 * xnn_init_hardware_config()->vlenb / sizeof(float))
      .Test(xnn_f32_vsqrt_ukernel__rvv_sqrt_u1v);
  }

  TEST(F32_VSQRT__RVV_SQRT_U1V, batch_gt_1v) {
    TEST_REQUIRES_RISCV_VECTOR;
    for (size_t batch_size = 1 * xnn_init_hardware_config()->vlenb / sizeof(float) + 1; batch_size < 10 * xnn_init_hardware_config()->vlenb / sizeof(float); batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__rvv_sqrt_u1v);
    }
  }

  TEST(F32_VSQRT__RVV_SQRT_U1V, inplace) {
    TEST_REQUIRES_RISCV_VECTOR;
    for (size_t batch_size = 1; batch_size <= 5 * xnn_init_hardware_config()->vlenb / sizeof(float); batch_size += 1) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__rvv_sqrt_u1v);
    }
  }

  TEST(F32_VSQRT__RVV_SQRT_U1V, special_values) {
    TEST_REQUIRES_RISCV_VECTOR;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    xnn_f32_vsqrt_ukernel__rvv_sqrt_u1v(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ENABLE_RISCV_VECTOR && XNN_ARCH_RISCV


#if XNN_ENABLE_RISCV_VECTOR && XNN_ARCH_RISCV
  TEST(F32_VSQRT__RVV_SQRT_U2V, batch_eq_2v) {
    TEST_REQUIRES_RISCV_VECTOR;
    VUnaryMicrokernelTester()
      .batch_size(2 * xnn_init_hardware_config()->vlenb / sizeof(float))
      .Test(xnn_f32_vsqrt_ukernel__rvv_sqrt_u2v);
  }

  TEST(F32_VSQRT__RVV_SQRT_U2V, batch_div_2v) {
    TEST_REQUIRES_RISCV_VECTOR;
    for (size_t batch_size = 4 * xnn_init_hardware_config()->vlenb / sizeof(float); batch_size < 20 * xnn_init_hardware_config()->vlenb / sizeof(float); batch_size += 2 * xnn_init_hardware_config()->vlenb / sizeof(float)) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__rvv_sqrt_u2v);
    }
  }

  TEST(F32_VSQRT__RVV_SQRT_U2V, batch_lt_2v) {
    TEST_REQUIRES_RISCV_VECTOR;
    for (size_t batch_size = 1; batch_size < 2 * xnn_init_hardware_config()->vlenb / sizeof(float); batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__rvv_sqrt_u2v);
    }
  }

  TEST(F32_VSQRT__RVV_SQRT_U2V, batch_gt_2v) {
    TEST_REQUIRES_RISCV_VECTOR;
    for (size_t batch_size = 2 * xnn_init_hardware_config()->vlenb / sizeof(float) + 1; batch_size < 4 * xnn_init_hardware_config()->vlenb / sizeof(float); batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__rvv_sqrt_u2v);
    }
  }

  TEST(F32_VSQRT__RVV_SQRT_U2V, inplace) {
    TEST_REQUIRES_RISCV_VECTOR;
    for (size_t batch_size = 1; batch_size <= 10 * xnn_init_hardware_config()->vlenb / sizeof(float); batch_size += 1) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__rvv_sqrt_u2v);
    }
  }

  TEST(F32_VSQRT__RVV_SQRT_U2V, special_values) {
    TEST_REQUIRES_RISCV_VECTOR;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    xnn_f32_vsqrt_ukernel__rvv_sqrt_u2v(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ENABLE_RISCV_VECTOR && XNN_ARCH_RISCV


#if XNN_ENABLE_RISCV_VECTOR && XNN_ARCH_RISCV
  TEST(F32_VSQRT__RVV_SQRT_U4V, batch_eq_4v) {
    TEST_REQUIRES_RISCV_VECTOR;
    VUnaryMicrokernelTester()
      .batch_size(4 * xnn_init_hardware_config()->vlenb / sizeof(float))
      .Test(xnn_f32_vsqrt_ukernel__rvv_sqrt_u4v);
  }

  TEST(F32_VSQRT__RVV_SQRT_U4V, batch_div_4v) {
    TEST_REQUIRES_RISCV_VECTOR;
    for (size_t batch_size = 8 * xnn_init_hardware_config()->vlenb / sizeof(float); batch_size < 40 * xnn_init_hardware_config()->vlenb / sizeof(float); batch_size += 4 * xnn_init_hardware_config()->vlenb / sizeof(float)) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__rvv_sqrt_u4v);
    }
  }

  TEST(F32_VSQRT__RVV_SQRT_U4V, batch_lt_4v) {
    TEST_REQUIRES_RISCV_VECTOR;
    for (size_t batch_size = 1; batch_size < 4 * xnn_init_hardware_config()->vlenb / sizeof(float); batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__rvv_sqrt_u4v);
    }
  }

  TEST(F32_VSQRT__RVV_SQRT_U4V, batch_gt_4v) {
    TEST_REQUIRES_RISCV_VECTOR;
    for (size_t batch_size = 4 * xnn_init_hardware_config()->vlenb / sizeof(float) + 1; batch_size < 8 * xnn_init_hardware_config()->vlenb / sizeof(float); batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__rvv_sqrt_u4v);
    }
  }

  TEST(F32_VSQRT__RVV_SQRT_U4V, inplace) {
    TEST_REQUIRES_RISCV_VECTOR;
    for (size_t batch_size = 1; batch_size <= 20 * xnn_init_hardware_config()->vlenb / sizeof(float); batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__rvv_sqrt_u4v);
    }
  }

  TEST(F32_VSQRT__RVV_SQRT_U4V, special_values) {
    TEST_REQUIRES_RISCV_VECTOR;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    xnn_f32_vsqrt_ukernel__rvv_sqrt_u4v(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ENABLE_RISCV_VECTOR && XNN_ARCH_RISCV


#if XNN_ENABLE_RISCV_VECTOR && XNN_ARCH_RISCV
  TEST(F32_VSQRT__RVV_SQRT_U8V, batch_eq_8v) {
    TEST_REQUIRES_RISCV_VECTOR;
    VUnaryMicrokernelTester()
      .batch_size(8 * xnn_init_hardware_config()->vlenb / sizeof(float))
      .Test(xnn_f32_vsqrt_ukernel__rvv_sqrt_u8v);
  }

  TEST(F32_VSQRT__RVV_SQRT_U8V, batch_div_8v) {
    TEST_REQUIRES_RISCV_VECTOR;
    for (size_t batch_size = 16 * xnn_init_hardware_config()->vlenb / sizeof(float); batch_size < 80 * xnn_init_hardware_config()->vlenb / sizeof(float); batch_size += 8 * xnn_init_hardware_config()->vlenb / sizeof(float)) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__rvv_sqrt_u8v);
    }
  }

  TEST(F32_VSQRT__RVV_SQRT_U8V, batch_lt_8v) {
    TEST_REQUIRES_RISCV_VECTOR;
    for (size_t batch_size = 1; batch_size < 8 * xnn_init_hardware_config()->vlenb / sizeof(float); batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__rvv_sqrt_u8v);
    }
  }

  TEST(F32_VSQRT__RVV_SQRT_U8V, batch_gt_8v) {
    TEST_REQUIRES_RISCV_VECTOR;
    for (size_t batch_size = 8 * xnn_init_hardware_config()->vlenb / sizeof(float) + 1; batch_size < 16 * xnn_init_hardware_config()->vlenb / sizeof(float); batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__rvv_sqrt_u8v);
    }
  }

  TEST(F32_VSQRT__RVV_SQRT_U8V, inplace) {
    TEST_REQUIRES_RISCV_VECTOR;
    for (size_t batch_size = 1; batch_size <= 40 * xnn_init_hardware_config()->vlenb / sizeof(float); batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__rvv_sqrt_u8v);
    }
  }

  TEST(F32_VSQRT__RVV_SQRT_U8V, special_values) {
    TEST_REQUIRES_RISCV_VECTOR;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    xnn_f32_vsqrt_ukernel__rvv_sqrt_u8v(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ENABLE_RISCV_VECTOR && XNN_ARCH_RISCV


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VSQRT__SSE_SQRT_U4, batch_eq_4) {
    TEST_REQUIRES_X86_SSE;
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_vsqrt_ukernel__sse_sqrt_u4);
  }

  TEST(F32_VSQRT__SSE_SQRT_U4, batch_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__sse_sqrt_u4);
    }
  }

  TEST(F32_VSQRT__SSE_SQRT_U4, batch_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size < 4; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__sse_sqrt_u4);
    }
  }

  TEST(F32_VSQRT__SSE_SQRT_U4, batch_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 4 + 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__sse_sqrt_u4);
    }
  }

  TEST(F32_VSQRT__SSE_SQRT_U4, inplace) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__sse_sqrt_u4);
    }
  }

  TEST(F32_VSQRT__SSE_SQRT_U4, special_values) {
    TEST_REQUIRES_X86_SSE;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    xnn_f32_vsqrt_ukernel__sse_sqrt_u4(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VSQRT__SSE_SQRT_U8, batch_eq_8) {
    TEST_REQUIRES_X86_SSE;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vsqrt_ukernel__sse_sqrt_u8);
  }

  TEST(F32_VSQRT__SSE_SQRT_U8, batch_div_8) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__sse_sqrt_u8);
    }
  }

  TEST(F32_VSQRT__SSE_SQRT_U8, batch_lt_8) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__sse_sqrt_u8);
    }
  }

  TEST(F32_VSQRT__SSE_SQRT_U8, batch_gt_8) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 8 + 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__sse_sqrt_u8);
    }
  }

  TEST(F32_VSQRT__SSE_SQRT_U8, inplace) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__sse_sqrt_u8);
    }
  }

  TEST(F32_VSQRT__SSE_SQRT_U8, special_values) {
    TEST_REQUIRES_X86_SSE;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    xnn_f32_vsqrt_ukernel__sse_sqrt_u8(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VSQRT__SSE_SQRT_U16, batch_eq_16) {
    TEST_REQUIRES_X86_SSE;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_vsqrt_ukernel__sse_sqrt_u16);
  }

  TEST(F32_VSQRT__SSE_SQRT_U16, batch_div_16) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__sse_sqrt_u16);
    }
  }

  TEST(F32_VSQRT__SSE_SQRT_U16, batch_lt_16) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__sse_sqrt_u16);
    }
  }

  TEST(F32_VSQRT__SSE_SQRT_U16, batch_gt_16) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 16 + 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__sse_sqrt_u16);
    }
  }

  TEST(F32_VSQRT__SSE_SQRT_U16, inplace) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__sse_sqrt_u16);
    }
  }

  TEST(F32_VSQRT__SSE_SQRT_U16, special_values) {
    TEST_REQUIRES_X86_SSE;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    xnn_f32_vsqrt_ukernel__sse_sqrt_u16(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VSQRT__SSE_RSQRT_U4, batch_eq_4) {
    TEST_REQUIRES_X86_SSE;
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_vsqrt_ukernel__sse_rsqrt_u4, xnn_init_f32_sqrt_sse_params);
  }

  TEST(F32_VSQRT__SSE_RSQRT_U4, batch_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__sse_rsqrt_u4, xnn_init_f32_sqrt_sse_params);
    }
  }

  TEST(F32_VSQRT__SSE_RSQRT_U4, batch_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size < 4; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__sse_rsqrt_u4, xnn_init_f32_sqrt_sse_params);
    }
  }

  TEST(F32_VSQRT__SSE_RSQRT_U4, batch_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 4 + 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__sse_rsqrt_u4, xnn_init_f32_sqrt_sse_params);
    }
  }

  TEST(F32_VSQRT__SSE_RSQRT_U4, inplace) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__sse_rsqrt_u4, xnn_init_f32_sqrt_sse_params);
    }
  }

  TEST(F32_VSQRT__SSE_RSQRT_U4, special_values) {
    TEST_REQUIRES_X86_SSE;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    union xnn_f32_sqrt_params params;
    xnn_init_f32_sqrt_sse_params(&params);
    xnn_f32_vsqrt_ukernel__sse_rsqrt_u4(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), &params);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VSQRT__SSE_RSQRT_U8, batch_eq_8) {
    TEST_REQUIRES_X86_SSE;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vsqrt_ukernel__sse_rsqrt_u8, xnn_init_f32_sqrt_sse_params);
  }

  TEST(F32_VSQRT__SSE_RSQRT_U8, batch_div_8) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__sse_rsqrt_u8, xnn_init_f32_sqrt_sse_params);
    }
  }

  TEST(F32_VSQRT__SSE_RSQRT_U8, batch_lt_8) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__sse_rsqrt_u8, xnn_init_f32_sqrt_sse_params);
    }
  }

  TEST(F32_VSQRT__SSE_RSQRT_U8, batch_gt_8) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 8 + 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__sse_rsqrt_u8, xnn_init_f32_sqrt_sse_params);
    }
  }

  TEST(F32_VSQRT__SSE_RSQRT_U8, inplace) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__sse_rsqrt_u8, xnn_init_f32_sqrt_sse_params);
    }
  }

  TEST(F32_VSQRT__SSE_RSQRT_U8, special_values) {
    TEST_REQUIRES_X86_SSE;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    union xnn_f32_sqrt_params params;
    xnn_init_f32_sqrt_sse_params(&params);
    xnn_f32_vsqrt_ukernel__sse_rsqrt_u8(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), &params);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VSQRT__SSE_RSQRT_U12, batch_eq_12) {
    TEST_REQUIRES_X86_SSE;
    VUnaryMicrokernelTester()
      .batch_size(12)
      .Test(xnn_f32_vsqrt_ukernel__sse_rsqrt_u12, xnn_init_f32_sqrt_sse_params);
  }

  TEST(F32_VSQRT__SSE_RSQRT_U12, batch_div_12) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 24; batch_size < 120; batch_size += 12) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__sse_rsqrt_u12, xnn_init_f32_sqrt_sse_params);
    }
  }

  TEST(F32_VSQRT__SSE_RSQRT_U12, batch_lt_12) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size < 12; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__sse_rsqrt_u12, xnn_init_f32_sqrt_sse_params);
    }
  }

  TEST(F32_VSQRT__SSE_RSQRT_U12, batch_gt_12) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 12 + 1; batch_size < 24; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__sse_rsqrt_u12, xnn_init_f32_sqrt_sse_params);
    }
  }

  TEST(F32_VSQRT__SSE_RSQRT_U12, inplace) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 60; batch_size += 11) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__sse_rsqrt_u12, xnn_init_f32_sqrt_sse_params);
    }
  }

  TEST(F32_VSQRT__SSE_RSQRT_U12, special_values) {
    TEST_REQUIRES_X86_SSE;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    union xnn_f32_sqrt_params params;
    xnn_init_f32_sqrt_sse_params(&params);
    xnn_f32_vsqrt_ukernel__sse_rsqrt_u12(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), &params);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VSQRT__AVX_SQRT_U8, batch_eq_8) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vsqrt_ukernel__avx_sqrt_u8, xnn_init_f32_sqrt_avx_params);
  }

  TEST(F32_VSQRT__AVX_SQRT_U8, batch_div_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx_sqrt_u8, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_SQRT_U8, batch_lt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx_sqrt_u8, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_SQRT_U8, batch_gt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 8 + 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx_sqrt_u8, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_SQRT_U8, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__avx_sqrt_u8, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_SQRT_U8, special_values) {
    TEST_REQUIRES_X86_AVX;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    union xnn_f32_sqrt_params params;
    xnn_init_f32_sqrt_avx_params(&params);
    xnn_f32_vsqrt_ukernel__avx_sqrt_u8(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), &params);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VSQRT__AVX_SQRT_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_vsqrt_ukernel__avx_sqrt_u16, xnn_init_f32_sqrt_avx_params);
  }

  TEST(F32_VSQRT__AVX_SQRT_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx_sqrt_u16, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_SQRT_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx_sqrt_u16, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_SQRT_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 16 + 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx_sqrt_u16, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_SQRT_U16, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__avx_sqrt_u16, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_SQRT_U16, special_values) {
    TEST_REQUIRES_X86_AVX;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    union xnn_f32_sqrt_params params;
    xnn_init_f32_sqrt_avx_params(&params);
    xnn_f32_vsqrt_ukernel__avx_sqrt_u16(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), &params);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VSQRT__AVX_SQRT_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_vsqrt_ukernel__avx_sqrt_u32, xnn_init_f32_sqrt_avx_params);
  }

  TEST(F32_VSQRT__AVX_SQRT_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx_sqrt_u32, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_SQRT_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx_sqrt_u32, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_SQRT_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 32 + 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx_sqrt_u32, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_SQRT_U32, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__avx_sqrt_u32, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_SQRT_U32, special_values) {
    TEST_REQUIRES_X86_AVX;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    union xnn_f32_sqrt_params params;
    xnn_init_f32_sqrt_avx_params(&params);
    xnn_f32_vsqrt_ukernel__avx_sqrt_u32(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), &params);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VSQRT__AVX_RSQRT_U8, batch_eq_8) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vsqrt_ukernel__avx_rsqrt_u8, xnn_init_f32_sqrt_avx_params);
  }

  TEST(F32_VSQRT__AVX_RSQRT_U8, batch_div_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx_rsqrt_u8, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_RSQRT_U8, batch_lt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx_rsqrt_u8, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_RSQRT_U8, batch_gt_8) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 8 + 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx_rsqrt_u8, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_RSQRT_U8, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__avx_rsqrt_u8, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_RSQRT_U8, special_values) {
    TEST_REQUIRES_X86_AVX;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    union xnn_f32_sqrt_params params;
    xnn_init_f32_sqrt_avx_params(&params);
    xnn_f32_vsqrt_ukernel__avx_rsqrt_u8(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), &params);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VSQRT__AVX_RSQRT_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_vsqrt_ukernel__avx_rsqrt_u16, xnn_init_f32_sqrt_avx_params);
  }

  TEST(F32_VSQRT__AVX_RSQRT_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx_rsqrt_u16, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_RSQRT_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx_rsqrt_u16, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_RSQRT_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 16 + 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx_rsqrt_u16, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_RSQRT_U16, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__avx_rsqrt_u16, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_RSQRT_U16, special_values) {
    TEST_REQUIRES_X86_AVX;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    union xnn_f32_sqrt_params params;
    xnn_init_f32_sqrt_avx_params(&params);
    xnn_f32_vsqrt_ukernel__avx_rsqrt_u16(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), &params);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VSQRT__AVX_RSQRT_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_vsqrt_ukernel__avx_rsqrt_u32, xnn_init_f32_sqrt_avx_params);
  }

  TEST(F32_VSQRT__AVX_RSQRT_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx_rsqrt_u32, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_RSQRT_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx_rsqrt_u32, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_RSQRT_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 32 + 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx_rsqrt_u32, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_RSQRT_U32, inplace) {
    TEST_REQUIRES_X86_AVX;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__avx_rsqrt_u32, xnn_init_f32_sqrt_avx_params);
    }
  }

  TEST(F32_VSQRT__AVX_RSQRT_U32, special_values) {
    TEST_REQUIRES_X86_AVX;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    union xnn_f32_sqrt_params params;
    xnn_init_f32_sqrt_avx_params(&params);
    xnn_f32_vsqrt_ukernel__avx_rsqrt_u32(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), &params);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VSQRT__FMA3_RSQRT_U8, batch_eq_8) {
    TEST_REQUIRES_X86_FMA3;
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vsqrt_ukernel__fma3_rsqrt_u8, xnn_init_f32_sqrt_fma_params);
  }

  TEST(F32_VSQRT__FMA3_RSQRT_U8, batch_div_8) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__fma3_rsqrt_u8, xnn_init_f32_sqrt_fma_params);
    }
  }

  TEST(F32_VSQRT__FMA3_RSQRT_U8, batch_lt_8) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__fma3_rsqrt_u8, xnn_init_f32_sqrt_fma_params);
    }
  }

  TEST(F32_VSQRT__FMA3_RSQRT_U8, batch_gt_8) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 8 + 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__fma3_rsqrt_u8, xnn_init_f32_sqrt_fma_params);
    }
  }

  TEST(F32_VSQRT__FMA3_RSQRT_U8, inplace) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__fma3_rsqrt_u8, xnn_init_f32_sqrt_fma_params);
    }
  }

  TEST(F32_VSQRT__FMA3_RSQRT_U8, special_values) {
    TEST_REQUIRES_X86_FMA3;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    union xnn_f32_sqrt_params params;
    xnn_init_f32_sqrt_fma_params(&params);
    xnn_f32_vsqrt_ukernel__fma3_rsqrt_u8(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), &params);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VSQRT__FMA3_RSQRT_U16, batch_eq_16) {
    TEST_REQUIRES_X86_FMA3;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_vsqrt_ukernel__fma3_rsqrt_u16, xnn_init_f32_sqrt_fma_params);
  }

  TEST(F32_VSQRT__FMA3_RSQRT_U16, batch_div_16) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__fma3_rsqrt_u16, xnn_init_f32_sqrt_fma_params);
    }
  }

  TEST(F32_VSQRT__FMA3_RSQRT_U16, batch_lt_16) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__fma3_rsqrt_u16, xnn_init_f32_sqrt_fma_params);
    }
  }

  TEST(F32_VSQRT__FMA3_RSQRT_U16, batch_gt_16) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 16 + 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__fma3_rsqrt_u16, xnn_init_f32_sqrt_fma_params);
    }
  }

  TEST(F32_VSQRT__FMA3_RSQRT_U16, inplace) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__fma3_rsqrt_u16, xnn_init_f32_sqrt_fma_params);
    }
  }

  TEST(F32_VSQRT__FMA3_RSQRT_U16, special_values) {
    TEST_REQUIRES_X86_FMA3;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    union xnn_f32_sqrt_params params;
    xnn_init_f32_sqrt_fma_params(&params);
    xnn_f32_vsqrt_ukernel__fma3_rsqrt_u16(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), &params);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VSQRT__FMA3_RSQRT_U32, batch_eq_32) {
    TEST_REQUIRES_X86_FMA3;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_vsqrt_ukernel__fma3_rsqrt_u32, xnn_init_f32_sqrt_fma_params);
  }

  TEST(F32_VSQRT__FMA3_RSQRT_U32, batch_div_32) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__fma3_rsqrt_u32, xnn_init_f32_sqrt_fma_params);
    }
  }

  TEST(F32_VSQRT__FMA3_RSQRT_U32, batch_lt_32) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__fma3_rsqrt_u32, xnn_init_f32_sqrt_fma_params);
    }
  }

  TEST(F32_VSQRT__FMA3_RSQRT_U32, batch_gt_32) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 32 + 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__fma3_rsqrt_u32, xnn_init_f32_sqrt_fma_params);
    }
  }

  TEST(F32_VSQRT__FMA3_RSQRT_U32, inplace) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__fma3_rsqrt_u32, xnn_init_f32_sqrt_fma_params);
    }
  }

  TEST(F32_VSQRT__FMA3_RSQRT_U32, special_values) {
    TEST_REQUIRES_X86_FMA3;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    union xnn_f32_sqrt_params params;
    xnn_init_f32_sqrt_fma_params(&params);
    xnn_f32_vsqrt_ukernel__fma3_rsqrt_u32(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), &params);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VSQRT__AVX512F_RSQRT_U16, batch_eq_16) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_vsqrt_ukernel__avx512f_rsqrt_u16, xnn_init_f32_sqrt_avx512_params);
  }

  TEST(F32_VSQRT__AVX512F_RSQRT_U16, batch_div_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx512f_rsqrt_u16, xnn_init_f32_sqrt_avx512_params);
    }
  }

  TEST(F32_VSQRT__AVX512F_RSQRT_U16, batch_lt_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx512f_rsqrt_u16, xnn_init_f32_sqrt_avx512_params);
    }
  }

  TEST(F32_VSQRT__AVX512F_RSQRT_U16, batch_gt_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 16 + 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx512f_rsqrt_u16, xnn_init_f32_sqrt_avx512_params);
    }
  }

  TEST(F32_VSQRT__AVX512F_RSQRT_U16, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__avx512f_rsqrt_u16, xnn_init_f32_sqrt_avx512_params);
    }
  }

  TEST(F32_VSQRT__AVX512F_RSQRT_U16, special_values) {
    TEST_REQUIRES_X86_AVX512F;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    union xnn_f32_sqrt_params params;
    xnn_init_f32_sqrt_avx512_params(&params);
    xnn_f32_vsqrt_ukernel__avx512f_rsqrt_u16(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), &params);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VSQRT__AVX512F_RSQRT_U32, batch_eq_32) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(32)
      .Test(xnn_f32_vsqrt_ukernel__avx512f_rsqrt_u32, xnn_init_f32_sqrt_avx512_params);
  }

  TEST(F32_VSQRT__AVX512F_RSQRT_U32, batch_div_32) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 64; batch_size < 320; batch_size += 32) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx512f_rsqrt_u32, xnn_init_f32_sqrt_avx512_params);
    }
  }

  TEST(F32_VSQRT__AVX512F_RSQRT_U32, batch_lt_32) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx512f_rsqrt_u32, xnn_init_f32_sqrt_avx512_params);
    }
  }

  TEST(F32_VSQRT__AVX512F_RSQRT_U32, batch_gt_32) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 32 + 1; batch_size < 64; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx512f_rsqrt_u32, xnn_init_f32_sqrt_avx512_params);
    }
  }

  TEST(F32_VSQRT__AVX512F_RSQRT_U32, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 160; batch_size += 31) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__avx512f_rsqrt_u32, xnn_init_f32_sqrt_avx512_params);
    }
  }

  TEST(F32_VSQRT__AVX512F_RSQRT_U32, special_values) {
    TEST_REQUIRES_X86_AVX512F;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    union xnn_f32_sqrt_params params;
    xnn_init_f32_sqrt_avx512_params(&params);
    xnn_f32_vsqrt_ukernel__avx512f_rsqrt_u32(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), &params);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VSQRT__AVX512F_RSQRT_U48, batch_eq_48) {
    TEST_REQUIRES_X86_AVX512F;
    VUnaryMicrokernelTester()
      .batch_size(48)
      .Test(xnn_f32_vsqrt_ukernel__avx512f_rsqrt_u48, xnn_init_f32_sqrt_avx512_params);
  }

  TEST(F32_VSQRT__AVX512F_RSQRT_U48, batch_div_48) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 96; batch_size < 480; batch_size += 48) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx512f_rsqrt_u48, xnn_init_f32_sqrt_avx512_params);
    }
  }

  TEST(F32_VSQRT__AVX512F_RSQRT_U48, batch_lt_48) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size < 48; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx512f_rsqrt_u48, xnn_init_f32_sqrt_avx512_params);
    }
  }

  TEST(F32_VSQRT__AVX512F_RSQRT_U48, batch_gt_48) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 48 + 1; batch_size < 96; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__avx512f_rsqrt_u48, xnn_init_f32_sqrt_avx512_params);
    }
  }

  TEST(F32_VSQRT__AVX512F_RSQRT_U48, inplace) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t batch_size = 1; batch_size <= 240; batch_size += 47) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__avx512f_rsqrt_u48, xnn_init_f32_sqrt_avx512_params);
    }
  }

  TEST(F32_VSQRT__AVX512F_RSQRT_U48, special_values) {
    TEST_REQUIRES_X86_AVX512F;
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    union xnn_f32_sqrt_params params;
    xnn_init_f32_sqrt_avx512_params(&params);
    xnn_f32_vsqrt_ukernel__avx512f_rsqrt_u48(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), &params);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VSQRT__WASMSIMD_SQRT_U4, batch_eq_4) {
    VUnaryMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_vsqrt_ukernel__wasmsimd_sqrt_u4);
  }

  TEST(F32_VSQRT__WASMSIMD_SQRT_U4, batch_div_4) {
    for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__wasmsimd_sqrt_u4);
    }
  }

  TEST(F32_VSQRT__WASMSIMD_SQRT_U4, batch_lt_4) {
    for (size_t batch_size = 1; batch_size < 4; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__wasmsimd_sqrt_u4);
    }
  }

  TEST(F32_VSQRT__WASMSIMD_SQRT_U4, batch_gt_4) {
    for (size_t batch_size = 4 + 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__wasmsimd_sqrt_u4);
    }
  }

  TEST(F32_VSQRT__WASMSIMD_SQRT_U4, inplace) {
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__wasmsimd_sqrt_u4);
    }
  }

  TEST(F32_VSQRT__WASMSIMD_SQRT_U4, special_values) {
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    xnn_f32_vsqrt_ukernel__wasmsimd_sqrt_u4(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VSQRT__WASMSIMD_SQRT_U8, batch_eq_8) {
    VUnaryMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vsqrt_ukernel__wasmsimd_sqrt_u8);
  }

  TEST(F32_VSQRT__WASMSIMD_SQRT_U8, batch_div_8) {
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__wasmsimd_sqrt_u8);
    }
  }

  TEST(F32_VSQRT__WASMSIMD_SQRT_U8, batch_lt_8) {
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__wasmsimd_sqrt_u8);
    }
  }

  TEST(F32_VSQRT__WASMSIMD_SQRT_U8, batch_gt_8) {
    for (size_t batch_size = 8 + 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__wasmsimd_sqrt_u8);
    }
  }

  TEST(F32_VSQRT__WASMSIMD_SQRT_U8, inplace) {
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__wasmsimd_sqrt_u8);
    }
  }

  TEST(F32_VSQRT__WASMSIMD_SQRT_U8, special_values) {
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    xnn_f32_vsqrt_ukernel__wasmsimd_sqrt_u8(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_VSQRT__WASMSIMD_SQRT_U16, batch_eq_16) {
    VUnaryMicrokernelTester()
      .batch_size(16)
      .Test(xnn_f32_vsqrt_ukernel__wasmsimd_sqrt_u16);
  }

  TEST(F32_VSQRT__WASMSIMD_SQRT_U16, batch_div_16) {
    for (size_t batch_size = 32; batch_size < 160; batch_size += 16) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__wasmsimd_sqrt_u16);
    }
  }

  TEST(F32_VSQRT__WASMSIMD_SQRT_U16, batch_lt_16) {
    for (size_t batch_size = 1; batch_size < 16; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__wasmsimd_sqrt_u16);
    }
  }

  TEST(F32_VSQRT__WASMSIMD_SQRT_U16, batch_gt_16) {
    for (size_t batch_size = 16 + 1; batch_size < 32; batch_size++) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vsqrt_ukernel__wasmsimd_sqrt_u16);
    }
  }

  TEST(F32_VSQRT__WASMSIMD_SQRT_U16, inplace) {
    for (size_t batch_size = 1; batch_size <= 80; batch_size += 15) {
      VUnaryMicrokernelTester()
        .batch_size(batch_size)
        .inplace(true)
        .Test(xnn_f32_vsqrt_ukernel__wasmsimd_sqrt_u16);
    }
  }

  TEST(F32_VSQRT__WASMSIMD_SQRT_U16, special_values) {
    std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
    std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
    std::array<float, 4> outputs;
    xnn_f32_vsqrt_ukernel__wasmsimd_sqrt_u16(
        inputs.size() * sizeof(float), inputs.data(), outputs.data(), nullptr);
    for (int i = 0; i < inputs.size(); i++) {
      if (std::isfinite(expected[i])) {
        ASSERT_NEAR(
            expected[i], outputs[i],
            2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
            << "for input " << inputs[i];
      } else {
        ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
            << "for input " << inputs[i];
      }
    }
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


TEST(F32_VSQRT__SCALAR_SQRT_U1, batch_eq_1) {
  VUnaryMicrokernelTester()
    .batch_size(1)
    .Test(xnn_f32_vsqrt_ukernel__scalar_sqrt_u1);
}

TEST(F32_VSQRT__SCALAR_SQRT_U1, batch_gt_1) {
  for (size_t batch_size = 1 + 1; batch_size < 10; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vsqrt_ukernel__scalar_sqrt_u1);
  }
}

TEST(F32_VSQRT__SCALAR_SQRT_U1, inplace) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_vsqrt_ukernel__scalar_sqrt_u1);
  }
}

TEST(F32_VSQRT__SCALAR_SQRT_U1, special_values) {
  std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
  std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
  std::array<float, 4> outputs;
  xnn_f32_vsqrt_ukernel__scalar_sqrt_u1(
      inputs.size() * sizeof(float), inputs.data(), outputs.data(), nullptr);
  for (int i = 0; i < inputs.size(); i++) {
    if (std::isfinite(expected[i])) {
      ASSERT_NEAR(
          expected[i], outputs[i],
          2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
          << "for input " << inputs[i];
    } else {
      ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
          << "for input " << inputs[i];
    }
  }
}

TEST(F32_VSQRT__SCALAR_SQRT_U2, batch_eq_2) {
  VUnaryMicrokernelTester()
    .batch_size(2)
    .Test(xnn_f32_vsqrt_ukernel__scalar_sqrt_u2);
}

TEST(F32_VSQRT__SCALAR_SQRT_U2, batch_div_2) {
  for (size_t batch_size = 4; batch_size < 20; batch_size += 2) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vsqrt_ukernel__scalar_sqrt_u2);
  }
}

TEST(F32_VSQRT__SCALAR_SQRT_U2, batch_lt_2) {
  for (size_t batch_size = 1; batch_size < 2; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vsqrt_ukernel__scalar_sqrt_u2);
  }
}

TEST(F32_VSQRT__SCALAR_SQRT_U2, batch_gt_2) {
  for (size_t batch_size = 2 + 1; batch_size < 4; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vsqrt_ukernel__scalar_sqrt_u2);
  }
}

TEST(F32_VSQRT__SCALAR_SQRT_U2, inplace) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_vsqrt_ukernel__scalar_sqrt_u2);
  }
}

TEST(F32_VSQRT__SCALAR_SQRT_U2, special_values) {
  std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
  std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
  std::array<float, 4> outputs;
  xnn_f32_vsqrt_ukernel__scalar_sqrt_u2(
      inputs.size() * sizeof(float), inputs.data(), outputs.data(), nullptr);
  for (int i = 0; i < inputs.size(); i++) {
    if (std::isfinite(expected[i])) {
      ASSERT_NEAR(
          expected[i], outputs[i],
          2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
          << "for input " << inputs[i];
    } else {
      ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
          << "for input " << inputs[i];
    }
  }
}

TEST(F32_VSQRT__SCALAR_SQRT_U4, batch_eq_4) {
  VUnaryMicrokernelTester()
    .batch_size(4)
    .Test(xnn_f32_vsqrt_ukernel__scalar_sqrt_u4);
}

TEST(F32_VSQRT__SCALAR_SQRT_U4, batch_div_4) {
  for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vsqrt_ukernel__scalar_sqrt_u4);
  }
}

TEST(F32_VSQRT__SCALAR_SQRT_U4, batch_lt_4) {
  for (size_t batch_size = 1; batch_size < 4; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vsqrt_ukernel__scalar_sqrt_u4);
  }
}

TEST(F32_VSQRT__SCALAR_SQRT_U4, batch_gt_4) {
  for (size_t batch_size = 4 + 1; batch_size < 8; batch_size++) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vsqrt_ukernel__scalar_sqrt_u4);
  }
}

TEST(F32_VSQRT__SCALAR_SQRT_U4, inplace) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    VUnaryMicrokernelTester()
      .batch_size(batch_size)
      .inplace(true)
      .Test(xnn_f32_vsqrt_ukernel__scalar_sqrt_u4);
  }
}

TEST(F32_VSQRT__SCALAR_SQRT_U4, special_values) {
  std::array<float, 4> inputs = {0.0f, -0.0f, 1.0f, -1.0f};
  std::array<float, 4> expected = {0.0, -0.0f, 1.0f, nanf("")};
  std::array<float, 4> outputs;
  xnn_f32_vsqrt_ukernel__scalar_sqrt_u4(
      inputs.size() * sizeof(float), inputs.data(), outputs.data(), nullptr);
  for (int i = 0; i < inputs.size(); i++) {
    if (std::isfinite(expected[i])) {
      ASSERT_NEAR(
          expected[i], outputs[i],
          2 * std::abs(expected[i]) * std::numeric_limits<float>::epsilon())
          << "for input " << inputs[i];
    } else {
      ASSERT_EQ(std::fpclassify(expected[i]), std::fpclassify(outputs[i]))
          << "for input " << inputs[i];
    }
  }
}