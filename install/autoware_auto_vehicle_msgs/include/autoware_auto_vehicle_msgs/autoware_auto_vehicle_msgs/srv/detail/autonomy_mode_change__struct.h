// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_vehicle_msgs:srv/AutonomyModeChange.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__AUTONOMY_MODE_CHANGE__STRUCT_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__AUTONOMY_MODE_CHANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_MANUAL'.
enum
{
  autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__MODE_MANUAL = 0
};

/// Constant 'MODE_AUTONOMOUS'.
enum
{
  autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__MODE_AUTONOMOUS = 1
};

/// Struct defined in srv/AutonomyModeChange in the package autoware_auto_vehicle_msgs.
typedef struct autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request
{
  /// The desired autonomy mode
  uint8_t mode;
} autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request;

// Struct for a sequence of autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request.
typedef struct autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence
{
  autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'empty'
#include "std_msgs/msg/detail/empty__struct.h"

/// Struct defined in srv/AutonomyModeChange in the package autoware_auto_vehicle_msgs.
typedef struct autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response
{
  /// No response is used because changing the autonomy mode requires non-trivial time
  std_msgs__msg__Empty empty;
} autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response;

// Struct for a sequence of autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response.
typedef struct autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence
{
  autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__AUTONOMY_MODE_CHANGE__STRUCT_H_
