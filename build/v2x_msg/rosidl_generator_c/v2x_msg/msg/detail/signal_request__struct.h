// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/SignalRequest.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "v2x_msg/msg/detail/intersection_reference_id__struct.h"
// Member 'inboundlane'
// Member 'outboundlane'
#include "v2x_msg/msg/detail/intersection_access_point__struct.h"

/// Struct defined in msg/SignalRequest in the package v2x_msg.
typedef struct v2x_msg__msg__SignalRequest
{
  v2x_msg__msg__IntersectionReferenceID id;
  int64_t requestid;
  int64_t requesttype;
  v2x_msg__msg__IntersectionAccessPoint inboundlane;
  v2x_msg__msg__IntersectionAccessPoint outboundlane;
} v2x_msg__msg__SignalRequest;

// Struct for a sequence of v2x_msg__msg__SignalRequest.
typedef struct v2x_msg__msg__SignalRequest__Sequence
{
  v2x_msg__msg__SignalRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__SignalRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST__STRUCT_H_
