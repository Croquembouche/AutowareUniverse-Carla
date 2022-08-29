// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/NodeAttributeSetLL.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/node_attribute_set_ll__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/node_attribute_set_ll__functions.h"
#include "v2x_msg/msg/detail/node_attribute_set_ll__struct.h"


// Include directives for member types
// Member `localnode`
// Member `disabled`
// Member `enabled`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `data`
#include "v2x_msg/msg/lane_data_attribute.h"
// Member `data`
#include "v2x_msg/msg/detail/lane_data_attribute__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NodeAttributeSetLL__rosidl_typesupport_introspection_c__NodeAttributeSetLL_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__NodeAttributeSetLL__init(message_memory);
}

void NodeAttributeSetLL__rosidl_typesupport_introspection_c__NodeAttributeSetLL_fini_function(void * message_memory)
{
  v2x_msg__msg__NodeAttributeSetLL__fini(message_memory);
}

size_t NodeAttributeSetLL__rosidl_typesupport_introspection_c__size_function__LaneDataAttribute__data(
  const void * untyped_member)
{
  const v2x_msg__msg__LaneDataAttribute__Sequence * member =
    (const v2x_msg__msg__LaneDataAttribute__Sequence *)(untyped_member);
  return member->size;
}

const void * NodeAttributeSetLL__rosidl_typesupport_introspection_c__get_const_function__LaneDataAttribute__data(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__LaneDataAttribute__Sequence * member =
    (const v2x_msg__msg__LaneDataAttribute__Sequence *)(untyped_member);
  return &member->data[index];
}

void * NodeAttributeSetLL__rosidl_typesupport_introspection_c__get_function__LaneDataAttribute__data(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__LaneDataAttribute__Sequence * member =
    (v2x_msg__msg__LaneDataAttribute__Sequence *)(untyped_member);
  return &member->data[index];
}

bool NodeAttributeSetLL__rosidl_typesupport_introspection_c__resize_function__LaneDataAttribute__data(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__LaneDataAttribute__Sequence * member =
    (v2x_msg__msg__LaneDataAttribute__Sequence *)(untyped_member);
  v2x_msg__msg__LaneDataAttribute__Sequence__fini(member);
  return v2x_msg__msg__LaneDataAttribute__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember NodeAttributeSetLL__rosidl_typesupport_introspection_c__NodeAttributeSetLL_message_member_array[6] = {
  {
    "localnode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__NodeAttributeSetLL, localnode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__NodeAttributeSetLL, disabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__NodeAttributeSetLL, enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__NodeAttributeSetLL, data),  // bytes offset in struct
    NULL,  // default value
    NodeAttributeSetLL__rosidl_typesupport_introspection_c__size_function__LaneDataAttribute__data,  // size() function pointer
    NodeAttributeSetLL__rosidl_typesupport_introspection_c__get_const_function__LaneDataAttribute__data,  // get_const(index) function pointer
    NodeAttributeSetLL__rosidl_typesupport_introspection_c__get_function__LaneDataAttribute__data,  // get(index) function pointer
    NodeAttributeSetLL__rosidl_typesupport_introspection_c__resize_function__LaneDataAttribute__data  // resize(index) function pointer
  },
  {
    "dwidth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__NodeAttributeSetLL, dwidth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "delevation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__NodeAttributeSetLL, delevation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NodeAttributeSetLL__rosidl_typesupport_introspection_c__NodeAttributeSetLL_message_members = {
  "v2x_msg__msg",  // message namespace
  "NodeAttributeSetLL",  // message name
  6,  // number of fields
  sizeof(v2x_msg__msg__NodeAttributeSetLL),
  NodeAttributeSetLL__rosidl_typesupport_introspection_c__NodeAttributeSetLL_message_member_array,  // message members
  NodeAttributeSetLL__rosidl_typesupport_introspection_c__NodeAttributeSetLL_init_function,  // function to initialize message memory (memory has to be allocated)
  NodeAttributeSetLL__rosidl_typesupport_introspection_c__NodeAttributeSetLL_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NodeAttributeSetLL__rosidl_typesupport_introspection_c__NodeAttributeSetLL_message_type_support_handle = {
  0,
  &NodeAttributeSetLL__rosidl_typesupport_introspection_c__NodeAttributeSetLL_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeAttributeSetLL)() {
  NodeAttributeSetLL__rosidl_typesupport_introspection_c__NodeAttributeSetLL_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, LaneDataAttribute)();
  if (!NodeAttributeSetLL__rosidl_typesupport_introspection_c__NodeAttributeSetLL_message_type_support_handle.typesupport_identifier) {
    NodeAttributeSetLL__rosidl_typesupport_introspection_c__NodeAttributeSetLL_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NodeAttributeSetLL__rosidl_typesupport_introspection_c__NodeAttributeSetLL_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
