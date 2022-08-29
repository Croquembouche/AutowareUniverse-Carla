// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/PathHistoryPoint.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PATH_HISTORY_POINT__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__PATH_HISTORY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'accuracy'
#include "v2x_msg/msg/detail/positional_accuracy__struct.h"

// Struct defined in msg/PathHistoryPoint in the package v2x_msg.
typedef struct v2x_msg__msg__PathHistoryPoint
{
  int64_t latoffset;
  int64_t lonoffset;
  int64_t elevationoffset;
  int64_t timeoffset;
  int64_t speed;
  v2x_msg__msg__PositionalAccuracy accuracy;
  int64_t heading;
} v2x_msg__msg__PathHistoryPoint;

// Struct for a sequence of v2x_msg__msg__PathHistoryPoint.
typedef struct v2x_msg__msg__PathHistoryPoint__Sequence
{
  v2x_msg__msg__PathHistoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__PathHistoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__PATH_HISTORY_POINT__STRUCT_H_
