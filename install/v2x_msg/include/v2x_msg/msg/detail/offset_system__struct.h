// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/OffsetSystem.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__OFFSET_SYSTEM__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__OFFSET_SYSTEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'offset'
#include "v2x_msg/msg/detail/offset__struct.h"

// Struct defined in msg/OffsetSystem in the package v2x_msg.
typedef struct v2x_msg__msg__OffsetSystem
{
  int64_t scale;
  v2x_msg__msg__Offset offset;
} v2x_msg__msg__OffsetSystem;

// Struct for a sequence of v2x_msg__msg__OffsetSystem.
typedef struct v2x_msg__msg__OffsetSystem__Sequence
{
  v2x_msg__msg__OffsetSystem * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__OffsetSystem__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__OFFSET_SYSTEM__STRUCT_H_
