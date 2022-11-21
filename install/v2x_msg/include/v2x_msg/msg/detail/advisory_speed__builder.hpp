// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/AdvisorySpeed.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ADVISORY_SPEED__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__ADVISORY_SPEED__BUILDER_HPP_

#include "v2x_msg/msg/detail/advisory_speed__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_AdvisorySpeed_restrictionclassid
{
public:
  explicit Init_AdvisorySpeed_restrictionclassid(::v2x_msg::msg::AdvisorySpeed & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::AdvisorySpeed restrictionclassid(::v2x_msg::msg::AdvisorySpeed::_restrictionclassid_type arg)
  {
    msg_.restrictionclassid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::AdvisorySpeed msg_;
};

class Init_AdvisorySpeed_zonelength
{
public:
  explicit Init_AdvisorySpeed_zonelength(::v2x_msg::msg::AdvisorySpeed & msg)
  : msg_(msg)
  {}
  Init_AdvisorySpeed_restrictionclassid zonelength(::v2x_msg::msg::AdvisorySpeed::_zonelength_type arg)
  {
    msg_.zonelength = std::move(arg);
    return Init_AdvisorySpeed_restrictionclassid(msg_);
  }

private:
  ::v2x_msg::msg::AdvisorySpeed msg_;
};

class Init_AdvisorySpeed_confidence
{
public:
  explicit Init_AdvisorySpeed_confidence(::v2x_msg::msg::AdvisorySpeed & msg)
  : msg_(msg)
  {}
  Init_AdvisorySpeed_zonelength confidence(::v2x_msg::msg::AdvisorySpeed::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_AdvisorySpeed_zonelength(msg_);
  }

private:
  ::v2x_msg::msg::AdvisorySpeed msg_;
};

class Init_AdvisorySpeed_speed
{
public:
  explicit Init_AdvisorySpeed_speed(::v2x_msg::msg::AdvisorySpeed & msg)
  : msg_(msg)
  {}
  Init_AdvisorySpeed_confidence speed(::v2x_msg::msg::AdvisorySpeed::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_AdvisorySpeed_confidence(msg_);
  }

private:
  ::v2x_msg::msg::AdvisorySpeed msg_;
};

class Init_AdvisorySpeed_type
{
public:
  Init_AdvisorySpeed_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AdvisorySpeed_speed type(::v2x_msg::msg::AdvisorySpeed::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_AdvisorySpeed_speed(msg_);
  }

private:
  ::v2x_msg::msg::AdvisorySpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::AdvisorySpeed>()
{
  return v2x_msg::msg::builder::Init_AdvisorySpeed_type();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ADVISORY_SPEED__BUILDER_HPP_
