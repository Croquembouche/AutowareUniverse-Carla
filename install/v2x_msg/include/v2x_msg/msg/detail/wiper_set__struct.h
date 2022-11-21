// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/WiperSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__WIPER_SET__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__WIPER_SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/WiperSet in the package v2x_msg.
typedef struct v2x_msg__msg__WiperSet
{
  int64_t statusfront;
  int64_t ratefront;
  int64_t statusrear;
  int64_t raterear;
} v2x_msg__msg__WiperSet;

// Struct for a sequence of v2x_msg__msg__WiperSet.
typedef struct v2x_msg__msg__WiperSet__Sequence
{
  v2x_msg__msg__WiperSet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__WiperSet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__WIPER_SET__STRUCT_H_
