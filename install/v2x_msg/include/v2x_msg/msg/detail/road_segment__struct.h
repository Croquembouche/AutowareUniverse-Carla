// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/RoadSegment.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ROAD_SEGMENT__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__ROAD_SEGMENT__STRUCT_H_

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
#include "v2x_msg/msg/detail/road_segment_reference_id__struct.h"
// Member 'refpoint'
#include "v2x_msg/msg/detail/position3_d__struct.h"
// Member 'speedlimits'
#include "v2x_msg/msg/detail/speed_limit__struct.h"
// Member 'roadlaneset'
#include "v2x_msg/msg/detail/generic_lane__struct.h"

// Struct defined in msg/RoadSegment in the package v2x_msg.
typedef struct v2x_msg__msg__RoadSegment
{
  rosidl_runtime_c__String name;
  v2x_msg__msg__RoadSegmentReferenceID id;
  int64_t revision;
  v2x_msg__msg__Position3D refpoint;
  int64_t lanewidth;
  v2x_msg__msg__SpeedLimit__Sequence speedlimits;
  v2x_msg__msg__GenericLane__Sequence roadlaneset;
} v2x_msg__msg__RoadSegment;

// Struct for a sequence of v2x_msg__msg__RoadSegment.
typedef struct v2x_msg__msg__RoadSegment__Sequence
{
  v2x_msg__msg__RoadSegment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__RoadSegment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__ROAD_SEGMENT__STRUCT_H_
