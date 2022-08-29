// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/SSM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SSM__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__SSM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "v2x_msg/msg/detail/signal_status__struct.h"

// Struct defined in msg/SSM in the package v2x_msg.
typedef struct v2x_msg__msg__SSM
{
  int64_t timestamp;
  int64_t second;
  int64_t sequencenumber;
  v2x_msg__msg__SignalStatus__Sequence status;
} v2x_msg__msg__SSM;

// Struct for a sequence of v2x_msg__msg__SSM.
typedef struct v2x_msg__msg__SSM__Sequence
{
  v2x_msg__msg__SSM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__SSM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__SSM__STRUCT_H_
