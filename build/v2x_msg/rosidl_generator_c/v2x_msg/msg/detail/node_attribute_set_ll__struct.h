// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/NodeAttributeSetLL.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODE_ATTRIBUTE_SET_LL__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__NODE_ATTRIBUTE_SET_LL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'localnode'
// Member 'disabled'
// Member 'enabled'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'data'
#include "v2x_msg/msg/detail/lane_data_attribute__struct.h"

// Struct defined in msg/NodeAttributeSetLL in the package v2x_msg.
typedef struct v2x_msg__msg__NodeAttributeSetLL
{
  rosidl_runtime_c__int64__Sequence localnode;
  rosidl_runtime_c__int64__Sequence disabled;
  rosidl_runtime_c__int64__Sequence enabled;
  v2x_msg__msg__LaneDataAttribute__Sequence data;
  int64_t dwidth;
  int64_t delevation;
} v2x_msg__msg__NodeAttributeSetLL;

// Struct for a sequence of v2x_msg__msg__NodeAttributeSetLL.
typedef struct v2x_msg__msg__NodeAttributeSetLL__Sequence
{
  v2x_msg__msg__NodeAttributeSetLL * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__NodeAttributeSetLL__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__NODE_ATTRIBUTE_SET_LL__STRUCT_H_
