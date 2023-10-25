// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_vehicle_msgs:msg/ControlModeCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__CONTROL_MODE_COMMAND__STRUCT_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__CONTROL_MODE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NO_COMMAND'.
enum
{
  autoware_auto_vehicle_msgs__msg__ControlModeCommand__NO_COMMAND = 0
};

/// Constant 'AUTONOMOUS'.
enum
{
  autoware_auto_vehicle_msgs__msg__ControlModeCommand__AUTONOMOUS = 1
};

/// Constant 'MANUAL'.
enum
{
  autoware_auto_vehicle_msgs__msg__ControlModeCommand__MANUAL = 2
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/ControlModeCommand in the package autoware_auto_vehicle_msgs.
/**
  *  ControlModeCommand.msg
 */
typedef struct autoware_auto_vehicle_msgs__msg__ControlModeCommand
{
  builtin_interfaces__msg__Time stamp;
  uint8_t mode;
} autoware_auto_vehicle_msgs__msg__ControlModeCommand;

// Struct for a sequence of autoware_auto_vehicle_msgs__msg__ControlModeCommand.
typedef struct autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence
{
  autoware_auto_vehicle_msgs__msg__ControlModeCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__msg__ControlModeCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__CONTROL_MODE_COMMAND__STRUCT_H_
