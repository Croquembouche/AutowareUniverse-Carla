// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/NodeListXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_LIST_XY__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__NODE_LIST_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'nodes'
#include "v2x_msg/msg/detail/node_xy__struct.h"
// Member 'computed'
#include "v2x_msg/msg/detail/computed_lane__struct.h"

// Struct defined in msg/NodeListXY in the package v2x_msg.
typedef struct v2x_msg__msg__NodeListXY
{
  v2x_msg__msg__NodeXY__Sequence nodes;
  v2x_msg__msg__ComputedLane computed;
} v2x_msg__msg__NodeListXY;

// Struct for a sequence of v2x_msg__msg__NodeListXY.
typedef struct v2x_msg__msg__NodeListXY__Sequence
{
  v2x_msg__msg__NodeListXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__NodeListXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__NODE_LIST_XY__STRUCT_H_
