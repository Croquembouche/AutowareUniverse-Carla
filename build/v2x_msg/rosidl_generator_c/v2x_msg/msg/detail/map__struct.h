// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/MAP.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__MAP__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'intersections'
#include "v2x_msg/msg/detail/intersection_geometry__struct.h"
// Member 'roadsegments'
#include "v2x_msg/msg/detail/road_segment__struct.h"
// Member 'dataparameters'
#include "v2x_msg/msg/detail/data_parameters__struct.h"
// Member 'restrictionlist'
#include "v2x_msg/msg/detail/restriction_class_assignment__struct.h"

/// Struct defined in msg/MAP in the package v2x_msg.
typedef struct v2x_msg__msg__MAP
{
  int64_t timestamp;
  int64_t msgissuerevision;
  int64_t layertype;
  int64_t layerid;
  v2x_msg__msg__IntersectionGeometry__Sequence intersections;
  v2x_msg__msg__RoadSegment__Sequence roadsegments;
  v2x_msg__msg__DataParameters dataparameters;
  v2x_msg__msg__RestrictionClassAssignment__Sequence restrictionlist;
} v2x_msg__msg__MAP;

// Struct for a sequence of v2x_msg__msg__MAP.
typedef struct v2x_msg__msg__MAP__Sequence
{
  v2x_msg__msg__MAP * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__MAP__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__MAP__STRUCT_H_
