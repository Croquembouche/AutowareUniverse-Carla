// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/BumperHeights.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__BUMPER_HEIGHTS__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__BUMPER_HEIGHTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BumperHeights in the package v2x_msg.
typedef struct v2x_msg__msg__BumperHeights
{
  int64_t front;
  int64_t rear;
} v2x_msg__msg__BumperHeights;

// Struct for a sequence of v2x_msg__msg__BumperHeights.
typedef struct v2x_msg__msg__BumperHeights__Sequence
{
  v2x_msg__msg__BumperHeights * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__BumperHeights__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__BUMPER_HEIGHTS__STRUCT_H_
