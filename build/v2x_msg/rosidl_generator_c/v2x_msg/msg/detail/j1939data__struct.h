// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/J1939data.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__J1939DATA__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__J1939DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tires'
#include "v2x_msg/msg/detail/tire_data__struct.h"
// Member 'axles'
#include "v2x_msg/msg/detail/axle_weight__struct.h"

// Struct defined in msg/J1939data in the package v2x_msg.
typedef struct v2x_msg__msg__J1939data
{
  v2x_msg__msg__TireData__Sequence tires;
  v2x_msg__msg__AxleWeight__Sequence axles;
  int64_t trailerweight;
  int64_t cargoweight;
  int64_t steeringaxletemperture;
  int64_t driveaxlelocation;
  int64_t driveaxleliftairpressure;
  int64_t driveaxletemperature;
  int64_t driveaxlelubpressure;
  int64_t steeringaxlelubepressure;
} v2x_msg__msg__J1939data;

// Struct for a sequence of v2x_msg__msg__J1939data.
typedef struct v2x_msg__msg__J1939data__Sequence
{
  v2x_msg__msg__J1939data * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__J1939data__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__J1939DATA__STRUCT_H_
