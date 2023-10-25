// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/RestrictionClassAssignment.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'users'
#include "v2x_msg/msg/detail/restriction_user_type__struct.h"

/// Struct defined in msg/RestrictionClassAssignment in the package v2x_msg.
typedef struct v2x_msg__msg__RestrictionClassAssignment
{
  int64_t restrictionclassid;
  v2x_msg__msg__RestrictionUserType__Sequence users;
} v2x_msg__msg__RestrictionClassAssignment;

// Struct for a sequence of v2x_msg__msg__RestrictionClassAssignment.
typedef struct v2x_msg__msg__RestrictionClassAssignment__Sequence
{
  v2x_msg__msg__RestrictionClassAssignment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__RestrictionClassAssignment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__STRUCT_H_
