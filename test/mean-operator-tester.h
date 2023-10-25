// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#pragma once

#include <gtest/gtest.h>

#include <algorithm>
#include <array>
#include <cmath>
#include <cstddef>
#include <cstdlib>
#include <initializer_list>
#include <limits>
#include <numeric>
#include <random>
#include <vector>

#include <fp16.h>

#include <xnnpack.h>


class MeanOperatorTester {
 public:
  inline MeanOperatorTester& input_shape(std::initializer_list<size_t> input_shape) {
    assert(input_shape.size() <= XNN_MAX_TENSOR_DIMS);
    this->input_shape_ = std::vector<size_t>(input_shape);
    return *this;
  }

  inline MeanOperatorTester& input_shape(const std::vector<size_t>& input_shape) {
    assert(input_shape.size() <= XNN_MAX_TENSOR_DIMS);
    this->input_shape_ = std::vector<size_t>(input_shape);
    return *this;
  }

  inline const std::vector<size_t>& input_shape() const {
    return this->input_shape_;
  }

  inline size_t num_input_dims() const {
    return this->input_shape_.size();
  }

  inline size_t num_input_elements() const {
    return std::accumulate(
      this->input_shape_.begin(), this->input_shape_.end(), size_t(1), std::multiplies<size_t>());
  }

  inline MeanOperatorTester& reduction_axes(std::initializer_list<size_t> reduction_axes) {
    assert(reduction_axes.size() <= XNN_MAX_TENSOR_DIMS);
    this->reduction_axes_ = std::vector<size_t>(reduction_axes);
    return *this;
  }

  inline MeanOperatorTester& reduction_axes(const std::vector<size_t> reduction_axes) {
    assert(reduction_axes.size() <= XNN_MAX_TENSOR_DIMS);
    this->reduction_axes_ = reduction_axes;
    return *this;
  }

  inline const std::vector<size_t>& reduction_axes() const {
    return this->reduction_axes_;
  }

  inline size_t num_reduction_axes() const {
    return this->reduction_axes_.size();
  }

  inline MeanOperatorTester& iterations(size_t iterations) {
    this->iterations_ = iterations;
    return *this;
  }

  inline size_t iterations() const {
    return this->iterations_;
  }

  void TestF32() const {
    std::random_device random_device;
    auto rng = std::mt19937(random_device());
    std::uniform_real_distribution<float> f32dist(0.01f, 1.0f);

    // Compute generalized shapes.
    std::array<size_t, XNN_MAX_TENSOR_DIMS> input_dims;
    std::array<size_t, XNN_MAX_TENSOR_DIMS> output_dims;
    std::fill(input_dims.begin(), input_dims.end(), 1);
    std::fill(output_dims.begin(), output_dims.end(), 1);
    std::copy(input_shape().cbegin(), input_shape().cend(), input_dims.end() - num_input_dims());
    std::copy(input_dims.cbegin(), input_dims.cend(), output_dims.begin());
    for (size_t axis : reduction_axes()) {
      (output_dims.end() - num_input_dims())[axis] = 1;
    }
    const size_t num_output_elements =
      std::accumulate(output_dims.begin(), output_dims.end(), size_t(1), std::multiplies<size_t>());

    // Compute generalized strides.
    std::array<size_t, XNN_MAX_TENSOR_DIMS> input_strides;
    std::array<size_t, XNN_MAX_TENSOR_DIMS> output_strides;
    size_t input_stride = 1, output_stride = 1;
    for (size_t i = XNN_MAX_TENSOR_DIMS; i != 0; i--) {
      input_strides[i - 1] = input_stride;
      output_strides[i - 1] = output_dims[i - 1] == 1 ? 0 : output_stride;
      input_stride *= input_dims[i - 1];
      output_stride *= output_dims[i - 1];
    }

    std::vector<float> input(XNN_EXTRA_BYTES / sizeof(float) + num_input_elements());
    std::vector<float> output(num_output_elements);
    std::vector<double> output_ref(num_output_elements);
    for (size_t iteration = 0; iteration < iterations(); iteration++) {
      std::generate(input.begin(), input.end(), [&]() { return f32dist(rng); });
      std::fill(output.begin(), output.end(), nanf(""));

      // Compute reference results.
      std::fill(output_ref.begin(), output_ref.end(), 0.0);
      for (size_t i = 0; i < input_dims[0]; i++) {
        for (size_t j = 0; j < input_dims[1]; j++) {
          for (size_t k = 0; k < input_dims[2]; k++) {
            for (size_t l = 0; l < input_dims[3]; l++) {
              for (size_t m = 0; m < input_dims[4]; m++) {
                for (size_t n = 0; n < input_dims[5]; n++) {
                  output_ref[i * output_strides[0] + j * output_strides[1] + k * output_strides[2] + l * output_strides[3] + m * output_strides[4] + n * output_strides[5]] +=
                    input[i * input_strides[0] + j * input_strides[1] + k * input_strides[2] + l * input_strides[3] + m * input_strides[4] + n * input_strides[5]];
                }
              }
            }
          }
        }
      }
      const double scale = double(num_input_elements() / num_output_elements);
      for (double& value : output_ref) {
        value /= scale;
      }

      // Create, setup, run, and destroy a mean operator.
      ASSERT_EQ(xnn_status_success, xnn_initialize(nullptr /* allocator */));
      xnn_operator_t mean_op = nullptr;

      ASSERT_EQ(xnn_status_success,
        xnn_create_mean_nd_f32(
          /*flags=*/0, &mean_op));
      ASSERT_NE(nullptr, mean_op);

      // Smart pointer to automatically delete mean_op.
      std::unique_ptr<xnn_operator, decltype(&xnn_delete_operator)> auto_mean_op(mean_op, xnn_delete_operator);

      ASSERT_EQ(xnn_status_success,
        xnn_setup_mean_nd_f32(
          mean_op,
          num_input_dims(),
          input_shape().data(),
          num_reduction_axes(),
          reduction_axes().data(),
          input.data(), output.data(),
          nullptr /* thread pool */));

      ASSERT_EQ(xnn_status_success,
        xnn_run_operator(mean_op, nullptr /* thread pool */));

      // Verify results.
      for (size_t i = 0; i < output_dims[0]; i++) {
        for (size_t j = 0; j < output_dims[1]; j++) {
          for (size_t k = 0; k < output_dims[2]; k++) {
            for (size_t l = 0; l < output_dims[3]; l++) {
              for (size_t m = 0; m < output_dims[4]; m++) {
                for (size_t n = 0; n < output_dims[5]; n++) {
                  const size_t index =
                    i * output_strides[0] + j * output_strides[1] + k * output_strides[2] + l * output_strides[3] + m * output_strides[4] + n * output_strides[5];
                  ASSERT_NEAR(output[index], output_ref[index], 3.0e-6f * std::abs(output_ref[index]))
                    << "(i, j, k, l, m, n) = (" << i << ", " << j << ", " << k << ", " << l << ", " << m << ", " << n << ")";
                }
              }
            }
          }
        }
      }
    }
  }

 private:
  std::vector<size_t> input_shape_;
  std::vector<size_t> reduction_axes_;
  size_t iterations_{3};
};
