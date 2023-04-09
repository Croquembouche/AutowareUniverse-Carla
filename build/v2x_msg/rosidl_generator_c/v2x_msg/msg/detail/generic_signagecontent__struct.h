// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/GenericSignagecontent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__GENERIC_SIGNAGECONTENT__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__GENERIC_SIGNAGECONTENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GenericSignagecontent in the package v2x_msg.
typedef struct v2x_msg__msg__GenericSignagecontent
{
  int64_t itis;
  rosidl_runtime_c__String text;
} v2x_msg__msg__GenericSignagecontent;

// Struct for a sequence of v2x_msg__msg__GenericSignagecontent.
typedef struct v2x_msg__msg__GenericSignagecontent__Sequence
{
  v2x_msg__msg__GenericSignagecontent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__GenericSignagecontent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__GENERIC_SIGNAGECONTENT__STRUCT_H_
