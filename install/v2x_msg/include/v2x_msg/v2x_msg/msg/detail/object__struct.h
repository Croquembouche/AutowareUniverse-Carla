// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__OBJECT__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'datetime'
#include "v2x_msg/msg/detail/d_date_time__struct.h"

/// Struct defined in msg/Object in the package v2x_msg.
typedef struct v2x_msg__msg__Object
{
  int64_t obdist;
  int64_t obdirect;
  v2x_msg__msg__DDateTime datetime;
} v2x_msg__msg__Object;

// Struct for a sequence of v2x_msg__msg__Object.
typedef struct v2x_msg__msg__Object__Sequence
{
  v2x_msg__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__OBJECT__STRUCT_H_
