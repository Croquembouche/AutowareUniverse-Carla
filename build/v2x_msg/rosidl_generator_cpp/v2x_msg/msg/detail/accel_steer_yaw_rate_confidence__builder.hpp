// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/AccelSteerYawRateConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ACCEL_STEER_YAW_RATE_CONFIDENCE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__ACCEL_STEER_YAW_RATE_CONFIDENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/accel_steer_yaw_rate_confidence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_AccelSteerYawRateConfidence_steeringwheelangle
{
public:
  explicit Init_AccelSteerYawRateConfidence_steeringwheelangle(::v2x_msg::msg::AccelSteerYawRateConfidence & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::AccelSteerYawRateConfidence steeringwheelangle(::v2x_msg::msg::AccelSteerYawRateConfidence::_steeringwheelangle_type arg)
  {
    msg_.steeringwheelangle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::AccelSteerYawRateConfidence msg_;
};

class Init_AccelSteerYawRateConfidence_acceleration
{
public:
  explicit Init_AccelSteerYawRateConfidence_acceleration(::v2x_msg::msg::AccelSteerYawRateConfidence & msg)
  : msg_(msg)
  {}
  Init_AccelSteerYawRateConfidence_steeringwheelangle acceleration(::v2x_msg::msg::AccelSteerYawRateConfidence::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_AccelSteerYawRateConfidence_steeringwheelangle(msg_);
  }

private:
  ::v2x_msg::msg::AccelSteerYawRateConfidence msg_;
};

class Init_AccelSteerYawRateConfidence_yawrate
{
public:
  Init_AccelSteerYawRateConfidence_yawrate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccelSteerYawRateConfidence_acceleration yawrate(::v2x_msg::msg::AccelSteerYawRateConfidence::_yawrate_type arg)
  {
    msg_.yawrate = std::move(arg);
    return Init_AccelSteerYawRateConfidence_acceleration(msg_);
  }

private:
  ::v2x_msg::msg::AccelSteerYawRateConfidence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::AccelSteerYawRateConfidence>()
{
  return v2x_msg::msg::builder::Init_AccelSteerYawRateConfidence_yawrate();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ACCEL_STEER_YAW_RATE_CONFIDENCE__BUILDER_HPP_
