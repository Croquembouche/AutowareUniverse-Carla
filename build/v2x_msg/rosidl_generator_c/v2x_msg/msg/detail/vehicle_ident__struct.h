// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/VehicleIdent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_IDENT__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__VEHICLE_IDENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'vin'
// Member 'ownercode'
#include "rosidl_runtime_c/string.h"
// Member 'id'
#include "v2x_msg/msg/detail/vehicle_id__struct.h"
// Member 'vehicleclass'
#include "v2x_msg/msg/detail/vehicle_class__struct.h"

// Struct defined in msg/VehicleIdent in the package v2x_msg.
typedef struct v2x_msg__msg__VehicleIdent
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String vin;
  rosidl_runtime_c__String ownercode;
  v2x_msg__msg__VehicleID id;
  int64_t vehicletype;
  v2x_msg__msg__VehicleClass vehicleclass;
} v2x_msg__msg__VehicleIdent;

// Struct for a sequence of v2x_msg__msg__VehicleIdent.
typedef struct v2x_msg__msg__VehicleIdent__Sequence
{
  v2x_msg__msg__VehicleIdent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__VehicleIdent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_IDENT__STRUCT_H_
