// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_Route_data
{
public:
  explicit Init_Route_data(::autoware_adapi_v1_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::Route data(::autoware_adapi_v1_msgs::msg::Route::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::Route msg_;
};

class Init_Route_header
{
public:
  Init_Route_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Route_data header(::autoware_adapi_v1_msgs::msg::Route::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Route_data(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::Route msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::Route>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_Route_header();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_
