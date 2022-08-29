// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/SignalRequesterInfo.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_REQUESTER_INFO__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__SIGNAL_REQUESTER_INFO__STRUCT_H_

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
#include "v2x_msg/msg/detail/vehicle_id__struct.h"
// Member 'typedata'
#include "v2x_msg/msg/detail/requestor_type__struct.h"

// Struct defined in msg/SignalRequesterInfo in the package v2x_msg.
typedef struct v2x_msg__msg__SignalRequesterInfo
{
  v2x_msg__msg__VehicleID id;
  int64_t request;
  int64_t sequencenumber;
  int64_t basicvehiclerole;
  v2x_msg__msg__RequestorType typedata;
} v2x_msg__msg__SignalRequesterInfo;

// Struct for a sequence of v2x_msg__msg__SignalRequesterInfo.
typedef struct v2x_msg__msg__SignalRequesterInfo__Sequence
{
  v2x_msg__msg__SignalRequesterInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__SignalRequesterInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_REQUESTER_INFO__STRUCT_H_
