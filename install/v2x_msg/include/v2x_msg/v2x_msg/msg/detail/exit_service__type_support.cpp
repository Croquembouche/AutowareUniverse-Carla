// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/ExitService.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_msg/msg/detail/exit_service__struct.hpp"
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

void ExitService_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_msg::msg::ExitService(_init);
}

void ExitService_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_msg::msg::ExitService *>(message_memory);
  typed_message->~ExitService();
}

size_t size_function__ExitService__item(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::ExitServicecontent> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExitService__item(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::ExitServicecontent> *>(untyped_member);
  return &member[index];
}

void * get_function__ExitService__item(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::ExitServicecontent> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExitService__item(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const v2x_msg::msg::ExitServicecontent *>(
    get_const_function__ExitService__item(untyped_member, index));
  auto & value = *reinterpret_cast<v2x_msg::msg::ExitServicecontent *>(untyped_value);
  value = item;
}

void assign_function__ExitService__item(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<v2x_msg::msg::ExitServicecontent *>(
    get_function__ExitService__item(untyped_member, index));
  const auto & value = *reinterpret_cast<const v2x_msg::msg::ExitServicecontent *>(untyped_value);
  item = value;
}

void resize_function__ExitService__item(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::ExitServicecontent> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExitService_message_member_array[1] = {
  {
    "item",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::ExitServicecontent>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::ExitService, item),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExitService__item,  // size() function pointer
    get_const_function__ExitService__item,  // get_const(index) function pointer
    get_function__ExitService__item,  // get(index) function pointer
    fetch_function__ExitService__item,  // fetch(index, &value) function pointer
    assign_function__ExitService__item,  // assign(index, value) function pointer
    resize_function__ExitService__item  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExitService_message_members = {
  "v2x_msg::msg",  // message namespace
  "ExitService",  // message name
  1,  // number of fields
  sizeof(v2x_msg::msg::ExitService),
  ExitService_message_member_array,  // message members
  ExitService_init_function,  // function to initialize message memory (memory has to be allocated)
  ExitService_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExitService_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExitService_message_members,
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
get_message_type_support_handle<v2x_msg::msg::ExitService>()
{
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::ExitService_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_msg, msg, ExitService)() {
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::ExitService_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
