// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_planning_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/TrajectoryPoint in the package autoware_auto_planning_msgs.
/**
  *  Representation of a trajectory point for the controller
 */
typedef struct autoware_auto_planning_msgs__msg__TrajectoryPoint
{
  builtin_interfaces__msg__Duration time_from_start;
  geometry_msgs__msg__Pose pose;
  float longitudinal_velocity_mps;
  float lateral_velocity_mps;
  float acceleration_mps2;
  float heading_rate_rps;
  float front_wheel_angle_rad;
  float rear_wheel_angle_rad;
} autoware_auto_planning_msgs__msg__TrajectoryPoint;

// Struct for a sequence of autoware_auto_planning_msgs__msg__TrajectoryPoint.
typedef struct autoware_auto_planning_msgs__msg__TrajectoryPoint__Sequence
{
  autoware_auto_planning_msgs__msg__TrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__msg__TrajectoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
