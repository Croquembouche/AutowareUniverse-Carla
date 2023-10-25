// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/VehicleClass.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_CLASS__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__VEHICLE_CLASS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleClass in the package v2x_msg.
typedef struct v2x_msg__msg__VehicleClass
{
  int64_t vgroup;
  int64_t rgroup;
  int64_t requip;
} v2x_msg__msg__VehicleClass;

// Struct for a sequence of v2x_msg__msg__VehicleClass.
typedef struct v2x_msg__msg__VehicleClass__Sequence
{
  v2x_msg__msg__VehicleClass * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__VehicleClass__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_CLASS__STRUCT_H_
