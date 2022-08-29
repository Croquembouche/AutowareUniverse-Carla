// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/TimeChangeDetails.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__TimeChangeDetails __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__TimeChangeDetails __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TimeChangeDetails_
{
  using Type = TimeChangeDetails_<ContainerAllocator>;

  explicit TimeChangeDetails_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->startime = 0ll;
      this->minendtime = 0ll;
      this->maxendtime = 0ll;
      this->likelytime = 0ll;
      this->confidence = 0ll;
      this->nexttime = 0ll;
    }
  }

  explicit TimeChangeDetails_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->startime = 0ll;
      this->minendtime = 0ll;
      this->maxendtime = 0ll;
      this->likelytime = 0ll;
      this->confidence = 0ll;
      this->nexttime = 0ll;
    }
  }

  // field types and members
  using _startime_type =
    int64_t;
  _startime_type startime;
  using _minendtime_type =
    int64_t;
  _minendtime_type minendtime;
  using _maxendtime_type =
    int64_t;
  _maxendtime_type maxendtime;
  using _likelytime_type =
    int64_t;
  _likelytime_type likelytime;
  using _confidence_type =
    int64_t;
  _confidence_type confidence;
  using _nexttime_type =
    int64_t;
  _nexttime_type nexttime;

  // setters for named parameter idiom
  Type & set__startime(
    const int64_t & _arg)
  {
    this->startime = _arg;
    return *this;
  }
  Type & set__minendtime(
    const int64_t & _arg)
  {
    this->minendtime = _arg;
    return *this;
  }
  Type & set__maxendtime(
    const int64_t & _arg)
  {
    this->maxendtime = _arg;
    return *this;
  }
  Type & set__likelytime(
    const int64_t & _arg)
  {
    this->likelytime = _arg;
    return *this;
  }
  Type & set__confidence(
    const int64_t & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__nexttime(
    const int64_t & _arg)
  {
    this->nexttime = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::TimeChangeDetails_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::TimeChangeDetails_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::TimeChangeDetails_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::TimeChangeDetails_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::TimeChangeDetails_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::TimeChangeDetails_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::TimeChangeDetails_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::TimeChangeDetails_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::TimeChangeDetails_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::TimeChangeDetails_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__TimeChangeDetails
    std::shared_ptr<v2x_msg::msg::TimeChangeDetails_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__TimeChangeDetails
    std::shared_ptr<v2x_msg::msg::TimeChangeDetails_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeChangeDetails_ & other) const
  {
    if (this->startime != other.startime) {
      return false;
    }
    if (this->minendtime != other.minendtime) {
      return false;
    }
    if (this->maxendtime != other.maxendtime) {
      return false;
    }
    if (this->likelytime != other.likelytime) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->nexttime != other.nexttime) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeChangeDetails_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeChangeDetails_

// alias to use template instance with default allocator
using TimeChangeDetails =
  v2x_msg::msg::TimeChangeDetails_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_HPP_
