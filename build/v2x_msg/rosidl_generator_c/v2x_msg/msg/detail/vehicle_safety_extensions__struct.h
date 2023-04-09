// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/VehicleSafetyExtensions.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vehicleeventflags'
// Member 'texteriorlights'
#include "rosidl_runtime_c/string.h"
// Member 'pathhistory'
#include "v2x_msg/msg/detail/path_history__struct.h"
// Member 'pathprediction'
#include "v2x_msg/msg/detail/path_prediction__struct.h"

/// Struct defined in msg/VehicleSafetyExtensions in the package v2x_msg.
typedef struct v2x_msg__msg__VehicleSafetyExtensions
{
  rosidl_runtime_c__String vehicleeventflags;
  v2x_msg__msg__PathHistory pathhistory;
  v2x_msg__msg__PathPrediction pathprediction;
  rosidl_runtime_c__String texteriorlights;
} v2x_msg__msg__VehicleSafetyExtensions;

// Struct for a sequence of v2x_msg__msg__VehicleSafetyExtensions.
typedef struct v2x_msg__msg__VehicleSafetyExtensions__Sequence
{
  v2x_msg__msg__VehicleSafetyExtensions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__VehicleSafetyExtensions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__STRUCT_H_
