// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/OperationModeState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__OPERATION_MODE_STATE__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__OPERATION_MODE_STATE__STRUCT_H_

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
  autoware_adapi_v1_msgs__msg__OperationModeState__UNKNOWN = 0
};

/// Constant 'STOP'.
enum
{
  autoware_adapi_v1_msgs__msg__OperationModeState__STOP = 1
};

/// Constant 'AUTONOMOUS'.
enum
{
  autoware_adapi_v1_msgs__msg__OperationModeState__AUTONOMOUS = 2
};

/// Constant 'LOCAL'.
enum
{
  autoware_adapi_v1_msgs__msg__OperationModeState__LOCAL = 3
};

/// Constant 'REMOTE'.
enum
{
  autoware_adapi_v1_msgs__msg__OperationModeState__REMOTE = 4
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/OperationModeState in the package autoware_adapi_v1_msgs.
/**
  * constants for mode
 */
typedef struct autoware_adapi_v1_msgs__msg__OperationModeState
{
  /// variables
  builtin_interfaces__msg__Time stamp;
  uint8_t mode;
  bool is_autoware_control_enabled;
  bool is_in_transition;
  bool is_stop_mode_available;
  bool is_autonomous_mode_available;
  bool is_local_mode_available;
  bool is_remote_mode_available;
} autoware_adapi_v1_msgs__msg__OperationModeState;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__OperationModeState.
typedef struct autoware_adapi_v1_msgs__msg__OperationModeState__Sequence
{
  autoware_adapi_v1_msgs__msg__OperationModeState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__OperationModeState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__OPERATION_MODE_STATE__STRUCT_H_
