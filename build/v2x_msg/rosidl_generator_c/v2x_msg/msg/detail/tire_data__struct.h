// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/TireData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TIRE_DATA__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__TIRE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TireData in the package v2x_msg.
typedef struct v2x_msg__msg__TireData
{
  int64_t location;
  int64_t pressure;
  int64_t temp;
  int64_t wheelsensorstatus;
  int64_t wheelendelectfault;
  int64_t leakagerate;
  int64_t detection;
} v2x_msg__msg__TireData;

// Struct for a sequence of v2x_msg__msg__TireData.
typedef struct v2x_msg__msg__TireData__Sequence
{
  v2x_msg__msg__TireData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__TireData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__TIRE_DATA__STRUCT_H_
