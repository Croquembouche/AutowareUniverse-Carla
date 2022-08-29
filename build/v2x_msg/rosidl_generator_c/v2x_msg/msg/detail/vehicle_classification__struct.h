// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/VehicleClassification.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_CLASSIFICATION__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__VEHICLE_CLASSIFICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/VehicleClassification in the package v2x_msg.
typedef struct v2x_msg__msg__VehicleClassification
{
  int64_t keytype;
  int64_t role;
  int64_t iso3883;
  int64_t hpmstype;
  int64_t vehicletype;
  int64_t responseequip;
  int64_t respondertype;
  int64_t fueltype;
} v2x_msg__msg__VehicleClassification;

// Struct for a sequence of v2x_msg__msg__VehicleClassification.
typedef struct v2x_msg__msg__VehicleClassification__Sequence
{
  v2x_msg__msg__VehicleClassification * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__VehicleClassification__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_CLASSIFICATION__STRUCT_H_
