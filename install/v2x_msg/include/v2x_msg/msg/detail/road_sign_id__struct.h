// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/RoadSignID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ROAD_SIGN_ID__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__ROAD_SIGN_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "v2x_msg/msg/detail/position3_d__struct.h"
// Member 'viewangle'
// Member 'msgcrc'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/RoadSignID in the package v2x_msg.
typedef struct v2x_msg__msg__RoadSignID
{
  v2x_msg__msg__Position3D position;
  rosidl_runtime_c__String viewangle;
  int64_t mutcdcode;
  rosidl_runtime_c__String msgcrc;
} v2x_msg__msg__RoadSignID;

// Struct for a sequence of v2x_msg__msg__RoadSignID.
typedef struct v2x_msg__msg__RoadSignID__Sequence
{
  v2x_msg__msg__RoadSignID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__RoadSignID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__ROAD_SIGN_ID__STRUCT_H_
