// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/node_offset_point_xy__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/node_offset_point_xy__struct.h"
#include "v2x_msg/msg/detail/node_offset_point_xy__functions.h"
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

#include "v2x_msg/msg/detail/node_xy22b__functions.h"  // nodexy1
#include "v2x_msg/msg/detail/node_xy24b__functions.h"  // nodexy2
#include "v2x_msg/msg/detail/node_xy26b__functions.h"  // nodexy3
#include "v2x_msg/msg/detail/node_xy28b__functions.h"  // nodexy4
#include "v2x_msg/msg/detail/node_xy32b__functions.h"  // nodexy5
#include "v2x_msg/msg/detail/nodellmd64b__functions.h"  // nodelatlon

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__NodeXY22b(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__NodeXY22b(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeXY22b)();
size_t get_serialized_size_v2x_msg__msg__NodeXY24b(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__NodeXY24b(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeXY24b)();
size_t get_serialized_size_v2x_msg__msg__NodeXY26b(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__NodeXY26b(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeXY26b)();
size_t get_serialized_size_v2x_msg__msg__NodeXY28b(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__NodeXY28b(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeXY28b)();
size_t get_serialized_size_v2x_msg__msg__NodeXY32b(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__NodeXY32b(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeXY32b)();
size_t get_serialized_size_v2x_msg__msg__Nodellmd64b(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__Nodellmd64b(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, Nodellmd64b)();


using _NodeOffsetPointXY__ros_msg_type = v2x_msg__msg__NodeOffsetPointXY;

static bool _NodeOffsetPointXY__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NodeOffsetPointXY__ros_msg_type * ros_message = static_cast<const _NodeOffsetPointXY__ros_msg_type *>(untyped_ros_message);
  // Field name: nodexy1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeXY22b
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nodexy1, cdr))
    {
      return false;
    }
  }

  // Field name: nodexy2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeXY24b
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nodexy2, cdr))
    {
      return false;
    }
  }

  // Field name: nodexy3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeXY26b
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nodexy3, cdr))
    {
      return false;
    }
  }

  // Field name: nodexy4
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeXY28b
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nodexy4, cdr))
    {
      return false;
    }
  }

  // Field name: nodexy5
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeXY32b
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nodexy5, cdr))
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

static bool _NodeOffsetPointXY__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NodeOffsetPointXY__ros_msg_type * ros_message = static_cast<_NodeOffsetPointXY__ros_msg_type *>(untyped_ros_message);
  // Field name: nodexy1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeXY22b
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nodexy1))
    {
      return false;
    }
  }

  // Field name: nodexy2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeXY24b
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nodexy2))
    {
      return false;
    }
  }

  // Field name: nodexy3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeXY26b
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nodexy3))
    {
      return false;
    }
  }

  // Field name: nodexy4
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeXY28b
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nodexy4))
    {
      return false;
    }
  }

  // Field name: nodexy5
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeXY32b
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nodexy5))
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
size_t get_serialized_size_v2x_msg__msg__NodeOffsetPointXY(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeOffsetPointXY__ros_msg_type * ros_message = static_cast<const _NodeOffsetPointXY__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name nodexy1

  current_alignment += get_serialized_size_v2x_msg__msg__NodeXY22b(
    &(ros_message->nodexy1), current_alignment);
  // field.name nodexy2

  current_alignment += get_serialized_size_v2x_msg__msg__NodeXY24b(
    &(ros_message->nodexy2), current_alignment);
  // field.name nodexy3

  current_alignment += get_serialized_size_v2x_msg__msg__NodeXY26b(
    &(ros_message->nodexy3), current_alignment);
  // field.name nodexy4

  current_alignment += get_serialized_size_v2x_msg__msg__NodeXY28b(
    &(ros_message->nodexy4), current_alignment);
  // field.name nodexy5

  current_alignment += get_serialized_size_v2x_msg__msg__NodeXY32b(
    &(ros_message->nodexy5), current_alignment);
  // field.name nodelatlon

  current_alignment += get_serialized_size_v2x_msg__msg__Nodellmd64b(
    &(ros_message->nodelatlon), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NodeOffsetPointXY__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__NodeOffsetPointXY(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__NodeOffsetPointXY(
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

  // member: nodexy1
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__NodeXY22b(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nodexy2
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__NodeXY24b(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nodexy3
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__NodeXY26b(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nodexy4
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__NodeXY28b(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nodexy5
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__NodeXY32b(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nodelatlon
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__Nodellmd64b(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NodeOffsetPointXY__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__NodeOffsetPointXY(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NodeOffsetPointXY = {
  "v2x_msg::msg",
  "NodeOffsetPointXY",
  _NodeOffsetPointXY__cdr_serialize,
  _NodeOffsetPointXY__cdr_deserialize,
  _NodeOffsetPointXY__get_serialized_size,
  _NodeOffsetPointXY__max_serialized_size
};

static rosidl_message_type_support_t _NodeOffsetPointXY__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NodeOffsetPointXY,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeOffsetPointXY)() {
  return &_NodeOffsetPointXY__type_support;
}

#if defined(__cplusplus)
}
#endif
