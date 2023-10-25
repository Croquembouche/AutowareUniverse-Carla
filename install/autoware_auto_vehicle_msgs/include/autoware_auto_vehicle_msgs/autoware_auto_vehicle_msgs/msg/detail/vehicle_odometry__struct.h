// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_vehicle_msgs:msg/VehicleOdometry.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__STRUCT_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__STRUCT_H_

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

/// Struct defined in msg/VehicleOdometry in the package autoware_auto_vehicle_msgs.
/**
  *  VehicleOdometry.msg
 */
typedef struct autoware_auto_vehicle_msgs__msg__VehicleOdometry
{
  builtin_interfaces__msg__Time stamp;
  float velocity_mps;
  float front_wheel_angle_rad;
  float rear_wheel_angle_rad;
} autoware_auto_vehicle_msgs__msg__VehicleOdometry;

// Struct for a sequence of autoware_auto_vehicle_msgs__msg__VehicleOdometry.
typedef struct autoware_auto_vehicle_msgs__msg__VehicleOdometry__Sequence
{
  autoware_auto_vehicle_msgs__msg__VehicleOdometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__msg__VehicleOdometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__STRUCT_H_
