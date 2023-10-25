// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/IntersectionAccessPoint.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_ACCESS_POINT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_ACCESS_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/intersection_access_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_IntersectionAccessPoint_connection
{
public:
  explicit Init_IntersectionAccessPoint_connection(::v2x_msg::msg::IntersectionAccessPoint & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::IntersectionAccessPoint connection(::v2x_msg::msg::IntersectionAccessPoint::_connection_type arg)
  {
    msg_.connection = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionAccessPoint msg_;
};

class Init_IntersectionAccessPoint_approach
{
public:
  explicit Init_IntersectionAccessPoint_approach(::v2x_msg::msg::IntersectionAccessPoint & msg)
  : msg_(msg)
  {}
  Init_IntersectionAccessPoint_connection approach(::v2x_msg::msg::IntersectionAccessPoint::_approach_type arg)
  {
    msg_.approach = std::move(arg);
    return Init_IntersectionAccessPoint_connection(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionAccessPoint msg_;
};

class Init_IntersectionAccessPoint_lane
{
public:
  Init_IntersectionAccessPoint_lane()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntersectionAccessPoint_approach lane(::v2x_msg::msg::IntersectionAccessPoint::_lane_type arg)
  {
    msg_.lane = std::move(arg);
    return Init_IntersectionAccessPoint_approach(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionAccessPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::IntersectionAccessPoint>()
{
  return v2x_msg::msg::builder::Init_IntersectionAccessPoint_lane();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__INTERSECTION_ACCESS_POINT__BUILDER_HPP_
