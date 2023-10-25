// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/SignalRequestPackage.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST_PACKAGE__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST_PACKAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'signalrequest'
#include "v2x_msg/msg/detail/signal_request__struct.h"

/// Struct defined in msg/SignalRequestPackage in the package v2x_msg.
typedef struct v2x_msg__msg__SignalRequestPackage
{
  v2x_msg__msg__SignalRequest signalrequest;
  int64_t minute;
  int64_t second;
  int64_t duration;
} v2x_msg__msg__SignalRequestPackage;

// Struct for a sequence of v2x_msg__msg__SignalRequestPackage.
typedef struct v2x_msg__msg__SignalRequestPackage__Sequence
{
  v2x_msg__msg__SignalRequestPackage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__SignalRequestPackage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST_PACKAGE__STRUCT_H_
