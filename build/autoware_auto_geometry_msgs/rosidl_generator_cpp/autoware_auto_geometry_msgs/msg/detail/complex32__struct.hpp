// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_geometry_msgs:msg/Complex32.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__COMPLEX32__STRUCT_HPP_
#define AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__COMPLEX32__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autoware_auto_geometry_msgs__msg__Complex32 __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_geometry_msgs__msg__Complex32 __declspec(deprecated)
#endif

namespace autoware_auto_geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Complex32_
{
  using Type = Complex32_<ContainerAllocator>;

  explicit Complex32_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->real = 1.0f;
      this->imag = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->real = 0.0f;
      this->imag = 0.0f;
    }
  }

  explicit Complex32_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->real = 1.0f;
      this->imag = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->real = 0.0f;
      this->imag = 0.0f;
    }
  }

  // field types and members
  using _real_type =
    float;
  _real_type real;
  using _imag_type =
    float;
  _imag_type imag;

  // setters for named parameter idiom
  Type & set__real(
    const float & _arg)
  {
    this->real = _arg;
    return *this;
  }
  Type & set__imag(
    const float & _arg)
  {
    this->imag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_geometry_msgs::msg::Complex32_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_geometry_msgs::msg::Complex32_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_geometry_msgs::msg::Complex32_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_geometry_msgs::msg::Complex32_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_geometry_msgs::msg::Complex32_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_geometry_msgs::msg::Complex32_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_geometry_msgs::msg::Complex32_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_geometry_msgs::msg::Complex32_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_geometry_msgs::msg::Complex32_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_geometry_msgs::msg::Complex32_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_geometry_msgs__msg__Complex32
    std::shared_ptr<autoware_auto_geometry_msgs::msg::Complex32_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_geometry_msgs__msg__Complex32
    std::shared_ptr<autoware_auto_geometry_msgs::msg::Complex32_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Complex32_ & other) const
  {
    if (this->real != other.real) {
      return false;
    }
    if (this->imag != other.imag) {
      return false;
    }
    return true;
  }
  bool operator!=(const Complex32_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Complex32_

// alias to use template instance with default allocator
using Complex32 =
  autoware_auto_geometry_msgs::msg::Complex32_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_geometry_msgs

#endif  // AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__COMPLEX32__STRUCT_HPP_
