// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/VehicleID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_ID__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_ID__BUILDER_HPP_

#include "v2x_msg/msg/detail/vehicle_id__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_VehicleID_stationid
{
public:
  explicit Init_VehicleID_stationid(::v2x_msg::msg::VehicleID & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::VehicleID stationid(::v2x_msg::msg::VehicleID::_stationid_type arg)
  {
    msg_.stationid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::VehicleID msg_;
};

class Init_VehicleID_entityid
{
public:
  Init_VehicleID_entityid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleID_stationid entityid(::v2x_msg::msg::VehicleID::_entityid_type arg)
  {
    msg_.entityid = std::move(arg);
    return Init_VehicleID_stationid(msg_);
  }

private:
  ::v2x_msg::msg::VehicleID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::VehicleID>()
{
  return v2x_msg::msg::builder::Init_VehicleID_entityid();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_ID__BUILDER_HPP_
