// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/MrmState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__MRM_STATE__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__MRM_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
/**
  * For common use
 */
enum
{
  autoware_adapi_v1_msgs__msg__MrmState__UNKNOWN = 0
};

/// Constant 'NORMAL'.
/**
  * For state
 */
enum
{
  autoware_adapi_v1_msgs__msg__MrmState__NORMAL = 1
};

/// Constant 'MRM_OPERATING'.
enum
{
  autoware_adapi_v1_msgs__msg__MrmState__MRM_OPERATING = 2
};

/// Constant 'MRM_SUCCEEDED'.
enum
{
  autoware_adapi_v1_msgs__msg__MrmState__MRM_SUCCEEDED = 3
};

/// Constant 'MRM_FAILED'.
enum
{
  autoware_adapi_v1_msgs__msg__MrmState__MRM_FAILED = 4
};

/// Constant 'NONE'.
/**
  * For behavior
 */
enum
{
  autoware_adapi_v1_msgs__msg__MrmState__NONE = 1
};

/// Constant 'EMERGENCY_STOP'.
enum
{
  autoware_adapi_v1_msgs__msg__MrmState__EMERGENCY_STOP = 2
};

/// Constant 'COMFORTABLE_STOP'.
enum
{
  autoware_adapi_v1_msgs__msg__MrmState__COMFORTABLE_STOP = 3
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/MrmState in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__MrmState
{
  builtin_interfaces__msg__Time stamp;
  uint16_t state;
  uint16_t behavior;
} autoware_adapi_v1_msgs__msg__MrmState;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__MrmState.
typedef struct autoware_adapi_v1_msgs__msg__MrmState__Sequence
{
  autoware_adapi_v1_msgs__msg__MrmState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__MrmState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__MRM_STATE__STRUCT_H_
