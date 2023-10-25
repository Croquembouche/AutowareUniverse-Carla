// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_auto_perception_msgs:msg/TrafficSignalWithJudge.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_with_judge__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_auto_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_with_judge__struct.h"
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_with_judge__functions.h"
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

#include "autoware_auto_perception_msgs/msg/detail/traffic_signal__functions.h"  // signal

// forward declare type support functions
size_t get_serialized_size_autoware_auto_perception_msgs__msg__TrafficSignal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_auto_perception_msgs__msg__TrafficSignal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, TrafficSignal)();


using _TrafficSignalWithJudge__ros_msg_type = autoware_auto_perception_msgs__msg__TrafficSignalWithJudge;

static bool _TrafficSignalWithJudge__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrafficSignalWithJudge__ros_msg_type * ros_message = static_cast<const _TrafficSignalWithJudge__ros_msg_type *>(untyped_ros_message);
  // Field name: judge
  {
    cdr << ros_message->judge;
  }

  // Field name: has_state
  {
    cdr << (ros_message->has_state ? true : false);
  }

  // Field name: signal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, TrafficSignal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->signal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrafficSignalWithJudge__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrafficSignalWithJudge__ros_msg_type * ros_message = static_cast<_TrafficSignalWithJudge__ros_msg_type *>(untyped_ros_message);
  // Field name: judge
  {
    cdr >> ros_message->judge;
  }

  // Field name: has_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_state = tmp ? true : false;
  }

  // Field name: signal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, TrafficSignal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->signal))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_perception_msgs
size_t get_serialized_size_autoware_auto_perception_msgs__msg__TrafficSignalWithJudge(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrafficSignalWithJudge__ros_msg_type * ros_message = static_cast<const _TrafficSignalWithJudge__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name judge
  {
    size_t item_size = sizeof(ros_message->judge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_state
  {
    size_t item_size = sizeof(ros_message->has_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signal

  current_alignment += get_serialized_size_autoware_auto_perception_msgs__msg__TrafficSignal(
    &(ros_message->signal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrafficSignalWithJudge__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_auto_perception_msgs__msg__TrafficSignalWithJudge(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_perception_msgs
size_t max_serialized_size_autoware_auto_perception_msgs__msg__TrafficSignalWithJudge(
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

  // member: judge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: signal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_autoware_auto_perception_msgs__msg__TrafficSignal(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrafficSignalWithJudge__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autoware_auto_perception_msgs__msg__TrafficSignalWithJudge(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TrafficSignalWithJudge = {
  "autoware_auto_perception_msgs::msg",
  "TrafficSignalWithJudge",
  _TrafficSignalWithJudge__cdr_serialize,
  _TrafficSignalWithJudge__cdr_deserialize,
  _TrafficSignalWithJudge__get_serialized_size,
  _TrafficSignalWithJudge__max_serialized_size
};

static rosidl_message_type_support_t _TrafficSignalWithJudge__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrafficSignalWithJudge,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, TrafficSignalWithJudge)() {
  return &_TrafficSignalWithJudge__type_support;
}

#if defined(__cplusplus)
}
#endif
