// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'speedlimits'
#include "v2x_msg/msg/detail/speed_limit__struct.h"

/// Struct defined in msg/LaneDataAttribute in the package v2x_msg.
typedef struct v2x_msg__msg__LaneDataAttribute
{
  int64_t pathendpointangle;
  int64_t lanecrownpointcenter;
  int64_t lancrownpointleft;
  int64_t lanecrownpointright;
  int64_t laneangle;
  v2x_msg__msg__SpeedLimit__Sequence speedlimits;
} v2x_msg__msg__LaneDataAttribute;

// Struct for a sequence of v2x_msg__msg__LaneDataAttribute.
typedef struct v2x_msg__msg__LaneDataAttribute__Sequence
{
  v2x_msg__msg__LaneDataAttribute * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__LaneDataAttribute__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_H_
