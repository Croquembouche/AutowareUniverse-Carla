// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/SteeringFactorArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__STEERING_FACTOR_ARRAY__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__STEERING_FACTOR_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/steering_factor_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_SteeringFactorArray_factors
{
public:
  explicit Init_SteeringFactorArray_factors(::autoware_adapi_v1_msgs::msg::SteeringFactorArray & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::SteeringFactorArray factors(::autoware_adapi_v1_msgs::msg::SteeringFactorArray::_factors_type arg)
  {
    msg_.factors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::SteeringFactorArray msg_;
};

class Init_SteeringFactorArray_header
{
public:
  Init_SteeringFactorArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringFactorArray_factors header(::autoware_adapi_v1_msgs::msg::SteeringFactorArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SteeringFactorArray_factors(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::SteeringFactorArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::SteeringFactorArray>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_SteeringFactorArray_header();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__STEERING_FACTOR_ARRAY__BUILDER_HPP_
