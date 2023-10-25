// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/PointClusters.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__POINT_CLUSTERS__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__POINT_CLUSTERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/point_clusters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_PointClusters_cluster_boundary
{
public:
  explicit Init_PointClusters_cluster_boundary(::autoware_auto_perception_msgs::msg::PointClusters & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::PointClusters cluster_boundary(::autoware_auto_perception_msgs::msg::PointClusters::_cluster_boundary_type arg)
  {
    msg_.cluster_boundary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::PointClusters msg_;
};

class Init_PointClusters_points
{
public:
  explicit Init_PointClusters_points(::autoware_auto_perception_msgs::msg::PointClusters & msg)
  : msg_(msg)
  {}
  Init_PointClusters_cluster_boundary points(::autoware_auto_perception_msgs::msg::PointClusters::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_PointClusters_cluster_boundary(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::PointClusters msg_;
};

class Init_PointClusters_header
{
public:
  Init_PointClusters_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointClusters_points header(::autoware_auto_perception_msgs::msg::PointClusters::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PointClusters_points(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::PointClusters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::PointClusters>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_PointClusters_header();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__POINT_CLUSTERS__BUILDER_HPP_
