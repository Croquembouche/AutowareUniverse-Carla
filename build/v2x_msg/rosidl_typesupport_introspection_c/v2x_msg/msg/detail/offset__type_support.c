// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/Offset.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/offset__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/offset__functions.h"
#include "v2x_msg/msg/detail/offset__struct.h"


// Include directives for member types
// Member `xy`
#include "v2x_msg/msg/node_list_xy.h"
// Member `xy`
#include "v2x_msg/msg/detail/node_list_xy__rosidl_typesupport_introspection_c.h"
// Member `nodes`
#include "v2x_msg/msg/node_ll.h"
// Member `nodes`
#include "v2x_msg/msg/detail/node_ll__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Offset__rosidl_typesupport_introspection_c__Offset_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__Offset__init(message_memory);
}

void Offset__rosidl_typesupport_introspection_c__Offset_fini_function(void * message_memory)
{
  v2x_msg__msg__Offset__fini(message_memory);
}

size_t Offset__rosidl_typesupport_introspection_c__size_function__NodeLL__nodes(
  const void * untyped_member)
{
  const v2x_msg__msg__NodeLL__Sequence * member =
    (const v2x_msg__msg__NodeLL__Sequence *)(untyped_member);
  return member->size;
}

const void * Offset__rosidl_typesupport_introspection_c__get_const_function__NodeLL__nodes(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__NodeLL__Sequence * member =
    (const v2x_msg__msg__NodeLL__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Offset__rosidl_typesupport_introspection_c__get_function__NodeLL__nodes(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__NodeLL__Sequence * member =
    (v2x_msg__msg__NodeLL__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Offset__rosidl_typesupport_introspection_c__resize_function__NodeLL__nodes(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__NodeLL__Sequence * member =
    (v2x_msg__msg__NodeLL__Sequence *)(untyped_member);
  v2x_msg__msg__NodeLL__Sequence__fini(member);
  return v2x_msg__msg__NodeLL__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Offset__rosidl_typesupport_introspection_c__Offset_message_member_array[2] = {
  {
    "xy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__Offset, xy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__Offset, nodes),  // bytes offset in struct
    NULL,  // default value
    Offset__rosidl_typesupport_introspection_c__size_function__NodeLL__nodes,  // size() function pointer
    Offset__rosidl_typesupport_introspection_c__get_const_function__NodeLL__nodes,  // get_const(index) function pointer
    Offset__rosidl_typesupport_introspection_c__get_function__NodeLL__nodes,  // get(index) function pointer
    Offset__rosidl_typesupport_introspection_c__resize_function__NodeLL__nodes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Offset__rosidl_typesupport_introspection_c__Offset_message_members = {
  "v2x_msg__msg",  // message namespace
  "Offset",  // message name
  2,  // number of fields
  sizeof(v2x_msg__msg__Offset),
  Offset__rosidl_typesupport_introspection_c__Offset_message_member_array,  // message members
  Offset__rosidl_typesupport_introspection_c__Offset_init_function,  // function to initialize message memory (memory has to be allocated)
  Offset__rosidl_typesupport_introspection_c__Offset_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Offset__rosidl_typesupport_introspection_c__Offset_message_type_support_handle = {
  0,
  &Offset__rosidl_typesupport_introspection_c__Offset_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, Offset)() {
  Offset__rosidl_typesupport_introspection_c__Offset_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeListXY)();
  Offset__rosidl_typesupport_introspection_c__Offset_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeLL)();
  if (!Offset__rosidl_typesupport_introspection_c__Offset_message_type_support_handle.typesupport_identifier) {
    Offset__rosidl_typesupport_introspection_c__Offset_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Offset__rosidl_typesupport_introspection_c__Offset_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
