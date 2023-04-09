// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/LaneAttributes.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/lane_attributes__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/lane_attributes__struct.h"
#include "v2x_msg/msg/detail/lane_attributes__functions.h"
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

#include "rosidl_runtime_c/string.h"  // directionaluse, sharedwith
#include "rosidl_runtime_c/string_functions.h"  // directionaluse, sharedwith

// forward declare type support functions


using _LaneAttributes__ros_msg_type = v2x_msg__msg__LaneAttributes;

static bool _LaneAttributes__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LaneAttributes__ros_msg_type * ros_message = static_cast<const _LaneAttributes__ros_msg_type *>(untyped_ros_message);
  // Field name: directionaluse
  {
    const rosidl_runtime_c__String * str = &ros_message->directionaluse;
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

  // Field name: sharedwith
  {
    const rosidl_runtime_c__String * str = &ros_message->sharedwith;
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

  // Field name: lanetype
  {
    cdr << ros_message->lanetype;
  }

  return true;
}

static bool _LaneAttributes__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LaneAttributes__ros_msg_type * ros_message = static_cast<_LaneAttributes__ros_msg_type *>(untyped_ros_message);
  // Field name: directionaluse
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->directionaluse.data) {
      rosidl_runtime_c__String__init(&ros_message->directionaluse);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->directionaluse,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'directionaluse'\n");
      return false;
    }
  }

  // Field name: sharedwith
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sharedwith.data) {
      rosidl_runtime_c__String__init(&ros_message->sharedwith);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sharedwith,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sharedwith'\n");
      return false;
    }
  }

  // Field name: lanetype
  {
    cdr >> ros_message->lanetype;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__LaneAttributes(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LaneAttributes__ros_msg_type * ros_message = static_cast<const _LaneAttributes__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name directionaluse
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->directionaluse.size + 1);
  // field.name sharedwith
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sharedwith.size + 1);
  // field.name lanetype
  {
    size_t item_size = sizeof(ros_message->lanetype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LaneAttributes__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__LaneAttributes(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__LaneAttributes(
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

  // member: directionaluse
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
  // member: sharedwith
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
  // member: lanetype
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _LaneAttributes__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__LaneAttributes(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LaneAttributes = {
  "v2x_msg::msg",
  "LaneAttributes",
  _LaneAttributes__cdr_serialize,
  _LaneAttributes__cdr_deserialize,
  _LaneAttributes__get_serialized_size,
  _LaneAttributes__max_serialized_size
};

static rosidl_message_type_support_t _LaneAttributes__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LaneAttributes,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, LaneAttributes)() {
  return &_LaneAttributes__type_support;
}

#if defined(__cplusplus)
}
#endif
