// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_system_msgs:msg/DrivingCapability.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DRIVING_CAPABILITY__STRUCT_H_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DRIVING_CAPABILITY__STRUCT_H_

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
// Member 'autonomous_driving'
// Member 'remote_control'
#include "autoware_auto_system_msgs/msg/detail/hazard_status__struct.h"

/// Struct defined in msg/DrivingCapability in the package autoware_auto_system_msgs.
/**
  *  A status message for reporting the vehicle driving capabilities.
 */
typedef struct autoware_auto_system_msgs__msg__DrivingCapability
{
  builtin_interfaces__msg__Time stamp;
  ///  Status for the autonomous driving mode.
  autoware_auto_system_msgs__msg__HazardStatus autonomous_driving;
  ///  Status for the remote control mode.
  autoware_auto_system_msgs__msg__HazardStatus remote_control;
} autoware_auto_system_msgs__msg__DrivingCapability;

// Struct for a sequence of autoware_auto_system_msgs__msg__DrivingCapability.
typedef struct autoware_auto_system_msgs__msg__DrivingCapability__Sequence
{
  autoware_auto_system_msgs__msg__DrivingCapability * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_system_msgs__msg__DrivingCapability__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DRIVING_CAPABILITY__STRUCT_H_
