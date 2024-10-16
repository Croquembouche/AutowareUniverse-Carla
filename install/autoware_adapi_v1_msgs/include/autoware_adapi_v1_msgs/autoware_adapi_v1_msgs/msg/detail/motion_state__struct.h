// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/MotionState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__MOTION_STATE__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__MOTION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  autoware_adapi_v1_msgs__msg__MotionState__UNKNOWN = 0
};

/// Constant 'STOPPED'.
enum
{
  autoware_adapi_v1_msgs__msg__MotionState__STOPPED = 1
};

/// Constant 'STARTING'.
enum
{
  autoware_adapi_v1_msgs__msg__MotionState__STARTING = 2
};

/// Constant 'MOVING'.
enum
{
  autoware_adapi_v1_msgs__msg__MotionState__MOVING = 3
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/MotionState in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__MotionState
{
  builtin_interfaces__msg__Time stamp;
  uint16_t state;
} autoware_adapi_v1_msgs__msg__MotionState;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__MotionState.
typedef struct autoware_adapi_v1_msgs__msg__MotionState__Sequence
{
  autoware_adapi_v1_msgs__msg__MotionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__MotionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__MOTION_STATE__STRUCT_H_
