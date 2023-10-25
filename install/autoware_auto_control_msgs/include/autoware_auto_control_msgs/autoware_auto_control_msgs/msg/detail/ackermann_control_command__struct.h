// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_control_msgs:msg/AckermannControlCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_CONTROL_COMMAND__STRUCT_H_
#define AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_CONTROL_COMMAND__STRUCT_H_

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
// Member 'lateral'
#include "autoware_auto_control_msgs/msg/detail/ackermann_lateral_command__struct.h"
// Member 'longitudinal'
#include "autoware_auto_control_msgs/msg/detail/longitudinal_command__struct.h"

/// Struct defined in msg/AckermannControlCommand in the package autoware_auto_control_msgs.
/**
  *  Lateral and longitudinal control message for Ackermann-style platforms
 */
typedef struct autoware_auto_control_msgs__msg__AckermannControlCommand
{
  builtin_interfaces__msg__Time stamp;
  autoware_auto_control_msgs__msg__AckermannLateralCommand lateral;
  autoware_auto_control_msgs__msg__LongitudinalCommand longitudinal;
} autoware_auto_control_msgs__msg__AckermannControlCommand;

// Struct for a sequence of autoware_auto_control_msgs__msg__AckermannControlCommand.
typedef struct autoware_auto_control_msgs__msg__AckermannControlCommand__Sequence
{
  autoware_auto_control_msgs__msg__AckermannControlCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_control_msgs__msg__AckermannControlCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_CONTROL_COMMAND__STRUCT_H_
