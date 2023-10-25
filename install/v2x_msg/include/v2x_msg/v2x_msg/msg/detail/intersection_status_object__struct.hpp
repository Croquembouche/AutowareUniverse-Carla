// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/IntersectionStatusObject.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__IntersectionStatusObject __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__IntersectionStatusObject __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IntersectionStatusObject_
{
  using Type = IntersectionStatusObject_<ContainerAllocator>;

  explicit IntersectionStatusObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manualcontrolisenabled = 0ll;
      this->stoptimeisactivated = 0ll;
      this->failureflash = 0ll;
      this->preemptisactive = 0ll;
      this->signalpriorityisactive = 0ll;
      this->fixedtimeoperation = 0ll;
      this->trafficdependentoperation = 0ll;
      this->standbyoperation = 0ll;
      this->failuremode = 0ll;
      this->off = 0ll;
      this->recentmapmessageupdate = 0ll;
      this->recentchangeinmapassignedlanesidsused = 0ll;
      this->novalidmapisabilableatthistime = 0ll;
      this->nobalidspatisabilableatthistime = 0ll;
      this->reserve14 = 0ll;
      this->reserve15 = 0ll;
    }
  }

  explicit IntersectionStatusObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manualcontrolisenabled = 0ll;
      this->stoptimeisactivated = 0ll;
      this->failureflash = 0ll;
      this->preemptisactive = 0ll;
      this->signalpriorityisactive = 0ll;
      this->fixedtimeoperation = 0ll;
      this->trafficdependentoperation = 0ll;
      this->standbyoperation = 0ll;
      this->failuremode = 0ll;
      this->off = 0ll;
      this->recentmapmessageupdate = 0ll;
      this->recentchangeinmapassignedlanesidsused = 0ll;
      this->novalidmapisabilableatthistime = 0ll;
      this->nobalidspatisabilableatthistime = 0ll;
      this->reserve14 = 0ll;
      this->reserve15 = 0ll;
    }
  }

  // field types and members
  using _manualcontrolisenabled_type =
    int64_t;
  _manualcontrolisenabled_type manualcontrolisenabled;
  using _stoptimeisactivated_type =
    int64_t;
  _stoptimeisactivated_type stoptimeisactivated;
  using _failureflash_type =
    int64_t;
  _failureflash_type failureflash;
  using _preemptisactive_type =
    int64_t;
  _preemptisactive_type preemptisactive;
  using _signalpriorityisactive_type =
    int64_t;
  _signalpriorityisactive_type signalpriorityisactive;
  using _fixedtimeoperation_type =
    int64_t;
  _fixedtimeoperation_type fixedtimeoperation;
  using _trafficdependentoperation_type =
    int64_t;
  _trafficdependentoperation_type trafficdependentoperation;
  using _standbyoperation_type =
    int64_t;
  _standbyoperation_type standbyoperation;
  using _failuremode_type =
    int64_t;
  _failuremode_type failuremode;
  using _off_type =
    int64_t;
  _off_type off;
  using _recentmapmessageupdate_type =
    int64_t;
  _recentmapmessageupdate_type recentmapmessageupdate;
  using _recentchangeinmapassignedlanesidsused_type =
    int64_t;
  _recentchangeinmapassignedlanesidsused_type recentchangeinmapassignedlanesidsused;
  using _novalidmapisabilableatthistime_type =
    int64_t;
  _novalidmapisabilableatthistime_type novalidmapisabilableatthistime;
  using _nobalidspatisabilableatthistime_type =
    int64_t;
  _nobalidspatisabilableatthistime_type nobalidspatisabilableatthistime;
  using _reserve14_type =
    int64_t;
  _reserve14_type reserve14;
  using _reserve15_type =
    int64_t;
  _reserve15_type reserve15;

  // setters for named parameter idiom
  Type & set__manualcontrolisenabled(
    const int64_t & _arg)
  {
    this->manualcontrolisenabled = _arg;
    return *this;
  }
  Type & set__stoptimeisactivated(
    const int64_t & _arg)
  {
    this->stoptimeisactivated = _arg;
    return *this;
  }
  Type & set__failureflash(
    const int64_t & _arg)
  {
    this->failureflash = _arg;
    return *this;
  }
  Type & set__preemptisactive(
    const int64_t & _arg)
  {
    this->preemptisactive = _arg;
    return *this;
  }
  Type & set__signalpriorityisactive(
    const int64_t & _arg)
  {
    this->signalpriorityisactive = _arg;
    return *this;
  }
  Type & set__fixedtimeoperation(
    const int64_t & _arg)
  {
    this->fixedtimeoperation = _arg;
    return *this;
  }
  Type & set__trafficdependentoperation(
    const int64_t & _arg)
  {
    this->trafficdependentoperation = _arg;
    return *this;
  }
  Type & set__standbyoperation(
    const int64_t & _arg)
  {
    this->standbyoperation = _arg;
    return *this;
  }
  Type & set__failuremode(
    const int64_t & _arg)
  {
    this->failuremode = _arg;
    return *this;
  }
  Type & set__off(
    const int64_t & _arg)
  {
    this->off = _arg;
    return *this;
  }
  Type & set__recentmapmessageupdate(
    const int64_t & _arg)
  {
    this->recentmapmessageupdate = _arg;
    return *this;
  }
  Type & set__recentchangeinmapassignedlanesidsused(
    const int64_t & _arg)
  {
    this->recentchangeinmapassignedlanesidsused = _arg;
    return *this;
  }
  Type & set__novalidmapisabilableatthistime(
    const int64_t & _arg)
  {
    this->novalidmapisabilableatthistime = _arg;
    return *this;
  }
  Type & set__nobalidspatisabilableatthistime(
    const int64_t & _arg)
  {
    this->nobalidspatisabilableatthistime = _arg;
    return *this;
  }
  Type & set__reserve14(
    const int64_t & _arg)
  {
    this->reserve14 = _arg;
    return *this;
  }
  Type & set__reserve15(
    const int64_t & _arg)
  {
    this->reserve15 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::IntersectionStatusObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::IntersectionStatusObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::IntersectionStatusObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::IntersectionStatusObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::IntersectionStatusObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::IntersectionStatusObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::IntersectionStatusObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::IntersectionStatusObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::IntersectionStatusObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::IntersectionStatusObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__IntersectionStatusObject
    std::shared_ptr<v2x_msg::msg::IntersectionStatusObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__IntersectionStatusObject
    std::shared_ptr<v2x_msg::msg::IntersectionStatusObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntersectionStatusObject_ & other) const
  {
    if (this->manualcontrolisenabled != other.manualcontrolisenabled) {
      return false;
    }
    if (this->stoptimeisactivated != other.stoptimeisactivated) {
      return false;
    }
    if (this->failureflash != other.failureflash) {
      return false;
    }
    if (this->preemptisactive != other.preemptisactive) {
      return false;
    }
    if (this->signalpriorityisactive != other.signalpriorityisactive) {
      return false;
    }
    if (this->fixedtimeoperation != other.fixedtimeoperation) {
      return false;
    }
    if (this->trafficdependentoperation != other.trafficdependentoperation) {
      return false;
    }
    if (this->standbyoperation != other.standbyoperation) {
      return false;
    }
    if (this->failuremode != other.failuremode) {
      return false;
    }
    if (this->off != other.off) {
      return false;
    }
    if (this->recentmapmessageupdate != other.recentmapmessageupdate) {
      return false;
    }
    if (this->recentchangeinmapassignedlanesidsused != other.recentchangeinmapassignedlanesidsused) {
      return false;
    }
    if (this->novalidmapisabilableatthistime != other.novalidmapisabilableatthistime) {
      return false;
    }
    if (this->nobalidspatisabilableatthistime != other.nobalidspatisabilableatthistime) {
      return false;
    }
    if (this->reserve14 != other.reserve14) {
      return false;
    }
    if (this->reserve15 != other.reserve15) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntersectionStatusObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntersectionStatusObject_

// alias to use template instance with default allocator
using IntersectionStatusObject =
  v2x_msg::msg::IntersectionStatusObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__STRUCT_HPP_
