// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrafficSignalWithJudge.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_WITH_JUDGE__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_WITH_JUDGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_with_judge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficSignalWithJudge_signal
{
public:
  explicit Init_TrafficSignalWithJudge_signal(::autoware_auto_perception_msgs::msg::TrafficSignalWithJudge & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::TrafficSignalWithJudge signal(::autoware_auto_perception_msgs::msg::TrafficSignalWithJudge::_signal_type arg)
  {
    msg_.signal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrafficSignalWithJudge msg_;
};

class Init_TrafficSignalWithJudge_has_state
{
public:
  explicit Init_TrafficSignalWithJudge_has_state(::autoware_auto_perception_msgs::msg::TrafficSignalWithJudge & msg)
  : msg_(msg)
  {}
  Init_TrafficSignalWithJudge_signal has_state(::autoware_auto_perception_msgs::msg::TrafficSignalWithJudge::_has_state_type arg)
  {
    msg_.has_state = std::move(arg);
    return Init_TrafficSignalWithJudge_signal(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrafficSignalWithJudge msg_;
};

class Init_TrafficSignalWithJudge_judge
{
public:
  Init_TrafficSignalWithJudge_judge()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficSignalWithJudge_has_state judge(::autoware_auto_perception_msgs::msg::TrafficSignalWithJudge::_judge_type arg)
  {
    msg_.judge = std::move(arg);
    return Init_TrafficSignalWithJudge_has_state(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrafficSignalWithJudge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::TrafficSignalWithJudge>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_TrafficSignalWithJudge_judge();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_WITH_JUDGE__BUILDER_HPP_
