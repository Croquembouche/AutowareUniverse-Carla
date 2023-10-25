// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_planning_msgs:msg/HADMapRoute.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__HAD_MAP_ROUTE__STRUCT_H_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__HAD_MAP_ROUTE__STRUCT_H_

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
// Member 'start_pose'
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'segments'
#include "autoware_auto_mapping_msgs/msg/detail/had_map_segment__struct.h"

/// Struct defined in msg/HADMapRoute in the package autoware_auto_planning_msgs.
/**
  *  A route within a high-definition map defined by the start and goal points and map primitives describing the route between the two.
 */
typedef struct autoware_auto_planning_msgs__msg__HADMapRoute
{
  std_msgs__msg__Header header;
  ///  The start_pose must exist within the bounds of the primitives in the first segment defined in the route_segments array.
  geometry_msgs__msg__Pose start_pose;
  ///  The goal_pose must exist within the bounds of the primitives in the last segment defined in the route_semgents array.
  geometry_msgs__msg__Pose goal_pose;
  autoware_auto_mapping_msgs__msg__HADMapSegment__Sequence segments;
} autoware_auto_planning_msgs__msg__HADMapRoute;

// Struct for a sequence of autoware_auto_planning_msgs__msg__HADMapRoute.
typedef struct autoware_auto_planning_msgs__msg__HADMapRoute__Sequence
{
  autoware_auto_planning_msgs__msg__HADMapRoute * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__msg__HADMapRoute__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__HAD_MAP_ROUTE__STRUCT_H_
