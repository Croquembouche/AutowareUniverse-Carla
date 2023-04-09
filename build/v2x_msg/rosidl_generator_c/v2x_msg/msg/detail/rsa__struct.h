// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/RSA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__RSA__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__RSA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'desrciption'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'priority'
// Member 'heading'
// Member 'furtherinfoid'
#include "rosidl_runtime_c/string.h"
// Member 'position'
#include "v2x_msg/msg/detail/full_position_vector__struct.h"

/// Struct defined in msg/RSA in the package v2x_msg.
typedef struct v2x_msg__msg__RSA
{
  int64_t msgcnt;
  int64_t timestamp;
  int64_t typeevent;
  rosidl_runtime_c__int64__Sequence desrciption;
  rosidl_runtime_c__String priority;
  rosidl_runtime_c__String heading;
  int64_t extent;
  v2x_msg__msg__FullPositionVector position;
  rosidl_runtime_c__String furtherinfoid;
} v2x_msg__msg__RSA;

// Struct for a sequence of v2x_msg__msg__RSA.
typedef struct v2x_msg__msg__RSA__Sequence
{
  v2x_msg__msg__RSA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__RSA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__RSA__STRUCT_H_
