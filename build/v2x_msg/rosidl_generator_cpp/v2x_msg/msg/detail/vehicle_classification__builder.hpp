// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/VehicleClassification.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_CLASSIFICATION__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_CLASSIFICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/vehicle_classification__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_VehicleClassification_fueltype
{
public:
  explicit Init_VehicleClassification_fueltype(::v2x_msg::msg::VehicleClassification & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::VehicleClassification fueltype(::v2x_msg::msg::VehicleClassification::_fueltype_type arg)
  {
    msg_.fueltype = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::VehicleClassification msg_;
};

class Init_VehicleClassification_respondertype
{
public:
  explicit Init_VehicleClassification_respondertype(::v2x_msg::msg::VehicleClassification & msg)
  : msg_(msg)
  {}
  Init_VehicleClassification_fueltype respondertype(::v2x_msg::msg::VehicleClassification::_respondertype_type arg)
  {
    msg_.respondertype = std::move(arg);
    return Init_VehicleClassification_fueltype(msg_);
  }

private:
  ::v2x_msg::msg::VehicleClassification msg_;
};

class Init_VehicleClassification_responseequip
{
public:
  explicit Init_VehicleClassification_responseequip(::v2x_msg::msg::VehicleClassification & msg)
  : msg_(msg)
  {}
  Init_VehicleClassification_respondertype responseequip(::v2x_msg::msg::VehicleClassification::_responseequip_type arg)
  {
    msg_.responseequip = std::move(arg);
    return Init_VehicleClassification_respondertype(msg_);
  }

private:
  ::v2x_msg::msg::VehicleClassification msg_;
};

class Init_VehicleClassification_vehicletype
{
public:
  explicit Init_VehicleClassification_vehicletype(::v2x_msg::msg::VehicleClassification & msg)
  : msg_(msg)
  {}
  Init_VehicleClassification_responseequip vehicletype(::v2x_msg::msg::VehicleClassification::_vehicletype_type arg)
  {
    msg_.vehicletype = std::move(arg);
    return Init_VehicleClassification_responseequip(msg_);
  }

private:
  ::v2x_msg::msg::VehicleClassification msg_;
};

class Init_VehicleClassification_hpmstype
{
public:
  explicit Init_VehicleClassification_hpmstype(::v2x_msg::msg::VehicleClassification & msg)
  : msg_(msg)
  {}
  Init_VehicleClassification_vehicletype hpmstype(::v2x_msg::msg::VehicleClassification::_hpmstype_type arg)
  {
    msg_.hpmstype = std::move(arg);
    return Init_VehicleClassification_vehicletype(msg_);
  }

private:
  ::v2x_msg::msg::VehicleClassification msg_;
};

class Init_VehicleClassification_iso3883
{
public:
  explicit Init_VehicleClassification_iso3883(::v2x_msg::msg::VehicleClassification & msg)
  : msg_(msg)
  {}
  Init_VehicleClassification_hpmstype iso3883(::v2x_msg::msg::VehicleClassification::_iso3883_type arg)
  {
    msg_.iso3883 = std::move(arg);
    return Init_VehicleClassification_hpmstype(msg_);
  }

private:
  ::v2x_msg::msg::VehicleClassification msg_;
};

class Init_VehicleClassification_role
{
public:
  explicit Init_VehicleClassification_role(::v2x_msg::msg::VehicleClassification & msg)
  : msg_(msg)
  {}
  Init_VehicleClassification_iso3883 role(::v2x_msg::msg::VehicleClassification::_role_type arg)
  {
    msg_.role = std::move(arg);
    return Init_VehicleClassification_iso3883(msg_);
  }

private:
  ::v2x_msg::msg::VehicleClassification msg_;
};

class Init_VehicleClassification_keytype
{
public:
  Init_VehicleClassification_keytype()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleClassification_role keytype(::v2x_msg::msg::VehicleClassification::_keytype_type arg)
  {
    msg_.keytype = std::move(arg);
    return Init_VehicleClassification_role(msg_);
  }

private:
  ::v2x_msg::msg::VehicleClassification msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::VehicleClassification>()
{
  return v2x_msg::msg::builder::Init_VehicleClassification_keytype();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_CLASSIFICATION__BUILDER_HPP_
