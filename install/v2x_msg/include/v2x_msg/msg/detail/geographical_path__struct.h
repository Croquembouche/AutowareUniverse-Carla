// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/GeographicalPath.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__GEOGRAPHICAL_PATH__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__GEOGRAPHICAL_PATH__STRUCT_H_

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
// Member 'direction'
#include "rosidl_runtime_c/string.h"
// Member 'id'
#include "v2x_msg/msg/detail/road_segment_reference_id__struct.h"
// Member 'anchor'
#include "v2x_msg/msg/detail/position3_d__struct.h"
// Member 'description'
#include "v2x_msg/msg/detail/description__struct.h"

// Struct defined in msg/GeographicalPath in the package v2x_msg.
typedef struct v2x_msg__msg__GeographicalPath
{
  rosidl_runtime_c__String name;
  v2x_msg__msg__RoadSegmentReferenceID id;
  v2x_msg__msg__Position3D anchor;
  int64_t lanewidth;
  int64_t directionality;
  bool closedpath;
  rosidl_runtime_c__String direction;
  v2x_msg__msg__Description description;
} v2x_msg__msg__GeographicalPath;

// Struct for a sequence of v2x_msg__msg__GeographicalPath.
typedef struct v2x_msg__msg__GeographicalPath__Sequence
{
  v2x_msg__msg__GeographicalPath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__GeographicalPath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__GEOGRAPHICAL_PATH__STRUCT_H_
