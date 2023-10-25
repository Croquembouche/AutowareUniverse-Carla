// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_vehicle_msgs:msg/VehicleControlCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_CONTROL_COMMAND__STRUCT_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_CONTROL_COMMAND__STRUCT_H_

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

/// Struct defined in msg/VehicleControlCommand in the package autoware_auto_vehicle_msgs.
/**
  *  Information that is sent to Vehicle interface
 */
typedef struct autoware_auto_vehicle_msgs__msg__VehicleControlCommand
{
  builtin_interfaces__msg__Time stamp;
  ///  should be negative when reversed
  float long_accel_mps2;
  ///  should be negative when reversed
  float velocity_mps;
  float front_wheel_angle_rad;
  float rear_wheel_angle_rad;
} autoware_auto_vehicle_msgs__msg__VehicleControlCommand;

// Struct for a sequence of autoware_auto_vehicle_msgs__msg__VehicleControlCommand.
typedef struct autoware_auto_vehicle_msgs__msg__VehicleControlCommand__Sequence
{
  autoware_auto_vehicle_msgs__msg__VehicleControlCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__msg__VehicleControlCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_CONTROL_COMMAND__STRUCT_H_
