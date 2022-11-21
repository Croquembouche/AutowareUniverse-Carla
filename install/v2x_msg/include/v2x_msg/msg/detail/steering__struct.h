// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/Steering.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__STEERING__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__STEERING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Steering in the package v2x_msg.
typedef struct v2x_msg__msg__Steering
{
  int64_t angle;
  int64_t confidence;
  int64_t rate;
  int64_t wheel;
} v2x_msg__msg__Steering;

// Struct for a sequence of v2x_msg__msg__Steering.
typedef struct v2x_msg__msg__Steering__Sequence
{
  v2x_msg__msg__Steering * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__Steering__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__STEERING__STRUCT_H_
