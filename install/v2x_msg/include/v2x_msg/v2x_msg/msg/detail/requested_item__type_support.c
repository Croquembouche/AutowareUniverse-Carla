// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/RequestedItem.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/requested_item__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/requested_item__functions.h"
#include "v2x_msg/msg/detail/requested_item__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msg__msg__RequestedItem__rosidl_typesupport_introspection_c__RequestedItem_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__RequestedItem__init(message_memory);
}

void v2x_msg__msg__RequestedItem__rosidl_typesupport_introspection_c__RequestedItem_fini_function(void * message_memory)
{
  v2x_msg__msg__RequestedItem__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msg__msg__RequestedItem__rosidl_typesupport_introspection_c__RequestedItem_message_member_array[1] = {
  {
    "itemindex",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__RequestedItem, itemindex),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msg__msg__RequestedItem__rosidl_typesupport_introspection_c__RequestedItem_message_members = {
  "v2x_msg__msg",  // message namespace
  "RequestedItem",  // message name
  1,  // number of fields
  sizeof(v2x_msg__msg__RequestedItem),
  v2x_msg__msg__RequestedItem__rosidl_typesupport_introspection_c__RequestedItem_message_member_array,  // message members
  v2x_msg__msg__RequestedItem__rosidl_typesupport_introspection_c__RequestedItem_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msg__msg__RequestedItem__rosidl_typesupport_introspection_c__RequestedItem_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msg__msg__RequestedItem__rosidl_typesupport_introspection_c__RequestedItem_message_type_support_handle = {
  0,
  &v2x_msg__msg__RequestedItem__rosidl_typesupport_introspection_c__RequestedItem_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, RequestedItem)() {
  if (!v2x_msg__msg__RequestedItem__rosidl_typesupport_introspection_c__RequestedItem_message_type_support_handle.typesupport_identifier) {
    v2x_msg__msg__RequestedItem__rosidl_typesupport_introspection_c__RequestedItem_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msg__msg__RequestedItem__rosidl_typesupport_introspection_c__RequestedItem_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif