// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_system_msgs:msg/DiagnosticHeader.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_HEADER__STRUCT_H_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'data_stamp'
// Member 'computation_start'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'runtime'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// constants for array fields with an upper bound
// name
enum
{
  autoware_auto_system_msgs__msg__DiagnosticHeader__name__MAX_STRING_SIZE = 256
};

/// Struct defined in msg/DiagnosticHeader in the package autoware_auto_system_msgs.
/**
  *  Base information that all diagnostic messages should have
 */
typedef struct autoware_auto_system_msgs__msg__DiagnosticHeader
{
  rosidl_runtime_c__String name;
  builtin_interfaces__msg__Time data_stamp;
  builtin_interfaces__msg__Time computation_start;
  builtin_interfaces__msg__Duration runtime;
  uint32_t iterations;
} autoware_auto_system_msgs__msg__DiagnosticHeader;

// Struct for a sequence of autoware_auto_system_msgs__msg__DiagnosticHeader.
typedef struct autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence
{
  autoware_auto_system_msgs__msg__DiagnosticHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_HEADER__STRUCT_H_
