// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/lane_data_attribute__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/lane_data_attribute__struct.h"
#include "v2x_msg/msg/detail/lane_data_attribute__functions.h"
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

#include "v2x_msg/msg/detail/speed_limit__functions.h"  // speedlimits

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__SpeedLimit(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__SpeedLimit(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, SpeedLimit)();


using _LaneDataAttribute__ros_msg_type = v2x_msg__msg__LaneDataAttribute;

static bool _LaneDataAttribute__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LaneDataAttribute__ros_msg_type * ros_message = static_cast<const _LaneDataAttribute__ros_msg_type *>(untyped_ros_message);
  // Field name: pathendpointangle
  {
    cdr << ros_message->pathendpointangle;
  }

  // Field name: lanecrownpointcenter
  {
    cdr << ros_message->lanecrownpointcenter;
  }

  // Field name: lancrownpointleft
  {
    cdr << ros_message->lancrownpointleft;
  }

  // Field name: lanecrownpointright
  {
    cdr << ros_message->lanecrownpointright;
  }

  // Field name: laneangle
  {
    cdr << ros_message->laneangle;
  }

  // Field name: speedlimits
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, SpeedLimit
      )()->data);
    size_t size = ros_message->speedlimits.size;
    auto array_ptr = ros_message->speedlimits.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _LaneDataAttribute__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LaneDataAttribute__ros_msg_type * ros_message = static_cast<_LaneDataAttribute__ros_msg_type *>(untyped_ros_message);
  // Field name: pathendpointangle
  {
    cdr >> ros_message->pathendpointangle;
  }

  // Field name: lanecrownpointcenter
  {
    cdr >> ros_message->lanecrownpointcenter;
  }

  // Field name: lancrownpointleft
  {
    cdr >> ros_message->lancrownpointleft;
  }

  // Field name: lanecrownpointright
  {
    cdr >> ros_message->lanecrownpointright;
  }

  // Field name: laneangle
  {
    cdr >> ros_message->laneangle;
  }

  // Field name: speedlimits
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, SpeedLimit
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->speedlimits.data) {
      v2x_msg__msg__SpeedLimit__Sequence__fini(&ros_message->speedlimits);
    }
    if (!v2x_msg__msg__SpeedLimit__Sequence__init(&ros_message->speedlimits, size)) {
      fprintf(stderr, "failed to create array for field 'speedlimits'");
      return false;
    }
    auto array_ptr = ros_message->speedlimits.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__LaneDataAttribute(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LaneDataAttribute__ros_msg_type * ros_message = static_cast<const _LaneDataAttribute__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pathendpointangle
  {
    size_t item_size = sizeof(ros_message->pathendpointangle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanecrownpointcenter
  {
    size_t item_size = sizeof(ros_message->lanecrownpointcenter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lancrownpointleft
  {
    size_t item_size = sizeof(ros_message->lancrownpointleft);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanecrownpointright
  {
    size_t item_size = sizeof(ros_message->lanecrownpointright);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name laneangle
  {
    size_t item_size = sizeof(ros_message->laneangle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speedlimits
  {
    size_t array_size = ros_message->speedlimits.size;
    auto array_ptr = ros_message->speedlimits.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__SpeedLimit(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LaneDataAttribute__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__LaneDataAttribute(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__LaneDataAttribute(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: pathendpointangle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lanecrownpointcenter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lancrownpointleft
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lanecrownpointright
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: laneangle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speedlimits
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__SpeedLimit(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _LaneDataAttribute__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__LaneDataAttribute(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LaneDataAttribute = {
  "v2x_msg::msg",
  "LaneDataAttribute",
  _LaneDataAttribute__cdr_serialize,
  _LaneDataAttribute__cdr_deserialize,
  _LaneDataAttribute__get_serialized_size,
  _LaneDataAttribute__max_serialized_size
};

static rosidl_message_type_support_t _LaneDataAttribute__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LaneDataAttribute,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, LaneDataAttribute)() {
  return &_LaneDataAttribute__type_support;
}

#if defined(__cplusplus)
}
#endif
