// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/SnapshotDistance.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SNAPSHOT_DISTANCE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__SNAPSHOT_DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/snapshot_distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_SnapshotDistance_speed2
{
public:
  explicit Init_SnapshotDistance_speed2(::v2x_msg::msg::SnapshotDistance & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::SnapshotDistance speed2(::v2x_msg::msg::SnapshotDistance::_speed2_type arg)
  {
    msg_.speed2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::SnapshotDistance msg_;
};

class Init_SnapshotDistance_distance2
{
public:
  explicit Init_SnapshotDistance_distance2(::v2x_msg::msg::SnapshotDistance & msg)
  : msg_(msg)
  {}
  Init_SnapshotDistance_speed2 distance2(::v2x_msg::msg::SnapshotDistance::_distance2_type arg)
  {
    msg_.distance2 = std::move(arg);
    return Init_SnapshotDistance_speed2(msg_);
  }

private:
  ::v2x_msg::msg::SnapshotDistance msg_;
};

class Init_SnapshotDistance_speed1
{
public:
  explicit Init_SnapshotDistance_speed1(::v2x_msg::msg::SnapshotDistance & msg)
  : msg_(msg)
  {}
  Init_SnapshotDistance_distance2 speed1(::v2x_msg::msg::SnapshotDistance::_speed1_type arg)
  {
    msg_.speed1 = std::move(arg);
    return Init_SnapshotDistance_distance2(msg_);
  }

private:
  ::v2x_msg::msg::SnapshotDistance msg_;
};

class Init_SnapshotDistance_distance1
{
public:
  Init_SnapshotDistance_distance1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SnapshotDistance_speed1 distance1(::v2x_msg::msg::SnapshotDistance::_distance1_type arg)
  {
    msg_.distance1 = std::move(arg);
    return Init_SnapshotDistance_speed1(msg_);
  }

private:
  ::v2x_msg::msg::SnapshotDistance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::SnapshotDistance>()
{
  return v2x_msg::msg::builder::Init_SnapshotDistance_distance1();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SNAPSHOT_DISTANCE__BUILDER_HPP_
