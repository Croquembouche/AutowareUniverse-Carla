// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_msg/msg/detail/node_attribute_set_xy__struct.hpp"
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

void NodeAttributeSetXY_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_msg::msg::NodeAttributeSetXY(_init);
}

void NodeAttributeSetXY_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_msg::msg::NodeAttributeSetXY *>(message_memory);
  typed_message->~NodeAttributeSetXY();
}

size_t size_function__NodeAttributeSetXY__localnode(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NodeAttributeSetXY__localnode(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__NodeAttributeSetXY__localnode(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void resize_function__NodeAttributeSetXY__localnode(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NodeAttributeSetXY__disabled(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NodeAttributeSetXY__disabled(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__NodeAttributeSetXY__disabled(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void resize_function__NodeAttributeSetXY__disabled(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NodeAttributeSetXY__enabled(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NodeAttributeSetXY__enabled(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__NodeAttributeSetXY__enabled(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void resize_function__NodeAttributeSetXY__enabled(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NodeAttributeSetXY__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::LaneDataAttribute> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NodeAttributeSetXY__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::LaneDataAttribute> *>(untyped_member);
  return &member[index];
}

void * get_function__NodeAttributeSetXY__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::LaneDataAttribute> *>(untyped_member);
  return &member[index];
}

void resize_function__NodeAttributeSetXY__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::LaneDataAttribute> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NodeAttributeSetXY_message_member_array[6] = {
  {
    "localnode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::NodeAttributeSetXY, localnode),  // bytes offset in struct
    nullptr,  // default value
    size_function__NodeAttributeSetXY__localnode,  // size() function pointer
    get_const_function__NodeAttributeSetXY__localnode,  // get_const(index) function pointer
    get_function__NodeAttributeSetXY__localnode,  // get(index) function pointer
    resize_function__NodeAttributeSetXY__localnode  // resize(index) function pointer
  },
  {
    "disabled",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::NodeAttributeSetXY, disabled),  // bytes offset in struct
    nullptr,  // default value
    size_function__NodeAttributeSetXY__disabled,  // size() function pointer
    get_const_function__NodeAttributeSetXY__disabled,  // get_const(index) function pointer
    get_function__NodeAttributeSetXY__disabled,  // get(index) function pointer
    resize_function__NodeAttributeSetXY__disabled  // resize(index) function pointer
  },
  {
    "enabled",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::NodeAttributeSetXY, enabled),  // bytes offset in struct
    nullptr,  // default value
    size_function__NodeAttributeSetXY__enabled,  // size() function pointer
    get_const_function__NodeAttributeSetXY__enabled,  // get_const(index) function pointer
    get_function__NodeAttributeSetXY__enabled,  // get(index) function pointer
    resize_function__NodeAttributeSetXY__enabled  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::LaneDataAttribute>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::NodeAttributeSetXY, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__NodeAttributeSetXY__data,  // size() function pointer
    get_const_function__NodeAttributeSetXY__data,  // get_const(index) function pointer
    get_function__NodeAttributeSetXY__data,  // get(index) function pointer
    resize_function__NodeAttributeSetXY__data  // resize(index) function pointer
  },
  {
    "dwidth",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::NodeAttributeSetXY, dwidth),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "delevation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::NodeAttributeSetXY, delevation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NodeAttributeSetXY_message_members = {
  "v2x_msg::msg",  // message namespace
  "NodeAttributeSetXY",  // message name
  6,  // number of fields
  sizeof(v2x_msg::msg::NodeAttributeSetXY),
  NodeAttributeSetXY_message_member_array,  // message members
  NodeAttributeSetXY_init_function,  // function to initialize message memory (memory has to be allocated)
  NodeAttributeSetXY_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NodeAttributeSetXY_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NodeAttributeSetXY_message_members,
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
get_message_type_support_handle<v2x_msg::msg::NodeAttributeSetXY>()
{
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::NodeAttributeSetXY_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_msg, msg, NodeAttributeSetXY)() {
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::NodeAttributeSetXY_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
