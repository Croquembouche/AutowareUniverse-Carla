// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/Content.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_msg/msg/detail/content__struct.hpp"
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

void Content_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_msg::msg::Content(_init);
}

void Content_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_msg::msg::Content *>(message_memory);
  typed_message->~Content();
}

size_t size_function__Content__advisory(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::ITIScodesandtext> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Content__advisory(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::ITIScodesandtext> *>(untyped_member);
  return &member[index];
}

void * get_function__Content__advisory(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::ITIScodesandtext> *>(untyped_member);
  return &member[index];
}

void resize_function__Content__advisory(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::ITIScodesandtext> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Content__workzone(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::WorkZone> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Content__workzone(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::WorkZone> *>(untyped_member);
  return &member[index];
}

void * get_function__Content__workzone(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::WorkZone> *>(untyped_member);
  return &member[index];
}

void resize_function__Content__workzone(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::WorkZone> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Content__genericsign(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::GenericSignage> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Content__genericsign(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::GenericSignage> *>(untyped_member);
  return &member[index];
}

void * get_function__Content__genericsign(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::GenericSignage> *>(untyped_member);
  return &member[index];
}

void resize_function__Content__genericsign(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::GenericSignage> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Content__speedlimit(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::ITISSpeedLimit> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Content__speedlimit(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::ITISSpeedLimit> *>(untyped_member);
  return &member[index];
}

void * get_function__Content__speedlimit(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::ITISSpeedLimit> *>(untyped_member);
  return &member[index];
}

void resize_function__Content__speedlimit(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::ITISSpeedLimit> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Content__exitservice(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::ExitService> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Content__exitservice(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::ExitService> *>(untyped_member);
  return &member[index];
}

void * get_function__Content__exitservice(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::ExitService> *>(untyped_member);
  return &member[index];
}

void resize_function__Content__exitservice(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::ExitService> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Content_message_member_array[5] = {
  {
    "advisory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::ITIScodesandtext>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::Content, advisory),  // bytes offset in struct
    nullptr,  // default value
    size_function__Content__advisory,  // size() function pointer
    get_const_function__Content__advisory,  // get_const(index) function pointer
    get_function__Content__advisory,  // get(index) function pointer
    resize_function__Content__advisory  // resize(index) function pointer
  },
  {
    "workzone",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::WorkZone>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::Content, workzone),  // bytes offset in struct
    nullptr,  // default value
    size_function__Content__workzone,  // size() function pointer
    get_const_function__Content__workzone,  // get_const(index) function pointer
    get_function__Content__workzone,  // get(index) function pointer
    resize_function__Content__workzone  // resize(index) function pointer
  },
  {
    "genericsign",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::GenericSignage>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::Content, genericsign),  // bytes offset in struct
    nullptr,  // default value
    size_function__Content__genericsign,  // size() function pointer
    get_const_function__Content__genericsign,  // get_const(index) function pointer
    get_function__Content__genericsign,  // get(index) function pointer
    resize_function__Content__genericsign  // resize(index) function pointer
  },
  {
    "speedlimit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::ITISSpeedLimit>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::Content, speedlimit),  // bytes offset in struct
    nullptr,  // default value
    size_function__Content__speedlimit,  // size() function pointer
    get_const_function__Content__speedlimit,  // get_const(index) function pointer
    get_function__Content__speedlimit,  // get(index) function pointer
    resize_function__Content__speedlimit  // resize(index) function pointer
  },
  {
    "exitservice",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::ExitService>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::Content, exitservice),  // bytes offset in struct
    nullptr,  // default value
    size_function__Content__exitservice,  // size() function pointer
    get_const_function__Content__exitservice,  // get_const(index) function pointer
    get_function__Content__exitservice,  // get(index) function pointer
    resize_function__Content__exitservice  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Content_message_members = {
  "v2x_msg::msg",  // message namespace
  "Content",  // message name
  5,  // number of fields
  sizeof(v2x_msg::msg::Content),
  Content_message_member_array,  // message members
  Content_init_function,  // function to initialize message memory (memory has to be allocated)
  Content_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Content_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Content_message_members,
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
get_message_type_support_handle<v2x_msg::msg::Content>()
{
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::Content_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_msg, msg, Content)() {
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::Content_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
