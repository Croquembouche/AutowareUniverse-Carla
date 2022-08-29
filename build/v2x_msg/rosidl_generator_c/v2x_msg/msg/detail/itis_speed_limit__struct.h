// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/ITISSpeedLimit.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ITIS_SPEED_LIMIT__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__ITIS_SPEED_LIMIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'item'
#include "v2x_msg/msg/detail/itis_speed_limitcontent__struct.h"

// Struct defined in msg/ITISSpeedLimit in the package v2x_msg.
typedef struct v2x_msg__msg__ITISSpeedLimit
{
  v2x_msg__msg__ITISSpeedLimitcontent__Sequence item;
} v2x_msg__msg__ITISSpeedLimit;

// Struct for a sequence of v2x_msg__msg__ITISSpeedLimit.
typedef struct v2x_msg__msg__ITISSpeedLimit__Sequence
{
  v2x_msg__msg__ITISSpeedLimit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__ITISSpeedLimit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__ITIS_SPEED_LIMIT__STRUCT_H_
