// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/PredictedPath.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/predicted_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_PredictedPath_confidence
{
public:
  explicit Init_PredictedPath_confidence(::autoware_auto_perception_msgs::msg::PredictedPath & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::PredictedPath confidence(::autoware_auto_perception_msgs::msg::PredictedPath::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::PredictedPath msg_;
};

class Init_PredictedPath_time_step
{
public:
  explicit Init_PredictedPath_time_step(::autoware_auto_perception_msgs::msg::PredictedPath & msg)
  : msg_(msg)
  {}
  Init_PredictedPath_confidence time_step(::autoware_auto_perception_msgs::msg::PredictedPath::_time_step_type arg)
  {
    msg_.time_step = std::move(arg);
    return Init_PredictedPath_confidence(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::PredictedPath msg_;
};

class Init_PredictedPath_path
{
public:
  Init_PredictedPath_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PredictedPath_time_step path(::autoware_auto_perception_msgs::msg::PredictedPath::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_PredictedPath_time_step(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::PredictedPath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::PredictedPath>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_PredictedPath_path();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__BUILDER_HPP_
