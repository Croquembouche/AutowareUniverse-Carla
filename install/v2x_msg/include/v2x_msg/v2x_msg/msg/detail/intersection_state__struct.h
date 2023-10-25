// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/IntersectionState.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_STATE__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'id'
#include "v2x_msg/msg/detail/intersection_reference_id__struct.h"
// Member 'status'
#include "v2x_msg/msg/detail/intersection_status_object__struct.h"
// Member 'enabledlanes'
#include "v2x_msg/msg/detail/lane_id__struct.h"
// Member 'states'
#include "v2x_msg/msg/detail/movement_state__struct.h"
// Member 'maneuverassistlist'
#include "v2x_msg/msg/detail/connection_maneuver_assist__struct.h"

/// Struct defined in msg/IntersectionState in the package v2x_msg.
typedef struct v2x_msg__msg__IntersectionState
{
  rosidl_runtime_c__String name;
  v2x_msg__msg__IntersectionReferenceID id;
  int64_t revision;
  v2x_msg__msg__IntersectionStatusObject status;
  int64_t moy;
  int64_t timestamp;
  v2x_msg__msg__LaneID__Sequence enabledlanes;
  v2x_msg__msg__MovementState__Sequence states;
  v2x_msg__msg__ConnectionManeuverAssist__Sequence maneuverassistlist;
} v2x_msg__msg__IntersectionState;

// Struct for a sequence of v2x_msg__msg__IntersectionState.
typedef struct v2x_msg__msg__IntersectionState__Sequence
{
  v2x_msg__msg__IntersectionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__IntersectionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__INTERSECTION_STATE__STRUCT_H_
