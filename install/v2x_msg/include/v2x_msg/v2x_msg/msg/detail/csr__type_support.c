// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/CSR.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/csr__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/csr__functions.h"
#include "v2x_msg/msg/detail/csr__struct.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `requests`
#include "v2x_msg/msg/requested_item.h"
// Member `requests`
#include "v2x_msg/msg/detail/requested_item__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__CSR_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__CSR__init(message_memory);
}

void v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__CSR_fini_function(void * message_memory)
{
  v2x_msg__msg__CSR__fini(message_memory);
}

size_t v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__size_function__CSR__requests(
  const void * untyped_member)
{
  const v2x_msg__msg__RequestedItem__Sequence * member =
    (const v2x_msg__msg__RequestedItem__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__get_const_function__CSR__requests(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__RequestedItem__Sequence * member =
    (const v2x_msg__msg__RequestedItem__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__get_function__CSR__requests(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__RequestedItem__Sequence * member =
    (v2x_msg__msg__RequestedItem__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__fetch_function__CSR__requests(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msg__msg__RequestedItem * item =
    ((const v2x_msg__msg__RequestedItem *)
    v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__get_const_function__CSR__requests(untyped_member, index));
  v2x_msg__msg__RequestedItem * value =
    (v2x_msg__msg__RequestedItem *)(untyped_value);
  *value = *item;
}

void v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__assign_function__CSR__requests(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msg__msg__RequestedItem * item =
    ((v2x_msg__msg__RequestedItem *)
    v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__get_function__CSR__requests(untyped_member, index));
  const v2x_msg__msg__RequestedItem * value =
    (const v2x_msg__msg__RequestedItem *)(untyped_value);
  *item = *value;
}

bool v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__resize_function__CSR__requests(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__RequestedItem__Sequence * member =
    (v2x_msg__msg__RequestedItem__Sequence *)(untyped_member);
  v2x_msg__msg__RequestedItem__Sequence__fini(member);
  return v2x_msg__msg__RequestedItem__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__CSR_message_member_array[4] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__CSR, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msgcnt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__CSR, msgcnt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__CSR, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requests",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__CSR, requests),  // bytes offset in struct
    NULL,  // default value
    v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__size_function__CSR__requests,  // size() function pointer
    v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__get_const_function__CSR__requests,  // get_const(index) function pointer
    v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__get_function__CSR__requests,  // get(index) function pointer
    v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__fetch_function__CSR__requests,  // fetch(index, &value) function pointer
    v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__assign_function__CSR__requests,  // assign(index, value) function pointer
    v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__resize_function__CSR__requests  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__CSR_message_members = {
  "v2x_msg__msg",  // message namespace
  "CSR",  // message name
  4,  // number of fields
  sizeof(v2x_msg__msg__CSR),
  v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__CSR_message_member_array,  // message members
  v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__CSR_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__CSR_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__CSR_message_type_support_handle = {
  0,
  &v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__CSR_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, CSR)() {
  v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__CSR_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, RequestedItem)();
  if (!v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__CSR_message_type_support_handle.typesupport_identifier) {
    v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__CSR_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msg__msg__CSR__rosidl_typesupport_introspection_c__CSR_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
