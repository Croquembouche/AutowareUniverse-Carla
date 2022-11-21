// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/BrakeSystemStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__BRAKE_SYSTEM_STATUS__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__BRAKE_SYSTEM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'wheelbrakes'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/BrakeSystemStatus in the package v2x_msg.
typedef struct v2x_msg__msg__BrakeSystemStatus
{
  rosidl_runtime_c__String wheelbrakes;
  int64_t traction;
  int64_t abs;
  int64_t scs;
  int64_t brakeboost;
  int64_t auxbrakes;
} v2x_msg__msg__BrakeSystemStatus;

// Struct for a sequence of v2x_msg__msg__BrakeSystemStatus.
typedef struct v2x_msg__msg__BrakeSystemStatus__Sequence
{
  v2x_msg__msg__BrakeSystemStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__BrakeSystemStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__BRAKE_SYSTEM_STATUS__STRUCT_H_
