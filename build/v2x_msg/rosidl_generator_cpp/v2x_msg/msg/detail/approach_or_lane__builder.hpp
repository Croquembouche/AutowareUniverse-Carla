// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/ApproachOrLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__APPROACH_OR_LANE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__APPROACH_OR_LANE__BUILDER_HPP_

#include "v2x_msg/msg/detail/approach_or_lane__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_ApproachOrLane_lane
{
public:
  explicit Init_ApproachOrLane_lane(::v2x_msg::msg::ApproachOrLane & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::ApproachOrLane lane(::v2x_msg::msg::ApproachOrLane::_lane_type arg)
  {
    msg_.lane = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::ApproachOrLane msg_;
};

class Init_ApproachOrLane_approach
{
public:
  Init_ApproachOrLane_approach()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApproachOrLane_lane approach(::v2x_msg::msg::ApproachOrLane::_approach_type arg)
  {
    msg_.approach = std::move(arg);
    return Init_ApproachOrLane_lane(msg_);
  }

private:
  ::v2x_msg::msg::ApproachOrLane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::ApproachOrLane>()
{
  return v2x_msg::msg::builder::Init_ApproachOrLane_approach();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__APPROACH_OR_LANE__BUILDER_HPP_
