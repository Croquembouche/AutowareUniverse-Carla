// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/SPAT.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SPAT__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__SPAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'intersections'
#include "v2x_msg/msg/detail/intersection_state__struct.h"

/// Struct defined in msg/SPAT in the package v2x_msg.
typedef struct v2x_msg__msg__SPAT
{
  int64_t timestamp;
  rosidl_runtime_c__String name;
  v2x_msg__msg__IntersectionState__Sequence intersections;
} v2x_msg__msg__SPAT;

// Struct for a sequence of v2x_msg__msg__SPAT.
typedef struct v2x_msg__msg__SPAT__Sequence
{
  v2x_msg__msg__SPAT * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__SPAT__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__SPAT__STRUCT_H_
