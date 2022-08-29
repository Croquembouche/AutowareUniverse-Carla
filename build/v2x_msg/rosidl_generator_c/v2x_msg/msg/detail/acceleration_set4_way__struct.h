// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/AccelerationSet4Way.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/AccelerationSet4Way in the package v2x_msg.
typedef struct v2x_msg__msg__AccelerationSet4Way
{
  int64_t longitude;
  int64_t lat;
  int64_t vert;
  int64_t yaw;
} v2x_msg__msg__AccelerationSet4Way;

// Struct for a sequence of v2x_msg__msg__AccelerationSet4Way.
typedef struct v2x_msg__msg__AccelerationSet4Way__Sequence
{
  v2x_msg__msg__AccelerationSet4Way * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__AccelerationSet4Way__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_H_
