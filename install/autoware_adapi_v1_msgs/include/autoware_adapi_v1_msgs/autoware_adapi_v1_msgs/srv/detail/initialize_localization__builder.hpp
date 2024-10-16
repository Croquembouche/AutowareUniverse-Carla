// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:srv/InitializeLocalization.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__INITIALIZE_LOCALIZATION__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__INITIALIZE_LOCALIZATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/srv/detail/initialize_localization__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace srv
{

namespace builder
{

class Init_InitializeLocalization_Request_pose
{
public:
  Init_InitializeLocalization_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_adapi_v1_msgs::srv::InitializeLocalization_Request pose(::autoware_adapi_v1_msgs::srv::InitializeLocalization_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::srv::InitializeLocalization_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::srv::InitializeLocalization_Request>()
{
  return autoware_adapi_v1_msgs::srv::builder::Init_InitializeLocalization_Request_pose();
}

}  // namespace autoware_adapi_v1_msgs


namespace autoware_adapi_v1_msgs
{

namespace srv
{

namespace builder
{

class Init_InitializeLocalization_Response_status
{
public:
  Init_InitializeLocalization_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_adapi_v1_msgs::srv::InitializeLocalization_Response status(::autoware_adapi_v1_msgs::srv::InitializeLocalization_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::srv::InitializeLocalization_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::srv::InitializeLocalization_Response>()
{
  return autoware_adapi_v1_msgs::srv::builder::Init_InitializeLocalization_Response_status();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__INITIALIZE_LOCALIZATION__BUILDER_HPP_
