// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/SpeedLimit.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SPEED_LIMIT__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__SPEED_LIMIT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__SpeedLimit __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__SpeedLimit __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeedLimit_
{
  using Type = SpeedLimit_<ContainerAllocator>;

  explicit SpeedLimit_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0ll;
      this->speed = 0ll;
    }
  }

  explicit SpeedLimit_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0ll;
      this->speed = 0ll;
    }
  }

  // field types and members
  using _type_type =
    int64_t;
  _type_type type;
  using _speed_type =
    int64_t;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__type(
    const int64_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__speed(
    const int64_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::SpeedLimit_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::SpeedLimit_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::SpeedLimit_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::SpeedLimit_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SpeedLimit_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SpeedLimit_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SpeedLimit_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SpeedLimit_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::SpeedLimit_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::SpeedLimit_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__SpeedLimit
    std::shared_ptr<v2x_msg::msg::SpeedLimit_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__SpeedLimit
    std::shared_ptr<v2x_msg::msg::SpeedLimit_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedLimit_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedLimit_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedLimit_

// alias to use template instance with default allocator
using SpeedLimit =
  v2x_msg::msg::SpeedLimit_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SPEED_LIMIT__STRUCT_HPP_
