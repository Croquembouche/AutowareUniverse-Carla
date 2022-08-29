// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/NodeXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_XY__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__NODE_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'delta'
#include "v2x_msg/msg/detail/node_offset_point_xy__struct.h"
// Member 'attributes'
#include "v2x_msg/msg/detail/node_attribute_set_xy__struct.h"

// Struct defined in msg/NodeXY in the package v2x_msg.
typedef struct v2x_msg__msg__NodeXY
{
  v2x_msg__msg__NodeOffsetPointXY delta;
  v2x_msg__msg__NodeAttributeSetXY attributes;
} v2x_msg__msg__NodeXY;

// Struct for a sequence of v2x_msg__msg__NodeXY.
typedef struct v2x_msg__msg__NodeXY__Sequence
{
  v2x_msg__msg__NodeXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__NodeXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__NODE_XY__STRUCT_H_
