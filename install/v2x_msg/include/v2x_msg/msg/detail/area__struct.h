// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/Area.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__AREA__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__AREA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'shapepointset'
#include "v2x_msg/msg/detail/shape_point_set__struct.h"
// Member 'cirle'
#include "v2x_msg/msg/detail/circle__struct.h"
// Member 'regionpointset'
#include "v2x_msg/msg/detail/region_point_set__struct.h"

// Struct defined in msg/Area in the package v2x_msg.
typedef struct v2x_msg__msg__Area
{
  v2x_msg__msg__ShapePointSet shapepointset;
  v2x_msg__msg__Circle cirle;
  v2x_msg__msg__RegionPointSet regionpointset;
} v2x_msg__msg__Area;

// Struct for a sequence of v2x_msg__msg__Area.
typedef struct v2x_msg__msg__Area__Sequence
{
  v2x_msg__msg__Area * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__Area__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__AREA__STRUCT_H_
