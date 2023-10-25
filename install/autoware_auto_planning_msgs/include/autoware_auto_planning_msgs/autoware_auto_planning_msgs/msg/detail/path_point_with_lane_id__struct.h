// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_planning_msgs:msg/PathPointWithLaneId.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT_WITH_LANE_ID__STRUCT_H_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT_WITH_LANE_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "autoware_auto_planning_msgs/msg/detail/path_point__struct.h"
// Member 'lane_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PathPointWithLaneId in the package autoware_auto_planning_msgs.
/**
  * Contains a PathPoint and lanelet lane_id information.
 */
typedef struct autoware_auto_planning_msgs__msg__PathPointWithLaneId
{
  autoware_auto_planning_msgs__msg__PathPoint point;
  /// Lanelet lane_id information.
  rosidl_runtime_c__int64__Sequence lane_ids;
} autoware_auto_planning_msgs__msg__PathPointWithLaneId;

// Struct for a sequence of autoware_auto_planning_msgs__msg__PathPointWithLaneId.
typedef struct autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence
{
  autoware_auto_planning_msgs__msg__PathPointWithLaneId * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__msg__PathPointWithLaneId__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT_WITH_LANE_ID__STRUCT_H_
