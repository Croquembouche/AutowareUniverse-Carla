// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/EmergencyDetails.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/emergency_details__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/emergency_details__struct.h"
#include "v2x_msg/msg/detail/emergency_details__functions.h"
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

#include "v2x_msg/msg/detail/privileged_events__functions.h"  // events

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__PrivilegedEvents(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__PrivilegedEvents(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, PrivilegedEvents)();


using _EmergencyDetails__ros_msg_type = v2x_msg__msg__EmergencyDetails;

static bool _EmergencyDetails__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EmergencyDetails__ros_msg_type * ros_message = static_cast<const _EmergencyDetails__ros_msg_type *>(untyped_ros_message);
  // Field name: notused
  {
    cdr << ros_message->notused;
  }

  // Field name: sirenuse
  {
    cdr << ros_message->sirenuse;
  }

  // Field name: lightsuse
  {
    cdr << ros_message->lightsuse;
  }

  // Field name: multi
  {
    cdr << ros_message->multi;
  }

  // Field name: events
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PrivilegedEvents
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->events, cdr))
    {
      return false;
    }
  }

  // Field name: responsetype
  {
    cdr << ros_message->responsetype;
  }

  return true;
}

static bool _EmergencyDetails__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EmergencyDetails__ros_msg_type * ros_message = static_cast<_EmergencyDetails__ros_msg_type *>(untyped_ros_message);
  // Field name: notused
  {
    cdr >> ros_message->notused;
  }

  // Field name: sirenuse
  {
    cdr >> ros_message->sirenuse;
  }

  // Field name: lightsuse
  {
    cdr >> ros_message->lightsuse;
  }

  // Field name: multi
  {
    cdr >> ros_message->multi;
  }

  // Field name: events
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PrivilegedEvents
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->events))
    {
      return false;
    }
  }

  // Field name: responsetype
  {
    cdr >> ros_message->responsetype;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__EmergencyDetails(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EmergencyDetails__ros_msg_type * ros_message = static_cast<const _EmergencyDetails__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name notused
  {
    size_t item_size = sizeof(ros_message->notused);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sirenuse
  {
    size_t item_size = sizeof(ros_message->sirenuse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lightsuse
  {
    size_t item_size = sizeof(ros_message->lightsuse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name multi
  {
    size_t item_size = sizeof(ros_message->multi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name events

  current_alignment += get_serialized_size_v2x_msg__msg__PrivilegedEvents(
    &(ros_message->events), current_alignment);
  // field.name responsetype
  {
    size_t item_size = sizeof(ros_message->responsetype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EmergencyDetails__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__EmergencyDetails(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__EmergencyDetails(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: notused
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: sirenuse
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lightsuse
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: multi
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: events
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__PrivilegedEvents(
        full_bounded, current_alignment);
    }
  }
  // member: responsetype
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _EmergencyDetails__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__EmergencyDetails(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EmergencyDetails = {
  "v2x_msg::msg",
  "EmergencyDetails",
  _EmergencyDetails__cdr_serialize,
  _EmergencyDetails__cdr_deserialize,
  _EmergencyDetails__get_serialized_size,
  _EmergencyDetails__max_serialized_size
};

static rosidl_message_type_support_t _EmergencyDetails__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EmergencyDetails,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, EmergencyDetails)() {
  return &_EmergencyDetails__type_support;
}

#if defined(__cplusplus)
}
#endif
