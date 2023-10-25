// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_planning_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH__STRUCT_H_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH__STRUCT_H_

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
// Member 'points'
#include "autoware_auto_planning_msgs/msg/detail/path_point__struct.h"
// Member 'left_bound'
// Member 'right_bound'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Path in the package autoware_auto_planning_msgs.
/**
  * Contains a PathPoint path and left and right bound.
 */
typedef struct autoware_auto_planning_msgs__msg__Path
{
  std_msgs__msg__Header header;
  autoware_auto_planning_msgs__msg__PathPoint__Sequence points;
  geometry_msgs__msg__Point__Sequence left_bound;
  geometry_msgs__msg__Point__Sequence right_bound;
} autoware_auto_planning_msgs__msg__Path;

// Struct for a sequence of autoware_auto_planning_msgs__msg__Path.
typedef struct autoware_auto_planning_msgs__msg__Path__Sequence
{
  autoware_auto_planning_msgs__msg__Path * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__msg__Path__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH__STRUCT_H_
