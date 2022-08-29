// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/PathPrediction.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/path_prediction__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/path_prediction__struct.h"
#include "v2x_msg/msg/detail/path_prediction__functions.h"
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


using _PathPrediction__ros_msg_type = v2x_msg__msg__PathPrediction;

static bool _PathPrediction__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PathPrediction__ros_msg_type * ros_message = static_cast<const _PathPrediction__ros_msg_type *>(untyped_ros_message);
  // Field name: radiusofcurve
  {
    cdr << ros_message->radiusofcurve;
  }

  // Field name: confidence
  {
    cdr << ros_message->confidence;
  }

  return true;
}

static bool _PathPrediction__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PathPrediction__ros_msg_type * ros_message = static_cast<_PathPrediction__ros_msg_type *>(untyped_ros_message);
  // Field name: radiusofcurve
  {
    cdr >> ros_message->radiusofcurve;
  }

  // Field name: confidence
  {
    cdr >> ros_message->confidence;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__PathPrediction(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PathPrediction__ros_msg_type * ros_message = static_cast<const _PathPrediction__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name radiusofcurve
  {
    size_t item_size = sizeof(ros_message->radiusofcurve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name confidence
  {
    size_t item_size = sizeof(ros_message->confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PathPrediction__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__PathPrediction(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__PathPrediction(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: radiusofcurve
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

  return current_alignment - initial_alignment;
}

static size_t _PathPrediction__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__PathPrediction(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PathPrediction = {
  "v2x_msg::msg",
  "PathPrediction",
  _PathPrediction__cdr_serialize,
  _PathPrediction__cdr_deserialize,
  _PathPrediction__get_serialized_size,
  _PathPrediction__max_serialized_size
};

static rosidl_message_type_support_t _PathPrediction__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PathPrediction,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, PathPrediction)() {
  return &_PathPrediction__type_support;
}

#if defined(__cplusplus)
}
#endif
