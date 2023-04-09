// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/NMEA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NMEA__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__NMEA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'payload'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/NMEA in the package v2x_msg.
typedef struct v2x_msg__msg__NMEA
{
  int64_t timestamp;
  int64_t rev;
  int64_t msg;
  int64_t wdcount;
  rosidl_runtime_c__String payload;
} v2x_msg__msg__NMEA;

// Struct for a sequence of v2x_msg__msg__NMEA.
typedef struct v2x_msg__msg__NMEA__Sequence
{
  v2x_msg__msg__NMEA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__NMEA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__NMEA__STRUCT_H_
