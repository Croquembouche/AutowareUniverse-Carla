// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/GeometricProjection.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__GEOMETRIC_PROJECTION__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__GEOMETRIC_PROJECTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'circle'
#include "v2x_msg/msg/detail/circle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__GeometricProjection __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__GeometricProjection __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeometricProjection_
{
  using Type = GeometricProjection_<ContainerAllocator>;

  explicit GeometricProjection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : circle(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
      this->extent = 0ll;
      this->lanewidth = 0ll;
    }
  }

  explicit GeometricProjection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc),
    circle(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
      this->extent = 0ll;
      this->lanewidth = 0ll;
    }
  }

  // field types and members
  using _direction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _direction_type direction;
  using _extent_type =
    int64_t;
  _extent_type extent;
  using _lanewidth_type =
    int64_t;
  _lanewidth_type lanewidth;
  using _circle_type =
    v2x_msg::msg::Circle_<ContainerAllocator>;
  _circle_type circle;

  // setters for named parameter idiom
  Type & set__direction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__extent(
    const int64_t & _arg)
  {
    this->extent = _arg;
    return *this;
  }
  Type & set__lanewidth(
    const int64_t & _arg)
  {
    this->lanewidth = _arg;
    return *this;
  }
  Type & set__circle(
    const v2x_msg::msg::Circle_<ContainerAllocator> & _arg)
  {
    this->circle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::GeometricProjection_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::GeometricProjection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::GeometricProjection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::GeometricProjection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::GeometricProjection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::GeometricProjection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::GeometricProjection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::GeometricProjection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::GeometricProjection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::GeometricProjection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__GeometricProjection
    std::shared_ptr<v2x_msg::msg::GeometricProjection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__GeometricProjection
    std::shared_ptr<v2x_msg::msg::GeometricProjection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeometricProjection_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    if (this->extent != other.extent) {
      return false;
    }
    if (this->lanewidth != other.lanewidth) {
      return false;
    }
    if (this->circle != other.circle) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeometricProjection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeometricProjection_

// alias to use template instance with default allocator
using GeometricProjection =
  v2x_msg::msg::GeometricProjection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__GEOMETRIC_PROJECTION__STRUCT_HPP_
