// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/PathHistory.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PATH_HISTORY__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__PATH_HISTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'initialposition'
#include "v2x_msg/msg/detail/full_position_vector__struct.h"
// Member 'currgnssstatus'
#include "rosidl_runtime_c/string.h"
// Member 'crumbdata'
#include "v2x_msg/msg/detail/path_history_point__struct.h"

// Struct defined in msg/PathHistory in the package v2x_msg.
typedef struct v2x_msg__msg__PathHistory
{
  v2x_msg__msg__FullPositionVector initialposition;
  rosidl_runtime_c__String currgnssstatus;
  v2x_msg__msg__PathHistoryPoint__Sequence crumbdata;
} v2x_msg__msg__PathHistory;

// Struct for a sequence of v2x_msg__msg__PathHistory.
typedef struct v2x_msg__msg__PathHistory__Sequence
{
  v2x_msg__msg__PathHistory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__PathHistory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__PATH_HISTORY__STRUCT_H_
