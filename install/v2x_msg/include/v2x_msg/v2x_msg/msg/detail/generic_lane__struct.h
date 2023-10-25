// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/GenericLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__GENERIC_LANE__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__GENERIC_LANE__STRUCT_H_

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
// Member 'maneuvers'
#include "rosidl_runtime_c/string.h"
// Member 'laneattributes'
#include "v2x_msg/msg/detail/lane_attributes__struct.h"
// Member 'nodelist'
#include "v2x_msg/msg/detail/node_list_xy__struct.h"
// Member 'connectsto'
#include "v2x_msg/msg/detail/connection__struct.h"
// Member 'overlays'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/GenericLane in the package v2x_msg.
typedef struct v2x_msg__msg__GenericLane
{
  int64_t laneid;
  rosidl_runtime_c__String name;
  int64_t ingressapproach;
  int64_t egressapproach;
  v2x_msg__msg__LaneAttributes laneattributes;
  rosidl_runtime_c__String maneuvers;
  v2x_msg__msg__NodeListXY__Sequence nodelist;
  v2x_msg__msg__Connection__Sequence connectsto;
  rosidl_runtime_c__int64__Sequence overlays;
} v2x_msg__msg__GenericLane;

// Struct for a sequence of v2x_msg__msg__GenericLane.
typedef struct v2x_msg__msg__GenericLane__Sequence
{
  v2x_msg__msg__GenericLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__GenericLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__GENERIC_LANE__STRUCT_H_
