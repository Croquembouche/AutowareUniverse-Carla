// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/RequestorDescription.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REQUESTOR_DESCRIPTION__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__REQUESTOR_DESCRIPTION__STRUCT_H_

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
// Member 'type'
#include "v2x_msg/msg/detail/requestor_type__struct.h"
// Member 'position'
#include "v2x_msg/msg/detail/requestor_position_vector__struct.h"
// Member 'name'
// Member 'routename'
// Member 'transitstatus'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/RequestorDescription in the package v2x_msg.
typedef struct v2x_msg__msg__RequestorDescription
{
  v2x_msg__msg__VehicleID id;
  v2x_msg__msg__RequestorType type;
  v2x_msg__msg__RequestorPositionVector position;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String routename;
  rosidl_runtime_c__String transitstatus;
  int64_t transitoccupancy;
  int64_t transitschedule;
} v2x_msg__msg__RequestorDescription;

// Struct for a sequence of v2x_msg__msg__RequestorDescription.
typedef struct v2x_msg__msg__RequestorDescription__Sequence
{
  v2x_msg__msg__RequestorDescription * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__RequestorDescription__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__REQUESTOR_DESCRIPTION__STRUCT_H_
