// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/DataParameters.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__DATA_PARAMETERS__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__DATA_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'processmethod'
// Member 'processagency'
// Member 'lastcheckeddate'
// Member 'geoidused'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/DataParameters in the package v2x_msg.
typedef struct v2x_msg__msg__DataParameters
{
  rosidl_runtime_c__String processmethod;
  rosidl_runtime_c__String processagency;
  rosidl_runtime_c__String lastcheckeddate;
  rosidl_runtime_c__String geoidused;
} v2x_msg__msg__DataParameters;

// Struct for a sequence of v2x_msg__msg__DataParameters.
typedef struct v2x_msg__msg__DataParameters__Sequence
{
  v2x_msg__msg__DataParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__DataParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__DATA_PARAMETERS__STRUCT_H_
