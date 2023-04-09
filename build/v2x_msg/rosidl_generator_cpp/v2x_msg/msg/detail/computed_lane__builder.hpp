// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/ComputedLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__COMPUTED_LANE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__COMPUTED_LANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/computed_lane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_ComputedLane_scaleyaxis
{
public:
  explicit Init_ComputedLane_scaleyaxis(::v2x_msg::msg::ComputedLane & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::ComputedLane scaleyaxis(::v2x_msg::msg::ComputedLane::_scaleyaxis_type arg)
  {
    msg_.scaleyaxis = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::ComputedLane msg_;
};

class Init_ComputedLane_scalexaxis
{
public:
  explicit Init_ComputedLane_scalexaxis(::v2x_msg::msg::ComputedLane & msg)
  : msg_(msg)
  {}
  Init_ComputedLane_scaleyaxis scalexaxis(::v2x_msg::msg::ComputedLane::_scalexaxis_type arg)
  {
    msg_.scalexaxis = std::move(arg);
    return Init_ComputedLane_scaleyaxis(msg_);
  }

private:
  ::v2x_msg::msg::ComputedLane msg_;
};

class Init_ComputedLane_rotatexy
{
public:
  explicit Init_ComputedLane_rotatexy(::v2x_msg::msg::ComputedLane & msg)
  : msg_(msg)
  {}
  Init_ComputedLane_scalexaxis rotatexy(::v2x_msg::msg::ComputedLane::_rotatexy_type arg)
  {
    msg_.rotatexy = std::move(arg);
    return Init_ComputedLane_scalexaxis(msg_);
  }

private:
  ::v2x_msg::msg::ComputedLane msg_;
};

class Init_ComputedLane_offsetyaxis
{
public:
  explicit Init_ComputedLane_offsetyaxis(::v2x_msg::msg::ComputedLane & msg)
  : msg_(msg)
  {}
  Init_ComputedLane_rotatexy offsetyaxis(::v2x_msg::msg::ComputedLane::_offsetyaxis_type arg)
  {
    msg_.offsetyaxis = std::move(arg);
    return Init_ComputedLane_rotatexy(msg_);
  }

private:
  ::v2x_msg::msg::ComputedLane msg_;
};

class Init_ComputedLane_offsetxaxis
{
public:
  explicit Init_ComputedLane_offsetxaxis(::v2x_msg::msg::ComputedLane & msg)
  : msg_(msg)
  {}
  Init_ComputedLane_offsetyaxis offsetxaxis(::v2x_msg::msg::ComputedLane::_offsetxaxis_type arg)
  {
    msg_.offsetxaxis = std::move(arg);
    return Init_ComputedLane_offsetyaxis(msg_);
  }

private:
  ::v2x_msg::msg::ComputedLane msg_;
};

class Init_ComputedLane_referencelaneid
{
public:
  Init_ComputedLane_referencelaneid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputedLane_offsetxaxis referencelaneid(::v2x_msg::msg::ComputedLane::_referencelaneid_type arg)
  {
    msg_.referencelaneid = std::move(arg);
    return Init_ComputedLane_offsetxaxis(msg_);
  }

private:
  ::v2x_msg::msg::ComputedLane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::ComputedLane>()
{
  return v2x_msg::msg::builder::Init_ComputedLane_referencelaneid();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__COMPUTED_LANE__BUILDER_HPP_
