// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/TireData.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/tire_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/tire_data__struct.h"
#include "v2x_msg/msg/detail/tire_data__functions.h"
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


using _TireData__ros_msg_type = v2x_msg__msg__TireData;

static bool _TireData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TireData__ros_msg_type * ros_message = static_cast<const _TireData__ros_msg_type *>(untyped_ros_message);
  // Field name: location
  {
    cdr << ros_message->location;
  }

  // Field name: pressure
  {
    cdr << ros_message->pressure;
  }

  // Field name: temp
  {
    cdr << ros_message->temp;
  }

  // Field name: wheelsensorstatus
  {
    cdr << ros_message->wheelsensorstatus;
  }

  // Field name: wheelendelectfault
  {
    cdr << ros_message->wheelendelectfault;
  }

  // Field name: leakagerate
  {
    cdr << ros_message->leakagerate;
  }

  // Field name: detection
  {
    cdr << ros_message->detection;
  }

  return true;
}

static bool _TireData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TireData__ros_msg_type * ros_message = static_cast<_TireData__ros_msg_type *>(untyped_ros_message);
  // Field name: location
  {
    cdr >> ros_message->location;
  }

  // Field name: pressure
  {
    cdr >> ros_message->pressure;
  }

  // Field name: temp
  {
    cdr >> ros_message->temp;
  }

  // Field name: wheelsensorstatus
  {
    cdr >> ros_message->wheelsensorstatus;
  }

  // Field name: wheelendelectfault
  {
    cdr >> ros_message->wheelendelectfault;
  }

  // Field name: leakagerate
  {
    cdr >> ros_message->leakagerate;
  }

  // Field name: detection
  {
    cdr >> ros_message->detection;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__TireData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TireData__ros_msg_type * ros_message = static_cast<const _TireData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name location
  {
    size_t item_size = sizeof(ros_message->location);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pressure
  {
    size_t item_size = sizeof(ros_message->pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp
  {
    size_t item_size = sizeof(ros_message->temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheelsensorstatus
  {
    size_t item_size = sizeof(ros_message->wheelsensorstatus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheelendelectfault
  {
    size_t item_size = sizeof(ros_message->wheelendelectfault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name leakagerate
  {
    size_t item_size = sizeof(ros_message->leakagerate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name detection
  {
    size_t item_size = sizeof(ros_message->detection);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TireData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__TireData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__TireData(
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

  // member: location
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: temp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheelsensorstatus
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheelendelectfault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: leakagerate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: detection
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TireData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__TireData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TireData = {
  "v2x_msg::msg",
  "TireData",
  _TireData__cdr_serialize,
  _TireData__cdr_deserialize,
  _TireData__get_serialized_size,
  _TireData__max_serialized_size
};

static rosidl_message_type_support_t _TireData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TireData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, TireData)() {
  return &_TireData__type_support;
}

#if defined(__cplusplus)
}
#endif
