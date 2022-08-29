// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/RegionOffsets.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/region_offsets__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_msg/msg/detail/region_offsets__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_serialize(
  const v2x_msg::msg::RegionOffsets & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: xoffset
  cdr << ros_message.xoffset;
  // Member: yoffset
  cdr << ros_message.yoffset;
  // Member: zoffset
  cdr << ros_message.zoffset;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_msg::msg::RegionOffsets & ros_message)
{
  // Member: xoffset
  cdr >> ros_message.xoffset;

  // Member: yoffset
  cdr >> ros_message.yoffset;

  // Member: zoffset
  cdr >> ros_message.zoffset;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
get_serialized_size(
  const v2x_msg::msg::RegionOffsets & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: xoffset
  {
    size_t item_size = sizeof(ros_message.xoffset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yoffset
  {
    size_t item_size = sizeof(ros_message.yoffset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: zoffset
  {
    size_t item_size = sizeof(ros_message.zoffset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
max_serialized_size_RegionOffsets(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: xoffset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: yoffset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: zoffset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RegionOffsets__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::RegionOffsets *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RegionOffsets__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_msg::msg::RegionOffsets *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RegionOffsets__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::RegionOffsets *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RegionOffsets__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RegionOffsets(full_bounded, 0);
}

static message_type_support_callbacks_t _RegionOffsets__callbacks = {
  "v2x_msg::msg",
  "RegionOffsets",
  _RegionOffsets__cdr_serialize,
  _RegionOffsets__cdr_deserialize,
  _RegionOffsets__get_serialized_size,
  _RegionOffsets__max_serialized_size
};

static rosidl_message_type_support_t _RegionOffsets__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegionOffsets__callbacks,
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
get_message_type_support_handle<v2x_msg::msg::RegionOffsets>()
{
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_RegionOffsets__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_msg, msg, RegionOffsets)() {
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_RegionOffsets__handle;
}

#ifdef __cplusplus
}
#endif
