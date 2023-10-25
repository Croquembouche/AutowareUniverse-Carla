// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/RoadSignID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ROAD_SIGN_ID__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__ROAD_SIGN_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/road_sign_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_RoadSignID_msgcrc
{
public:
  explicit Init_RoadSignID_msgcrc(::v2x_msg::msg::RoadSignID & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::RoadSignID msgcrc(::v2x_msg::msg::RoadSignID::_msgcrc_type arg)
  {
    msg_.msgcrc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::RoadSignID msg_;
};

class Init_RoadSignID_mutcdcode
{
public:
  explicit Init_RoadSignID_mutcdcode(::v2x_msg::msg::RoadSignID & msg)
  : msg_(msg)
  {}
  Init_RoadSignID_msgcrc mutcdcode(::v2x_msg::msg::RoadSignID::_mutcdcode_type arg)
  {
    msg_.mutcdcode = std::move(arg);
    return Init_RoadSignID_msgcrc(msg_);
  }

private:
  ::v2x_msg::msg::RoadSignID msg_;
};

class Init_RoadSignID_viewangle
{
public:
  explicit Init_RoadSignID_viewangle(::v2x_msg::msg::RoadSignID & msg)
  : msg_(msg)
  {}
  Init_RoadSignID_mutcdcode viewangle(::v2x_msg::msg::RoadSignID::_viewangle_type arg)
  {
    msg_.viewangle = std::move(arg);
    return Init_RoadSignID_mutcdcode(msg_);
  }

private:
  ::v2x_msg::msg::RoadSignID msg_;
};

class Init_RoadSignID_position
{
public:
  Init_RoadSignID_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoadSignID_viewangle position(::v2x_msg::msg::RoadSignID::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RoadSignID_viewangle(msg_);
  }

private:
  ::v2x_msg::msg::RoadSignID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::RoadSignID>()
{
  return v2x_msg::msg::builder::Init_RoadSignID_position();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ROAD_SIGN_ID__BUILDER_HPP_
