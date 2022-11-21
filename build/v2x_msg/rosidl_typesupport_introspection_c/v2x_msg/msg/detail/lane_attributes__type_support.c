// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/LaneAttributes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/lane_attributes__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/lane_attributes__functions.h"
#include "v2x_msg/msg/detail/lane_attributes__struct.h"


// Include directives for member types
// Member `directionaluse`
// Member `sharedwith`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LaneAttributes__rosidl_typesupport_introspection_c__LaneAttributes_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__LaneAttributes__init(message_memory);
}

void LaneAttributes__rosidl_typesupport_introspection_c__LaneAttributes_fini_function(void * message_memory)
{
  v2x_msg__msg__LaneAttributes__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LaneAttributes__rosidl_typesupport_introspection_c__LaneAttributes_message_member_array[3] = {
  {
    "directionaluse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__LaneAttributes, directionaluse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sharedwith",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__LaneAttributes, sharedwith),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lanetype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__LaneAttributes, lanetype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LaneAttributes__rosidl_typesupport_introspection_c__LaneAttributes_message_members = {
  "v2x_msg__msg",  // message namespace
  "LaneAttributes",  // message name
  3,  // number of fields
  sizeof(v2x_msg__msg__LaneAttributes),
  LaneAttributes__rosidl_typesupport_introspection_c__LaneAttributes_message_member_array,  // message members
  LaneAttributes__rosidl_typesupport_introspection_c__LaneAttributes_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneAttributes__rosidl_typesupport_introspection_c__LaneAttributes_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LaneAttributes__rosidl_typesupport_introspection_c__LaneAttributes_message_type_support_handle = {
  0,
  &LaneAttributes__rosidl_typesupport_introspection_c__LaneAttributes_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, LaneAttributes)() {
  if (!LaneAttributes__rosidl_typesupport_introspection_c__LaneAttributes_message_type_support_handle.typesupport_identifier) {
    LaneAttributes__rosidl_typesupport_introspection_c__LaneAttributes_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LaneAttributes__rosidl_typesupport_introspection_c__LaneAttributes_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
