// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/FullPositionVector.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__FULL_POSITION_VECTOR__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__FULL_POSITION_VECTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/full_position_vector__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_FullPositionVector_speedconfidence
{
public:
  explicit Init_FullPositionVector_speedconfidence(::v2x_msg::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::FullPositionVector speedconfidence(::v2x_msg::msg::FullPositionVector::_speedconfidence_type arg)
  {
    msg_.speedconfidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_posconfidence
{
public:
  explicit Init_FullPositionVector_posconfidence(::v2x_msg::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  Init_FullPositionVector_speedconfidence posconfidence(::v2x_msg::msg::FullPositionVector::_posconfidence_type arg)
  {
    msg_.posconfidence = std::move(arg);
    return Init_FullPositionVector_speedconfidence(msg_);
  }

private:
  ::v2x_msg::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_timeconfidence
{
public:
  explicit Init_FullPositionVector_timeconfidence(::v2x_msg::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  Init_FullPositionVector_posconfidence timeconfidence(::v2x_msg::msg::FullPositionVector::_timeconfidence_type arg)
  {
    msg_.timeconfidence = std::move(arg);
    return Init_FullPositionVector_posconfidence(msg_);
  }

private:
  ::v2x_msg::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_posaccuracy
{
public:
  explicit Init_FullPositionVector_posaccuracy(::v2x_msg::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  Init_FullPositionVector_timeconfidence posaccuracy(::v2x_msg::msg::FullPositionVector::_posaccuracy_type arg)
  {
    msg_.posaccuracy = std::move(arg);
    return Init_FullPositionVector_timeconfidence(msg_);
  }

private:
  ::v2x_msg::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_speed
{
public:
  explicit Init_FullPositionVector_speed(::v2x_msg::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  Init_FullPositionVector_posaccuracy speed(::v2x_msg::msg::FullPositionVector::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_FullPositionVector_posaccuracy(msg_);
  }

private:
  ::v2x_msg::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_heading
{
public:
  explicit Init_FullPositionVector_heading(::v2x_msg::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  Init_FullPositionVector_speed heading(::v2x_msg::msg::FullPositionVector::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_FullPositionVector_speed(msg_);
  }

private:
  ::v2x_msg::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_elevation
{
public:
  explicit Init_FullPositionVector_elevation(::v2x_msg::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  Init_FullPositionVector_heading elevation(::v2x_msg::msg::FullPositionVector::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_FullPositionVector_heading(msg_);
  }

private:
  ::v2x_msg::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_lat
{
public:
  explicit Init_FullPositionVector_lat(::v2x_msg::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  Init_FullPositionVector_elevation lat(::v2x_msg::msg::FullPositionVector::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_FullPositionVector_elevation(msg_);
  }

private:
  ::v2x_msg::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_longitude
{
public:
  explicit Init_FullPositionVector_longitude(::v2x_msg::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  Init_FullPositionVector_lat longitude(::v2x_msg::msg::FullPositionVector::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_FullPositionVector_lat(msg_);
  }

private:
  ::v2x_msg::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_utctime
{
public:
  Init_FullPositionVector_utctime()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FullPositionVector_longitude utctime(::v2x_msg::msg::FullPositionVector::_utctime_type arg)
  {
    msg_.utctime = std::move(arg);
    return Init_FullPositionVector_longitude(msg_);
  }

private:
  ::v2x_msg::msg::FullPositionVector msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::FullPositionVector>()
{
  return v2x_msg::msg::builder::Init_FullPositionVector_utctime();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__FULL_POSITION_VECTOR__BUILDER_HPP_
