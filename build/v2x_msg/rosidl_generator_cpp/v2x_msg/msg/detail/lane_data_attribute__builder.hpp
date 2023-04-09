// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__LANE_DATA_ATTRIBUTE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__LANE_DATA_ATTRIBUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/lane_data_attribute__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_LaneDataAttribute_speedlimits
{
public:
  explicit Init_LaneDataAttribute_speedlimits(::v2x_msg::msg::LaneDataAttribute & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::LaneDataAttribute speedlimits(::v2x_msg::msg::LaneDataAttribute::_speedlimits_type arg)
  {
    msg_.speedlimits = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::LaneDataAttribute msg_;
};

class Init_LaneDataAttribute_laneangle
{
public:
  explicit Init_LaneDataAttribute_laneangle(::v2x_msg::msg::LaneDataAttribute & msg)
  : msg_(msg)
  {}
  Init_LaneDataAttribute_speedlimits laneangle(::v2x_msg::msg::LaneDataAttribute::_laneangle_type arg)
  {
    msg_.laneangle = std::move(arg);
    return Init_LaneDataAttribute_speedlimits(msg_);
  }

private:
  ::v2x_msg::msg::LaneDataAttribute msg_;
};

class Init_LaneDataAttribute_lanecrownpointright
{
public:
  explicit Init_LaneDataAttribute_lanecrownpointright(::v2x_msg::msg::LaneDataAttribute & msg)
  : msg_(msg)
  {}
  Init_LaneDataAttribute_laneangle lanecrownpointright(::v2x_msg::msg::LaneDataAttribute::_lanecrownpointright_type arg)
  {
    msg_.lanecrownpointright = std::move(arg);
    return Init_LaneDataAttribute_laneangle(msg_);
  }

private:
  ::v2x_msg::msg::LaneDataAttribute msg_;
};

class Init_LaneDataAttribute_lancrownpointleft
{
public:
  explicit Init_LaneDataAttribute_lancrownpointleft(::v2x_msg::msg::LaneDataAttribute & msg)
  : msg_(msg)
  {}
  Init_LaneDataAttribute_lanecrownpointright lancrownpointleft(::v2x_msg::msg::LaneDataAttribute::_lancrownpointleft_type arg)
  {
    msg_.lancrownpointleft = std::move(arg);
    return Init_LaneDataAttribute_lanecrownpointright(msg_);
  }

private:
  ::v2x_msg::msg::LaneDataAttribute msg_;
};

class Init_LaneDataAttribute_lanecrownpointcenter
{
public:
  explicit Init_LaneDataAttribute_lanecrownpointcenter(::v2x_msg::msg::LaneDataAttribute & msg)
  : msg_(msg)
  {}
  Init_LaneDataAttribute_lancrownpointleft lanecrownpointcenter(::v2x_msg::msg::LaneDataAttribute::_lanecrownpointcenter_type arg)
  {
    msg_.lanecrownpointcenter = std::move(arg);
    return Init_LaneDataAttribute_lancrownpointleft(msg_);
  }

private:
  ::v2x_msg::msg::LaneDataAttribute msg_;
};

class Init_LaneDataAttribute_pathendpointangle
{
public:
  Init_LaneDataAttribute_pathendpointangle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneDataAttribute_lanecrownpointcenter pathendpointangle(::v2x_msg::msg::LaneDataAttribute::_pathendpointangle_type arg)
  {
    msg_.pathendpointangle = std::move(arg);
    return Init_LaneDataAttribute_lanecrownpointcenter(msg_);
  }

private:
  ::v2x_msg::msg::LaneDataAttribute msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::LaneDataAttribute>()
{
  return v2x_msg::msg::builder::Init_LaneDataAttribute_pathendpointangle();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__LANE_DATA_ATTRIBUTE__BUILDER_HPP_
