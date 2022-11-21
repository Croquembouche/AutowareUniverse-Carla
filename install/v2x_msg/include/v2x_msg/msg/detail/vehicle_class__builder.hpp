// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/VehicleClass.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_CLASS__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_CLASS__BUILDER_HPP_

#include "v2x_msg/msg/detail/vehicle_class__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_VehicleClass_requip
{
public:
  explicit Init_VehicleClass_requip(::v2x_msg::msg::VehicleClass & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::VehicleClass requip(::v2x_msg::msg::VehicleClass::_requip_type arg)
  {
    msg_.requip = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::VehicleClass msg_;
};

class Init_VehicleClass_rgroup
{
public:
  explicit Init_VehicleClass_rgroup(::v2x_msg::msg::VehicleClass & msg)
  : msg_(msg)
  {}
  Init_VehicleClass_requip rgroup(::v2x_msg::msg::VehicleClass::_rgroup_type arg)
  {
    msg_.rgroup = std::move(arg);
    return Init_VehicleClass_requip(msg_);
  }

private:
  ::v2x_msg::msg::VehicleClass msg_;
};

class Init_VehicleClass_vgroup
{
public:
  Init_VehicleClass_vgroup()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleClass_rgroup vgroup(::v2x_msg::msg::VehicleClass::_vgroup_type arg)
  {
    msg_.vgroup = std::move(arg);
    return Init_VehicleClass_rgroup(msg_);
  }

private:
  ::v2x_msg::msg::VehicleClass msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::VehicleClass>()
{
  return v2x_msg::msg::builder::Init_VehicleClass_vgroup();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_CLASS__BUILDER_HPP_
