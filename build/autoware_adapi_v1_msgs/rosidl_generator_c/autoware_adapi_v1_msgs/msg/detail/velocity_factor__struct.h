// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/VelocityFactor.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__UNKNOWN = 0
};

/// Constant 'SURROUNDING_OBSTACLE'.
/**
  * constants for type
 */
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__SURROUNDING_OBSTACLE = 1
};

/// Constant 'ROUTE_OBSTACLE'.
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__ROUTE_OBSTACLE = 2
};

/// Constant 'INTERSECTION'.
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__INTERSECTION = 3
};

/// Constant 'CROSSWALK'.
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__CROSSWALK = 4
};

/// Constant 'REAR_CHECK'.
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__REAR_CHECK = 5
};

/// Constant 'USER_DEFINED_DETECTION_AREA'.
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__USER_DEFINED_DETECTION_AREA = 6
};

/// Constant 'NO_STOPPING_AREA'.
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__NO_STOPPING_AREA = 7
};

/// Constant 'STOP_SIGN'.
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__STOP_SIGN = 8
};

/// Constant 'TRAFFIC_SIGNAL'.
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__TRAFFIC_SIGNAL = 9
};

/// Constant 'V2I_GATE_CONTROL_ENTER'.
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__V2I_GATE_CONTROL_ENTER = 10
};

/// Constant 'V2I_GATE_CONTROL_LEAVE'.
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__V2I_GATE_CONTROL_LEAVE = 11
};

/// Constant 'MERGE'.
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__MERGE = 12
};

/// Constant 'SIDEWALK'.
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__SIDEWALK = 13
};

/// Constant 'LANE_CHANGE'.
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__LANE_CHANGE = 14
};

/// Constant 'AVOIDANCE'.
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__AVOIDANCE = 15
};

/// Constant 'EMERGENCY_STOP_OPERATION'.
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__EMERGENCY_STOP_OPERATION = 16
};

/// Constant 'APPROACHING'.
/**
  * constants for status
 */
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__APPROACHING = 1
};

/// Constant 'STOPPED'.
enum
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__STOPPED = 2
};

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'detail'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VelocityFactor in the package autoware_adapi_v1_msgs.
/**
  * constants for common use
 */
typedef struct autoware_adapi_v1_msgs__msg__VelocityFactor
{
  /// variables
  geometry_msgs__msg__Pose pose;
  float distance;
  uint16_t type;
  uint16_t status;
  rosidl_runtime_c__String detail;
} autoware_adapi_v1_msgs__msg__VelocityFactor;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__VelocityFactor.
typedef struct autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence
{
  autoware_adapi_v1_msgs__msg__VelocityFactor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR__STRUCT_H_
