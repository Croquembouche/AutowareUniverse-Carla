// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/NodeOffsetPointLL.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_LL__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_LL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'nodell1'
#include "v2x_msg/msg/detail/node_ll24_b__struct.h"
// Member 'nodell2'
#include "v2x_msg/msg/detail/node_ll28_b__struct.h"
// Member 'nodell3'
#include "v2x_msg/msg/detail/node_ll32_b__struct.h"
// Member 'nodell4'
#include "v2x_msg/msg/detail/node_ll36_b__struct.h"
// Member 'nodell5'
#include "v2x_msg/msg/detail/node_ll44_b__struct.h"
// Member 'nodell6'
#include "v2x_msg/msg/detail/node_ll48_b__struct.h"
// Member 'nodelatlon'
#include "v2x_msg/msg/detail/nodellmd64b__struct.h"

// Struct defined in msg/NodeOffsetPointLL in the package v2x_msg.
typedef struct v2x_msg__msg__NodeOffsetPointLL
{
  v2x_msg__msg__NodeLL24B nodell1;
  v2x_msg__msg__NodeLL28B nodell2;
  v2x_msg__msg__NodeLL32B nodell3;
  v2x_msg__msg__NodeLL36B nodell4;
  v2x_msg__msg__NodeLL44B nodell5;
  v2x_msg__msg__NodeLL48B nodell6;
  v2x_msg__msg__Nodellmd64b nodelatlon;
} v2x_msg__msg__NodeOffsetPointLL;

// Struct for a sequence of v2x_msg__msg__NodeOffsetPointLL.
typedef struct v2x_msg__msg__NodeOffsetPointLL__Sequence
{
  v2x_msg__msg__NodeOffsetPointLL * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__NodeOffsetPointLL__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__NODE_OFFSET_POINT_LL__STRUCT_H_
