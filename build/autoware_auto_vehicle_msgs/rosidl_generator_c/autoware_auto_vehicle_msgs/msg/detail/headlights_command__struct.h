// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_vehicle_msgs:msg/HeadlightsCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HEADLIGHTS_COMMAND__STRUCT_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HEADLIGHTS_COMMAND__STRUCT_H_

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
  autoware_auto_vehicle_msgs__msg__HeadlightsCommand__NO_COMMAND = 0
};

/// Constant 'DISABLE'.
enum
{
  autoware_auto_vehicle_msgs__msg__HeadlightsCommand__DISABLE = 1
};

/// Constant 'ENABLE_LOW'.
enum
{
  autoware_auto_vehicle_msgs__msg__HeadlightsCommand__ENABLE_LOW = 2
};

/// Constant 'ENABLE_HIGH'.
enum
{
  autoware_auto_vehicle_msgs__msg__HeadlightsCommand__ENABLE_HIGH = 3
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/HeadlightsCommand in the package autoware_auto_vehicle_msgs.
/**
  *  Command for controlling headlights.
 */
typedef struct autoware_auto_vehicle_msgs__msg__HeadlightsCommand
{
  builtin_interfaces__msg__Time stamp;
  uint8_t command;
} autoware_auto_vehicle_msgs__msg__HeadlightsCommand;

// Struct for a sequence of autoware_auto_vehicle_msgs__msg__HeadlightsCommand.
typedef struct autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence
{
  autoware_auto_vehicle_msgs__msg__HeadlightsCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__msg__HeadlightsCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HEADLIGHTS_COMMAND__STRUCT_H_
