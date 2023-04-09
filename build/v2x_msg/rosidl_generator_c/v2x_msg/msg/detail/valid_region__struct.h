// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/ValidRegion.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VALID_REGION__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__VALID_REGION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "rosidl_runtime_c/string.h"
// Member 'area'
#include "v2x_msg/msg/detail/area__struct.h"

/// Struct defined in msg/ValidRegion in the package v2x_msg.
typedef struct v2x_msg__msg__ValidRegion
{
  rosidl_runtime_c__String direction;
  int64_t extent;
  v2x_msg__msg__Area area;
} v2x_msg__msg__ValidRegion;

// Struct for a sequence of v2x_msg__msg__ValidRegion.
typedef struct v2x_msg__msg__ValidRegion__Sequence
{
  v2x_msg__msg__ValidRegion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__ValidRegion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__VALID_REGION__STRUCT_H_
