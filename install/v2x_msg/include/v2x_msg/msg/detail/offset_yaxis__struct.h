// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/OffsetYaxis.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__OFFSET_YAXIS__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__OFFSET_YAXIS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/OffsetYaxis in the package v2x_msg.
typedef struct v2x_msg__msg__OffsetYaxis
{
  int64_t small;
  int64_t large;
} v2x_msg__msg__OffsetYaxis;

// Struct for a sequence of v2x_msg__msg__OffsetYaxis.
typedef struct v2x_msg__msg__OffsetYaxis__Sequence
{
  v2x_msg__msg__OffsetYaxis * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__OffsetYaxis__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__OFFSET_YAXIS__STRUCT_H_
