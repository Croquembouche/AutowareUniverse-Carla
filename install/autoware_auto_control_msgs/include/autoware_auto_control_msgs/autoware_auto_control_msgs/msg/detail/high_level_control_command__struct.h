// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_control_msgs:msg/HighLevelControlCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__HIGH_LEVEL_CONTROL_COMMAND__STRUCT_H_
#define AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__HIGH_LEVEL_CONTROL_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/HighLevelControlCommand in the package autoware_auto_control_msgs.
typedef struct autoware_auto_control_msgs__msg__HighLevelControlCommand
{
  builtin_interfaces__msg__Time stamp;
  ///  should be negative when reversed
  float velocity_mps;
  ///  units of inverse meters
  float curvature;
} autoware_auto_control_msgs__msg__HighLevelControlCommand;

// Struct for a sequence of autoware_auto_control_msgs__msg__HighLevelControlCommand.
typedef struct autoware_auto_control_msgs__msg__HighLevelControlCommand__Sequence
{
  autoware_auto_control_msgs__msg__HighLevelControlCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_control_msgs__msg__HighLevelControlCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__HIGH_LEVEL_CONTROL_COMMAND__STRUCT_H_
