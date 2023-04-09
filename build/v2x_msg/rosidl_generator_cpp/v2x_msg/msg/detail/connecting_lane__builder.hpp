// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/ConnectingLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONNECTING_LANE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__CONNECTING_LANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/connecting_lane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_ConnectingLane_maneuver
{
public:
  explicit Init_ConnectingLane_maneuver(::v2x_msg::msg::ConnectingLane & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::ConnectingLane maneuver(::v2x_msg::msg::ConnectingLane::_maneuver_type arg)
  {
    msg_.maneuver = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::ConnectingLane msg_;
};

class Init_ConnectingLane_laneid
{
public:
  Init_ConnectingLane_laneid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConnectingLane_maneuver laneid(::v2x_msg::msg::ConnectingLane::_laneid_type arg)
  {
    msg_.laneid = std::move(arg);
    return Init_ConnectingLane_maneuver(msg_);
  }

private:
  ::v2x_msg::msg::ConnectingLane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::ConnectingLane>()
{
  return v2x_msg::msg::builder::Init_ConnectingLane_laneid();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__CONNECTING_LANE__BUILDER_HPP_
