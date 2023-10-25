// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_system_msgs:msg/AutowareState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__AUTOWARE_STATE__STRUCT_H_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__AUTOWARE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INITIALIZING'.
enum
{
  autoware_auto_system_msgs__msg__AutowareState__INITIALIZING = 1
};

/// Constant 'WAITING_FOR_ROUTE'.
enum
{
  autoware_auto_system_msgs__msg__AutowareState__WAITING_FOR_ROUTE = 2
};

/// Constant 'PLANNING'.
enum
{
  autoware_auto_system_msgs__msg__AutowareState__PLANNING = 3
};

/// Constant 'WAITING_FOR_ENGAGE'.
enum
{
  autoware_auto_system_msgs__msg__AutowareState__WAITING_FOR_ENGAGE = 4
};

/// Constant 'DRIVING'.
enum
{
  autoware_auto_system_msgs__msg__AutowareState__DRIVING = 5
};

/// Constant 'ARRIVED_GOAL'.
enum
{
  autoware_auto_system_msgs__msg__AutowareState__ARRIVED_GOAL = 6
};

/// Constant 'FINALIZING'.
enum
{
  autoware_auto_system_msgs__msg__AutowareState__FINALIZING = 7
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/AutowareState in the package autoware_auto_system_msgs.
/**
  *  A message for reporting the Autoware system status.
 */
typedef struct autoware_auto_system_msgs__msg__AutowareState
{
  builtin_interfaces__msg__Time stamp;
  ///  Current state of the Autoware system.
  uint8_t state;
} autoware_auto_system_msgs__msg__AutowareState;

// Struct for a sequence of autoware_auto_system_msgs__msg__AutowareState.
typedef struct autoware_auto_system_msgs__msg__AutowareState__Sequence
{
  autoware_auto_system_msgs__msg__AutowareState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_system_msgs__msg__AutowareState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__AUTOWARE_STATE__STRUCT_H_
