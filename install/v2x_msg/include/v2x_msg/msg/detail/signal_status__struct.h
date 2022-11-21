// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/SignalStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_STATUS__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__SIGNAL_STATUS__STRUCT_H_

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
// Member 'sigstatus'
#include "v2x_msg/msg/detail/signal_status_package__struct.h"

// Struct defined in msg/SignalStatus in the package v2x_msg.
typedef struct v2x_msg__msg__SignalStatus
{
  int64_t sequencenumber;
  v2x_msg__msg__IntersectionReferenceID id;
  v2x_msg__msg__SignalStatusPackage__Sequence sigstatus;
} v2x_msg__msg__SignalStatus;

// Struct for a sequence of v2x_msg__msg__SignalStatus.
typedef struct v2x_msg__msg__SignalStatus__Sequence
{
  v2x_msg__msg__SignalStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__SignalStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_STATUS__STRUCT_H_
