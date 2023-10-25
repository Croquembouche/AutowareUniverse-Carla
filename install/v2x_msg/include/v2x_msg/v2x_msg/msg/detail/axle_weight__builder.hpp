// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/AxleWeight.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__AXLE_WEIGHT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__AXLE_WEIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/axle_weight__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_AxleWeight_weight
{
public:
  explicit Init_AxleWeight_weight(::v2x_msg::msg::AxleWeight & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::AxleWeight weight(::v2x_msg::msg::AxleWeight::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::AxleWeight msg_;
};

class Init_AxleWeight_location
{
public:
  Init_AxleWeight_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AxleWeight_weight location(::v2x_msg::msg::AxleWeight::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_AxleWeight_weight(msg_);
  }

private:
  ::v2x_msg::msg::AxleWeight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::AxleWeight>()
{
  return v2x_msg::msg::builder::Init_AxleWeight_location();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__AXLE_WEIGHT__BUILDER_HPP_
