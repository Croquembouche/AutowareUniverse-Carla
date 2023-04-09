// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/ComputedLane.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/computed_lane__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/computed_lane__struct.h"
#include "v2x_msg/msg/detail/computed_lane__functions.h"
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

#include "v2x_msg/msg/detail/offset_xaxis__functions.h"  // offsetxaxis
#include "v2x_msg/msg/detail/offset_yaxis__functions.h"  // offsetyaxis

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__OffsetXaxis(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__OffsetXaxis(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, OffsetXaxis)();
size_t get_serialized_size_v2x_msg__msg__OffsetYaxis(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__OffsetYaxis(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, OffsetYaxis)();


using _ComputedLane__ros_msg_type = v2x_msg__msg__ComputedLane;

static bool _ComputedLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ComputedLane__ros_msg_type * ros_message = static_cast<const _ComputedLane__ros_msg_type *>(untyped_ros_message);
  // Field name: referencelaneid
  {
    cdr << ros_message->referencelaneid;
  }

  // Field name: offsetxaxis
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, OffsetXaxis
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->offsetxaxis, cdr))
    {
      return false;
    }
  }

  // Field name: offsetyaxis
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, OffsetYaxis
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->offsetyaxis, cdr))
    {
      return false;
    }
  }

  // Field name: rotatexy
  {
    cdr << ros_message->rotatexy;
  }

  // Field name: scalexaxis
  {
    cdr << ros_message->scalexaxis;
  }

  // Field name: scaleyaxis
  {
    cdr << ros_message->scaleyaxis;
  }

  return true;
}

static bool _ComputedLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ComputedLane__ros_msg_type * ros_message = static_cast<_ComputedLane__ros_msg_type *>(untyped_ros_message);
  // Field name: referencelaneid
  {
    cdr >> ros_message->referencelaneid;
  }

  // Field name: offsetxaxis
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, OffsetXaxis
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->offsetxaxis))
    {
      return false;
    }
  }

  // Field name: offsetyaxis
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, OffsetYaxis
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->offsetyaxis))
    {
      return false;
    }
  }

  // Field name: rotatexy
  {
    cdr >> ros_message->rotatexy;
  }

  // Field name: scalexaxis
  {
    cdr >> ros_message->scalexaxis;
  }

  // Field name: scaleyaxis
  {
    cdr >> ros_message->scaleyaxis;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__ComputedLane(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ComputedLane__ros_msg_type * ros_message = static_cast<const _ComputedLane__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name referencelaneid
  {
    size_t item_size = sizeof(ros_message->referencelaneid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offsetxaxis

  current_alignment += get_serialized_size_v2x_msg__msg__OffsetXaxis(
    &(ros_message->offsetxaxis), current_alignment);
  // field.name offsetyaxis

  current_alignment += get_serialized_size_v2x_msg__msg__OffsetYaxis(
    &(ros_message->offsetyaxis), current_alignment);
  // field.name rotatexy
  {
    size_t item_size = sizeof(ros_message->rotatexy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scalexaxis
  {
    size_t item_size = sizeof(ros_message->scalexaxis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scaleyaxis
  {
    size_t item_size = sizeof(ros_message->scaleyaxis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ComputedLane__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__ComputedLane(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__ComputedLane(
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

  // member: referencelaneid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: offsetxaxis
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__OffsetXaxis(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: offsetyaxis
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__OffsetYaxis(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rotatexy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: scalexaxis
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: scaleyaxis
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ComputedLane__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__ComputedLane(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ComputedLane = {
  "v2x_msg::msg",
  "ComputedLane",
  _ComputedLane__cdr_serialize,
  _ComputedLane__cdr_deserialize,
  _ComputedLane__get_serialized_size,
  _ComputedLane__max_serialized_size
};

static rosidl_message_type_support_t _ComputedLane__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ComputedLane,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, ComputedLane)() {
  return &_ComputedLane__type_support;
}

#if defined(__cplusplus)
}
#endif
