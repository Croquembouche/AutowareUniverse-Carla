// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/VehicleSize.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_SIZE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_SIZE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/vehicle_size__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_VehicleSize_length
{
public:
  explicit Init_VehicleSize_length(::v2x_msg::msg::VehicleSize & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::VehicleSize length(::v2x_msg::msg::VehicleSize::_length_type arg)
  {
    msg_.length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::VehicleSize msg_;
};

class Init_VehicleSize_width
{
public:
  Init_VehicleSize_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleSize_length width(::v2x_msg::msg::VehicleSize::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_VehicleSize_length(msg_);
  }

private:
  ::v2x_msg::msg::VehicleSize msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::VehicleSize>()
{
  return v2x_msg::msg::builder::Init_VehicleSize_width();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_SIZE__BUILDER_HPP_
