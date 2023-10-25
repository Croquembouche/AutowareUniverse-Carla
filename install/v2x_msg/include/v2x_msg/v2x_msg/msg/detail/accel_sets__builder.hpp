// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/AccelSets.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ACCEL_SETS__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__ACCEL_SETS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/accel_sets__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_AccelSets_confidenceset
{
public:
  explicit Init_AccelSets_confidenceset(::v2x_msg::msg::AccelSets & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::AccelSets confidenceset(::v2x_msg::msg::AccelSets::_confidenceset_type arg)
  {
    msg_.confidenceset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::AccelSets msg_;
};

class Init_AccelSets_hozaccelcon
{
public:
  explicit Init_AccelSets_hozaccelcon(::v2x_msg::msg::AccelSets & msg)
  : msg_(msg)
  {}
  Init_AccelSets_confidenceset hozaccelcon(::v2x_msg::msg::AccelSets::_hozaccelcon_type arg)
  {
    msg_.hozaccelcon = std::move(arg);
    return Init_AccelSets_confidenceset(msg_);
  }

private:
  ::v2x_msg::msg::AccelSets msg_;
};

class Init_AccelSets_yawratecon
{
public:
  explicit Init_AccelSets_yawratecon(::v2x_msg::msg::AccelSets & msg)
  : msg_(msg)
  {}
  Init_AccelSets_hozaccelcon yawratecon(::v2x_msg::msg::AccelSets::_yawratecon_type arg)
  {
    msg_.yawratecon = std::move(arg);
    return Init_AccelSets_hozaccelcon(msg_);
  }

private:
  ::v2x_msg::msg::AccelSets msg_;
};

class Init_AccelSets_certaccelthres
{
public:
  explicit Init_AccelSets_certaccelthres(::v2x_msg::msg::AccelSets & msg)
  : msg_(msg)
  {}
  Init_AccelSets_yawratecon certaccelthres(::v2x_msg::msg::AccelSets::_certaccelthres_type arg)
  {
    msg_.certaccelthres = std::move(arg);
    return Init_AccelSets_yawratecon(msg_);
  }

private:
  ::v2x_msg::msg::AccelSets msg_;
};

class Init_AccelSets_angle
{
public:
  Init_AccelSets_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccelSets_certaccelthres angle(::v2x_msg::msg::AccelSets::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_AccelSets_certaccelthres(msg_);
  }

private:
  ::v2x_msg::msg::AccelSets msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::AccelSets>()
{
  return v2x_msg::msg::builder::Init_AccelSets_angle();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ACCEL_SETS__BUILDER_HPP_
