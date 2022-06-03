// Copyright 2022 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#pragma once

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/// `remove_dimensions` indicates that it is safe to remove redundant
/// dimensions. When input or output strides are provided, it might not be safe
/// to do so.
void xnn_normalize_transpose_permutation(
    const size_t num_dims,
    const size_t element_size,
    const size_t* perm,
    const size_t* shape,
    int remove_dimensions,
    size_t* normalized_num_dims,
    size_t* normalized_element_size,
    size_t* normalized_perm,
    size_t* normalized_shape);

#ifdef __cplusplus
}  // extern "C"
#endif
