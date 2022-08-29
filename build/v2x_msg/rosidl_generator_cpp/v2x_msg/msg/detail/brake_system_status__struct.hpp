// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/BrakeSystemStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__BRAKE_SYSTEM_STATUS__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__BRAKE_SYSTEM_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__BrakeSystemStatus __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__BrakeSystemStatus __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BrakeSystemStatus_
{
  using Type = BrakeSystemStatus_<ContainerAllocator>;

  explicit BrakeSystemStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wheelbrakes = "";
      this->traction = 0ll;
      this->abs = 0ll;
      this->scs = 0ll;
      this->brakeboost = 0ll;
      this->auxbrakes = 0ll;
    }
  }

  explicit BrakeSystemStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wheelbrakes(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wheelbrakes = "";
      this->traction = 0ll;
      this->abs = 0ll;
      this->scs = 0ll;
      this->brakeboost = 0ll;
      this->auxbrakes = 0ll;
    }
  }

  // field types and members
  using _wheelbrakes_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _wheelbrakes_type wheelbrakes;
  using _traction_type =
    int64_t;
  _traction_type traction;
  using _abs_type =
    int64_t;
  _abs_type abs;
  using _scs_type =
    int64_t;
  _scs_type scs;
  using _brakeboost_type =
    int64_t;
  _brakeboost_type brakeboost;
  using _auxbrakes_type =
    int64_t;
  _auxbrakes_type auxbrakes;

  // setters for named parameter idiom
  Type & set__wheelbrakes(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->wheelbrakes = _arg;
    return *this;
  }
  Type & set__traction(
    const int64_t & _arg)
  {
    this->traction = _arg;
    return *this;
  }
  Type & set__abs(
    const int64_t & _arg)
  {
    this->abs = _arg;
    return *this;
  }
  Type & set__scs(
    const int64_t & _arg)
  {
    this->scs = _arg;
    return *this;
  }
  Type & set__brakeboost(
    const int64_t & _arg)
  {
    this->brakeboost = _arg;
    return *this;
  }
  Type & set__auxbrakes(
    const int64_t & _arg)
  {
    this->auxbrakes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::BrakeSystemStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::BrakeSystemStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::BrakeSystemStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::BrakeSystemStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::BrakeSystemStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::BrakeSystemStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::BrakeSystemStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::BrakeSystemStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::BrakeSystemStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::BrakeSystemStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__BrakeSystemStatus
    std::shared_ptr<v2x_msg::msg::BrakeSystemStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__BrakeSystemStatus
    std::shared_ptr<v2x_msg::msg::BrakeSystemStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BrakeSystemStatus_ & other) const
  {
    if (this->wheelbrakes != other.wheelbrakes) {
      return false;
    }
    if (this->traction != other.traction) {
      return false;
    }
    if (this->abs != other.abs) {
      return false;
    }
    if (this->scs != other.scs) {
      return false;
    }
    if (this->brakeboost != other.brakeboost) {
      return false;
    }
    if (this->auxbrakes != other.auxbrakes) {
      return false;
    }
    return true;
  }
  bool operator!=(const BrakeSystemStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BrakeSystemStatus_

// alias to use template instance with default allocator
using BrakeSystemStatus =
  v2x_msg::msg::BrakeSystemStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__BRAKE_SYSTEM_STATUS__STRUCT_HPP_
