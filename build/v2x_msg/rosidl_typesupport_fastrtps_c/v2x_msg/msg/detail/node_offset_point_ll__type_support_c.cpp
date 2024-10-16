// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/NodeOffsetPointLL.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/node_offset_point_ll__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/node_offset_point_ll__struct.h"
#include "v2x_msg/msg/detail/node_offset_point_ll__functions.h"
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

#include "v2x_msg/msg/detail/node_ll24_b__functions.h"  // nodell1
#include "v2x_msg/msg/detail/node_ll28_b__functions.h"  // nodell2
#include "v2x_msg/msg/detail/node_ll32_b__functions.h"  // nodell3
#include "v2x_msg/msg/detail/node_ll36_b__functions.h"  // nodell4
#include "v2x_msg/msg/detail/node_ll44_b__functions.h"  // nodell5
#include "v2x_msg/msg/detail/node_ll48_b__functions.h"  // nodell6
#include "v2x_msg/msg/detail/nodellmd64b__functions.h"  // nodelatlon

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__NodeLL24B(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__NodeLL24B(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL24B)();
size_t get_serialized_size_v2x_msg__msg__NodeLL28B(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__NodeLL28B(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL28B)();
size_t get_serialized_size_v2x_msg__msg__NodeLL32B(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__NodeLL32B(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL32B)();
size_t get_serialized_size_v2x_msg__msg__NodeLL36B(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__NodeLL36B(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL36B)();
size_t get_serialized_size_v2x_msg__msg__NodeLL44B(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__NodeLL44B(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL44B)();
size_t get_serialized_size_v2x_msg__msg__NodeLL48B(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__NodeLL48B(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL48B)();
size_t get_serialized_size_v2x_msg__msg__Nodellmd64b(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__Nodellmd64b(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, Nodellmd64b)();


using _NodeOffsetPointLL__ros_msg_type = v2x_msg__msg__NodeOffsetPointLL;

static bool _NodeOffsetPointLL__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NodeOffsetPointLL__ros_msg_type * ros_message = static_cast<const _NodeOffsetPointLL__ros_msg_type *>(untyped_ros_message);
  // Field name: nodell1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL24B
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nodell1, cdr))
    {
      return false;
    }
  }

  // Field name: nodell2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL28B
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nodell2, cdr))
    {
      return false;
    }
  }

  // Field name: nodell3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL32B
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nodell3, cdr))
    {
      return false;
    }
  }

  // Field name: nodell4
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL36B
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nodell4, cdr))
    {
      return false;
    }
  }

  // Field name: nodell5
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL44B
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nodell5, cdr))
    {
      return false;
    }
  }

  // Field name: nodell6
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL48B
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nodell6, cdr))
    {
      return false;
    }
  }

  // Field name: nodelatlon
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, Nodellmd64b
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nodelatlon, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _NodeOffsetPointLL__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NodeOffsetPointLL__ros_msg_type * ros_message = static_cast<_NodeOffsetPointLL__ros_msg_type *>(untyped_ros_message);
  // Field name: nodell1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL24B
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nodell1))
    {
      return false;
    }
  }

  // Field name: nodell2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL28B
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nodell2))
    {
      return false;
    }
  }

  // Field name: nodell3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL32B
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nodell3))
    {
      return false;
    }
  }

  // Field name: nodell4
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL36B
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nodell4))
    {
      return false;
    }
  }

  // Field name: nodell5
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL44B
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nodell5))
    {
      return false;
    }
  }

  // Field name: nodell6
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeLL48B
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nodell6))
    {
      return false;
    }
  }

  // Field name: nodelatlon
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, Nodellmd64b
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nodelatlon))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__NodeOffsetPointLL(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeOffsetPointLL__ros_msg_type * ros_message = static_cast<const _NodeOffsetPointLL__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name nodell1

  current_alignment += get_serialized_size_v2x_msg__msg__NodeLL24B(
    &(ros_message->nodell1), current_alignment);
  // field.name nodell2

  current_alignment += get_serialized_size_v2x_msg__msg__NodeLL28B(
    &(ros_message->nodell2), current_alignment);
  // field.name nodell3

  current_alignment += get_serialized_size_v2x_msg__msg__NodeLL32B(
    &(ros_message->nodell3), current_alignment);
  // field.name nodell4

  current_alignment += get_serialized_size_v2x_msg__msg__NodeLL36B(
    &(ros_message->nodell4), current_alignment);
  // field.name nodell5

  current_alignment += get_serialized_size_v2x_msg__msg__NodeLL44B(
    &(ros_message->nodell5), current_alignment);
  // field.name nodell6

  current_alignment += get_serialized_size_v2x_msg__msg__NodeLL48B(
    &(ros_message->nodell6), current_alignment);
  // field.name nodelatlon

  current_alignment += get_serialized_size_v2x_msg__msg__Nodellmd64b(
    &(ros_message->nodelatlon), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NodeOffsetPointLL__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__NodeOffsetPointLL(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__NodeOffsetPointLL(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: nodell1
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__NodeLL24B(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nodell2
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__NodeLL28B(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nodell3
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__NodeLL32B(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nodell4
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__NodeLL36B(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nodell5
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__NodeLL44B(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nodell6
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__NodeLL48B(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nodelatlon
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__Nodellmd64b(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_msg__msg__NodeOffsetPointLL;
    is_plain =
      (
      offsetof(DataType, nodelatlon) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _NodeOffsetPointLL__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__NodeOffsetPointLL(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NodeOffsetPointLL = {
  "v2x_msg::msg",
  "NodeOffsetPointLL",
  _NodeOffsetPointLL__cdr_serialize,
  _NodeOffsetPointLL__cdr_deserialize,
  _NodeOffsetPointLL__get_serialized_size,
  _NodeOffsetPointLL__max_serialized_size
};

static rosidl_message_type_support_t _NodeOffsetPointLL__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NodeOffsetPointLL,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeOffsetPointLL)() {
  return &_NodeOffsetPointLL__type_support;
}

#if defined(__cplusplus)
}
#endif
