// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_vehicle_msgs:msg/VehicleKinematicState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_KINEMATIC_STATE__STRUCT_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_KINEMATIC_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'state'
#include "autoware_auto_planning_msgs/msg/detail/trajectory_point__struct.h"
// Member 'delta'
#include "geometry_msgs/msg/detail/transform__struct.h"

/// Struct defined in msg/VehicleKinematicState in the package autoware_auto_vehicle_msgs.
/**
  *  VehicleKinematicState.msg
  *  Representation of a trajectory point with timestamp for the controller
 */
typedef struct autoware_auto_vehicle_msgs__msg__VehicleKinematicState
{
  std_msgs__msg__Header header;
  autoware_auto_planning_msgs__msg__TrajectoryPoint state;
  geometry_msgs__msg__Transform delta;
} autoware_auto_vehicle_msgs__msg__VehicleKinematicState;

// Struct for a sequence of autoware_auto_vehicle_msgs__msg__VehicleKinematicState.
typedef struct autoware_auto_vehicle_msgs__msg__VehicleKinematicState__Sequence
{
  autoware_auto_vehicle_msgs__msg__VehicleKinematicState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__msg__VehicleKinematicState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_KINEMATIC_STATE__STRUCT_H_
