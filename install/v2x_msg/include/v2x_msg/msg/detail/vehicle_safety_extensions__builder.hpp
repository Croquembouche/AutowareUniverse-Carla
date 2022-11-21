// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/VehicleSafetyExtensions.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__BUILDER_HPP_

#include "v2x_msg/msg/detail/vehicle_safety_extensions__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_VehicleSafetyExtensions_texteriorlights
{
public:
  explicit Init_VehicleSafetyExtensions_texteriorlights(::v2x_msg::msg::VehicleSafetyExtensions & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::VehicleSafetyExtensions texteriorlights(::v2x_msg::msg::VehicleSafetyExtensions::_texteriorlights_type arg)
  {
    msg_.texteriorlights = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::VehicleSafetyExtensions msg_;
};

class Init_VehicleSafetyExtensions_pathprediction
{
public:
  explicit Init_VehicleSafetyExtensions_pathprediction(::v2x_msg::msg::VehicleSafetyExtensions & msg)
  : msg_(msg)
  {}
  Init_VehicleSafetyExtensions_texteriorlights pathprediction(::v2x_msg::msg::VehicleSafetyExtensions::_pathprediction_type arg)
  {
    msg_.pathprediction = std::move(arg);
    return Init_VehicleSafetyExtensions_texteriorlights(msg_);
  }

private:
  ::v2x_msg::msg::VehicleSafetyExtensions msg_;
};

class Init_VehicleSafetyExtensions_pathhistory
{
public:
  explicit Init_VehicleSafetyExtensions_pathhistory(::v2x_msg::msg::VehicleSafetyExtensions & msg)
  : msg_(msg)
  {}
  Init_VehicleSafetyExtensions_pathprediction pathhistory(::v2x_msg::msg::VehicleSafetyExtensions::_pathhistory_type arg)
  {
    msg_.pathhistory = std::move(arg);
    return Init_VehicleSafetyExtensions_pathprediction(msg_);
  }

private:
  ::v2x_msg::msg::VehicleSafetyExtensions msg_;
};

class Init_VehicleSafetyExtensions_vehicleeventflags
{
public:
  Init_VehicleSafetyExtensions_vehicleeventflags()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleSafetyExtensions_pathhistory vehicleeventflags(::v2x_msg::msg::VehicleSafetyExtensions::_vehicleeventflags_type arg)
  {
    msg_.vehicleeventflags = std::move(arg);
    return Init_VehicleSafetyExtensions_pathhistory(msg_);
  }

private:
  ::v2x_msg::msg::VehicleSafetyExtensions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::VehicleSafetyExtensions>()
{
  return v2x_msg::msg::builder::Init_VehicleSafetyExtensions_vehicleeventflags();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__BUILDER_HPP_
