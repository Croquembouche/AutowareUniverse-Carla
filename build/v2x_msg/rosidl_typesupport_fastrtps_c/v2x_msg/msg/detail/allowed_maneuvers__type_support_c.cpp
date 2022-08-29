// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/AllowedManeuvers.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/allowed_maneuvers__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/allowed_maneuvers__struct.h"
#include "v2x_msg/msg/detail/allowed_maneuvers__functions.h"
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


using _AllowedManeuvers__ros_msg_type = v2x_msg__msg__AllowedManeuvers;

static bool _AllowedManeuvers__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AllowedManeuvers__ros_msg_type * ros_message = static_cast<const _AllowedManeuvers__ros_msg_type *>(untyped_ros_message);
  // Field name: maneuverstraightallowed
  {
    cdr << ros_message->maneuverstraightallowed;
  }

  // Field name: maneuverleftallowed
  {
    cdr << ros_message->maneuverleftallowed;
  }

  // Field name: maneuverrightallowed
  {
    cdr << ros_message->maneuverrightallowed;
  }

  // Field name: maneuveruturnallowed
  {
    cdr << ros_message->maneuveruturnallowed;
  }

  // Field name: maneuverleftturnonredallowed
  {
    cdr << ros_message->maneuverleftturnonredallowed;
  }

  // Field name: maneverrightturnonredallowed
  {
    cdr << ros_message->maneverrightturnonredallowed;
  }

  // Field name: maneuverlanechangeallowed
  {
    cdr << ros_message->maneuverlanechangeallowed;
  }

  // Field name: maneuvernostoppingallowed
  {
    cdr << ros_message->maneuvernostoppingallowed;
  }

  // Field name: yieldallwaysrequired
  {
    cdr << ros_message->yieldallwaysrequired;
  }

  // Field name: gowithhalt
  {
    cdr << ros_message->gowithhalt;
  }

  // Field name: caution
  {
    cdr << ros_message->caution;
  }

  // Field name: reserved1
  {
    cdr << ros_message->reserved1;
  }

  return true;
}

static bool _AllowedManeuvers__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AllowedManeuvers__ros_msg_type * ros_message = static_cast<_AllowedManeuvers__ros_msg_type *>(untyped_ros_message);
  // Field name: maneuverstraightallowed
  {
    cdr >> ros_message->maneuverstraightallowed;
  }

  // Field name: maneuverleftallowed
  {
    cdr >> ros_message->maneuverleftallowed;
  }

  // Field name: maneuverrightallowed
  {
    cdr >> ros_message->maneuverrightallowed;
  }

  // Field name: maneuveruturnallowed
  {
    cdr >> ros_message->maneuveruturnallowed;
  }

  // Field name: maneuverleftturnonredallowed
  {
    cdr >> ros_message->maneuverleftturnonredallowed;
  }

  // Field name: maneverrightturnonredallowed
  {
    cdr >> ros_message->maneverrightturnonredallowed;
  }

  // Field name: maneuverlanechangeallowed
  {
    cdr >> ros_message->maneuverlanechangeallowed;
  }

  // Field name: maneuvernostoppingallowed
  {
    cdr >> ros_message->maneuvernostoppingallowed;
  }

  // Field name: yieldallwaysrequired
  {
    cdr >> ros_message->yieldallwaysrequired;
  }

  // Field name: gowithhalt
  {
    cdr >> ros_message->gowithhalt;
  }

  // Field name: caution
  {
    cdr >> ros_message->caution;
  }

  // Field name: reserved1
  {
    cdr >> ros_message->reserved1;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__AllowedManeuvers(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AllowedManeuvers__ros_msg_type * ros_message = static_cast<const _AllowedManeuvers__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name maneuverstraightallowed
  {
    size_t item_size = sizeof(ros_message->maneuverstraightallowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maneuverleftallowed
  {
    size_t item_size = sizeof(ros_message->maneuverleftallowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maneuverrightallowed
  {
    size_t item_size = sizeof(ros_message->maneuverrightallowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maneuveruturnallowed
  {
    size_t item_size = sizeof(ros_message->maneuveruturnallowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maneuverleftturnonredallowed
  {
    size_t item_size = sizeof(ros_message->maneuverleftturnonredallowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maneverrightturnonredallowed
  {
    size_t item_size = sizeof(ros_message->maneverrightturnonredallowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maneuverlanechangeallowed
  {
    size_t item_size = sizeof(ros_message->maneuverlanechangeallowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maneuvernostoppingallowed
  {
    size_t item_size = sizeof(ros_message->maneuvernostoppingallowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yieldallwaysrequired
  {
    size_t item_size = sizeof(ros_message->yieldallwaysrequired);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gowithhalt
  {
    size_t item_size = sizeof(ros_message->gowithhalt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name caution
  {
    size_t item_size = sizeof(ros_message->caution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved1
  {
    size_t item_size = sizeof(ros_message->reserved1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AllowedManeuvers__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__AllowedManeuvers(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__AllowedManeuvers(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: maneuverstraightallowed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: maneuverleftallowed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: maneuverrightallowed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: maneuveruturnallowed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: maneuverleftturnonredallowed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: maneverrightturnonredallowed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: maneuverlanechangeallowed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: maneuvernostoppingallowed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: yieldallwaysrequired
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gowithhalt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: caution
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: reserved1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AllowedManeuvers__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__AllowedManeuvers(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AllowedManeuvers = {
  "v2x_msg::msg",
  "AllowedManeuvers",
  _AllowedManeuvers__cdr_serialize,
  _AllowedManeuvers__cdr_deserialize,
  _AllowedManeuvers__get_serialized_size,
  _AllowedManeuvers__max_serialized_size
};

static rosidl_message_type_support_t _AllowedManeuvers__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AllowedManeuvers,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, AllowedManeuvers)() {
  return &_AllowedManeuvers__type_support;
}

#if defined(__cplusplus)
}
#endif
