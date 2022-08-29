// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/ExitService.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__EXIT_SERVICE__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__EXIT_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'item'
#include "v2x_msg/msg/detail/exit_servicecontent__struct.h"

// Struct defined in msg/ExitService in the package v2x_msg.
typedef struct v2x_msg__msg__ExitService
{
  v2x_msg__msg__ExitServicecontent__Sequence item;
} v2x_msg__msg__ExitService;

// Struct for a sequence of v2x_msg__msg__ExitService.
typedef struct v2x_msg__msg__ExitService__Sequence
{
  v2x_msg__msg__ExitService * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__ExitService__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__EXIT_SERVICE__STRUCT_H_
