// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/ShapePointSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SHAPE_POINT_SET__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__SHAPE_POINT_SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'anchor'
#include "v2x_msg/msg/detail/position3_d__struct.h"
// Member 'nodelist'
#include "v2x_msg/msg/detail/node_list_xy__struct.h"

/// Struct defined in msg/ShapePointSet in the package v2x_msg.
typedef struct v2x_msg__msg__ShapePointSet
{
  v2x_msg__msg__Position3D anchor;
  int64_t lanewidth;
  int64_t directionality;
  v2x_msg__msg__NodeListXY nodelist;
} v2x_msg__msg__ShapePointSet;

// Struct for a sequence of v2x_msg__msg__ShapePointSet.
typedef struct v2x_msg__msg__ShapePointSet__Sequence
{
  v2x_msg__msg__ShapePointSet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__ShapePointSet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__SHAPE_POINT_SET__STRUCT_H_
