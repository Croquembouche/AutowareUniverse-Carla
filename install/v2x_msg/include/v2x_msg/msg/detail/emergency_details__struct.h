// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/EmergencyDetails.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__EMERGENCY_DETAILS__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__EMERGENCY_DETAILS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'events'
#include "v2x_msg/msg/detail/privileged_events__struct.h"

// Struct defined in msg/EmergencyDetails in the package v2x_msg.
typedef struct v2x_msg__msg__EmergencyDetails
{
  int64_t notused;
  int64_t sirenuse;
  int64_t lightsuse;
  int64_t multi;
  v2x_msg__msg__PrivilegedEvents events;
  int64_t responsetype;
} v2x_msg__msg__EmergencyDetails;

// Struct for a sequence of v2x_msg__msg__EmergencyDetails.
typedef struct v2x_msg__msg__EmergencyDetails__Sequence
{
  v2x_msg__msg__EmergencyDetails * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__EmergencyDetails__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__EMERGENCY_DETAILS__STRUCT_H_
