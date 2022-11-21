// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/WorkZone.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__WORK_ZONE__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__WORK_ZONE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'item'
#include "v2x_msg/msg/detail/work_zonecontent__struct.h"

// Struct defined in msg/WorkZone in the package v2x_msg.
typedef struct v2x_msg__msg__WorkZone
{
  v2x_msg__msg__WorkZonecontent__Sequence item;
} v2x_msg__msg__WorkZone;

// Struct for a sequence of v2x_msg__msg__WorkZone.
typedef struct v2x_msg__msg__WorkZone__Sequence
{
  v2x_msg__msg__WorkZone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__WorkZone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__WORK_ZONE__STRUCT_H_
