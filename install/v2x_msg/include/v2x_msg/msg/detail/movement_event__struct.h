// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/MovementEvent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timing'
#include "v2x_msg/msg/detail/time_change_details__struct.h"
// Member 'speeds'
#include "v2x_msg/msg/detail/advisory_speed__struct.h"

// Struct defined in msg/MovementEvent in the package v2x_msg.
typedef struct v2x_msg__msg__MovementEvent
{
  int64_t movementphasestate;
  v2x_msg__msg__TimeChangeDetails timing;
  v2x_msg__msg__AdvisorySpeed__Sequence speeds;
} v2x_msg__msg__MovementEvent;

// Struct for a sequence of v2x_msg__msg__MovementEvent.
typedef struct v2x_msg__msg__MovementEvent__Sequence
{
  v2x_msg__msg__MovementEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__MovementEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_H_
