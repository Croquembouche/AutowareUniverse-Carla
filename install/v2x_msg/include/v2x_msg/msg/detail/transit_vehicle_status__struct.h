// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/TransitVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TRANSIT_VEHICLE_STATUS__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__TRANSIT_VEHICLE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TransitVehicleStatus in the package v2x_msg.
typedef struct v2x_msg__msg__TransitVehicleStatus
{
  int64_t loading;
  int64_t anadause;
  int64_t abikeload;
  int64_t dooropen;
  int64_t charging;
  int64_t atstopline;
} v2x_msg__msg__TransitVehicleStatus;

// Struct for a sequence of v2x_msg__msg__TransitVehicleStatus.
typedef struct v2x_msg__msg__TransitVehicleStatus__Sequence
{
  v2x_msg__msg__TransitVehicleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__TransitVehicleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__TRANSIT_VEHICLE_STATUS__STRUCT_H_
