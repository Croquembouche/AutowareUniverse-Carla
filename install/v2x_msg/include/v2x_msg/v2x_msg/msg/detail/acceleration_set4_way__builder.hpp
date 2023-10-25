// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/AccelerationSet4Way.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ACCELERATION_SET4_WAY__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__ACCELERATION_SET4_WAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/acceleration_set4_way__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_AccelerationSet4Way_yaw
{
public:
  explicit Init_AccelerationSet4Way_yaw(::v2x_msg::msg::AccelerationSet4Way & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::AccelerationSet4Way yaw(::v2x_msg::msg::AccelerationSet4Way::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::AccelerationSet4Way msg_;
};

class Init_AccelerationSet4Way_vert
{
public:
  explicit Init_AccelerationSet4Way_vert(::v2x_msg::msg::AccelerationSet4Way & msg)
  : msg_(msg)
  {}
  Init_AccelerationSet4Way_yaw vert(::v2x_msg::msg::AccelerationSet4Way::_vert_type arg)
  {
    msg_.vert = std::move(arg);
    return Init_AccelerationSet4Way_yaw(msg_);
  }

private:
  ::v2x_msg::msg::AccelerationSet4Way msg_;
};

class Init_AccelerationSet4Way_lat
{
public:
  explicit Init_AccelerationSet4Way_lat(::v2x_msg::msg::AccelerationSet4Way & msg)
  : msg_(msg)
  {}
  Init_AccelerationSet4Way_vert lat(::v2x_msg::msg::AccelerationSet4Way::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_AccelerationSet4Way_vert(msg_);
  }

private:
  ::v2x_msg::msg::AccelerationSet4Way msg_;
};

class Init_AccelerationSet4Way_longitude
{
public:
  Init_AccelerationSet4Way_longitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccelerationSet4Way_lat longitude(::v2x_msg::msg::AccelerationSet4Way::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_AccelerationSet4Way_lat(msg_);
  }

private:
  ::v2x_msg::msg::AccelerationSet4Way msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::AccelerationSet4Way>()
{
  return v2x_msg::msg::builder::Init_AccelerationSet4Way_longitude();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ACCELERATION_SET4_WAY__BUILDER_HPP_
