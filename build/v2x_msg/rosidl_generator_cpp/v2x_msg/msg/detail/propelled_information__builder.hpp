// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/PropelledInformation.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PROPELLED_INFORMATION__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__PROPELLED_INFORMATION__BUILDER_HPP_

#include "v2x_msg/msg/detail/propelled_information__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_PropelledInformation_motor
{
public:
  explicit Init_PropelledInformation_motor(::v2x_msg::msg::PropelledInformation & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::PropelledInformation motor(::v2x_msg::msg::PropelledInformation::_motor_type arg)
  {
    msg_.motor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::PropelledInformation msg_;
};

class Init_PropelledInformation_animal
{
public:
  explicit Init_PropelledInformation_animal(::v2x_msg::msg::PropelledInformation & msg)
  : msg_(msg)
  {}
  Init_PropelledInformation_motor animal(::v2x_msg::msg::PropelledInformation::_animal_type arg)
  {
    msg_.animal = std::move(arg);
    return Init_PropelledInformation_motor(msg_);
  }

private:
  ::v2x_msg::msg::PropelledInformation msg_;
};

class Init_PropelledInformation_human
{
public:
  Init_PropelledInformation_human()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PropelledInformation_animal human(::v2x_msg::msg::PropelledInformation::_human_type arg)
  {
    msg_.human = std::move(arg);
    return Init_PropelledInformation_animal(msg_);
  }

private:
  ::v2x_msg::msg::PropelledInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::PropelledInformation>()
{
  return v2x_msg::msg::builder::Init_PropelledInformation_human();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__PROPELLED_INFORMATION__BUILDER_HPP_
