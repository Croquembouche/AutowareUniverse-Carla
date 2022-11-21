// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lights'
// Member 'gnssstatus'
#include "rosidl_runtime_c/string.h"
// Member 'wipers'
#include "v2x_msg/msg/detail/wiper_set__struct.h"
// Member 'brakestatus'
#include "v2x_msg/msg/detail/brake_system_status__struct.h"
// Member 'steering'
#include "v2x_msg/msg/detail/steering__struct.h"
// Member 'accelsets'
#include "v2x_msg/msg/detail/accel_sets__struct.h"
// Member 'object'
#include "v2x_msg/msg/detail/object__struct.h"
// Member 'fullpos'
#include "v2x_msg/msg/detail/full_position_vector__struct.h"
// Member 'speedheadc'
#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__struct.h"
// Member 'vehicledata'
#include "v2x_msg/msg/detail/vehicle_data__struct.h"
// Member 'vehicleident'
#include "v2x_msg/msg/detail/vehicle_ident__struct.h"
// Member 'j1939data'
#include "v2x_msg/msg/detail/j1939data__struct.h"
// Member 'weatherreport'
#include "v2x_msg/msg/detail/weather_report__struct.h"

// Struct defined in msg/VehicleStatus in the package v2x_msg.
typedef struct v2x_msg__msg__VehicleStatus
{
  rosidl_runtime_c__String lights;
  int64_t lightbar;
  v2x_msg__msg__WiperSet wipers;
  v2x_msg__msg__BrakeSystemStatus brakestatus;
  int64_t roadfriction;
  int64_t sundata;
  int64_t raindata;
  int64_t airtemp;
  int64_t airpres;
  v2x_msg__msg__Steering steering;
  v2x_msg__msg__AccelSets accelsets;
  v2x_msg__msg__Object object;
  v2x_msg__msg__FullPositionVector fullpos;
  int64_t throttlepos;
  v2x_msg__msg__SpeedandHeadingandThrottleConfidence speedheadc;
  int64_t speedc;
  v2x_msg__msg__VehicleData vehicledata;
  v2x_msg__msg__VehicleIdent vehicleident;
  v2x_msg__msg__J1939data j1939data;
  v2x_msg__msg__WeatherReport weatherreport;
  rosidl_runtime_c__String gnssstatus;
} v2x_msg__msg__VehicleStatus;

// Struct for a sequence of v2x_msg__msg__VehicleStatus.
typedef struct v2x_msg__msg__VehicleStatus__Sequence
{
  v2x_msg__msg__VehicleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__VehicleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_
