// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/ITIScodesandtextcontent.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/iti_scodesandtextcontent__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_msg/msg/detail/iti_scodesandtextcontent__struct.hpp"

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
  const v2x_msg::msg::ITIScodesandtextcontent & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: itis
  cdr << ros_message.itis;
  // Member: text
  cdr << ros_message.text;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_msg::msg::ITIScodesandtextcontent & ros_message)
{
  // Member: itis
  cdr >> ros_message.itis;

  // Member: text
  cdr >> ros_message.text;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
get_serialized_size(
  const v2x_msg::msg::ITIScodesandtextcontent & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: itis
  {
    size_t item_size = sizeof(ros_message.itis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.text.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
max_serialized_size_ITIScodesandtextcontent(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: itis
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: text
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

static bool _ITIScodesandtextcontent__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::ITIScodesandtextcontent *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ITIScodesandtextcontent__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_msg::msg::ITIScodesandtextcontent *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ITIScodesandtextcontent__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::ITIScodesandtextcontent *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ITIScodesandtextcontent__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ITIScodesandtextcontent(full_bounded, 0);
}

static message_type_support_callbacks_t _ITIScodesandtextcontent__callbacks = {
  "v2x_msg::msg",
  "ITIScodesandtextcontent",
  _ITIScodesandtextcontent__cdr_serialize,
  _ITIScodesandtextcontent__cdr_deserialize,
  _ITIScodesandtextcontent__get_serialized_size,
  _ITIScodesandtextcontent__max_serialized_size
};

static rosidl_message_type_support_t _ITIScodesandtextcontent__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ITIScodesandtextcontent__callbacks,
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
get_message_type_support_handle<v2x_msg::msg::ITIScodesandtextcontent>()
{
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_ITIScodesandtextcontent__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_msg, msg, ITIScodesandtextcontent)() {
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_ITIScodesandtextcontent__handle;
}

#ifdef __cplusplus
}
#endif
