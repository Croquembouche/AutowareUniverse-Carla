// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_auto_geometry_msgs:msg/RelativePositionWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_auto_geometry_msgs/msg/detail/relative_position_with_covariance_stamped__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_auto_geometry_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RelativePositionWithCovarianceStamped_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped(_init);
}

void RelativePositionWithCovarianceStamped_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped *>(message_memory);
  typed_message->~RelativePositionWithCovarianceStamped();
}

size_t size_function__RelativePositionWithCovarianceStamped__covariance(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__RelativePositionWithCovarianceStamped__covariance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__RelativePositionWithCovarianceStamped__covariance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__RelativePositionWithCovarianceStamped__covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__RelativePositionWithCovarianceStamped__covariance(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__RelativePositionWithCovarianceStamped__covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__RelativePositionWithCovarianceStamped__covariance(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RelativePositionWithCovarianceStamped_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "child_frame_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped, child_frame_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped, position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "covariance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped, covariance),  // bytes offset in struct
    nullptr,  // default value
    size_function__RelativePositionWithCovarianceStamped__covariance,  // size() function pointer
    get_const_function__RelativePositionWithCovarianceStamped__covariance,  // get_const(index) function pointer
    get_function__RelativePositionWithCovarianceStamped__covariance,  // get(index) function pointer
    fetch_function__RelativePositionWithCovarianceStamped__covariance,  // fetch(index, &value) function pointer
    assign_function__RelativePositionWithCovarianceStamped__covariance,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RelativePositionWithCovarianceStamped_message_members = {
  "autoware_auto_geometry_msgs::msg",  // message namespace
  "RelativePositionWithCovarianceStamped",  // message name
  4,  // number of fields
  sizeof(autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped),
  RelativePositionWithCovarianceStamped_message_member_array,  // message members
  RelativePositionWithCovarianceStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  RelativePositionWithCovarianceStamped_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RelativePositionWithCovarianceStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RelativePositionWithCovarianceStamped_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_auto_geometry_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped>()
{
  return &::autoware_auto_geometry_msgs::msg::rosidl_typesupport_introspection_cpp::RelativePositionWithCovarianceStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_auto_geometry_msgs, msg, RelativePositionWithCovarianceStamped)() {
  return &::autoware_auto_geometry_msgs::msg::rosidl_typesupport_introspection_cpp::RelativePositionWithCovarianceStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
