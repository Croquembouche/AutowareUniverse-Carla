// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/SnapshotTime.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SNAPSHOT_TIME__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__SNAPSHOT_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/snapshot_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_SnapshotTime_time2
{
public:
  explicit Init_SnapshotTime_time2(::v2x_msg::msg::SnapshotTime & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::SnapshotTime time2(::v2x_msg::msg::SnapshotTime::_time2_type arg)
  {
    msg_.time2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::SnapshotTime msg_;
};

class Init_SnapshotTime_speed2
{
public:
  explicit Init_SnapshotTime_speed2(::v2x_msg::msg::SnapshotTime & msg)
  : msg_(msg)
  {}
  Init_SnapshotTime_time2 speed2(::v2x_msg::msg::SnapshotTime::_speed2_type arg)
  {
    msg_.speed2 = std::move(arg);
    return Init_SnapshotTime_time2(msg_);
  }

private:
  ::v2x_msg::msg::SnapshotTime msg_;
};

class Init_SnapshotTime_time1
{
public:
  explicit Init_SnapshotTime_time1(::v2x_msg::msg::SnapshotTime & msg)
  : msg_(msg)
  {}
  Init_SnapshotTime_speed2 time1(::v2x_msg::msg::SnapshotTime::_time1_type arg)
  {
    msg_.time1 = std::move(arg);
    return Init_SnapshotTime_speed2(msg_);
  }

private:
  ::v2x_msg::msg::SnapshotTime msg_;
};

class Init_SnapshotTime_speed1
{
public:
  Init_SnapshotTime_speed1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SnapshotTime_time1 speed1(::v2x_msg::msg::SnapshotTime::_speed1_type arg)
  {
    msg_.speed1 = std::move(arg);
    return Init_SnapshotTime_time1(msg_);
  }

private:
  ::v2x_msg::msg::SnapshotTime msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::SnapshotTime>()
{
  return v2x_msg::msg::builder::Init_SnapshotTime_speed1();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SNAPSHOT_TIME__BUILDER_HPP_
