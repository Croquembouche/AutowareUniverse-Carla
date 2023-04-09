// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/vehicle_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_VehicleStatus_gnssstatus
{
public:
  explicit Init_VehicleStatus_gnssstatus(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::VehicleStatus gnssstatus(::v2x_msg::msg::VehicleStatus::_gnssstatus_type arg)
  {
    msg_.gnssstatus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_weatherreport
{
public:
  explicit Init_VehicleStatus_weatherreport(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_gnssstatus weatherreport(::v2x_msg::msg::VehicleStatus::_weatherreport_type arg)
  {
    msg_.weatherreport = std::move(arg);
    return Init_VehicleStatus_gnssstatus(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_j1939data
{
public:
  explicit Init_VehicleStatus_j1939data(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_weatherreport j1939data(::v2x_msg::msg::VehicleStatus::_j1939data_type arg)
  {
    msg_.j1939data = std::move(arg);
    return Init_VehicleStatus_weatherreport(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_vehicleident
{
public:
  explicit Init_VehicleStatus_vehicleident(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_j1939data vehicleident(::v2x_msg::msg::VehicleStatus::_vehicleident_type arg)
  {
    msg_.vehicleident = std::move(arg);
    return Init_VehicleStatus_j1939data(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_vehicledata
{
public:
  explicit Init_VehicleStatus_vehicledata(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_vehicleident vehicledata(::v2x_msg::msg::VehicleStatus::_vehicledata_type arg)
  {
    msg_.vehicledata = std::move(arg);
    return Init_VehicleStatus_vehicleident(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_speedc
{
public:
  explicit Init_VehicleStatus_speedc(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_vehicledata speedc(::v2x_msg::msg::VehicleStatus::_speedc_type arg)
  {
    msg_.speedc = std::move(arg);
    return Init_VehicleStatus_vehicledata(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_speedheadc
{
public:
  explicit Init_VehicleStatus_speedheadc(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_speedc speedheadc(::v2x_msg::msg::VehicleStatus::_speedheadc_type arg)
  {
    msg_.speedheadc = std::move(arg);
    return Init_VehicleStatus_speedc(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_throttlepos
{
public:
  explicit Init_VehicleStatus_throttlepos(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_speedheadc throttlepos(::v2x_msg::msg::VehicleStatus::_throttlepos_type arg)
  {
    msg_.throttlepos = std::move(arg);
    return Init_VehicleStatus_speedheadc(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_fullpos
{
public:
  explicit Init_VehicleStatus_fullpos(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_throttlepos fullpos(::v2x_msg::msg::VehicleStatus::_fullpos_type arg)
  {
    msg_.fullpos = std::move(arg);
    return Init_VehicleStatus_throttlepos(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_object
{
public:
  explicit Init_VehicleStatus_object(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_fullpos object(::v2x_msg::msg::VehicleStatus::_object_type arg)
  {
    msg_.object = std::move(arg);
    return Init_VehicleStatus_fullpos(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_accelsets
{
public:
  explicit Init_VehicleStatus_accelsets(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_object accelsets(::v2x_msg::msg::VehicleStatus::_accelsets_type arg)
  {
    msg_.accelsets = std::move(arg);
    return Init_VehicleStatus_object(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_steering
{
public:
  explicit Init_VehicleStatus_steering(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_accelsets steering(::v2x_msg::msg::VehicleStatus::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_VehicleStatus_accelsets(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_airpres
{
public:
  explicit Init_VehicleStatus_airpres(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_steering airpres(::v2x_msg::msg::VehicleStatus::_airpres_type arg)
  {
    msg_.airpres = std::move(arg);
    return Init_VehicleStatus_steering(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_airtemp
{
public:
  explicit Init_VehicleStatus_airtemp(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_airpres airtemp(::v2x_msg::msg::VehicleStatus::_airtemp_type arg)
  {
    msg_.airtemp = std::move(arg);
    return Init_VehicleStatus_airpres(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_raindata
{
public:
  explicit Init_VehicleStatus_raindata(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_airtemp raindata(::v2x_msg::msg::VehicleStatus::_raindata_type arg)
  {
    msg_.raindata = std::move(arg);
    return Init_VehicleStatus_airtemp(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_sundata
{
public:
  explicit Init_VehicleStatus_sundata(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_raindata sundata(::v2x_msg::msg::VehicleStatus::_sundata_type arg)
  {
    msg_.sundata = std::move(arg);
    return Init_VehicleStatus_raindata(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_roadfriction
{
public:
  explicit Init_VehicleStatus_roadfriction(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_sundata roadfriction(::v2x_msg::msg::VehicleStatus::_roadfriction_type arg)
  {
    msg_.roadfriction = std::move(arg);
    return Init_VehicleStatus_sundata(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_brakestatus
{
public:
  explicit Init_VehicleStatus_brakestatus(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_roadfriction brakestatus(::v2x_msg::msg::VehicleStatus::_brakestatus_type arg)
  {
    msg_.brakestatus = std::move(arg);
    return Init_VehicleStatus_roadfriction(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_wipers
{
public:
  explicit Init_VehicleStatus_wipers(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_brakestatus wipers(::v2x_msg::msg::VehicleStatus::_wipers_type arg)
  {
    msg_.wipers = std::move(arg);
    return Init_VehicleStatus_brakestatus(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_lightbar
{
public:
  explicit Init_VehicleStatus_lightbar(::v2x_msg::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_wipers lightbar(::v2x_msg::msg::VehicleStatus::_lightbar_type arg)
  {
    msg_.lightbar = std::move(arg);
    return Init_VehicleStatus_wipers(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_lights
{
public:
  Init_VehicleStatus_lights()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStatus_lightbar lights(::v2x_msg::msg::VehicleStatus::_lights_type arg)
  {
    msg_.lights = std::move(arg);
    return Init_VehicleStatus_lightbar(msg_);
  }

private:
  ::v2x_msg::msg::VehicleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::VehicleStatus>()
{
  return v2x_msg::msg::builder::Init_VehicleStatus_lights();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_
