// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_vehicle_msgs:msg/RawControlCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__RAW_CONTROL_COMMAND__STRUCT_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__RAW_CONTROL_COMMAND__STRUCT_H_

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

/// Struct defined in msg/RawControlCommand in the package autoware_auto_vehicle_msgs.
typedef struct autoware_auto_vehicle_msgs__msg__RawControlCommand
{
  builtin_interfaces__msg__Time stamp;
  ///  Units for all below fields are not defined. The exact semantics for each field is defined by each
  ///  vehicle interface implementation. It is the system integrator's responsibility to ensure these are
  ///  consistent when using this interface
  uint32_t throttle;
  uint32_t brake;
  int32_t front_steer;
  int32_t rear_steer;
} autoware_auto_vehicle_msgs__msg__RawControlCommand;

// Struct for a sequence of autoware_auto_vehicle_msgs__msg__RawControlCommand.
typedef struct autoware_auto_vehicle_msgs__msg__RawControlCommand__Sequence
{
  autoware_auto_vehicle_msgs__msg__RawControlCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__msg__RawControlCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__RAW_CONTROL_COMMAND__STRUCT_H_
