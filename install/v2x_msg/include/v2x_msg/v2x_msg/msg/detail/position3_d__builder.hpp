// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/Position3D.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__POSITION3_D__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__POSITION3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/position3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_Position3D_elevation
{
public:
  explicit Init_Position3D_elevation(::v2x_msg::msg::Position3D & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::Position3D elevation(::v2x_msg::msg::Position3D::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::Position3D msg_;
};

class Init_Position3D_longitude
{
public:
  explicit Init_Position3D_longitude(::v2x_msg::msg::Position3D & msg)
  : msg_(msg)
  {}
  Init_Position3D_elevation longitude(::v2x_msg::msg::Position3D::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_Position3D_elevation(msg_);
  }

private:
  ::v2x_msg::msg::Position3D msg_;
};

class Init_Position3D_latitude
{
public:
  Init_Position3D_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Position3D_longitude latitude(::v2x_msg::msg::Position3D::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_Position3D_longitude(msg_);
  }

private:
  ::v2x_msg::msg::Position3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::Position3D>()
{
  return v2x_msg::msg::builder::Init_Position3D_latitude();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__POSITION3_D__BUILDER_HPP_
