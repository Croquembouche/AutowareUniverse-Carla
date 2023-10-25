// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/Offset.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__OFFSET__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__OFFSET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'xy'
#include "v2x_msg/msg/detail/node_list_xy__struct.h"
// Member 'nodes'
#include "v2x_msg/msg/detail/node_ll__struct.h"

/// Struct defined in msg/Offset in the package v2x_msg.
typedef struct v2x_msg__msg__Offset
{
  v2x_msg__msg__NodeListXY xy;
  v2x_msg__msg__NodeLL__Sequence nodes;
} v2x_msg__msg__Offset;

// Struct for a sequence of v2x_msg__msg__Offset.
typedef struct v2x_msg__msg__Offset__Sequence
{
  v2x_msg__msg__Offset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__Offset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__OFFSET__STRUCT_H_
