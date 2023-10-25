// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_vehicle_msgs:msg/GearCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__GEAR_COMMAND__STRUCT_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__GEAR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__NONE = 0
};

/// Constant 'NEUTRAL'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__NEUTRAL = 1
};

/// Constant 'DRIVE'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__DRIVE = 2
};

/// Constant 'DRIVE_2'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__DRIVE_2 = 3
};

/// Constant 'DRIVE_3'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__DRIVE_3 = 4
};

/// Constant 'DRIVE_4'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__DRIVE_4 = 5
};

/// Constant 'DRIVE_5'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__DRIVE_5 = 6
};

/// Constant 'DRIVE_6'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__DRIVE_6 = 7
};

/// Constant 'DRIVE_7'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__DRIVE_7 = 8
};

/// Constant 'DRIVE_8'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__DRIVE_8 = 9
};

/// Constant 'DRIVE_9'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__DRIVE_9 = 10
};

/// Constant 'DRIVE_10'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__DRIVE_10 = 11
};

/// Constant 'DRIVE_11'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__DRIVE_11 = 12
};

/// Constant 'DRIVE_12'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__DRIVE_12 = 13
};

/// Constant 'DRIVE_13'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__DRIVE_13 = 14
};

/// Constant 'DRIVE_14'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__DRIVE_14 = 15
};

/// Constant 'DRIVE_15'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__DRIVE_15 = 16
};

/// Constant 'DRIVE_16'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__DRIVE_16 = 17
};

/// Constant 'DRIVE_17'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__DRIVE_17 = 18
};

/// Constant 'DRIVE_18'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__DRIVE_18 = 19
};

/// Constant 'REVERSE'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__REVERSE = 20
};

/// Constant 'REVERSE_2'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__REVERSE_2 = 21
};

/// Constant 'PARK'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__PARK = 22
};

/// Constant 'LOW'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__LOW = 23
};

/// Constant 'LOW_2'.
enum
{
  autoware_auto_vehicle_msgs__msg__GearCommand__LOW_2 = 24
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/GearCommand in the package autoware_auto_vehicle_msgs.
typedef struct autoware_auto_vehicle_msgs__msg__GearCommand
{
  builtin_interfaces__msg__Time stamp;
  uint8_t command;
} autoware_auto_vehicle_msgs__msg__GearCommand;

// Struct for a sequence of autoware_auto_vehicle_msgs__msg__GearCommand.
typedef struct autoware_auto_vehicle_msgs__msg__GearCommand__Sequence
{
  autoware_auto_vehicle_msgs__msg__GearCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__msg__GearCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__GEAR_COMMAND__STRUCT_H_
