// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/MovementState.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__MOVEMENT_STATE__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__MOVEMENT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'movementname'
#include "rosidl_runtime_c/string.h"
// Member 'statetimespeed'
#include "v2x_msg/msg/detail/movement_event__struct.h"
// Member 'maneuverassistlist'
#include "v2x_msg/msg/detail/connection_maneuver_assist__struct.h"

// Struct defined in msg/MovementState in the package v2x_msg.
typedef struct v2x_msg__msg__MovementState
{
  rosidl_runtime_c__String movementname;
  int64_t signalgroupid;
  v2x_msg__msg__MovementEvent__Sequence statetimespeed;
  v2x_msg__msg__ConnectionManeuverAssist maneuverassistlist;
} v2x_msg__msg__MovementState;

// Struct for a sequence of v2x_msg__msg__MovementState.
typedef struct v2x_msg__msg__MovementState__Sequence
{
  v2x_msg__msg__MovementState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__MovementState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__MOVEMENT_STATE__STRUCT_H_
