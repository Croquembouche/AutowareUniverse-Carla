// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_vehicle_msgs:srv/ControlModeCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__CONTROL_MODE_COMMAND__STRUCT_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__CONTROL_MODE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NO_COMMAND'.
enum
{
  autoware_auto_vehicle_msgs__srv__ControlModeCommand_Request__NO_COMMAND = 0
};

/// Constant 'AUTONOMOUS'.
enum
{
  autoware_auto_vehicle_msgs__srv__ControlModeCommand_Request__AUTONOMOUS = 1
};

/// Constant 'AUTONOMOUS_STEER_ONLY'.
enum
{
  autoware_auto_vehicle_msgs__srv__ControlModeCommand_Request__AUTONOMOUS_STEER_ONLY = 2
};

/// Constant 'AUTONOMOUS_VELOCITY_ONLY'.
enum
{
  autoware_auto_vehicle_msgs__srv__ControlModeCommand_Request__AUTONOMOUS_VELOCITY_ONLY = 3
};

/// Constant 'MANUAL'.
enum
{
  autoware_auto_vehicle_msgs__srv__ControlModeCommand_Request__MANUAL = 4
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in srv/ControlModeCommand in the package autoware_auto_vehicle_msgs.
typedef struct autoware_auto_vehicle_msgs__srv__ControlModeCommand_Request
{
  builtin_interfaces__msg__Time stamp;
  uint8_t mode;
} autoware_auto_vehicle_msgs__srv__ControlModeCommand_Request;

// Struct for a sequence of autoware_auto_vehicle_msgs__srv__ControlModeCommand_Request.
typedef struct autoware_auto_vehicle_msgs__srv__ControlModeCommand_Request__Sequence
{
  autoware_auto_vehicle_msgs__srv__ControlModeCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__srv__ControlModeCommand_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ControlModeCommand in the package autoware_auto_vehicle_msgs.
typedef struct autoware_auto_vehicle_msgs__srv__ControlModeCommand_Response
{
  bool success;
} autoware_auto_vehicle_msgs__srv__ControlModeCommand_Response;

// Struct for a sequence of autoware_auto_vehicle_msgs__srv__ControlModeCommand_Response.
typedef struct autoware_auto_vehicle_msgs__srv__ControlModeCommand_Response__Sequence
{
  autoware_auto_vehicle_msgs__srv__ControlModeCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__srv__ControlModeCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__CONTROL_MODE_COMMAND__STRUCT_H_
