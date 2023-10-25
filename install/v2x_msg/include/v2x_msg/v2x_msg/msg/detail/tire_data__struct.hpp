// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/TireData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TIRE_DATA__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__TIRE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__TireData __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__TireData __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TireData_
{
  using Type = TireData_<ContainerAllocator>;

  explicit TireData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->location = 0ll;
      this->pressure = 0ll;
      this->temp = 0ll;
      this->wheelsensorstatus = 0ll;
      this->wheelendelectfault = 0ll;
      this->leakagerate = 0ll;
      this->detection = 0ll;
    }
  }

  explicit TireData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->location = 0ll;
      this->pressure = 0ll;
      this->temp = 0ll;
      this->wheelsensorstatus = 0ll;
      this->wheelendelectfault = 0ll;
      this->leakagerate = 0ll;
      this->detection = 0ll;
    }
  }

  // field types and members
  using _location_type =
    int64_t;
  _location_type location;
  using _pressure_type =
    int64_t;
  _pressure_type pressure;
  using _temp_type =
    int64_t;
  _temp_type temp;
  using _wheelsensorstatus_type =
    int64_t;
  _wheelsensorstatus_type wheelsensorstatus;
  using _wheelendelectfault_type =
    int64_t;
  _wheelendelectfault_type wheelendelectfault;
  using _leakagerate_type =
    int64_t;
  _leakagerate_type leakagerate;
  using _detection_type =
    int64_t;
  _detection_type detection;

  // setters for named parameter idiom
  Type & set__location(
    const int64_t & _arg)
  {
    this->location = _arg;
    return *this;
  }
  Type & set__pressure(
    const int64_t & _arg)
  {
    this->pressure = _arg;
    return *this;
  }
  Type & set__temp(
    const int64_t & _arg)
  {
    this->temp = _arg;
    return *this;
  }
  Type & set__wheelsensorstatus(
    const int64_t & _arg)
  {
    this->wheelsensorstatus = _arg;
    return *this;
  }
  Type & set__wheelendelectfault(
    const int64_t & _arg)
  {
    this->wheelendelectfault = _arg;
    return *this;
  }
  Type & set__leakagerate(
    const int64_t & _arg)
  {
    this->leakagerate = _arg;
    return *this;
  }
  Type & set__detection(
    const int64_t & _arg)
  {
    this->detection = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::TireData_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::TireData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::TireData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::TireData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::TireData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::TireData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::TireData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::TireData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::TireData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::TireData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__TireData
    std::shared_ptr<v2x_msg::msg::TireData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__TireData
    std::shared_ptr<v2x_msg::msg::TireData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TireData_ & other) const
  {
    if (this->location != other.location) {
      return false;
    }
    if (this->pressure != other.pressure) {
      return false;
    }
    if (this->temp != other.temp) {
      return false;
    }
    if (this->wheelsensorstatus != other.wheelsensorstatus) {
      return false;
    }
    if (this->wheelendelectfault != other.wheelendelectfault) {
      return false;
    }
    if (this->leakagerate != other.leakagerate) {
      return false;
    }
    if (this->detection != other.detection) {
      return false;
    }
    return true;
  }
  bool operator!=(const TireData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TireData_

// alias to use template instance with default allocator
using TireData =
  v2x_msg::msg::TireData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__TIRE_DATA__STRUCT_HPP_
