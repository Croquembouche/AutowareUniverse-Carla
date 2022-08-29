// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/AllowedManeuvers.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ALLOWED_MANEUVERS__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__ALLOWED_MANEUVERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/AllowedManeuvers in the package v2x_msg.
typedef struct v2x_msg__msg__AllowedManeuvers
{
  int64_t maneuverstraightallowed;
  int64_t maneuverleftallowed;
  int64_t maneuverrightallowed;
  int64_t maneuveruturnallowed;
  int64_t maneuverleftturnonredallowed;
  int64_t maneverrightturnonredallowed;
  int64_t maneuverlanechangeallowed;
  int64_t maneuvernostoppingallowed;
  int64_t yieldallwaysrequired;
  int64_t gowithhalt;
  int64_t caution;
  int64_t reserved1;
} v2x_msg__msg__AllowedManeuvers;

// Struct for a sequence of v2x_msg__msg__AllowedManeuvers.
typedef struct v2x_msg__msg__AllowedManeuvers__Sequence
{
  v2x_msg__msg__AllowedManeuvers * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__AllowedManeuvers__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__ALLOWED_MANEUVERS__STRUCT_H_
