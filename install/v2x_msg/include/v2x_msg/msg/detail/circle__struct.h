// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/Circle.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CIRCLE__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__CIRCLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "v2x_msg/msg/detail/position3_d__struct.h"

// Struct defined in msg/Circle in the package v2x_msg.
typedef struct v2x_msg__msg__Circle
{
  v2x_msg__msg__Position3D center;
  int64_t radius;
  int64_t units;
} v2x_msg__msg__Circle;

// Struct for a sequence of v2x_msg__msg__Circle.
typedef struct v2x_msg__msg__Circle__Sequence
{
  v2x_msg__msg__Circle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__Circle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__CIRCLE__STRUCT_H_
