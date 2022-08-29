// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/Latency.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__LATENCY__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__LATENCY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'msgtime'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Latency in the package v2x_msg.
typedef struct v2x_msg__msg__Latency
{
  rosidl_runtime_c__String msgtime;
} v2x_msg__msg__Latency;

// Struct for a sequence of v2x_msg__msg__Latency.
typedef struct v2x_msg__msg__Latency__Sequence
{
  v2x_msg__msg__Latency * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__Latency__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__LATENCY__STRUCT_H_
