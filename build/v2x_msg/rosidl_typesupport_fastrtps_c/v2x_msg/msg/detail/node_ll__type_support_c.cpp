// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/NodeLL.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/node_ll__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/node_ll__struct.h"
#include "v2x_msg/msg/detail/node_ll__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "v2x_msg/msg/detail/node_attribute_set_ll__functions.h"  // attributes
#include "v2x_msg/msg/detail/node_offset_point_ll__functions.h"  // delta

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__NodeAttributeSetLL(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__NodeAttributeSetLL(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeAttributeSetLL)();
size_t get_serialized_size_v2x_msg__msg__NodeOffsetPointLL(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__NodeOffsetPointLL(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeOffsetPointLL)();


using _NodeLL__ros_msg_type = v2x_msg__msg__NodeLL;

static bool _NodeLL__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NodeLL__ros_msg_type * ros_message = static_cast<const _NodeLL__ros_msg_type *>(untyped_ros_message);
  // Field name: delta
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeOffsetPointLL
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->delta, cdr))
    {
      return false;
    }
  }

  // Field name: attributes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeAttributeSetLL
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->attributes, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _NodeLL__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NodeLL__ros_msg_type * ros_message = static_cast<_NodeLL__ros_msg_type *>(untyped_ros_message);
  // Field name: delta
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeOffsetPointLL
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->delta))
    {
      return false;
    }
  }

  // Field name: attributes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeAttributeSetLL
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->attributes))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__NodeLL(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeLL__ros_msg_type * ros_message = static_cast<const _NodeLL__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name delta

  current_alignment += get_serialized_size_v2x_msg__msg__NodeOffsetPointLL(
    &(ros_message->delta), current_alignment);
  // field.name attributes

  current_alignment += get_serialized_size_v2x_msg__msg__NodeAttributeSetLL(
    &(ros_message->attributes), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NodeLL__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__NodeLL(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__NodeLL(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: delta
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__NodeOffsetPointLL(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: attributes
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__NodeAttributeSetLL(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NodeLL__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__NodeLL(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NodeLL = {
  "v2x_msg::msg",
  "NodeLL",
  _NodeLL__cdr_serialize,
  _NodeLL__cdr_deserialize,
  _NodeLL__get_serialized_size,
  _NodeLL__max_serialized_size
};

static rosidl_message_type_support_t _NodeLL__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NodeLL,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL)() {
  return &_NodeLL__type_support;
}

#if defined(__cplusplus)
}
#endif
