// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/PrivilegedEvents.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PRIVILEGED_EVENTS__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__PRIVILEGED_EVENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'event'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PrivilegedEvents in the package v2x_msg.
typedef struct v2x_msg__msg__PrivilegedEvents
{
  int64_t notused;
  rosidl_runtime_c__String event;
} v2x_msg__msg__PrivilegedEvents;

// Struct for a sequence of v2x_msg__msg__PrivilegedEvents.
typedef struct v2x_msg__msg__PrivilegedEvents__Sequence
{
  v2x_msg__msg__PrivilegedEvents * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__PrivilegedEvents__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__PRIVILEGED_EVENTS__STRUCT_H_
