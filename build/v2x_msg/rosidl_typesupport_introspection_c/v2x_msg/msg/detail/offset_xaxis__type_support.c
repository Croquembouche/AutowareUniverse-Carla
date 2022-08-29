// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/OffsetXaxis.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/offset_xaxis__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/offset_xaxis__functions.h"
#include "v2x_msg/msg/detail/offset_xaxis__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void OffsetXaxis__rosidl_typesupport_introspection_c__OffsetXaxis_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__OffsetXaxis__init(message_memory);
}

void OffsetXaxis__rosidl_typesupport_introspection_c__OffsetXaxis_fini_function(void * message_memory)
{
  v2x_msg__msg__OffsetXaxis__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OffsetXaxis__rosidl_typesupport_introspection_c__OffsetXaxis_message_member_array[2] = {
  {
    "small",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__OffsetXaxis, small),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "large",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__OffsetXaxis, large),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OffsetXaxis__rosidl_typesupport_introspection_c__OffsetXaxis_message_members = {
  "v2x_msg__msg",  // message namespace
  "OffsetXaxis",  // message name
  2,  // number of fields
  sizeof(v2x_msg__msg__OffsetXaxis),
  OffsetXaxis__rosidl_typesupport_introspection_c__OffsetXaxis_message_member_array,  // message members
  OffsetXaxis__rosidl_typesupport_introspection_c__OffsetXaxis_init_function,  // function to initialize message memory (memory has to be allocated)
  OffsetXaxis__rosidl_typesupport_introspection_c__OffsetXaxis_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OffsetXaxis__rosidl_typesupport_introspection_c__OffsetXaxis_message_type_support_handle = {
  0,
  &OffsetXaxis__rosidl_typesupport_introspection_c__OffsetXaxis_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, OffsetXaxis)() {
  if (!OffsetXaxis__rosidl_typesupport_introspection_c__OffsetXaxis_message_type_support_handle.typesupport_identifier) {
    OffsetXaxis__rosidl_typesupport_introspection_c__OffsetXaxis_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OffsetXaxis__rosidl_typesupport_introspection_c__OffsetXaxis_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
