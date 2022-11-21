// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/VehicleIdent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_IDENT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_IDENT__BUILDER_HPP_

#include "v2x_msg/msg/detail/vehicle_ident__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_VehicleIdent_vehicleclass
{
public:
  explicit Init_VehicleIdent_vehicleclass(::v2x_msg::msg::VehicleIdent & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::VehicleIdent vehicleclass(::v2x_msg::msg::VehicleIdent::_vehicleclass_type arg)
  {
    msg_.vehicleclass = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::VehicleIdent msg_;
};

class Init_VehicleIdent_vehicletype
{
public:
  explicit Init_VehicleIdent_vehicletype(::v2x_msg::msg::VehicleIdent & msg)
  : msg_(msg)
  {}
  Init_VehicleIdent_vehicleclass vehicletype(::v2x_msg::msg::VehicleIdent::_vehicletype_type arg)
  {
    msg_.vehicletype = std::move(arg);
    return Init_VehicleIdent_vehicleclass(msg_);
  }

private:
  ::v2x_msg::msg::VehicleIdent msg_;
};

class Init_VehicleIdent_id
{
public:
  explicit Init_VehicleIdent_id(::v2x_msg::msg::VehicleIdent & msg)
  : msg_(msg)
  {}
  Init_VehicleIdent_vehicletype id(::v2x_msg::msg::VehicleIdent::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_VehicleIdent_vehicletype(msg_);
  }

private:
  ::v2x_msg::msg::VehicleIdent msg_;
};

class Init_VehicleIdent_ownercode
{
public:
  explicit Init_VehicleIdent_ownercode(::v2x_msg::msg::VehicleIdent & msg)
  : msg_(msg)
  {}
  Init_VehicleIdent_id ownercode(::v2x_msg::msg::VehicleIdent::_ownercode_type arg)
  {
    msg_.ownercode = std::move(arg);
    return Init_VehicleIdent_id(msg_);
  }

private:
  ::v2x_msg::msg::VehicleIdent msg_;
};

class Init_VehicleIdent_vin
{
public:
  explicit Init_VehicleIdent_vin(::v2x_msg::msg::VehicleIdent & msg)
  : msg_(msg)
  {}
  Init_VehicleIdent_ownercode vin(::v2x_msg::msg::VehicleIdent::_vin_type arg)
  {
    msg_.vin = std::move(arg);
    return Init_VehicleIdent_ownercode(msg_);
  }

private:
  ::v2x_msg::msg::VehicleIdent msg_;
};

class Init_VehicleIdent_name
{
public:
  Init_VehicleIdent_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleIdent_vin name(::v2x_msg::msg::VehicleIdent::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_VehicleIdent_vin(msg_);
  }

private:
  ::v2x_msg::msg::VehicleIdent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::VehicleIdent>()
{
  return v2x_msg::msg::builder::Init_VehicleIdent_name();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_IDENT__BUILDER_HPP_
