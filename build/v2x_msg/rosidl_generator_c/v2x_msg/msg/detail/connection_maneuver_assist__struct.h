// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ConnectionManeuverAssist in the package v2x_msg.
typedef struct v2x_msg__msg__ConnectionManeuverAssist
{
  int64_t connectionid;
  int64_t queuelength;
  int64_t availablestoragelength;
  bool waitonstop;
  bool pedbicycledetect;
} v2x_msg__msg__ConnectionManeuverAssist;

// Struct for a sequence of v2x_msg__msg__ConnectionManeuverAssist.
typedef struct v2x_msg__msg__ConnectionManeuverAssist__Sequence
{
  v2x_msg__msg__ConnectionManeuverAssist * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__ConnectionManeuverAssist__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__STRUCT_H_
