// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/NodeLL36B.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_LL36_B__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__NODE_LL36_B__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/NodeLL36B in the package v2x_msg.
typedef struct v2x_msg__msg__NodeLL36B
{
  int64_t lon;
  int64_t lat;
} v2x_msg__msg__NodeLL36B;

// Struct for a sequence of v2x_msg__msg__NodeLL36B.
typedef struct v2x_msg__msg__NodeLL36B__Sequence
{
  v2x_msg__msg__NodeLL36B * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__NodeLL36B__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__NODE_LL36_B__STRUCT_H_
