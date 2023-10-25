// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_vehicle_msgs:msg/WipersReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__WIPERS_REPORT__STRUCT_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__WIPERS_REPORT__STRUCT_H_

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
  autoware_auto_vehicle_msgs__msg__WipersReport__DISABLE = 1
};

/// Constant 'ENABLE_LOW'.
enum
{
  autoware_auto_vehicle_msgs__msg__WipersReport__ENABLE_LOW = 2
};

/// Constant 'ENABLE_HIGH'.
enum
{
  autoware_auto_vehicle_msgs__msg__WipersReport__ENABLE_HIGH = 3
};

/// Constant 'ENABLE_INT_1'.
enum
{
  autoware_auto_vehicle_msgs__msg__WipersReport__ENABLE_INT_1 = 4
};

/// Constant 'ENABLE_INT_2'.
enum
{
  autoware_auto_vehicle_msgs__msg__WipersReport__ENABLE_INT_2 = 5
};

/// Constant 'ENABLE_INT_3'.
enum
{
  autoware_auto_vehicle_msgs__msg__WipersReport__ENABLE_INT_3 = 6
};

/// Constant 'ENABLE_INT_4'.
enum
{
  autoware_auto_vehicle_msgs__msg__WipersReport__ENABLE_INT_4 = 7
};

/// Constant 'ENABLE_INT_5'.
enum
{
  autoware_auto_vehicle_msgs__msg__WipersReport__ENABLE_INT_5 = 8
};

/// Constant 'ENABLE_INT_6'.
enum
{
  autoware_auto_vehicle_msgs__msg__WipersReport__ENABLE_INT_6 = 9
};

/// Constant 'ENABLE_INT_7'.
enum
{
  autoware_auto_vehicle_msgs__msg__WipersReport__ENABLE_INT_7 = 10
};

/// Constant 'ENABLE_INT_8'.
enum
{
  autoware_auto_vehicle_msgs__msg__WipersReport__ENABLE_INT_8 = 11
};

/// Constant 'ENABLE_INT_9'.
enum
{
  autoware_auto_vehicle_msgs__msg__WipersReport__ENABLE_INT_9 = 12
};

/// Constant 'ENABLE_INT_10'.
enum
{
  autoware_auto_vehicle_msgs__msg__WipersReport__ENABLE_INT_10 = 13
};

/// Constant 'ENABLE_CLEAN'.
enum
{
  autoware_auto_vehicle_msgs__msg__WipersReport__ENABLE_CLEAN = 14
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/WipersReport in the package autoware_auto_vehicle_msgs.
/**
  *  Each wiper or group of simultaneously-controlled wipers should have their own topic which receives this message.
 */
typedef struct autoware_auto_vehicle_msgs__msg__WipersReport
{
  builtin_interfaces__msg__Time stamp;
  uint8_t report;
} autoware_auto_vehicle_msgs__msg__WipersReport;

// Struct for a sequence of autoware_auto_vehicle_msgs__msg__WipersReport.
typedef struct autoware_auto_vehicle_msgs__msg__WipersReport__Sequence
{
  autoware_auto_vehicle_msgs__msg__WipersReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__msg__WipersReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__WIPERS_REPORT__STRUCT_H_
