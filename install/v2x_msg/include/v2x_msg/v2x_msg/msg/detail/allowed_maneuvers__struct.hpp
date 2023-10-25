// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/AllowedManeuvers.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ALLOWED_MANEUVERS__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__ALLOWED_MANEUVERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__AllowedManeuvers __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__AllowedManeuvers __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AllowedManeuvers_
{
  using Type = AllowedManeuvers_<ContainerAllocator>;

  explicit AllowedManeuvers_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->maneuverstraightallowed = 0ll;
      this->maneuverleftallowed = 0ll;
      this->maneuverrightallowed = 0ll;
      this->maneuveruturnallowed = 0ll;
      this->maneuverleftturnonredallowed = 0ll;
      this->maneverrightturnonredallowed = 0ll;
      this->maneuverlanechangeallowed = 0ll;
      this->maneuvernostoppingallowed = 0ll;
      this->yieldallwaysrequired = 0ll;
      this->gowithhalt = 0ll;
      this->caution = 0ll;
      this->reserved1 = 0ll;
    }
  }

  explicit AllowedManeuvers_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->maneuverstraightallowed = 0ll;
      this->maneuverleftallowed = 0ll;
      this->maneuverrightallowed = 0ll;
      this->maneuveruturnallowed = 0ll;
      this->maneuverleftturnonredallowed = 0ll;
      this->maneverrightturnonredallowed = 0ll;
      this->maneuverlanechangeallowed = 0ll;
      this->maneuvernostoppingallowed = 0ll;
      this->yieldallwaysrequired = 0ll;
      this->gowithhalt = 0ll;
      this->caution = 0ll;
      this->reserved1 = 0ll;
    }
  }

  // field types and members
  using _maneuverstraightallowed_type =
    int64_t;
  _maneuverstraightallowed_type maneuverstraightallowed;
  using _maneuverleftallowed_type =
    int64_t;
  _maneuverleftallowed_type maneuverleftallowed;
  using _maneuverrightallowed_type =
    int64_t;
  _maneuverrightallowed_type maneuverrightallowed;
  using _maneuveruturnallowed_type =
    int64_t;
  _maneuveruturnallowed_type maneuveruturnallowed;
  using _maneuverleftturnonredallowed_type =
    int64_t;
  _maneuverleftturnonredallowed_type maneuverleftturnonredallowed;
  using _maneverrightturnonredallowed_type =
    int64_t;
  _maneverrightturnonredallowed_type maneverrightturnonredallowed;
  using _maneuverlanechangeallowed_type =
    int64_t;
  _maneuverlanechangeallowed_type maneuverlanechangeallowed;
  using _maneuvernostoppingallowed_type =
    int64_t;
  _maneuvernostoppingallowed_type maneuvernostoppingallowed;
  using _yieldallwaysrequired_type =
    int64_t;
  _yieldallwaysrequired_type yieldallwaysrequired;
  using _gowithhalt_type =
    int64_t;
  _gowithhalt_type gowithhalt;
  using _caution_type =
    int64_t;
  _caution_type caution;
  using _reserved1_type =
    int64_t;
  _reserved1_type reserved1;

  // setters for named parameter idiom
  Type & set__maneuverstraightallowed(
    const int64_t & _arg)
  {
    this->maneuverstraightallowed = _arg;
    return *this;
  }
  Type & set__maneuverleftallowed(
    const int64_t & _arg)
  {
    this->maneuverleftallowed = _arg;
    return *this;
  }
  Type & set__maneuverrightallowed(
    const int64_t & _arg)
  {
    this->maneuverrightallowed = _arg;
    return *this;
  }
  Type & set__maneuveruturnallowed(
    const int64_t & _arg)
  {
    this->maneuveruturnallowed = _arg;
    return *this;
  }
  Type & set__maneuverleftturnonredallowed(
    const int64_t & _arg)
  {
    this->maneuverleftturnonredallowed = _arg;
    return *this;
  }
  Type & set__maneverrightturnonredallowed(
    const int64_t & _arg)
  {
    this->maneverrightturnonredallowed = _arg;
    return *this;
  }
  Type & set__maneuverlanechangeallowed(
    const int64_t & _arg)
  {
    this->maneuverlanechangeallowed = _arg;
    return *this;
  }
  Type & set__maneuvernostoppingallowed(
    const int64_t & _arg)
  {
    this->maneuvernostoppingallowed = _arg;
    return *this;
  }
  Type & set__yieldallwaysrequired(
    const int64_t & _arg)
  {
    this->yieldallwaysrequired = _arg;
    return *this;
  }
  Type & set__gowithhalt(
    const int64_t & _arg)
  {
    this->gowithhalt = _arg;
    return *this;
  }
  Type & set__caution(
    const int64_t & _arg)
  {
    this->caution = _arg;
    return *this;
  }
  Type & set__reserved1(
    const int64_t & _arg)
  {
    this->reserved1 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::AllowedManeuvers_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::AllowedManeuvers_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::AllowedManeuvers_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::AllowedManeuvers_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::AllowedManeuvers_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::AllowedManeuvers_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::AllowedManeuvers_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::AllowedManeuvers_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::AllowedManeuvers_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::AllowedManeuvers_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__AllowedManeuvers
    std::shared_ptr<v2x_msg::msg::AllowedManeuvers_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__AllowedManeuvers
    std::shared_ptr<v2x_msg::msg::AllowedManeuvers_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AllowedManeuvers_ & other) const
  {
    if (this->maneuverstraightallowed != other.maneuverstraightallowed) {
      return false;
    }
    if (this->maneuverleftallowed != other.maneuverleftallowed) {
      return false;
    }
    if (this->maneuverrightallowed != other.maneuverrightallowed) {
      return false;
    }
    if (this->maneuveruturnallowed != other.maneuveruturnallowed) {
      return false;
    }
    if (this->maneuverleftturnonredallowed != other.maneuverleftturnonredallowed) {
      return false;
    }
    if (this->maneverrightturnonredallowed != other.maneverrightturnonredallowed) {
      return false;
    }
    if (this->maneuverlanechangeallowed != other.maneuverlanechangeallowed) {
      return false;
    }
    if (this->maneuvernostoppingallowed != other.maneuvernostoppingallowed) {
      return false;
    }
    if (this->yieldallwaysrequired != other.yieldallwaysrequired) {
      return false;
    }
    if (this->gowithhalt != other.gowithhalt) {
      return false;
    }
    if (this->caution != other.caution) {
      return false;
    }
    if (this->reserved1 != other.reserved1) {
      return false;
    }
    return true;
  }
  bool operator!=(const AllowedManeuvers_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AllowedManeuvers_

// alias to use template instance with default allocator
using AllowedManeuvers =
  v2x_msg::msg::AllowedManeuvers_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ALLOWED_MANEUVERS__STRUCT_HPP_
