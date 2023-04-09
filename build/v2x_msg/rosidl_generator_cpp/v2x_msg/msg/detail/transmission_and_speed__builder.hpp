// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/TransmissionAndSpeed.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TRANSMISSION_AND_SPEED__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__TRANSMISSION_AND_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/transmission_and_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_TransmissionAndSpeed_velocity
{
public:
  explicit Init_TransmissionAndSpeed_velocity(::v2x_msg::msg::TransmissionAndSpeed & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::TransmissionAndSpeed velocity(::v2x_msg::msg::TransmissionAndSpeed::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::TransmissionAndSpeed msg_;
};

class Init_TransmissionAndSpeed_transmission
{
public:
  Init_TransmissionAndSpeed_transmission()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransmissionAndSpeed_velocity transmission(::v2x_msg::msg::TransmissionAndSpeed::_transmission_type arg)
  {
    msg_.transmission = std::move(arg);
    return Init_TransmissionAndSpeed_velocity(msg_);
  }

private:
  ::v2x_msg::msg::TransmissionAndSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::TransmissionAndSpeed>()
{
  return v2x_msg::msg::builder::Init_TransmissionAndSpeed_transmission();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__TRANSMISSION_AND_SPEED__BUILDER_HPP_
