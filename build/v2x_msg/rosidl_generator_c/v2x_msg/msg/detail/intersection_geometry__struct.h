// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_H_

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
// Member 'preemptprioritydata'
#include "rosidl_runtime_c/string.h"
// Member 'id'
#include "v2x_msg/msg/detail/intersection_reference_id__struct.h"
// Member 'refpoint'
#include "v2x_msg/msg/detail/position3_d__struct.h"
// Member 'speedlimits'
#include "v2x_msg/msg/detail/speed_limit__struct.h"
// Member 'laneset'
#include "v2x_msg/msg/detail/generic_lane__struct.h"

// Struct defined in msg/IntersectionGeometry in the package v2x_msg.
typedef struct v2x_msg__msg__IntersectionGeometry
{
  rosidl_runtime_c__String name;
  v2x_msg__msg__IntersectionReferenceID id;
  int64_t revision;
  v2x_msg__msg__Position3D refpoint;
  int64_t lanewidth;
  v2x_msg__msg__SpeedLimit__Sequence speedlimits;
  v2x_msg__msg__GenericLane__Sequence laneset;
  rosidl_runtime_c__String preemptprioritydata;
} v2x_msg__msg__IntersectionGeometry;

// Struct for a sequence of v2x_msg__msg__IntersectionGeometry.
typedef struct v2x_msg__msg__IntersectionGeometry__Sequence
{
  v2x_msg__msg__IntersectionGeometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__IntersectionGeometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_H_
