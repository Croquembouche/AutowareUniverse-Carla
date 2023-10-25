// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/LaneAttributes.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__LANE_ATTRIBUTES__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__LANE_ATTRIBUTES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'directionaluse'
// Member 'sharedwith'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LaneAttributes in the package v2x_msg.
typedef struct v2x_msg__msg__LaneAttributes
{
  rosidl_runtime_c__String directionaluse;
  rosidl_runtime_c__String sharedwith;
  int64_t lanetype;
} v2x_msg__msg__LaneAttributes;

// Struct for a sequence of v2x_msg__msg__LaneAttributes.
typedef struct v2x_msg__msg__LaneAttributes__Sequence
{
  v2x_msg__msg__LaneAttributes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__LaneAttributes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__LANE_ATTRIBUTES__STRUCT_H_
