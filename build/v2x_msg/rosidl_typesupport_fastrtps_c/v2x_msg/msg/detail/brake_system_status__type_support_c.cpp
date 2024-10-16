// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/BrakeSystemStatus.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/brake_system_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/brake_system_status__struct.h"
#include "v2x_msg/msg/detail/brake_system_status__functions.h"
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

#include "rosidl_runtime_c/string.h"  // wheelbrakes
#include "rosidl_runtime_c/string_functions.h"  // wheelbrakes

// forward declare type support functions


using _BrakeSystemStatus__ros_msg_type = v2x_msg__msg__BrakeSystemStatus;

static bool _BrakeSystemStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BrakeSystemStatus__ros_msg_type * ros_message = static_cast<const _BrakeSystemStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: wheelbrakes
  {
    const rosidl_runtime_c__String * str = &ros_message->wheelbrakes;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: traction
  {
    cdr << ros_message->traction;
  }

  // Field name: abs
  {
    cdr << ros_message->abs;
  }

  // Field name: scs
  {
    cdr << ros_message->scs;
  }

  // Field name: brakeboost
  {
    cdr << ros_message->brakeboost;
  }

  // Field name: auxbrakes
  {
    cdr << ros_message->auxbrakes;
  }

  return true;
}

static bool _BrakeSystemStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BrakeSystemStatus__ros_msg_type * ros_message = static_cast<_BrakeSystemStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: wheelbrakes
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->wheelbrakes.data) {
      rosidl_runtime_c__String__init(&ros_message->wheelbrakes);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->wheelbrakes,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'wheelbrakes'\n");
      return false;
    }
  }

  // Field name: traction
  {
    cdr >> ros_message->traction;
  }

  // Field name: abs
  {
    cdr >> ros_message->abs;
  }

  // Field name: scs
  {
    cdr >> ros_message->scs;
  }

  // Field name: brakeboost
  {
    cdr >> ros_message->brakeboost;
  }

  // Field name: auxbrakes
  {
    cdr >> ros_message->auxbrakes;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__BrakeSystemStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BrakeSystemStatus__ros_msg_type * ros_message = static_cast<const _BrakeSystemStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name wheelbrakes
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->wheelbrakes.size + 1);
  // field.name traction
  {
    size_t item_size = sizeof(ros_message->traction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name abs
  {
    size_t item_size = sizeof(ros_message->abs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scs
  {
    size_t item_size = sizeof(ros_message->scs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brakeboost
  {
    size_t item_size = sizeof(ros_message->brakeboost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auxbrakes
  {
    size_t item_size = sizeof(ros_message->auxbrakes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BrakeSystemStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__BrakeSystemStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__BrakeSystemStatus(
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

  // member: wheelbrakes
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: traction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: abs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: scs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brakeboost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: auxbrakes
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
    using DataType = v2x_msg__msg__BrakeSystemStatus;
    is_plain =
      (
      offsetof(DataType, auxbrakes) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BrakeSystemStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__BrakeSystemStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BrakeSystemStatus = {
  "v2x_msg::msg",
  "BrakeSystemStatus",
  _BrakeSystemStatus__cdr_serialize,
  _BrakeSystemStatus__cdr_deserialize,
  _BrakeSystemStatus__get_serialized_size,
  _BrakeSystemStatus__max_serialized_size
};

static rosidl_message_type_support_t _BrakeSystemStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BrakeSystemStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, BrakeSystemStatus)() {
  return &_BrakeSystemStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
