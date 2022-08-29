// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/LaneID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__LANE_ID__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__LANE_ID__BUILDER_HPP_

#include "v2x_msg/msg/detail/lane_id__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_LaneID_id
{
public:
  Init_LaneID_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::v2x_msg::msg::LaneID id(::v2x_msg::msg::LaneID::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::LaneID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::LaneID>()
{
  return v2x_msg::msg::builder::Init_LaneID_id();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__LANE_ID__BUILDER_HPP_
