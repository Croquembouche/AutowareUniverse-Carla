// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/NodeXY28b.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_XY28B__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__NODE_XY28B__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/NodeXY28b in the package v2x_msg.
typedef struct v2x_msg__msg__NodeXY28b
{
  int64_t x;
  int64_t y;
} v2x_msg__msg__NodeXY28b;

// Struct for a sequence of v2x_msg__msg__NodeXY28b.
typedef struct v2x_msg__msg__NodeXY28b__Sequence
{
  v2x_msg__msg__NodeXY28b * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__NodeXY28b__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__NODE_XY28B__STRUCT_H_
