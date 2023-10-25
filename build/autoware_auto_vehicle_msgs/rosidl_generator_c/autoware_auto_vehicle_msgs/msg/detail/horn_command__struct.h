// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_vehicle_msgs:msg/HornCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HORN_COMMAND__STRUCT_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HORN_COMMAND__STRUCT_H_

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

/// Struct defined in msg/HornCommand in the package autoware_auto_vehicle_msgs.
/**
  *  Command for controlling a horn.
 */
typedef struct autoware_auto_vehicle_msgs__msg__HornCommand
{
  builtin_interfaces__msg__Time stamp;
  bool active;
} autoware_auto_vehicle_msgs__msg__HornCommand;

// Struct for a sequence of autoware_auto_vehicle_msgs__msg__HornCommand.
typedef struct autoware_auto_vehicle_msgs__msg__HornCommand__Sequence
{
  autoware_auto_vehicle_msgs__msg__HornCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__msg__HornCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HORN_COMMAND__STRUCT_H_
