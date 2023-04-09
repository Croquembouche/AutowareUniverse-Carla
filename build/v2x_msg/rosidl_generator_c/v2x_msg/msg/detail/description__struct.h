// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/Description.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__DESCRIPTION__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__DESCRIPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "v2x_msg/msg/detail/offset_system__struct.h"
// Member 'geometry'
#include "v2x_msg/msg/detail/geometric_projection__struct.h"
// Member 'oldregion'
#include "v2x_msg/msg/detail/valid_region__struct.h"

/// Struct defined in msg/Description in the package v2x_msg.
typedef struct v2x_msg__msg__Description
{
  v2x_msg__msg__OffsetSystem path;
  v2x_msg__msg__GeometricProjection geometry;
  v2x_msg__msg__ValidRegion oldregion;
} v2x_msg__msg__Description;

// Struct for a sequence of v2x_msg__msg__Description.
typedef struct v2x_msg__msg__Description__Sequence
{
  v2x_msg__msg__Description * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__Description__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__DESCRIPTION__STRUCT_H_
