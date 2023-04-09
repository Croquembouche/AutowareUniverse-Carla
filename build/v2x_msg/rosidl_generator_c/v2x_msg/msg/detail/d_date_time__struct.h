// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/DDateTime.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__D_DATE_TIME__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__D_DATE_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DDateTime in the package v2x_msg.
typedef struct v2x_msg__msg__DDateTime
{
  int64_t year;
  int64_t month;
  int64_t day;
  int64_t hour;
  int64_t minute;
  int64_t second;
  int64_t offset;
} v2x_msg__msg__DDateTime;

// Struct for a sequence of v2x_msg__msg__DDateTime.
typedef struct v2x_msg__msg__DDateTime__Sequence
{
  v2x_msg__msg__DDateTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__DDateTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__D_DATE_TIME__STRUCT_H_
