// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/MsgID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__MSG_ID__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__MSG_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'furtherinfoid'
#include "rosidl_runtime_c/string.h"
// Member 'roadsignid'
#include "v2x_msg/msg/detail/road_sign_id__struct.h"

/// Struct defined in msg/MsgID in the package v2x_msg.
typedef struct v2x_msg__msg__MsgID
{
  rosidl_runtime_c__String furtherinfoid;
  v2x_msg__msg__RoadSignID roadsignid;
} v2x_msg__msg__MsgID;

// Struct for a sequence of v2x_msg__msg__MsgID.
typedef struct v2x_msg__msg__MsgID__Sequence
{
  v2x_msg__msg__MsgID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__MsgID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__MSG_ID__STRUCT_H_
