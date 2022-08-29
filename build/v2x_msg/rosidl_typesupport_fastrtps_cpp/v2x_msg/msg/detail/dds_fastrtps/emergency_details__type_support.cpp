// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/EmergencyDetails.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/emergency_details__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_msg/msg/detail/emergency_details__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace v2x_msg
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const v2x_msg::msg::PrivilegedEvents &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::PrivilegedEvents &);
size_t get_serialized_size(
  const v2x_msg::msg::PrivilegedEvents &,
  size_t current_alignment);
size_t
max_serialized_size_PrivilegedEvents(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace v2x_msg


namespace v2x_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_serialize(
  const v2x_msg::msg::EmergencyDetails & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: notused
  cdr << ros_message.notused;
  // Member: sirenuse
  cdr << ros_message.sirenuse;
  // Member: lightsuse
  cdr << ros_message.lightsuse;
  // Member: multi
  cdr << ros_message.multi;
  // Member: events
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.events,
    cdr);
  // Member: responsetype
  cdr << ros_message.responsetype;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_msg::msg::EmergencyDetails & ros_message)
{
  // Member: notused
  cdr >> ros_message.notused;

  // Member: sirenuse
  cdr >> ros_message.sirenuse;

  // Member: lightsuse
  cdr >> ros_message.lightsuse;

  // Member: multi
  cdr >> ros_message.multi;

  // Member: events
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.events);

  // Member: responsetype
  cdr >> ros_message.responsetype;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
get_serialized_size(
  const v2x_msg::msg::EmergencyDetails & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: notused
  {
    size_t item_size = sizeof(ros_message.notused);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sirenuse
  {
    size_t item_size = sizeof(ros_message.sirenuse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lightsuse
  {
    size_t item_size = sizeof(ros_message.lightsuse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: multi
  {
    size_t item_size = sizeof(ros_message.multi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: events

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.events, current_alignment);
  // Member: responsetype
  {
    size_t item_size = sizeof(ros_message.responsetype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
max_serialized_size_EmergencyDetails(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: notused
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: sirenuse
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lightsuse
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: multi
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: events
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_PrivilegedEvents(
        full_bounded, current_alignment);
    }
  }

  // Member: responsetype
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _EmergencyDetails__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::EmergencyDetails *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EmergencyDetails__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_msg::msg::EmergencyDetails *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EmergencyDetails__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::EmergencyDetails *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EmergencyDetails__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EmergencyDetails(full_bounded, 0);
}

static message_type_support_callbacks_t _EmergencyDetails__callbacks = {
  "v2x_msg::msg",
  "EmergencyDetails",
  _EmergencyDetails__cdr_serialize,
  _EmergencyDetails__cdr_deserialize,
  _EmergencyDetails__get_serialized_size,
  _EmergencyDetails__max_serialized_size
};

static rosidl_message_type_support_t _EmergencyDetails__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EmergencyDetails__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace v2x_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_v2x_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_msg::msg::EmergencyDetails>()
{
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_EmergencyDetails__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_msg, msg, EmergencyDetails)() {
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_EmergencyDetails__handle;
}

#ifdef __cplusplus
}
#endif
