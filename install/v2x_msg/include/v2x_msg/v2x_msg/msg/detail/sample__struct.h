// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/Sample.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SAMPLE__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__SAMPLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Sample in the package v2x_msg.
typedef struct v2x_msg__msg__Sample
{
  int64_t samplestart;
  int64_t sampleend;
} v2x_msg__msg__Sample;

// Struct for a sequence of v2x_msg__msg__Sample.
typedef struct v2x_msg__msg__Sample__Sequence
{
  v2x_msg__msg__Sample * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__Sample__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__SAMPLE__STRUCT_H_
