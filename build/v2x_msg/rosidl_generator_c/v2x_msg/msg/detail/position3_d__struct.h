// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/Position3D.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__POSITION3_D__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__POSITION3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Position3D in the package v2x_msg.
typedef struct v2x_msg__msg__Position3D
{
  int64_t latitude;
  int64_t longitude;
  int64_t elevation;
} v2x_msg__msg__Position3D;

// Struct for a sequence of v2x_msg__msg__Position3D.
typedef struct v2x_msg__msg__Position3D__Sequence
{
  v2x_msg__msg__Position3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__Position3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__POSITION3_D__STRUCT_H_
