// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/PositionConfidenceSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__POSITION_CONFIDENCE_SET__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__POSITION_CONFIDENCE_SET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/position_confidence_set__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_PositionConfidenceSet_elevation
{
public:
  explicit Init_PositionConfidenceSet_elevation(::v2x_msg::msg::PositionConfidenceSet & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::PositionConfidenceSet elevation(::v2x_msg::msg::PositionConfidenceSet::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::PositionConfidenceSet msg_;
};

class Init_PositionConfidenceSet_pos
{
public:
  Init_PositionConfidenceSet_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionConfidenceSet_elevation pos(::v2x_msg::msg::PositionConfidenceSet::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_PositionConfidenceSet_elevation(msg_);
  }

private:
  ::v2x_msg::msg::PositionConfidenceSet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::PositionConfidenceSet>()
{
  return v2x_msg::msg::builder::Init_PositionConfidenceSet_pos();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__POSITION_CONFIDENCE_SET__BUILDER_HPP_
