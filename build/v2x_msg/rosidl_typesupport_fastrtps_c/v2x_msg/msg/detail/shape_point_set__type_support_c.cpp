// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/ShapePointSet.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/shape_point_set__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/shape_point_set__struct.h"
#include "v2x_msg/msg/detail/shape_point_set__functions.h"
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

#include "v2x_msg/msg/detail/node_list_xy__functions.h"  // nodelist
#include "v2x_msg/msg/detail/position3_d__functions.h"  // anchor

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__NodeListXY(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__NodeListXY(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeListXY)();
size_t get_serialized_size_v2x_msg__msg__Position3D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__Position3D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, Position3D)();


using _ShapePointSet__ros_msg_type = v2x_msg__msg__ShapePointSet;

static bool _ShapePointSet__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ShapePointSet__ros_msg_type * ros_message = static_cast<const _ShapePointSet__ros_msg_type *>(untyped_ros_message);
  // Field name: anchor
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, Position3D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->anchor, cdr))
    {
      return false;
    }
  }

  // Field name: lanewidth
  {
    cdr << ros_message->lanewidth;
  }

  // Field name: directionality
  {
    cdr << ros_message->directionality;
  }

  // Field name: nodelist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeListXY
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nodelist, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ShapePointSet__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ShapePointSet__ros_msg_type * ros_message = static_cast<_ShapePointSet__ros_msg_type *>(untyped_ros_message);
  // Field name: anchor
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, Position3D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->anchor))
    {
      return false;
    }
  }

  // Field name: lanewidth
  {
    cdr >> ros_message->lanewidth;
  }

  // Field name: directionality
  {
    cdr >> ros_message->directionality;
  }

  // Field name: nodelist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, NodeListXY
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nodelist))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__ShapePointSet(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ShapePointSet__ros_msg_type * ros_message = static_cast<const _ShapePointSet__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name anchor

  current_alignment += get_serialized_size_v2x_msg__msg__Position3D(
    &(ros_message->anchor), current_alignment);
  // field.name lanewidth
  {
    size_t item_size = sizeof(ros_message->lanewidth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name directionality
  {
    size_t item_size = sizeof(ros_message->directionality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nodelist

  current_alignment += get_serialized_size_v2x_msg__msg__NodeListXY(
    &(ros_message->nodelist), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ShapePointSet__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__ShapePointSet(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__ShapePointSet(
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

  // member: anchor
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__Position3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lanewidth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: directionality
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: nodelist
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__NodeListXY(
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
    using DataType = v2x_msg__msg__ShapePointSet;
    is_plain =
      (
      offsetof(DataType, nodelist) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ShapePointSet__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__ShapePointSet(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ShapePointSet = {
  "v2x_msg::msg",
  "ShapePointSet",
  _ShapePointSet__cdr_serialize,
  _ShapePointSet__cdr_deserialize,
  _ShapePointSet__get_serialized_size,
  _ShapePointSet__max_serialized_size
};

static rosidl_message_type_support_t _ShapePointSet__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ShapePointSet,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, ShapePointSet)() {
  return &_ShapePointSet__type_support;
}

#if defined(__cplusplus)
}
#endif
