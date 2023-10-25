// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/ComputedLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__COMPUTED_LANE__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__COMPUTED_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'offsetxaxis'
#include "v2x_msg/msg/detail/offset_xaxis__struct.h"
// Member 'offsetyaxis'
#include "v2x_msg/msg/detail/offset_yaxis__struct.h"

/// Struct defined in msg/ComputedLane in the package v2x_msg.
typedef struct v2x_msg__msg__ComputedLane
{
  int64_t referencelaneid;
  v2x_msg__msg__OffsetXaxis offsetxaxis;
  v2x_msg__msg__OffsetYaxis offsetyaxis;
  int64_t rotatexy;
  int64_t scalexaxis;
  int64_t scaleyaxis;
} v2x_msg__msg__ComputedLane;

// Struct for a sequence of v2x_msg__msg__ComputedLane.
typedef struct v2x_msg__msg__ComputedLane__Sequence
{
  v2x_msg__msg__ComputedLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__ComputedLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__COMPUTED_LANE__STRUCT_H_
