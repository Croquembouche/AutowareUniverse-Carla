// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/VehicleData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_DATA__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__VEHICLE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bumpers'
#include "v2x_msg/msg/detail/bumper_heights__struct.h"

/// Struct defined in msg/VehicleData in the package v2x_msg.
typedef struct v2x_msg__msg__VehicleData
{
  int64_t height;
  v2x_msg__msg__BumperHeights bumpers;
  int64_t mass;
  int64_t trailerweight;
  int64_t type;
} v2x_msg__msg__VehicleData;

// Struct for a sequence of v2x_msg__msg__VehicleData.
typedef struct v2x_msg__msg__VehicleData__Sequence
{
  v2x_msg__msg__VehicleData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__VehicleData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_DATA__STRUCT_H_
