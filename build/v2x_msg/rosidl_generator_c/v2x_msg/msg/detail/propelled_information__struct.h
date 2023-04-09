// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/PropelledInformation.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PROPELLED_INFORMATION__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__PROPELLED_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PropelledInformation in the package v2x_msg.
typedef struct v2x_msg__msg__PropelledInformation
{
  int64_t human;
  int64_t animal;
  int64_t motor;
} v2x_msg__msg__PropelledInformation;

// Struct for a sequence of v2x_msg__msg__PropelledInformation.
typedef struct v2x_msg__msg__PropelledInformation__Sequence
{
  v2x_msg__msg__PropelledInformation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__PropelledInformation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__PROPELLED_INFORMATION__STRUCT_H_
