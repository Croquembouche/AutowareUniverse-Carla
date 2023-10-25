// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/GenericLane.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_msg/msg/detail/generic_lane__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace v2x_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GenericLane_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_msg::msg::GenericLane(_init);
}

void GenericLane_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_msg::msg::GenericLane *>(message_memory);
  typed_message->~GenericLane();
}

size_t size_function__GenericLane__nodelist(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::NodeListXY> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GenericLane__nodelist(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::NodeListXY> *>(untyped_member);
  return &member[index];
}

void * get_function__GenericLane__nodelist(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::NodeListXY> *>(untyped_member);
  return &member[index];
}

void fetch_function__GenericLane__nodelist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const v2x_msg::msg::NodeListXY *>(
    get_const_function__GenericLane__nodelist(untyped_member, index));
  auto & value = *reinterpret_cast<v2x_msg::msg::NodeListXY *>(untyped_value);
  value = item;
}

void assign_function__GenericLane__nodelist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<v2x_msg::msg::NodeListXY *>(
    get_function__GenericLane__nodelist(untyped_member, index));
  const auto & value = *reinterpret_cast<const v2x_msg::msg::NodeListXY *>(untyped_value);
  item = value;
}

void resize_function__GenericLane__nodelist(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::NodeListXY> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GenericLane__connectsto(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::Connection> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GenericLane__connectsto(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::Connection> *>(untyped_member);
  return &member[index];
}

void * get_function__GenericLane__connectsto(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::Connection> *>(untyped_member);
  return &member[index];
}

void fetch_function__GenericLane__connectsto(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const v2x_msg::msg::Connection *>(
    get_const_function__GenericLane__connectsto(untyped_member, index));
  auto & value = *reinterpret_cast<v2x_msg::msg::Connection *>(untyped_value);
  value = item;
}

void assign_function__GenericLane__connectsto(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<v2x_msg::msg::Connection *>(
    get_function__GenericLane__connectsto(untyped_member, index));
  const auto & value = *reinterpret_cast<const v2x_msg::msg::Connection *>(untyped_value);
  item = value;
}

void resize_function__GenericLane__connectsto(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::Connection> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GenericLane__overlays(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GenericLane__overlays(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__GenericLane__overlays(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__GenericLane__overlays(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__GenericLane__overlays(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__GenericLane__overlays(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__GenericLane__overlays(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__GenericLane__overlays(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GenericLane_message_member_array[9] = {
  {
    "laneid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::GenericLane, laneid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::GenericLane, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ingressapproach",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::GenericLane, ingressapproach),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "egressapproach",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::GenericLane, egressapproach),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "laneattributes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::LaneAttributes>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::GenericLane, laneattributes),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "maneuvers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::GenericLane, maneuvers),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nodelist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::NodeListXY>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::GenericLane, nodelist),  // bytes offset in struct
    nullptr,  // default value
    size_function__GenericLane__nodelist,  // size() function pointer
    get_const_function__GenericLane__nodelist,  // get_const(index) function pointer
    get_function__GenericLane__nodelist,  // get(index) function pointer
    fetch_function__GenericLane__nodelist,  // fetch(index, &value) function pointer
    assign_function__GenericLane__nodelist,  // assign(index, value) function pointer
    resize_function__GenericLane__nodelist  // resize(index) function pointer
  },
  {
    "connectsto",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::Connection>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::GenericLane, connectsto),  // bytes offset in struct
    nullptr,  // default value
    size_function__GenericLane__connectsto,  // size() function pointer
    get_const_function__GenericLane__connectsto,  // get_const(index) function pointer
    get_function__GenericLane__connectsto,  // get(index) function pointer
    fetch_function__GenericLane__connectsto,  // fetch(index, &value) function pointer
    assign_function__GenericLane__connectsto,  // assign(index, value) function pointer
    resize_function__GenericLane__connectsto  // resize(index) function pointer
  },
  {
    "overlays",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::GenericLane, overlays),  // bytes offset in struct
    nullptr,  // default value
    size_function__GenericLane__overlays,  // size() function pointer
    get_const_function__GenericLane__overlays,  // get_const(index) function pointer
    get_function__GenericLane__overlays,  // get(index) function pointer
    fetch_function__GenericLane__overlays,  // fetch(index, &value) function pointer
    assign_function__GenericLane__overlays,  // assign(index, value) function pointer
    resize_function__GenericLane__overlays  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GenericLane_message_members = {
  "v2x_msg::msg",  // message namespace
  "GenericLane",  // message name
  9,  // number of fields
  sizeof(v2x_msg::msg::GenericLane),
  GenericLane_message_member_array,  // message members
  GenericLane_init_function,  // function to initialize message memory (memory has to be allocated)
  GenericLane_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GenericLane_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GenericLane_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace v2x_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_msg::msg::GenericLane>()
{
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::GenericLane_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_msg, msg, GenericLane)() {
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::GenericLane_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
