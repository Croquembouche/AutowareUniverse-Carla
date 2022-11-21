// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/TimeChangeDetails.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TimeChangeDetails in the package v2x_msg.
typedef struct v2x_msg__msg__TimeChangeDetails
{
  int64_t startime;
  int64_t minendtime;
  int64_t maxendtime;
  int64_t likelytime;
  int64_t confidence;
  int64_t nexttime;
} v2x_msg__msg__TimeChangeDetails;

// Struct for a sequence of v2x_msg__msg__TimeChangeDetails.
typedef struct v2x_msg__msg__TimeChangeDetails__Sequence
{
  v2x_msg__msg__TimeChangeDetails * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__TimeChangeDetails__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_H_
