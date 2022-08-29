// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/node_offset_point_xy__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_msg/msg/detail/node_offset_point_xy__struct.hpp"

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
  const v2x_msg::msg::NodeXY22b &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::NodeXY22b &);
size_t get_serialized_size(
  const v2x_msg::msg::NodeXY22b &,
  size_t current_alignment);
size_t
max_serialized_size_NodeXY22b(
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
  const v2x_msg::msg::NodeXY24b &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::NodeXY24b &);
size_t get_serialized_size(
  const v2x_msg::msg::NodeXY24b &,
  size_t current_alignment);
size_t
max_serialized_size_NodeXY24b(
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
  const v2x_msg::msg::NodeXY26b &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::NodeXY26b &);
size_t get_serialized_size(
  const v2x_msg::msg::NodeXY26b &,
  size_t current_alignment);
size_t
max_serialized_size_NodeXY26b(
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
  const v2x_msg::msg::NodeXY28b &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::NodeXY28b &);
size_t get_serialized_size(
  const v2x_msg::msg::NodeXY28b &,
  size_t current_alignment);
size_t
max_serialized_size_NodeXY28b(
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
  const v2x_msg::msg::NodeXY32b &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_msg::msg::NodeXY32b &);
size_t get_serialized_size(
  const v2x_msg::msg::NodeXY32b &,
  size_t current_alignment);
size_t
max_serialized_size_NodeXY32b(
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
  const v2x_msg::msg::NodeOffsetPointXY & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: nodexy1
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.nodexy1,
    cdr);
  // Member: nodexy2
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.nodexy2,
    cdr);
  // Member: nodexy3
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.nodexy3,
    cdr);
  // Member: nodexy4
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.nodexy4,
    cdr);
  // Member: nodexy5
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.nodexy5,
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
  v2x_msg::msg::NodeOffsetPointXY & ros_message)
{
  // Member: nodexy1
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nodexy1);

  // Member: nodexy2
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nodexy2);

  // Member: nodexy3
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nodexy3);

  // Member: nodexy4
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nodexy4);

  // Member: nodexy5
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nodexy5);

  // Member: nodelatlon
  v2x_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nodelatlon);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
get_serialized_size(
  const v2x_msg::msg::NodeOffsetPointXY & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: nodexy1

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.nodexy1, current_alignment);
  // Member: nodexy2

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.nodexy2, current_alignment);
  // Member: nodexy3

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.nodexy3, current_alignment);
  // Member: nodexy4

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.nodexy4, current_alignment);
  // Member: nodexy5

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.nodexy5, current_alignment);
  // Member: nodelatlon

  current_alignment +=
    v2x_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.nodelatlon, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_msg
max_serialized_size_NodeOffsetPointXY(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: nodexy1
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_NodeXY22b(
        full_bounded, current_alignment);
    }
  }

  // Member: nodexy2
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_NodeXY24b(
        full_bounded, current_alignment);
    }
  }

  // Member: nodexy3
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_NodeXY26b(
        full_bounded, current_alignment);
    }
  }

  // Member: nodexy4
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_NodeXY28b(
        full_bounded, current_alignment);
    }
  }

  // Member: nodexy5
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        v2x_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_NodeXY32b(
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

static bool _NodeOffsetPointXY__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::NodeOffsetPointXY *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NodeOffsetPointXY__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_msg::msg::NodeOffsetPointXY *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NodeOffsetPointXY__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_msg::msg::NodeOffsetPointXY *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NodeOffsetPointXY__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NodeOffsetPointXY(full_bounded, 0);
}

static message_type_support_callbacks_t _NodeOffsetPointXY__callbacks = {
  "v2x_msg::msg",
  "NodeOffsetPointXY",
  _NodeOffsetPointXY__cdr_serialize,
  _NodeOffsetPointXY__cdr_deserialize,
  _NodeOffsetPointXY__get_serialized_size,
  _NodeOffsetPointXY__max_serialized_size
};

static rosidl_message_type_support_t _NodeOffsetPointXY__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NodeOffsetPointXY__callbacks,
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
get_message_type_support_handle<v2x_msg::msg::NodeOffsetPointXY>()
{
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_NodeOffsetPointXY__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_msg, msg, NodeOffsetPointXY)() {
  return &v2x_msg::msg::typesupport_fastrtps_cpp::_NodeOffsetPointXY__handle;
}

#ifdef __cplusplus
}
#endif
