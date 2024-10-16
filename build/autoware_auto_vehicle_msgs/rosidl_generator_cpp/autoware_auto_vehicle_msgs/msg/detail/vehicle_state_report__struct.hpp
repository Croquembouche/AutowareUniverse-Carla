// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/VehicleStateReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_STATE_REPORT__STRUCT_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_STATE_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_vehicle_msgs__msg__VehicleStateReport __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_vehicle_msgs__msg__VehicleStateReport __declspec(deprecated)
#endif

namespace autoware_auto_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleStateReport_
{
  using Type = VehicleStateReport_<ContainerAllocator>;

  explicit VehicleStateReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fuel = 0;
      this->blinker = 0;
      this->headlight = 0;
      this->wiper = 0;
      this->gear = 0;
      this->mode = 0;
      this->hand_brake = false;
      this->horn = false;
    }
  }

  explicit VehicleStateReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fuel = 0;
      this->blinker = 0;
      this->headlight = 0;
      this->wiper = 0;
      this->gear = 0;
      this->mode = 0;
      this->hand_brake = false;
      this->horn = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _fuel_type =
    uint8_t;
  _fuel_type fuel;
  using _blinker_type =
    uint8_t;
  _blinker_type blinker;
  using _headlight_type =
    uint8_t;
  _headlight_type headlight;
  using _wiper_type =
    uint8_t;
  _wiper_type wiper;
  using _gear_type =
    uint8_t;
  _gear_type gear;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _hand_brake_type =
    bool;
  _hand_brake_type hand_brake;
  using _horn_type =
    bool;
  _horn_type horn;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__fuel(
    const uint8_t & _arg)
  {
    this->fuel = _arg;
    return *this;
  }
  Type & set__blinker(
    const uint8_t & _arg)
  {
    this->blinker = _arg;
    return *this;
  }
  Type & set__headlight(
    const uint8_t & _arg)
  {
    this->headlight = _arg;
    return *this;
  }
  Type & set__wiper(
    const uint8_t & _arg)
  {
    this->wiper = _arg;
    return *this;
  }
  Type & set__gear(
    const uint8_t & _arg)
  {
    this->gear = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__hand_brake(
    const bool & _arg)
  {
    this->hand_brake = _arg;
    return *this;
  }
  Type & set__horn(
    const bool & _arg)
  {
    this->horn = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BLINKER_OFF =
    1u;
  static constexpr uint8_t BLINKER_LEFT =
    2u;
  static constexpr uint8_t BLINKER_RIGHT =
    3u;
  static constexpr uint8_t BLINKER_HAZARD =
    4u;
  static constexpr uint8_t HEADLIGHT_OFF =
    1u;
  static constexpr uint8_t HEADLIGHT_ON =
    2u;
  static constexpr uint8_t HEADLIGHT_HIGH =
    3u;
  static constexpr uint8_t WIPER_OFF =
    1u;
  static constexpr uint8_t WIPER_LOW =
    2u;
  static constexpr uint8_t WIPER_HIGH =
    3u;
  static constexpr uint8_t WIPER_CLEAN =
    14u;
  static constexpr uint8_t GEAR_DRIVE =
    1u;
  static constexpr uint8_t GEAR_REVERSE =
    2u;
  static constexpr uint8_t GEAR_PARK =
    3u;
  static constexpr uint8_t GEAR_LOW =
    4u;
  static constexpr uint8_t GEAR_NEUTRAL =
    5u;
  static constexpr uint8_t MODE_AUTONOMOUS =
    1u;
  static constexpr uint8_t MODE_MANUAL =
    2u;
  static constexpr uint8_t MODE_DISENGAGED =
    3u;
  static constexpr uint8_t MODE_NOT_READY =
    4u;

  // pointer types
  using RawPtr =
    autoware_auto_vehicle_msgs::msg::VehicleStateReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_vehicle_msgs::msg::VehicleStateReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::VehicleStateReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::VehicleStateReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_vehicle_msgs::msg::VehicleStateReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_vehicle_msgs::msg::VehicleStateReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_vehicle_msgs::msg::VehicleStateReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_vehicle_msgs::msg::VehicleStateReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_vehicle_msgs::msg::VehicleStateReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_vehicle_msgs::msg::VehicleStateReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_vehicle_msgs__msg__VehicleStateReport
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::VehicleStateReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_vehicle_msgs__msg__VehicleStateReport
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::VehicleStateReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleStateReport_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->fuel != other.fuel) {
      return false;
    }
    if (this->blinker != other.blinker) {
      return false;
    }
    if (this->headlight != other.headlight) {
      return false;
    }
    if (this->wiper != other.wiper) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->hand_brake != other.hand_brake) {
      return false;
    }
    if (this->horn != other.horn) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleStateReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleStateReport_

// alias to use template instance with default allocator
using VehicleStateReport =
  autoware_auto_vehicle_msgs::msg::VehicleStateReport_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::BLINKER_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::BLINKER_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::BLINKER_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::BLINKER_HAZARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::HEADLIGHT_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::HEADLIGHT_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::HEADLIGHT_HIGH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::WIPER_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::WIPER_LOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::WIPER_HIGH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::WIPER_CLEAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::GEAR_DRIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::GEAR_REVERSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::GEAR_PARK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::GEAR_LOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::GEAR_NEUTRAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::MODE_AUTONOMOUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::MODE_MANUAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::MODE_DISENGAGED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleStateReport_<ContainerAllocator>::MODE_NOT_READY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_STATE_REPORT__STRUCT_HPP_
