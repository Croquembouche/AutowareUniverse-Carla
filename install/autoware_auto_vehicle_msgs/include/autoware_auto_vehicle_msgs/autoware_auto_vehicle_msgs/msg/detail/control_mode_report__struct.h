// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_vehicle_msgs:msg/ControlModeReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__CONTROL_MODE_REPORT__STRUCT_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__CONTROL_MODE_REPORT__STRUCT_H_

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
  autoware_auto_vehicle_msgs__msg__ControlModeReport__NO_COMMAND = 0
};

/// Constant 'AUTONOMOUS'.
enum
{
  autoware_auto_vehicle_msgs__msg__ControlModeReport__AUTONOMOUS = 1
};

/// Constant 'AUTONOMOUS_STEER_ONLY'.
enum
{
  autoware_auto_vehicle_msgs__msg__ControlModeReport__AUTONOMOUS_STEER_ONLY = 2
};

/// Constant 'AUTONOMOUS_VELOCITY_ONLY'.
enum
{
  autoware_auto_vehicle_msgs__msg__ControlModeReport__AUTONOMOUS_VELOCITY_ONLY = 3
};

/// Constant 'MANUAL'.
enum
{
  autoware_auto_vehicle_msgs__msg__ControlModeReport__MANUAL = 4
};

/// Constant 'DISENGAGED'.
enum
{
  autoware_auto_vehicle_msgs__msg__ControlModeReport__DISENGAGED = 5
};

/// Constant 'NOT_READY'.
enum
{
  autoware_auto_vehicle_msgs__msg__ControlModeReport__NOT_READY = 6
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/ControlModeReport in the package autoware_auto_vehicle_msgs.
/**
  *  ControlModeReport.msg
 */
typedef struct autoware_auto_vehicle_msgs__msg__ControlModeReport
{
  builtin_interfaces__msg__Time stamp;
  uint8_t mode;
} autoware_auto_vehicle_msgs__msg__ControlModeReport;

// Struct for a sequence of autoware_auto_vehicle_msgs__msg__ControlModeReport.
typedef struct autoware_auto_vehicle_msgs__msg__ControlModeReport__Sequence
{
  autoware_auto_vehicle_msgs__msg__ControlModeReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__msg__ControlModeReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__CONTROL_MODE_REPORT__STRUCT_H_
