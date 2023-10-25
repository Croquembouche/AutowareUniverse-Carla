// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_vehicle_msgs:msg/VehicleStateCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_STATE_COMMAND__STRUCT_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_STATE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BLINKER_NO_COMMAND'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__BLINKER_NO_COMMAND = 0
};

/// Constant 'BLINKER_OFF'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__BLINKER_OFF = 1
};

/// Constant 'BLINKER_LEFT'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__BLINKER_LEFT = 2
};

/// Constant 'BLINKER_RIGHT'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__BLINKER_RIGHT = 3
};

/// Constant 'BLINKER_HAZARD'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__BLINKER_HAZARD = 4
};

/// Constant 'HEADLIGHT_NO_COMMAND'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__HEADLIGHT_NO_COMMAND = 0
};

/// Constant 'HEADLIGHT_OFF'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__HEADLIGHT_OFF = 1
};

/// Constant 'HEADLIGHT_ON'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__HEADLIGHT_ON = 2
};

/// Constant 'HEADLIGHT_HIGH'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__HEADLIGHT_HIGH = 3
};

/// Constant 'WIPER_NO_COMMAND'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__WIPER_NO_COMMAND = 0
};

/// Constant 'WIPER_OFF'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__WIPER_OFF = 1
};

/// Constant 'WIPER_LOW'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__WIPER_LOW = 2
};

/// Constant 'WIPER_HIGH'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__WIPER_HIGH = 3
};

/// Constant 'WIPER_CLEAN'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__WIPER_CLEAN = 14
};

/// Constant 'GEAR_NO_COMMAND'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__GEAR_NO_COMMAND = 0
};

/// Constant 'GEAR_DRIVE'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__GEAR_DRIVE = 1
};

/// Constant 'GEAR_REVERSE'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__GEAR_REVERSE = 2
};

/// Constant 'GEAR_PARK'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__GEAR_PARK = 3
};

/// Constant 'GEAR_LOW'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__GEAR_LOW = 4
};

/// Constant 'GEAR_NEUTRAL'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__GEAR_NEUTRAL = 5
};

/// Constant 'MODE_NO_COMMAND'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__MODE_NO_COMMAND = 0
};

/// Constant 'MODE_AUTONOMOUS'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__MODE_AUTONOMOUS = 1
};

/// Constant 'MODE_MANUAL'.
enum
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand__MODE_MANUAL = 2
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/VehicleStateCommand in the package autoware_auto_vehicle_msgs.
/**
  *  VehicleStateCommand.msg
 */
typedef struct autoware_auto_vehicle_msgs__msg__VehicleStateCommand
{
  builtin_interfaces__msg__Time stamp;
  uint8_t blinker;
  uint8_t headlight;
  uint8_t wiper;
  uint8_t gear;
  uint8_t mode;
  bool hand_brake;
  bool horn;
} autoware_auto_vehicle_msgs__msg__VehicleStateCommand;

// Struct for a sequence of autoware_auto_vehicle_msgs__msg__VehicleStateCommand.
typedef struct autoware_auto_vehicle_msgs__msg__VehicleStateCommand__Sequence
{
  autoware_auto_vehicle_msgs__msg__VehicleStateCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__msg__VehicleStateCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_STATE_COMMAND__STRUCT_H_
