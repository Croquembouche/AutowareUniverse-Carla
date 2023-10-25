// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/Connection.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONNECTION__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__CONNECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'connectinglane'
#include "v2x_msg/msg/detail/connecting_lane__struct.h"
// Member 'remoteintersection'
#include "v2x_msg/msg/detail/intersection_reference_id__struct.h"

/// Struct defined in msg/Connection in the package v2x_msg.
typedef struct v2x_msg__msg__Connection
{
  v2x_msg__msg__ConnectingLane connectinglane;
  v2x_msg__msg__IntersectionReferenceID remoteintersection;
  int64_t signalgroup;
  int64_t userclass;
  int64_t laneconnectonid;
} v2x_msg__msg__Connection;

// Struct for a sequence of v2x_msg__msg__Connection.
typedef struct v2x_msg__msg__Connection__Sequence
{
  v2x_msg__msg__Connection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__Connection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__CONNECTION__STRUCT_H_
