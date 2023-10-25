// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_planning_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_

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
  autoware_auto_planning_msgs__msg__Route__CAPACITY = 100ul
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'start_point'
// Member 'goal_point'
#include "autoware_auto_planning_msgs/msg/detail/trajectory_point__struct.h"
// Member 'primitives'
#include "autoware_auto_mapping_msgs/msg/detail/map_primitive__struct.h"

// constants for array fields with an upper bound
// primitives
enum
{
  autoware_auto_planning_msgs__msg__Route__primitives__MAX_SIZE = 100
};

/// Struct defined in msg/Route in the package autoware_auto_planning_msgs.
/**
  * Global route information for the planner
 */
typedef struct autoware_auto_planning_msgs__msg__Route
{
  std_msgs__msg__Header header;
  autoware_auto_planning_msgs__msg__TrajectoryPoint start_point;
  autoware_auto_planning_msgs__msg__TrajectoryPoint goal_point;
  autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence primitives;
} autoware_auto_planning_msgs__msg__Route;

// Struct for a sequence of autoware_auto_planning_msgs__msg__Route.
typedef struct autoware_auto_planning_msgs__msg__Route__Sequence
{
  autoware_auto_planning_msgs__msg__Route * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__msg__Route__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_
