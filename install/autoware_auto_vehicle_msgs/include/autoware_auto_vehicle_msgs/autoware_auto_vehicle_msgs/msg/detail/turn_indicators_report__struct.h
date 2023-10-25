// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_vehicle_msgs:msg/TurnIndicatorsReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__TURN_INDICATORS_REPORT__STRUCT_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__TURN_INDICATORS_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DISABLE'.
enum
{
  autoware_auto_vehicle_msgs__msg__TurnIndicatorsReport__DISABLE = 1
};

/// Constant 'ENABLE_LEFT'.
enum
{
  autoware_auto_vehicle_msgs__msg__TurnIndicatorsReport__ENABLE_LEFT = 2
};

/// Constant 'ENABLE_RIGHT'.
enum
{
  autoware_auto_vehicle_msgs__msg__TurnIndicatorsReport__ENABLE_RIGHT = 3
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/TurnIndicatorsReport in the package autoware_auto_vehicle_msgs.
typedef struct autoware_auto_vehicle_msgs__msg__TurnIndicatorsReport
{
  builtin_interfaces__msg__Time stamp;
  uint8_t report;
} autoware_auto_vehicle_msgs__msg__TurnIndicatorsReport;

// Struct for a sequence of autoware_auto_vehicle_msgs__msg__TurnIndicatorsReport.
typedef struct autoware_auto_vehicle_msgs__msg__TurnIndicatorsReport__Sequence
{
  autoware_auto_vehicle_msgs__msg__TurnIndicatorsReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__msg__TurnIndicatorsReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__TURN_INDICATORS_REPORT__STRUCT_H_
