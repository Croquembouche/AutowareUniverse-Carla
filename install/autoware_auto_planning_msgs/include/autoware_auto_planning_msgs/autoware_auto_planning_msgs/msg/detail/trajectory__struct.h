// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_planning_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CAPACITY'.
enum
{
  autoware_auto_planning_msgs__msg__Trajectory__CAPACITY = 10000ul
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'points'
#include "autoware_auto_planning_msgs/msg/detail/trajectory_point__struct.h"

// constants for array fields with an upper bound
// points
enum
{
  autoware_auto_planning_msgs__msg__Trajectory__points__MAX_SIZE = 10000
};

/// Struct defined in msg/Trajectory in the package autoware_auto_planning_msgs.
/**
  *  A set of trajectory points for the controller
 */
typedef struct autoware_auto_planning_msgs__msg__Trajectory
{
  std_msgs__msg__Header header;
  autoware_auto_planning_msgs__msg__TrajectoryPoint__Sequence points;
} autoware_auto_planning_msgs__msg__Trajectory;

// Struct for a sequence of autoware_auto_planning_msgs__msg__Trajectory.
typedef struct autoware_auto_planning_msgs__msg__Trajectory__Sequence
{
  autoware_auto_planning_msgs__msg__Trajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__msg__Trajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
