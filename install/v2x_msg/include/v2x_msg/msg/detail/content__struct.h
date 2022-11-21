// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/Content.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONTENT__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__CONTENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'advisory'
#include "v2x_msg/msg/detail/iti_scodesandtext__struct.h"
// Member 'workzone'
#include "v2x_msg/msg/detail/work_zone__struct.h"
// Member 'genericsign'
#include "v2x_msg/msg/detail/generic_signage__struct.h"
// Member 'speedlimit'
#include "v2x_msg/msg/detail/itis_speed_limit__struct.h"
// Member 'exitservice'
#include "v2x_msg/msg/detail/exit_service__struct.h"

// Struct defined in msg/Content in the package v2x_msg.
typedef struct v2x_msg__msg__Content
{
  v2x_msg__msg__ITIScodesandtext__Sequence advisory;
  v2x_msg__msg__WorkZone__Sequence workzone;
  v2x_msg__msg__GenericSignage__Sequence genericsign;
  v2x_msg__msg__ITISSpeedLimit__Sequence speedlimit;
  v2x_msg__msg__ExitService__Sequence exitservice;
} v2x_msg__msg__Content;

// Struct for a sequence of v2x_msg__msg__Content.
typedef struct v2x_msg__msg__Content__Sequence
{
  v2x_msg__msg__Content * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__Content__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__CONTENT__STRUCT_H_
