// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_mapping_msgs:msg/HADMapBin.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_BIN__BUILDER_HPP_
#define AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_BIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_mapping_msgs/msg/detail/had_map_bin__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_mapping_msgs
{

namespace msg
{

namespace builder
{

class Init_HADMapBin_data
{
public:
  explicit Init_HADMapBin_data(::autoware_auto_mapping_msgs::msg::HADMapBin & msg)
  : msg_(msg)
  {}
  ::autoware_auto_mapping_msgs::msg::HADMapBin data(::autoware_auto_mapping_msgs::msg::HADMapBin::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_mapping_msgs::msg::HADMapBin msg_;
};

class Init_HADMapBin_map_version
{
public:
  explicit Init_HADMapBin_map_version(::autoware_auto_mapping_msgs::msg::HADMapBin & msg)
  : msg_(msg)
  {}
  Init_HADMapBin_data map_version(::autoware_auto_mapping_msgs::msg::HADMapBin::_map_version_type arg)
  {
    msg_.map_version = std::move(arg);
    return Init_HADMapBin_data(msg_);
  }

private:
  ::autoware_auto_mapping_msgs::msg::HADMapBin msg_;
};

class Init_HADMapBin_format_version
{
public:
  explicit Init_HADMapBin_format_version(::autoware_auto_mapping_msgs::msg::HADMapBin & msg)
  : msg_(msg)
  {}
  Init_HADMapBin_map_version format_version(::autoware_auto_mapping_msgs::msg::HADMapBin::_format_version_type arg)
  {
    msg_.format_version = std::move(arg);
    return Init_HADMapBin_map_version(msg_);
  }

private:
  ::autoware_auto_mapping_msgs::msg::HADMapBin msg_;
};

class Init_HADMapBin_map_format
{
public:
  explicit Init_HADMapBin_map_format(::autoware_auto_mapping_msgs::msg::HADMapBin & msg)
  : msg_(msg)
  {}
  Init_HADMapBin_format_version map_format(::autoware_auto_mapping_msgs::msg::HADMapBin::_map_format_type arg)
  {
    msg_.map_format = std::move(arg);
    return Init_HADMapBin_format_version(msg_);
  }

private:
  ::autoware_auto_mapping_msgs::msg::HADMapBin msg_;
};

class Init_HADMapBin_header
{
public:
  Init_HADMapBin_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HADMapBin_map_format header(::autoware_auto_mapping_msgs::msg::HADMapBin::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HADMapBin_map_format(msg_);
  }

private:
  ::autoware_auto_mapping_msgs::msg::HADMapBin msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_mapping_msgs::msg::HADMapBin>()
{
  return autoware_auto_mapping_msgs::msg::builder::Init_HADMapBin_header();
}

}  // namespace autoware_auto_mapping_msgs

#endif  // AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_BIN__BUILDER_HPP_
