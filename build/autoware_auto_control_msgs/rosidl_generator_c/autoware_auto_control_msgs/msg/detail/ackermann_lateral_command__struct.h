// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_control_msgs:msg/AckermannLateralCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_LATERAL_COMMAND__STRUCT_H_
#define AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_LATERAL_COMMAND__STRUCT_H_

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

/// Struct defined in msg/AckermannLateralCommand in the package autoware_auto_control_msgs.
/**
  *  Lateral control message for Ackermann-style platforms
  *  Note regarding tires: If the platform has multiple steering tires, the commands given here are for a virtual tire at the average lateral position of the steering tires.
 */
typedef struct autoware_auto_control_msgs__msg__AckermannLateralCommand
{
  builtin_interfaces__msg__Time stamp;
  ///  Desired angle of the steering tire in radians left (positive) or right (negative) of center (0.0)
  float steering_tire_angle;
  ///  Desired rate of change of the steering tire angle in radians per second
  float steering_tire_rotation_rate;
} autoware_auto_control_msgs__msg__AckermannLateralCommand;

// Struct for a sequence of autoware_auto_control_msgs__msg__AckermannLateralCommand.
typedef struct autoware_auto_control_msgs__msg__AckermannLateralCommand__Sequence
{
  autoware_auto_control_msgs__msg__AckermannLateralCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_control_msgs__msg__AckermannLateralCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_LATERAL_COMMAND__STRUCT_H_
