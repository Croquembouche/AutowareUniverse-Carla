// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/GeometricProjection.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__GEOMETRIC_PROJECTION__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__GEOMETRIC_PROJECTION__STRUCT_H_

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
// Member 'circle'
#include "v2x_msg/msg/detail/circle__struct.h"

/// Struct defined in msg/GeometricProjection in the package v2x_msg.
typedef struct v2x_msg__msg__GeometricProjection
{
  rosidl_runtime_c__String direction;
  int64_t extent;
  int64_t lanewidth;
  v2x_msg__msg__Circle circle;
} v2x_msg__msg__GeometricProjection;

// Struct for a sequence of v2x_msg__msg__GeometricProjection.
typedef struct v2x_msg__msg__GeometricProjection__Sequence
{
  v2x_msg__msg__GeometricProjection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__GeometricProjection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__GEOMETRIC_PROJECTION__STRUCT_H_
