// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/CSR.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CSR__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__CSR__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"
// Member 'requests'
#include "v2x_msg/msg/detail/requested_item__struct.h"

/// Struct defined in msg/CSR in the package v2x_msg.
typedef struct v2x_msg__msg__CSR
{
  int64_t timestamp;
  int64_t msgcnt;
  rosidl_runtime_c__String id;
  v2x_msg__msg__RequestedItem__Sequence requests;
} v2x_msg__msg__CSR;

// Struct for a sequence of v2x_msg__msg__CSR.
typedef struct v2x_msg__msg__CSR__Sequence
{
  v2x_msg__msg__CSR * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__CSR__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__CSR__STRUCT_H_
