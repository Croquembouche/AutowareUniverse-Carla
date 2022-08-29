// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/TimeChangeDetails.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/time_change_details__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/time_change_details__struct.h"
#include "v2x_msg/msg/detail/time_change_details__functions.h"
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


// forward declare type support functions


using _TimeChangeDetails__ros_msg_type = v2x_msg__msg__TimeChangeDetails;

static bool _TimeChangeDetails__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TimeChangeDetails__ros_msg_type * ros_message = static_cast<const _TimeChangeDetails__ros_msg_type *>(untyped_ros_message);
  // Field name: startime
  {
    cdr << ros_message->startime;
  }

  // Field name: minendtime
  {
    cdr << ros_message->minendtime;
  }

  // Field name: maxendtime
  {
    cdr << ros_message->maxendtime;
  }

  // Field name: likelytime
  {
    cdr << ros_message->likelytime;
  }

  // Field name: confidence
  {
    cdr << ros_message->confidence;
  }

  // Field name: nexttime
  {
    cdr << ros_message->nexttime;
  }

  return true;
}

static bool _TimeChangeDetails__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TimeChangeDetails__ros_msg_type * ros_message = static_cast<_TimeChangeDetails__ros_msg_type *>(untyped_ros_message);
  // Field name: startime
  {
    cdr >> ros_message->startime;
  }

  // Field name: minendtime
  {
    cdr >> ros_message->minendtime;
  }

  // Field name: maxendtime
  {
    cdr >> ros_message->maxendtime;
  }

  // Field name: likelytime
  {
    cdr >> ros_message->likelytime;
  }

  // Field name: confidence
  {
    cdr >> ros_message->confidence;
  }

  // Field name: nexttime
  {
    cdr >> ros_message->nexttime;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__TimeChangeDetails(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TimeChangeDetails__ros_msg_type * ros_message = static_cast<const _TimeChangeDetails__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name startime
  {
    size_t item_size = sizeof(ros_message->startime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name minendtime
  {
    size_t item_size = sizeof(ros_message->minendtime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maxendtime
  {
    size_t item_size = sizeof(ros_message->maxendtime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name likelytime
  {
    size_t item_size = sizeof(ros_message->likelytime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name confidence
  {
    size_t item_size = sizeof(ros_message->confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nexttime
  {
    size_t item_size = sizeof(ros_message->nexttime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TimeChangeDetails__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__TimeChangeDetails(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__TimeChangeDetails(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: startime
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: minendtime
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: maxendtime
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: likelytime
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: confidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: nexttime
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TimeChangeDetails__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__TimeChangeDetails(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TimeChangeDetails = {
  "v2x_msg::msg",
  "TimeChangeDetails",
  _TimeChangeDetails__cdr_serialize,
  _TimeChangeDetails__cdr_deserialize,
  _TimeChangeDetails__get_serialized_size,
  _TimeChangeDetails__max_serialized_size
};

static rosidl_message_type_support_t _TimeChangeDetails__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TimeChangeDetails,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, TimeChangeDetails)() {
  return &_TimeChangeDetails__type_support;
}

#if defined(__cplusplus)
}
#endif
