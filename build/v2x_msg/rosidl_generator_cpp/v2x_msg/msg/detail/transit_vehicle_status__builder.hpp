// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/TransitVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TRANSIT_VEHICLE_STATUS__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__TRANSIT_VEHICLE_STATUS__BUILDER_HPP_

#include "v2x_msg/msg/detail/transit_vehicle_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_TransitVehicleStatus_atstopline
{
public:
  explicit Init_TransitVehicleStatus_atstopline(::v2x_msg::msg::TransitVehicleStatus & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::TransitVehicleStatus atstopline(::v2x_msg::msg::TransitVehicleStatus::_atstopline_type arg)
  {
    msg_.atstopline = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::TransitVehicleStatus msg_;
};

class Init_TransitVehicleStatus_charging
{
public:
  explicit Init_TransitVehicleStatus_charging(::v2x_msg::msg::TransitVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_TransitVehicleStatus_atstopline charging(::v2x_msg::msg::TransitVehicleStatus::_charging_type arg)
  {
    msg_.charging = std::move(arg);
    return Init_TransitVehicleStatus_atstopline(msg_);
  }

private:
  ::v2x_msg::msg::TransitVehicleStatus msg_;
};

class Init_TransitVehicleStatus_dooropen
{
public:
  explicit Init_TransitVehicleStatus_dooropen(::v2x_msg::msg::TransitVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_TransitVehicleStatus_charging dooropen(::v2x_msg::msg::TransitVehicleStatus::_dooropen_type arg)
  {
    msg_.dooropen = std::move(arg);
    return Init_TransitVehicleStatus_charging(msg_);
  }

private:
  ::v2x_msg::msg::TransitVehicleStatus msg_;
};

class Init_TransitVehicleStatus_abikeload
{
public:
  explicit Init_TransitVehicleStatus_abikeload(::v2x_msg::msg::TransitVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_TransitVehicleStatus_dooropen abikeload(::v2x_msg::msg::TransitVehicleStatus::_abikeload_type arg)
  {
    msg_.abikeload = std::move(arg);
    return Init_TransitVehicleStatus_dooropen(msg_);
  }

private:
  ::v2x_msg::msg::TransitVehicleStatus msg_;
};

class Init_TransitVehicleStatus_anadause
{
public:
  explicit Init_TransitVehicleStatus_anadause(::v2x_msg::msg::TransitVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_TransitVehicleStatus_abikeload anadause(::v2x_msg::msg::TransitVehicleStatus::_anadause_type arg)
  {
    msg_.anadause = std::move(arg);
    return Init_TransitVehicleStatus_abikeload(msg_);
  }

private:
  ::v2x_msg::msg::TransitVehicleStatus msg_;
};

class Init_TransitVehicleStatus_loading
{
public:
  Init_TransitVehicleStatus_loading()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransitVehicleStatus_anadause loading(::v2x_msg::msg::TransitVehicleStatus::_loading_type arg)
  {
    msg_.loading = std::move(arg);
    return Init_TransitVehicleStatus_anadause(msg_);
  }

private:
  ::v2x_msg::msg::TransitVehicleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::TransitVehicleStatus>()
{
  return v2x_msg::msg::builder::Init_TransitVehicleStatus_loading();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__TRANSIT_VEHICLE_STATUS__BUILDER_HPP_
