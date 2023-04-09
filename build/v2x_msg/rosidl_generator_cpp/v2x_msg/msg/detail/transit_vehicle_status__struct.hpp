// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/TransitVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TRANSIT_VEHICLE_STATUS__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__TRANSIT_VEHICLE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__TransitVehicleStatus __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__TransitVehicleStatus __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TransitVehicleStatus_
{
  using Type = TransitVehicleStatus_<ContainerAllocator>;

  explicit TransitVehicleStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->loading = 0ll;
      this->anadause = 0ll;
      this->abikeload = 0ll;
      this->dooropen = 0ll;
      this->charging = 0ll;
      this->atstopline = 0ll;
    }
  }

  explicit TransitVehicleStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->loading = 0ll;
      this->anadause = 0ll;
      this->abikeload = 0ll;
      this->dooropen = 0ll;
      this->charging = 0ll;
      this->atstopline = 0ll;
    }
  }

  // field types and members
  using _loading_type =
    int64_t;
  _loading_type loading;
  using _anadause_type =
    int64_t;
  _anadause_type anadause;
  using _abikeload_type =
    int64_t;
  _abikeload_type abikeload;
  using _dooropen_type =
    int64_t;
  _dooropen_type dooropen;
  using _charging_type =
    int64_t;
  _charging_type charging;
  using _atstopline_type =
    int64_t;
  _atstopline_type atstopline;

  // setters for named parameter idiom
  Type & set__loading(
    const int64_t & _arg)
  {
    this->loading = _arg;
    return *this;
  }
  Type & set__anadause(
    const int64_t & _arg)
  {
    this->anadause = _arg;
    return *this;
  }
  Type & set__abikeload(
    const int64_t & _arg)
  {
    this->abikeload = _arg;
    return *this;
  }
  Type & set__dooropen(
    const int64_t & _arg)
  {
    this->dooropen = _arg;
    return *this;
  }
  Type & set__charging(
    const int64_t & _arg)
  {
    this->charging = _arg;
    return *this;
  }
  Type & set__atstopline(
    const int64_t & _arg)
  {
    this->atstopline = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::TransitVehicleStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::TransitVehicleStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::TransitVehicleStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::TransitVehicleStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::TransitVehicleStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::TransitVehicleStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::TransitVehicleStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::TransitVehicleStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::TransitVehicleStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::TransitVehicleStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__TransitVehicleStatus
    std::shared_ptr<v2x_msg::msg::TransitVehicleStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__TransitVehicleStatus
    std::shared_ptr<v2x_msg::msg::TransitVehicleStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TransitVehicleStatus_ & other) const
  {
    if (this->loading != other.loading) {
      return false;
    }
    if (this->anadause != other.anadause) {
      return false;
    }
    if (this->abikeload != other.abikeload) {
      return false;
    }
    if (this->dooropen != other.dooropen) {
      return false;
    }
    if (this->charging != other.charging) {
      return false;
    }
    if (this->atstopline != other.atstopline) {
      return false;
    }
    return true;
  }
  bool operator!=(const TransitVehicleStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TransitVehicleStatus_

// alias to use template instance with default allocator
using TransitVehicleStatus =
  v2x_msg::msg::TransitVehicleStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__TRANSIT_VEHICLE_STATUS__STRUCT_HPP_
