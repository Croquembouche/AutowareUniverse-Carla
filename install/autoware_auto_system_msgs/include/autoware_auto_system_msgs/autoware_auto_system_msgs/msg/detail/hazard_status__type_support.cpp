// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_auto_system_msgs:msg/HazardStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_auto_system_msgs/msg/detail/hazard_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_auto_system_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void HazardStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_auto_system_msgs::msg::HazardStatus(_init);
}

void HazardStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_auto_system_msgs::msg::HazardStatus *>(message_memory);
  typed_message->~HazardStatus();
}

size_t size_function__HazardStatus__diag_no_fault(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__HazardStatus__diag_no_fault(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__HazardStatus__diag_no_fault(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__HazardStatus__diag_no_fault(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const diagnostic_msgs::msg::DiagnosticStatus *>(
    get_const_function__HazardStatus__diag_no_fault(untyped_member, index));
  auto & value = *reinterpret_cast<diagnostic_msgs::msg::DiagnosticStatus *>(untyped_value);
  value = item;
}

void assign_function__HazardStatus__diag_no_fault(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<diagnostic_msgs::msg::DiagnosticStatus *>(
    get_function__HazardStatus__diag_no_fault(untyped_member, index));
  const auto & value = *reinterpret_cast<const diagnostic_msgs::msg::DiagnosticStatus *>(untyped_value);
  item = value;
}

void resize_function__HazardStatus__diag_no_fault(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  member->resize(size);
}

size_t size_function__HazardStatus__diag_safe_fault(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__HazardStatus__diag_safe_fault(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__HazardStatus__diag_safe_fault(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__HazardStatus__diag_safe_fault(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const diagnostic_msgs::msg::DiagnosticStatus *>(
    get_const_function__HazardStatus__diag_safe_fault(untyped_member, index));
  auto & value = *reinterpret_cast<diagnostic_msgs::msg::DiagnosticStatus *>(untyped_value);
  value = item;
}

void assign_function__HazardStatus__diag_safe_fault(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<diagnostic_msgs::msg::DiagnosticStatus *>(
    get_function__HazardStatus__diag_safe_fault(untyped_member, index));
  const auto & value = *reinterpret_cast<const diagnostic_msgs::msg::DiagnosticStatus *>(untyped_value);
  item = value;
}

void resize_function__HazardStatus__diag_safe_fault(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  member->resize(size);
}

size_t size_function__HazardStatus__diag_latent_fault(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__HazardStatus__diag_latent_fault(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__HazardStatus__diag_latent_fault(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__HazardStatus__diag_latent_fault(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const diagnostic_msgs::msg::DiagnosticStatus *>(
    get_const_function__HazardStatus__diag_latent_fault(untyped_member, index));
  auto & value = *reinterpret_cast<diagnostic_msgs::msg::DiagnosticStatus *>(untyped_value);
  value = item;
}

void assign_function__HazardStatus__diag_latent_fault(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<diagnostic_msgs::msg::DiagnosticStatus *>(
    get_function__HazardStatus__diag_latent_fault(untyped_member, index));
  const auto & value = *reinterpret_cast<const diagnostic_msgs::msg::DiagnosticStatus *>(untyped_value);
  item = value;
}

void resize_function__HazardStatus__diag_latent_fault(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  member->resize(size);
}

size_t size_function__HazardStatus__diag_single_point_fault(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__HazardStatus__diag_single_point_fault(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__HazardStatus__diag_single_point_fault(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__HazardStatus__diag_single_point_fault(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const diagnostic_msgs::msg::DiagnosticStatus *>(
    get_const_function__HazardStatus__diag_single_point_fault(untyped_member, index));
  auto & value = *reinterpret_cast<diagnostic_msgs::msg::DiagnosticStatus *>(untyped_value);
  value = item;
}

void assign_function__HazardStatus__diag_single_point_fault(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<diagnostic_msgs::msg::DiagnosticStatus *>(
    get_function__HazardStatus__diag_single_point_fault(untyped_member, index));
  const auto & value = *reinterpret_cast<const diagnostic_msgs::msg::DiagnosticStatus *>(untyped_value);
  item = value;
}

void resize_function__HazardStatus__diag_single_point_fault(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HazardStatus_message_member_array[7] = {
  {
    "level",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_system_msgs::msg::HazardStatus, level),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "emergency",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_system_msgs::msg::HazardStatus, emergency),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "emergency_holding",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_system_msgs::msg::HazardStatus, emergency_holding),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "diag_no_fault",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<diagnostic_msgs::msg::DiagnosticStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_system_msgs::msg::HazardStatus, diag_no_fault),  // bytes offset in struct
    nullptr,  // default value
    size_function__HazardStatus__diag_no_fault,  // size() function pointer
    get_const_function__HazardStatus__diag_no_fault,  // get_const(index) function pointer
    get_function__HazardStatus__diag_no_fault,  // get(index) function pointer
    fetch_function__HazardStatus__diag_no_fault,  // fetch(index, &value) function pointer
    assign_function__HazardStatus__diag_no_fault,  // assign(index, value) function pointer
    resize_function__HazardStatus__diag_no_fault  // resize(index) function pointer
  },
  {
    "diag_safe_fault",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<diagnostic_msgs::msg::DiagnosticStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_system_msgs::msg::HazardStatus, diag_safe_fault),  // bytes offset in struct
    nullptr,  // default value
    size_function__HazardStatus__diag_safe_fault,  // size() function pointer
    get_const_function__HazardStatus__diag_safe_fault,  // get_const(index) function pointer
    get_function__HazardStatus__diag_safe_fault,  // get(index) function pointer
    fetch_function__HazardStatus__diag_safe_fault,  // fetch(index, &value) function pointer
    assign_function__HazardStatus__diag_safe_fault,  // assign(index, value) function pointer
    resize_function__HazardStatus__diag_safe_fault  // resize(index) function pointer
  },
  {
    "diag_latent_fault",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<diagnostic_msgs::msg::DiagnosticStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_system_msgs::msg::HazardStatus, diag_latent_fault),  // bytes offset in struct
    nullptr,  // default value
    size_function__HazardStatus__diag_latent_fault,  // size() function pointer
    get_const_function__HazardStatus__diag_latent_fault,  // get_const(index) function pointer
    get_function__HazardStatus__diag_latent_fault,  // get(index) function pointer
    fetch_function__HazardStatus__diag_latent_fault,  // fetch(index, &value) function pointer
    assign_function__HazardStatus__diag_latent_fault,  // assign(index, value) function pointer
    resize_function__HazardStatus__diag_latent_fault  // resize(index) function pointer
  },
  {
    "diag_single_point_fault",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<diagnostic_msgs::msg::DiagnosticStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_system_msgs::msg::HazardStatus, diag_single_point_fault),  // bytes offset in struct
    nullptr,  // default value
    size_function__HazardStatus__diag_single_point_fault,  // size() function pointer
    get_const_function__HazardStatus__diag_single_point_fault,  // get_const(index) function pointer
    get_function__HazardStatus__diag_single_point_fault,  // get(index) function pointer
    fetch_function__HazardStatus__diag_single_point_fault,  // fetch(index, &value) function pointer
    assign_function__HazardStatus__diag_single_point_fault,  // assign(index, value) function pointer
    resize_function__HazardStatus__diag_single_point_fault  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HazardStatus_message_members = {
  "autoware_auto_system_msgs::msg",  // message namespace
  "HazardStatus",  // message name
  7,  // number of fields
  sizeof(autoware_auto_system_msgs::msg::HazardStatus),
  HazardStatus_message_member_array,  // message members
  HazardStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  HazardStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HazardStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HazardStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_auto_system_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_auto_system_msgs::msg::HazardStatus>()
{
  return &::autoware_auto_system_msgs::msg::rosidl_typesupport_introspection_cpp::HazardStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_auto_system_msgs, msg, HazardStatus)() {
  return &::autoware_auto_system_msgs::msg::rosidl_typesupport_introspection_cpp::HazardStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
