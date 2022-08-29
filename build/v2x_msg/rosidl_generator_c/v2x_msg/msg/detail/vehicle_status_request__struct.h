// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/VehicleStatusRequest.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_STATUS_REQUEST__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__VEHICLE_STATUS_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/VehicleStatusRequest in the package v2x_msg.
typedef struct v2x_msg__msg__VehicleStatusRequest
{
  int64_t datatype;
  int64_t subtype;
  int64_t sendonlessthenvalue;
  int64_t sendonmorethenvalue;
  bool sendall;
} v2x_msg__msg__VehicleStatusRequest;

// Struct for a sequence of v2x_msg__msg__VehicleStatusRequest.
typedef struct v2x_msg__msg__VehicleStatusRequest__Sequence
{
  v2x_msg__msg__VehicleStatusRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__VehicleStatusRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_STATUS_REQUEST__STRUCT_H_
