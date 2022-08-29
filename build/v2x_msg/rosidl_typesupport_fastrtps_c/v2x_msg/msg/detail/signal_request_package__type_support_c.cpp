// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/SignalRequestPackage.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/signal_request_package__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/signal_request_package__struct.h"
#include "v2x_msg/msg/detail/signal_request_package__functions.h"
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

#include "v2x_msg/msg/detail/signal_request__functions.h"  // signalrequest

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__SignalRequest(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__SignalRequest(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, SignalRequest)();


using _SignalRequestPackage__ros_msg_type = v2x_msg__msg__SignalRequestPackage;

static bool _SignalRequestPackage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SignalRequestPackage__ros_msg_type * ros_message = static_cast<const _SignalRequestPackage__ros_msg_type *>(untyped_ros_message);
  // Field name: signalrequest
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, SignalRequest
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->signalrequest, cdr))
    {
      return false;
    }
  }

  // Field name: minute
  {
    cdr << ros_message->minute;
  }

  // Field name: second
  {
    cdr << ros_message->second;
  }

  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  return true;
}

static bool _SignalRequestPackage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SignalRequestPackage__ros_msg_type * ros_message = static_cast<_SignalRequestPackage__ros_msg_type *>(untyped_ros_message);
  // Field name: signalrequest
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, SignalRequest
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->signalrequest))
    {
      return false;
    }
  }

  // Field name: minute
  {
    cdr >> ros_message->minute;
  }

  // Field name: second
  {
    cdr >> ros_message->second;
  }

  // Field name: duration
  {
    cdr >> ros_message->duration;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__SignalRequestPackage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SignalRequestPackage__ros_msg_type * ros_message = static_cast<const _SignalRequestPackage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name signalrequest

  current_alignment += get_serialized_size_v2x_msg__msg__SignalRequest(
    &(ros_message->signalrequest), current_alignment);
  // field.name minute
  {
    size_t item_size = sizeof(ros_message->minute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name second
  {
    size_t item_size = sizeof(ros_message->second);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name duration
  {
    size_t item_size = sizeof(ros_message->duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SignalRequestPackage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__SignalRequestPackage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__SignalRequestPackage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: signalrequest
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__SignalRequest(
        full_bounded, current_alignment);
    }
  }
  // member: minute
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: second
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: duration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SignalRequestPackage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__SignalRequestPackage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SignalRequestPackage = {
  "v2x_msg::msg",
  "SignalRequestPackage",
  _SignalRequestPackage__cdr_serialize,
  _SignalRequestPackage__cdr_deserialize,
  _SignalRequestPackage__get_serialized_size,
  _SignalRequestPackage__max_serialized_size
};

static rosidl_message_type_support_t _SignalRequestPackage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SignalRequestPackage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, SignalRequestPackage)() {
  return &_SignalRequestPackage__type_support;
}

#if defined(__cplusplus)
}
#endif
