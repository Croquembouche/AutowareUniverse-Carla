// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/BSMCoreData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__BSM_CORE_DATA__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__BSM_CORE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'accuracy'
#include "v2x_msg/msg/detail/positional_accuracy__struct.h"
// Member 'accelset'
#include "v2x_msg/msg/detail/acceleration_set4_way__struct.h"
// Member 'brakes'
#include "v2x_msg/msg/detail/brake_system_status__struct.h"
// Member 'size'
#include "v2x_msg/msg/detail/vehicle_size__struct.h"

/// Struct defined in msg/BSMCoreData in the package v2x_msg.
typedef struct v2x_msg__msg__BSMCoreData
{
  int64_t msgcnt;
  rosidl_runtime_c__String id;
  int64_t secmark;
  int64_t lat;
  int64_t longitude;
  int64_t elev;
  v2x_msg__msg__PositionalAccuracy accuracy;
  int64_t transmission;
  int64_t speed;
  int64_t heading;
  int64_t angle;
  v2x_msg__msg__AccelerationSet4Way accelset;
  v2x_msg__msg__BrakeSystemStatus brakes;
  v2x_msg__msg__VehicleSize size;
} v2x_msg__msg__BSMCoreData;

// Struct for a sequence of v2x_msg__msg__BSMCoreData.
typedef struct v2x_msg__msg__BSMCoreData__Sequence
{
  v2x_msg__msg__BSMCoreData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__BSMCoreData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__BSM_CORE_DATA__STRUCT_H_
