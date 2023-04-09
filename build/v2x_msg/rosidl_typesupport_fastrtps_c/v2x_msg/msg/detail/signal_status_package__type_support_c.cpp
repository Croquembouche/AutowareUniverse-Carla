// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/SignalStatusPackage.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/signal_status_package__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/signal_status_package__struct.h"
#include "v2x_msg/msg/detail/signal_status_package__functions.h"
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

#include "v2x_msg/msg/detail/intersection_access_point__functions.h"  // inboundon, outboundon
#include "v2x_msg/msg/detail/signal_requester_info__functions.h"  // requester

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__IntersectionAccessPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__IntersectionAccessPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionAccessPoint)();
size_t get_serialized_size_v2x_msg__msg__SignalRequesterInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__SignalRequesterInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, SignalRequesterInfo)();


using _SignalStatusPackage__ros_msg_type = v2x_msg__msg__SignalStatusPackage;

static bool _SignalStatusPackage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SignalStatusPackage__ros_msg_type * ros_message = static_cast<const _SignalStatusPackage__ros_msg_type *>(untyped_ros_message);
  // Field name: requester
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, SignalRequesterInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->requester, cdr))
    {
      return false;
    }
  }

  // Field name: inboundon
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionAccessPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->inboundon, cdr))
    {
      return false;
    }
  }

  // Field name: outboundon
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionAccessPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->outboundon, cdr))
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

  // Field name: status
  {
    cdr << ros_message->status;
  }

  return true;
}

static bool _SignalStatusPackage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SignalStatusPackage__ros_msg_type * ros_message = static_cast<_SignalStatusPackage__ros_msg_type *>(untyped_ros_message);
  // Field name: requester
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, SignalRequesterInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->requester))
    {
      return false;
    }
  }

  // Field name: inboundon
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionAccessPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->inboundon))
    {
      return false;
    }
  }

  // Field name: outboundon
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionAccessPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->outboundon))
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

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__SignalStatusPackage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SignalStatusPackage__ros_msg_type * ros_message = static_cast<const _SignalStatusPackage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name requester

  current_alignment += get_serialized_size_v2x_msg__msg__SignalRequesterInfo(
    &(ros_message->requester), current_alignment);
  // field.name inboundon

  current_alignment += get_serialized_size_v2x_msg__msg__IntersectionAccessPoint(
    &(ros_message->inboundon), current_alignment);
  // field.name outboundon

  current_alignment += get_serialized_size_v2x_msg__msg__IntersectionAccessPoint(
    &(ros_message->outboundon), current_alignment);
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
  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SignalStatusPackage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__SignalStatusPackage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__SignalStatusPackage(
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

  // member: requester
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__SignalRequesterInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: inboundon
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__IntersectionAccessPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: outboundon
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__IntersectionAccessPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
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
  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SignalStatusPackage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__SignalStatusPackage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SignalStatusPackage = {
  "v2x_msg::msg",
  "SignalStatusPackage",
  _SignalStatusPackage__cdr_serialize,
  _SignalStatusPackage__cdr_deserialize,
  _SignalStatusPackage__get_serialized_size,
  _SignalStatusPackage__max_serialized_size
};

static rosidl_message_type_support_t _SignalStatusPackage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SignalStatusPackage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, SignalStatusPackage)() {
  return &_SignalStatusPackage__type_support;
}

#if defined(__cplusplus)
}
#endif
