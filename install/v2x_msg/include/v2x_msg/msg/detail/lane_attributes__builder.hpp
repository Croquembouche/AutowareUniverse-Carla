// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/LaneAttributes.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__LANE_ATTRIBUTES__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__LANE_ATTRIBUTES__BUILDER_HPP_

#include "v2x_msg/msg/detail/lane_attributes__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_LaneAttributes_lanetype
{
public:
  explicit Init_LaneAttributes_lanetype(::v2x_msg::msg::LaneAttributes & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::LaneAttributes lanetype(::v2x_msg::msg::LaneAttributes::_lanetype_type arg)
  {
    msg_.lanetype = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::LaneAttributes msg_;
};

class Init_LaneAttributes_sharedwith
{
public:
  explicit Init_LaneAttributes_sharedwith(::v2x_msg::msg::LaneAttributes & msg)
  : msg_(msg)
  {}
  Init_LaneAttributes_lanetype sharedwith(::v2x_msg::msg::LaneAttributes::_sharedwith_type arg)
  {
    msg_.sharedwith = std::move(arg);
    return Init_LaneAttributes_lanetype(msg_);
  }

private:
  ::v2x_msg::msg::LaneAttributes msg_;
};

class Init_LaneAttributes_directionaluse
{
public:
  Init_LaneAttributes_directionaluse()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneAttributes_sharedwith directionaluse(::v2x_msg::msg::LaneAttributes::_directionaluse_type arg)
  {
    msg_.directionaluse = std::move(arg);
    return Init_LaneAttributes_sharedwith(msg_);
  }

private:
  ::v2x_msg::msg::LaneAttributes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::LaneAttributes>()
{
  return v2x_msg::msg::builder::Init_LaneAttributes_directionaluse();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__LANE_ATTRIBUTES__BUILDER_HPP_
