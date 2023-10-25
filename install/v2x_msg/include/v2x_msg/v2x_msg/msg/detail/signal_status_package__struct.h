// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/SignalStatusPackage.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_STATUS_PACKAGE__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__SIGNAL_STATUS_PACKAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'requester'
#include "v2x_msg/msg/detail/signal_requester_info__struct.h"
// Member 'inboundon'
// Member 'outboundon'
#include "v2x_msg/msg/detail/intersection_access_point__struct.h"

/// Struct defined in msg/SignalStatusPackage in the package v2x_msg.
typedef struct v2x_msg__msg__SignalStatusPackage
{
  v2x_msg__msg__SignalRequesterInfo requester;
  v2x_msg__msg__IntersectionAccessPoint inboundon;
  v2x_msg__msg__IntersectionAccessPoint outboundon;
  int64_t minute;
  int64_t second;
  int64_t duration;
  int64_t status;
} v2x_msg__msg__SignalStatusPackage;

// Struct for a sequence of v2x_msg__msg__SignalStatusPackage.
typedef struct v2x_msg__msg__SignalStatusPackage__Sequence
{
  v2x_msg__msg__SignalStatusPackage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__SignalStatusPackage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_STATUS_PACKAGE__STRUCT_H_
