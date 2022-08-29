// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/WiperSet.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/wiper_set__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/wiper_set__struct.h"
#include "v2x_msg/msg/detail/wiper_set__functions.h"
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


using _WiperSet__ros_msg_type = v2x_msg__msg__WiperSet;

static bool _WiperSet__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WiperSet__ros_msg_type * ros_message = static_cast<const _WiperSet__ros_msg_type *>(untyped_ros_message);
  // Field name: statusfront
  {
    cdr << ros_message->statusfront;
  }

  // Field name: ratefront
  {
    cdr << ros_message->ratefront;
  }

  // Field name: statusrear
  {
    cdr << ros_message->statusrear;
  }

  // Field name: raterear
  {
    cdr << ros_message->raterear;
  }

  return true;
}

static bool _WiperSet__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WiperSet__ros_msg_type * ros_message = static_cast<_WiperSet__ros_msg_type *>(untyped_ros_message);
  // Field name: statusfront
  {
    cdr >> ros_message->statusfront;
  }

  // Field name: ratefront
  {
    cdr >> ros_message->ratefront;
  }

  // Field name: statusrear
  {
    cdr >> ros_message->statusrear;
  }

  // Field name: raterear
  {
    cdr >> ros_message->raterear;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__WiperSet(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WiperSet__ros_msg_type * ros_message = static_cast<const _WiperSet__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name statusfront
  {
    size_t item_size = sizeof(ros_message->statusfront);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ratefront
  {
    size_t item_size = sizeof(ros_message->ratefront);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name statusrear
  {
    size_t item_size = sizeof(ros_message->statusrear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name raterear
  {
    size_t item_size = sizeof(ros_message->raterear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WiperSet__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__WiperSet(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__WiperSet(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: statusfront
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ratefront
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: statusrear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: raterear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _WiperSet__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__WiperSet(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WiperSet = {
  "v2x_msg::msg",
  "WiperSet",
  _WiperSet__cdr_serialize,
  _WiperSet__cdr_deserialize,
  _WiperSet__get_serialized_size,
  _WiperSet__max_serialized_size
};

static rosidl_message_type_support_t _WiperSet__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WiperSet,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, WiperSet)() {
  return &_WiperSet__type_support;
}

#if defined(__cplusplus)
}
#endif
