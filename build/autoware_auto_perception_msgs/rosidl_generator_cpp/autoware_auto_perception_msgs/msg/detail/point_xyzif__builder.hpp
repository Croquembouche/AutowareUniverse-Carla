// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/PointXYZIF.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__POINT_XYZIF__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__POINT_XYZIF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/point_xyzif__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_PointXYZIF_id
{
public:
  explicit Init_PointXYZIF_id(::autoware_auto_perception_msgs::msg::PointXYZIF & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::PointXYZIF id(::autoware_auto_perception_msgs::msg::PointXYZIF::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::PointXYZIF msg_;
};

class Init_PointXYZIF_intensity
{
public:
  explicit Init_PointXYZIF_intensity(::autoware_auto_perception_msgs::msg::PointXYZIF & msg)
  : msg_(msg)
  {}
  Init_PointXYZIF_id intensity(::autoware_auto_perception_msgs::msg::PointXYZIF::_intensity_type arg)
  {
    msg_.intensity = std::move(arg);
    return Init_PointXYZIF_id(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::PointXYZIF msg_;
};

class Init_PointXYZIF_z
{
public:
  explicit Init_PointXYZIF_z(::autoware_auto_perception_msgs::msg::PointXYZIF & msg)
  : msg_(msg)
  {}
  Init_PointXYZIF_intensity z(::autoware_auto_perception_msgs::msg::PointXYZIF::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_PointXYZIF_intensity(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::PointXYZIF msg_;
};

class Init_PointXYZIF_y
{
public:
  explicit Init_PointXYZIF_y(::autoware_auto_perception_msgs::msg::PointXYZIF & msg)
  : msg_(msg)
  {}
  Init_PointXYZIF_z y(::autoware_auto_perception_msgs::msg::PointXYZIF::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PointXYZIF_z(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::PointXYZIF msg_;
};

class Init_PointXYZIF_x
{
public:
  Init_PointXYZIF_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointXYZIF_y x(::autoware_auto_perception_msgs::msg::PointXYZIF::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PointXYZIF_y(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::PointXYZIF msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::PointXYZIF>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_PointXYZIF_x();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__POINT_XYZIF__BUILDER_HPP_
