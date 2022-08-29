// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/NodeOffsetPointLL.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/node_offset_point_ll__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_msg/msg/detail/node_offset_point_ll__struct.hpp"

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
  const v2x_msg::msg::NodeLL24B &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::NodeLL24B &);
size_t get_serialized_size(
  const v2x_msg::msg::NodeLL24B &,
  size_t current_alignment);
size_t
max_serialized_size_NodeLL24B(
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
bool cdr_serialize(
  const v2x_msg::msg::NodeLL28B &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::NodeLL28B &);
size_t get_serialized_size(
  const v2x_msg::msg::NodeLL28B &,
  size_t current_alignment);
size_t
max_serialized_size_NodeLL28B(
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
bool cdr_serialize(
  const v2x_msg::msg::NodeLL32B &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::NodeLL32B &);
size_t get_serialized_size(
  const v2x_msg::msg::NodeLL32B &,
  size_t current_alignment);
size_t
max_serialized_size_NodeLL32B(
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
bool cdr_serialize(
  const v2x_msg::msg::NodeLL36B &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::NodeLL36B &);
size_t get_serialized_size(
  const v2x_msg::msg::NodeLL36B &,
  size_t current_alignment);
size_t
max_serialized_size_NodeLL36B(
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
bool cdr_serialize(
  const v2x_msg::msg::NodeLL44B &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::NodeLL44B &);
size_t get_serialized_size(
  const v2x_msg::msg::NodeLL44B &,
  size_t current_alignment);
size_t
max_serialized_size_NodeLL44B(
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
bool cdr_serialize(
  const v2x_msg::msg::NodeLL48B &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::NodeLL48B &);
size_t get_serialized_size(
  const v2x_msg::msg::NodeLL48B &,
  size_t current_alignment);
size_t
max_serialized_size_NodeLL48B(
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
bool cdr_serialize(
  const v2x_msg::msg::Nodellmd64b &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::Nodellmd64b &);
size_t get_serialized_size(
  const v2x_msg::msg::Nodellmd64b &,
  size_t current_alignment);
size_t
max_serialized_size_Nodellmd64b(
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
  const v2x_msg::msg::NodeOffsetPointLL & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: nodell1
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.nodell1,
    cdr);
  // Member: nodell2
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.nodell2,
    cdr);
  // Member: nodell3
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.nodell3,
    cdr);
  // Member: nodell4
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.nodell4,
    cdr);
  // Member: nodell5
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.nodell5,
    cdr);
  // Member: nodell6
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.nodell6,
    cdr);
  // Member: nodelatlon
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.nodelatlon,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_msg::msg::NodeOffsetPointLL & ros_message)
{
  // Member: nodell1
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nodell1);

  // Member: nodell2
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nodell2);

  // Member: nodell3
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nodell3);

  // Member: nodell4
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nodell4);

  // Member: nodell5
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nodell5);

  // Member: nodell6
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nodell6);

  // Member: nodelatlon
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nodelatlon);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
get_serialized_size(
  const v2x_msg::msg::NodeOffsetPointLL & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: nodell1

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.nodell1, current_alignment);
  // Member: nodell2

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.nodell2, current_alignment);
  // Member: nodell3

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.nodell3, current_alignment);
  // Member: nodell4

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.nodell4, current_alignment);
  // Member: nodell5

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.nodell5, current_alignment);
  // Member: nodell6

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.nodell6, current_alignment);
  // Member: nodelatlon

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.nodelatlon, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
max_serialized_size_NodeOffsetPointLL(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: nodell1
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_NodeLL24B(
        full_bounded, current_alignment);
    }
  }

  // Member: nodell2
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_NodeLL28B(
        full_bounded, current_alignment);
    }
  }

  // Member: nodell3
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_NodeLL32B(
        full_bounded, current_alignment);
    }
  }

  // Member: nodell4
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_NodeLL36B(
        full_bounded, current_alignment);
    }
  }

  // Member: nodell5
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_NodeLL44B(
        full_bounded, current_alignment);
    }
  }

  // Member: nodell6
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_NodeLL48B(
        full_bounded, current_alignment);
    }
  }

  // Member: nodelatlon
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_Nodellmd64b(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _NodeOffsetPointLL__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::NodeOffsetPointLL *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NodeOffsetPointLL__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_msg::msg::NodeOffsetPointLL *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NodeOffsetPointLL__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::NodeOffsetPointLL *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NodeOffsetPointLL__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NodeOffsetPointLL(full_bounded, 0);
}

static message_type_support_callbacks_t _NodeOffsetPointLL__callbacks = {
  "v2x_msg::msg",
  "NodeOffsetPointLL",
  _NodeOffsetPointLL__cdr_serialize,
  _NodeOffsetPointLL__cdr_deserialize,
  _NodeOffsetPointLL__get_serialized_size,
  _NodeOffsetPointLL__max_serialized_size
};

static rosidl_message_type_support_t _NodeOffsetPointLL__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NodeOffsetPointLL__callbacks,
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
get_message_type_support_handle<v2x_msg::msg::NodeOffsetPointLL>()
{
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_NodeOffsetPointLL__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_msg, msg, NodeOffsetPointLL)() {
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_NodeOffsetPointLL__handle;
}

#ifdef __cplusplus
}
#endif
