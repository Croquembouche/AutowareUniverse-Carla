// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_mapping_msgs:srv/HADMapService.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MAPPING_MSGS__SRV__DETAIL__HAD_MAP_SERVICE__BUILDER_HPP_
#define AUTOWARE_AUTO_MAPPING_MSGS__SRV__DETAIL__HAD_MAP_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_mapping_msgs/srv/detail/had_map_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_mapping_msgs
{

namespace srv
{

namespace builder
{

class Init_HADMapService_Request_geom_lower_bound
{
public:
  explicit Init_HADMapService_Request_geom_lower_bound(::autoware_auto_mapping_msgs::srv::HADMapService_Request & msg)
  : msg_(msg)
  {}
  ::autoware_auto_mapping_msgs::srv::HADMapService_Request geom_lower_bound(::autoware_auto_mapping_msgs::srv::HADMapService_Request::_geom_lower_bound_type arg)
  {
    msg_.geom_lower_bound = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_mapping_msgs::srv::HADMapService_Request msg_;
};

class Init_HADMapService_Request_geom_upper_bound
{
public:
  explicit Init_HADMapService_Request_geom_upper_bound(::autoware_auto_mapping_msgs::srv::HADMapService_Request & msg)
  : msg_(msg)
  {}
  Init_HADMapService_Request_geom_lower_bound geom_upper_bound(::autoware_auto_mapping_msgs::srv::HADMapService_Request::_geom_upper_bound_type arg)
  {
    msg_.geom_upper_bound = std::move(arg);
    return Init_HADMapService_Request_geom_lower_bound(msg_);
  }

private:
  ::autoware_auto_mapping_msgs::srv::HADMapService_Request msg_;
};

class Init_HADMapService_Request_requested_primitives
{
public:
  Init_HADMapService_Request_requested_primitives()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HADMapService_Request_geom_upper_bound requested_primitives(::autoware_auto_mapping_msgs::srv::HADMapService_Request::_requested_primitives_type arg)
  {
    msg_.requested_primitives = std::move(arg);
    return Init_HADMapService_Request_geom_upper_bound(msg_);
  }

private:
  ::autoware_auto_mapping_msgs::srv::HADMapService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_mapping_msgs::srv::HADMapService_Request>()
{
  return autoware_auto_mapping_msgs::srv::builder::Init_HADMapService_Request_requested_primitives();
}

}  // namespace autoware_auto_mapping_msgs


namespace autoware_auto_mapping_msgs
{

namespace srv
{

namespace builder
{

class Init_HADMapService_Response_answer
{
public:
  explicit Init_HADMapService_Response_answer(::autoware_auto_mapping_msgs::srv::HADMapService_Response & msg)
  : msg_(msg)
  {}
  ::autoware_auto_mapping_msgs::srv::HADMapService_Response answer(::autoware_auto_mapping_msgs::srv::HADMapService_Response::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_mapping_msgs::srv::HADMapService_Response msg_;
};

class Init_HADMapService_Response_map
{
public:
  Init_HADMapService_Response_map()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HADMapService_Response_answer map(::autoware_auto_mapping_msgs::srv::HADMapService_Response::_map_type arg)
  {
    msg_.map = std::move(arg);
    return Init_HADMapService_Response_answer(msg_);
  }

private:
  ::autoware_auto_mapping_msgs::srv::HADMapService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_mapping_msgs::srv::HADMapService_Response>()
{
  return autoware_auto_mapping_msgs::srv::builder::Init_HADMapService_Response_map();
}

}  // namespace autoware_auto_mapping_msgs

#endif  // AUTOWARE_AUTO_MAPPING_MSGS__SRV__DETAIL__HAD_MAP_SERVICE__BUILDER_HPP_
