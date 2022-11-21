// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/AdvisorySpeed.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ADVISORY_SPEED__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__ADVISORY_SPEED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__AdvisorySpeed __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__AdvisorySpeed __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AdvisorySpeed_
{
  using Type = AdvisorySpeed_<ContainerAllocator>;

  explicit AdvisorySpeed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0ll;
      this->speed = 0ll;
      this->confidence = 0ll;
      this->zonelength = 0ll;
      this->restrictionclassid = 0ll;
    }
  }

  explicit AdvisorySpeed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0ll;
      this->speed = 0ll;
      this->confidence = 0ll;
      this->zonelength = 0ll;
      this->restrictionclassid = 0ll;
    }
  }

  // field types and members
  using _type_type =
    int64_t;
  _type_type type;
  using _speed_type =
    int64_t;
  _speed_type speed;
  using _confidence_type =
    int64_t;
  _confidence_type confidence;
  using _zonelength_type =
    int64_t;
  _zonelength_type zonelength;
  using _restrictionclassid_type =
    int64_t;
  _restrictionclassid_type restrictionclassid;

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
  Type & set__confidence(
    const int64_t & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__zonelength(
    const int64_t & _arg)
  {
    this->zonelength = _arg;
    return *this;
  }
  Type & set__restrictionclassid(
    const int64_t & _arg)
  {
    this->restrictionclassid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::AdvisorySpeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::AdvisorySpeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::AdvisorySpeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::AdvisorySpeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::AdvisorySpeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::AdvisorySpeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::AdvisorySpeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::AdvisorySpeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::AdvisorySpeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::AdvisorySpeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__AdvisorySpeed
    std::shared_ptr<v2x_msg::msg::AdvisorySpeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__AdvisorySpeed
    std::shared_ptr<v2x_msg::msg::AdvisorySpeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AdvisorySpeed_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->zonelength != other.zonelength) {
      return false;
    }
    if (this->restrictionclassid != other.restrictionclassid) {
      return false;
    }
    return true;
  }
  bool operator!=(const AdvisorySpeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AdvisorySpeed_

// alias to use template instance with default allocator
using AdvisorySpeed =
  v2x_msg::msg::AdvisorySpeed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ADVISORY_SPEED__STRUCT_HPP_
