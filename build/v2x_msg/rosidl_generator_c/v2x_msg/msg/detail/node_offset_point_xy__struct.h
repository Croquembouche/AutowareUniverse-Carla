// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'nodexy1'
#include "v2x_msg/msg/detail/node_xy22b__struct.h"
// Member 'nodexy2'
#include "v2x_msg/msg/detail/node_xy24b__struct.h"
// Member 'nodexy3'
#include "v2x_msg/msg/detail/node_xy26b__struct.h"
// Member 'nodexy4'
#include "v2x_msg/msg/detail/node_xy28b__struct.h"
// Member 'nodexy5'
#include "v2x_msg/msg/detail/node_xy32b__struct.h"
// Member 'nodelatlon'
#include "v2x_msg/msg/detail/nodellmd64b__struct.h"

// Struct defined in msg/NodeOffsetPointXY in the package v2x_msg.
typedef struct v2x_msg__msg__NodeOffsetPointXY
{
  v2x_msg__msg__NodeXY22b nodexy1;
  v2x_msg__msg__NodeXY24b nodexy2;
  v2x_msg__msg__NodeXY26b nodexy3;
  v2x_msg__msg__NodeXY28b nodexy4;
  v2x_msg__msg__NodeXY32b nodexy5;
  v2x_msg__msg__Nodellmd64b nodelatlon;
} v2x_msg__msg__NodeOffsetPointXY;

// Struct for a sequence of v2x_msg__msg__NodeOffsetPointXY.
typedef struct v2x_msg__msg__NodeOffsetPointXY__Sequence
{
  v2x_msg__msg__NodeOffsetPointXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__NodeOffsetPointXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_H_
