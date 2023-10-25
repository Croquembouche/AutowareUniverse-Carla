// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_system_msgs:msg/EmergencyState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE__STRUCT_H_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NORMAL'.
enum
{
  autoware_auto_system_msgs__msg__EmergencyState__NORMAL = 1
};

/// Constant 'OVERRIDE_REQUESTING'.
enum
{
  autoware_auto_system_msgs__msg__EmergencyState__OVERRIDE_REQUESTING = 2
};

/// Constant 'MRM_OPERATING'.
enum
{
  autoware_auto_system_msgs__msg__EmergencyState__MRM_OPERATING = 3
};

/// Constant 'MRM_SUCCEEDED'.
enum
{
  autoware_auto_system_msgs__msg__EmergencyState__MRM_SUCCEEDED = 4
};

/// Constant 'MRM_FAILED'.
enum
{
  autoware_auto_system_msgs__msg__EmergencyState__MRM_FAILED = 5
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/EmergencyState in the package autoware_auto_system_msgs.
/**
  *  Message for reporting the emergency state.
 */
typedef struct autoware_auto_system_msgs__msg__EmergencyState
{
  builtin_interfaces__msg__Time stamp;
  ///  Current emergency state fo the system. Possible states are as follows. - NORMAL - the system is not in emergency mode. - OVERRIDE_REQUESTING - the override is requesting. - MRM_OPERATING - during the minimal risk maneuver (MRM) - MRM_SUCCEEDED - MRM operation succeeded. - MRM_FAILED - MRM operation failed.
  uint8_t state;
} autoware_auto_system_msgs__msg__EmergencyState;

// Struct for a sequence of autoware_auto_system_msgs__msg__EmergencyState.
typedef struct autoware_auto_system_msgs__msg__EmergencyState__Sequence
{
  autoware_auto_system_msgs__msg__EmergencyState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_system_msgs__msg__EmergencyState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE__STRUCT_H_
