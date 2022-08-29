// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/TransitVehicleStatus.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/transit_vehicle_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/transit_vehicle_status__struct.h"
#include "v2x_msg/msg/detail/transit_vehicle_status__functions.h"
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


using _TransitVehicleStatus__ros_msg_type = v2x_msg__msg__TransitVehicleStatus;

static bool _TransitVehicleStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TransitVehicleStatus__ros_msg_type * ros_message = static_cast<const _TransitVehicleStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: loading
  {
    cdr << ros_message->loading;
  }

  // Field name: anadause
  {
    cdr << ros_message->anadause;
  }

  // Field name: abikeload
  {
    cdr << ros_message->abikeload;
  }

  // Field name: dooropen
  {
    cdr << ros_message->dooropen;
  }

  // Field name: charging
  {
    cdr << ros_message->charging;
  }

  // Field name: atstopline
  {
    cdr << ros_message->atstopline;
  }

  return true;
}

static bool _TransitVehicleStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TransitVehicleStatus__ros_msg_type * ros_message = static_cast<_TransitVehicleStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: loading
  {
    cdr >> ros_message->loading;
  }

  // Field name: anadause
  {
    cdr >> ros_message->anadause;
  }

  // Field name: abikeload
  {
    cdr >> ros_message->abikeload;
  }

  // Field name: dooropen
  {
    cdr >> ros_message->dooropen;
  }

  // Field name: charging
  {
    cdr >> ros_message->charging;
  }

  // Field name: atstopline
  {
    cdr >> ros_message->atstopline;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__TransitVehicleStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TransitVehicleStatus__ros_msg_type * ros_message = static_cast<const _TransitVehicleStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name loading
  {
    size_t item_size = sizeof(ros_message->loading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name anadause
  {
    size_t item_size = sizeof(ros_message->anadause);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name abikeload
  {
    size_t item_size = sizeof(ros_message->abikeload);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dooropen
  {
    size_t item_size = sizeof(ros_message->dooropen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name charging
  {
    size_t item_size = sizeof(ros_message->charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name atstopline
  {
    size_t item_size = sizeof(ros_message->atstopline);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TransitVehicleStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__TransitVehicleStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__TransitVehicleStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: loading
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: anadause
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: abikeload
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dooropen
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: charging
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: atstopline
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TransitVehicleStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__TransitVehicleStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TransitVehicleStatus = {
  "v2x_msg::msg",
  "TransitVehicleStatus",
  _TransitVehicleStatus__cdr_serialize,
  _TransitVehicleStatus__cdr_deserialize,
  _TransitVehicleStatus__get_serialized_size,
  _TransitVehicleStatus__max_serialized_size
};

static rosidl_message_type_support_t _TransitVehicleStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TransitVehicleStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, TransitVehicleStatus)() {
  return &_TransitVehicleStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
