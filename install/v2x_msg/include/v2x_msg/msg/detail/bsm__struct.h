// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/BSM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__BSM__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__BSM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'coredata'
#include "v2x_msg/msg/detail/bsm_core_data__struct.h"

// Struct defined in msg/BSM in the package v2x_msg.
typedef struct v2x_msg__msg__BSM
{
  v2x_msg__msg__BSMCoreData coredata;
} v2x_msg__msg__BSM;

// Struct for a sequence of v2x_msg__msg__BSM.
typedef struct v2x_msg__msg__BSM__Sequence
{
  v2x_msg__msg__BSM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__BSM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__BSM__STRUCT_H_
