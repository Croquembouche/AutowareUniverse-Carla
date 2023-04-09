// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/EVA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__EVA__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__EVA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'rsamsg'
#include "v2x_msg/msg/detail/rsa__struct.h"
// Member 'details'
#include "v2x_msg/msg/detail/emergency_details__struct.h"

/// Struct defined in msg/EVA in the package v2x_msg.
typedef struct v2x_msg__msg__EVA
{
  int64_t timestamp;
  rosidl_runtime_c__String id;
  v2x_msg__msg__RSA rsamsg;
  int64_t responsetype;
  v2x_msg__msg__EmergencyDetails details;
  int64_t mass;
  int64_t basictype;
  int64_t vehicletype;
  int64_t responseequip;
  int64_t respondertype;
} v2x_msg__msg__EVA;

// Struct for a sequence of v2x_msg__msg__EVA.
typedef struct v2x_msg__msg__EVA__Sequence
{
  v2x_msg__msg__EVA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__EVA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__EVA__STRUCT_H_
