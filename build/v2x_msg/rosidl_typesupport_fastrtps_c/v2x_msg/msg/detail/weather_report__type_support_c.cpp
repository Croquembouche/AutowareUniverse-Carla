// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/WeatherReport.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/weather_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/weather_report__struct.h"
#include "v2x_msg/msg/detail/weather_report__functions.h"
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


using _WeatherReport__ros_msg_type = v2x_msg__msg__WeatherReport;

static bool _WeatherReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WeatherReport__ros_msg_type * ros_message = static_cast<const _WeatherReport__ros_msg_type *>(untyped_ros_message);
  // Field name: israining
  {
    cdr << ros_message->israining;
  }

  // Field name: rainrate
  {
    cdr << ros_message->rainrate;
  }

  // Field name: precipsituation
  {
    cdr << ros_message->precipsituation;
  }

  // Field name: solarradiation
  {
    cdr << ros_message->solarradiation;
  }

  // Field name: friction
  {
    cdr << ros_message->friction;
  }

  return true;
}

static bool _WeatherReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WeatherReport__ros_msg_type * ros_message = static_cast<_WeatherReport__ros_msg_type *>(untyped_ros_message);
  // Field name: israining
  {
    cdr >> ros_message->israining;
  }

  // Field name: rainrate
  {
    cdr >> ros_message->rainrate;
  }

  // Field name: precipsituation
  {
    cdr >> ros_message->precipsituation;
  }

  // Field name: solarradiation
  {
    cdr >> ros_message->solarradiation;
  }

  // Field name: friction
  {
    cdr >> ros_message->friction;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__WeatherReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WeatherReport__ros_msg_type * ros_message = static_cast<const _WeatherReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name israining
  {
    size_t item_size = sizeof(ros_message->israining);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rainrate
  {
    size_t item_size = sizeof(ros_message->rainrate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name precipsituation
  {
    size_t item_size = sizeof(ros_message->precipsituation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name solarradiation
  {
    size_t item_size = sizeof(ros_message->solarradiation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name friction
  {
    size_t item_size = sizeof(ros_message->friction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WeatherReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__WeatherReport(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__WeatherReport(
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

  // member: israining
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rainrate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: precipsituation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: solarradiation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: friction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_msg__msg__WeatherReport;
    is_plain =
      (
      offsetof(DataType, friction) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WeatherReport__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__WeatherReport(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WeatherReport = {
  "v2x_msg::msg",
  "WeatherReport",
  _WeatherReport__cdr_serialize,
  _WeatherReport__cdr_deserialize,
  _WeatherReport__get_serialized_size,
  _WeatherReport__max_serialized_size
};

static rosidl_message_type_support_t _WeatherReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WeatherReport,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, WeatherReport)() {
  return &_WeatherReport__type_support;
}

#if defined(__cplusplus)
}
#endif
