// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/BumperHeights.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__BUMPER_HEIGHTS__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__BUMPER_HEIGHTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__BumperHeights __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__BumperHeights __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BumperHeights_
{
  using Type = BumperHeights_<ContainerAllocator>;

  explicit BumperHeights_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front = 0ll;
      this->rear = 0ll;
    }
  }

  explicit BumperHeights_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front = 0ll;
      this->rear = 0ll;
    }
  }

  // field types and members
  using _front_type =
    int64_t;
  _front_type front;
  using _rear_type =
    int64_t;
  _rear_type rear;

  // setters for named parameter idiom
  Type & set__front(
    const int64_t & _arg)
  {
    this->front = _arg;
    return *this;
  }
  Type & set__rear(
    const int64_t & _arg)
  {
    this->rear = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::BumperHeights_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::BumperHeights_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::BumperHeights_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::BumperHeights_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::BumperHeights_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::BumperHeights_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::BumperHeights_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::BumperHeights_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::BumperHeights_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::BumperHeights_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__BumperHeights
    std::shared_ptr<v2x_msg::msg::BumperHeights_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__BumperHeights
    std::shared_ptr<v2x_msg::msg::BumperHeights_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BumperHeights_ & other) const
  {
    if (this->front != other.front) {
      return false;
    }
    if (this->rear != other.rear) {
      return false;
    }
    return true;
  }
  bool operator!=(const BumperHeights_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BumperHeights_

// alias to use template instance with default allocator
using BumperHeights =
  v2x_msg::msg::BumperHeights_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__BUMPER_HEIGHTS__STRUCT_HPP_
