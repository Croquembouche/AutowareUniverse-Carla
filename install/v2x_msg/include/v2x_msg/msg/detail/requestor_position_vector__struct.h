// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/RequestorPositionVector.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REQUESTOR_POSITION_VECTOR__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__REQUESTOR_POSITION_VECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "v2x_msg/msg/detail/position3_d__struct.h"
// Member 'speed'
#include "v2x_msg/msg/detail/transmission_and_speed__struct.h"

// Struct defined in msg/RequestorPositionVector in the package v2x_msg.
typedef struct v2x_msg__msg__RequestorPositionVector
{
  v2x_msg__msg__Position3D position;
  int64_t heading;
  v2x_msg__msg__TransmissionAndSpeed speed;
} v2x_msg__msg__RequestorPositionVector;

// Struct for a sequence of v2x_msg__msg__RequestorPositionVector.
typedef struct v2x_msg__msg__RequestorPositionVector__Sequence
{
  v2x_msg__msg__RequestorPositionVector * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__RequestorPositionVector__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__REQUESTOR_POSITION_VECTOR__STRUCT_H_
