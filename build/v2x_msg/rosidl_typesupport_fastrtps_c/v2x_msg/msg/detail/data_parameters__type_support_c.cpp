// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/DataParameters.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/data_parameters__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/data_parameters__struct.h"
#include "v2x_msg/msg/detail/data_parameters__functions.h"
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

#include "rosidl_runtime_c/string.h"  // geoidused, lastcheckeddate, processagency, processmethod
#include "rosidl_runtime_c/string_functions.h"  // geoidused, lastcheckeddate, processagency, processmethod

// forward declare type support functions


using _DataParameters__ros_msg_type = v2x_msg__msg__DataParameters;

static bool _DataParameters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DataParameters__ros_msg_type * ros_message = static_cast<const _DataParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: processmethod
  {
    const rosidl_runtime_c__String * str = &ros_message->processmethod;
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

  // Field name: processagency
  {
    const rosidl_runtime_c__String * str = &ros_message->processagency;
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

  // Field name: lastcheckeddate
  {
    const rosidl_runtime_c__String * str = &ros_message->lastcheckeddate;
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

  // Field name: geoidused
  {
    const rosidl_runtime_c__String * str = &ros_message->geoidused;
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

  return true;
}

static bool _DataParameters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DataParameters__ros_msg_type * ros_message = static_cast<_DataParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: processmethod
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->processmethod.data) {
      rosidl_runtime_c__String__init(&ros_message->processmethod);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->processmethod,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'processmethod'\n");
      return false;
    }
  }

  // Field name: processagency
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->processagency.data) {
      rosidl_runtime_c__String__init(&ros_message->processagency);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->processagency,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'processagency'\n");
      return false;
    }
  }

  // Field name: lastcheckeddate
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lastcheckeddate.data) {
      rosidl_runtime_c__String__init(&ros_message->lastcheckeddate);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lastcheckeddate,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lastcheckeddate'\n");
      return false;
    }
  }

  // Field name: geoidused
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->geoidused.data) {
      rosidl_runtime_c__String__init(&ros_message->geoidused);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->geoidused,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'geoidused'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__DataParameters(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DataParameters__ros_msg_type * ros_message = static_cast<const _DataParameters__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name processmethod
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->processmethod.size + 1);
  // field.name processagency
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->processagency.size + 1);
  // field.name lastcheckeddate
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lastcheckeddate.size + 1);
  // field.name geoidused
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->geoidused.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _DataParameters__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__DataParameters(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__DataParameters(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: processmethod
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: processagency
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: lastcheckeddate
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: geoidused
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _DataParameters__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__DataParameters(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DataParameters = {
  "v2x_msg::msg",
  "DataParameters",
  _DataParameters__cdr_serialize,
  _DataParameters__cdr_deserialize,
  _DataParameters__get_serialized_size,
  _DataParameters__max_serialized_size
};

static rosidl_message_type_support_t _DataParameters__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DataParameters,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, DataParameters)() {
  return &_DataParameters__type_support;
}

#if defined(__cplusplus)
}
#endif
