// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/PropelledInformation.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PROPELLED_INFORMATION__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__PROPELLED_INFORMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__PropelledInformation __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__PropelledInformation __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PropelledInformation_
{
  using Type = PropelledInformation_<ContainerAllocator>;

  explicit PropelledInformation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->human = 0ll;
      this->animal = 0ll;
      this->motor = 0ll;
    }
  }

  explicit PropelledInformation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->human = 0ll;
      this->animal = 0ll;
      this->motor = 0ll;
    }
  }

  // field types and members
  using _human_type =
    int64_t;
  _human_type human;
  using _animal_type =
    int64_t;
  _animal_type animal;
  using _motor_type =
    int64_t;
  _motor_type motor;

  // setters for named parameter idiom
  Type & set__human(
    const int64_t & _arg)
  {
    this->human = _arg;
    return *this;
  }
  Type & set__animal(
    const int64_t & _arg)
  {
    this->animal = _arg;
    return *this;
  }
  Type & set__motor(
    const int64_t & _arg)
  {
    this->motor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::PropelledInformation_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::PropelledInformation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::PropelledInformation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::PropelledInformation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::PropelledInformation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::PropelledInformation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::PropelledInformation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::PropelledInformation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::PropelledInformation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::PropelledInformation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__PropelledInformation
    std::shared_ptr<v2x_msg::msg::PropelledInformation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__PropelledInformation
    std::shared_ptr<v2x_msg::msg::PropelledInformation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PropelledInformation_ & other) const
  {
    if (this->human != other.human) {
      return false;
    }
    if (this->animal != other.animal) {
      return false;
    }
    if (this->motor != other.motor) {
      return false;
    }
    return true;
  }
  bool operator!=(const PropelledInformation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PropelledInformation_

// alias to use template instance with default allocator
using PropelledInformation =
  v2x_msg::msg::PropelledInformation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__PROPELLED_INFORMATION__STRUCT_HPP_
