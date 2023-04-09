// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/DDateTime.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__D_DATE_TIME__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__D_DATE_TIME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__DDateTime __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__DDateTime __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DDateTime_
{
  using Type = DDateTime_<ContainerAllocator>;

  explicit DDateTime_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->year = 0ll;
      this->month = 0ll;
      this->day = 0ll;
      this->hour = 0ll;
      this->minute = 0ll;
      this->second = 0ll;
      this->offset = 0ll;
    }
  }

  explicit DDateTime_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->year = 0ll;
      this->month = 0ll;
      this->day = 0ll;
      this->hour = 0ll;
      this->minute = 0ll;
      this->second = 0ll;
      this->offset = 0ll;
    }
  }

  // field types and members
  using _year_type =
    int64_t;
  _year_type year;
  using _month_type =
    int64_t;
  _month_type month;
  using _day_type =
    int64_t;
  _day_type day;
  using _hour_type =
    int64_t;
  _hour_type hour;
  using _minute_type =
    int64_t;
  _minute_type minute;
  using _second_type =
    int64_t;
  _second_type second;
  using _offset_type =
    int64_t;
  _offset_type offset;

  // setters for named parameter idiom
  Type & set__year(
    const int64_t & _arg)
  {
    this->year = _arg;
    return *this;
  }
  Type & set__month(
    const int64_t & _arg)
  {
    this->month = _arg;
    return *this;
  }
  Type & set__day(
    const int64_t & _arg)
  {
    this->day = _arg;
    return *this;
  }
  Type & set__hour(
    const int64_t & _arg)
  {
    this->hour = _arg;
    return *this;
  }
  Type & set__minute(
    const int64_t & _arg)
  {
    this->minute = _arg;
    return *this;
  }
  Type & set__second(
    const int64_t & _arg)
  {
    this->second = _arg;
    return *this;
  }
  Type & set__offset(
    const int64_t & _arg)
  {
    this->offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::DDateTime_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::DDateTime_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::DDateTime_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::DDateTime_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::DDateTime_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::DDateTime_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::DDateTime_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::DDateTime_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::DDateTime_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::DDateTime_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__DDateTime
    std::shared_ptr<v2x_msg::msg::DDateTime_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__DDateTime
    std::shared_ptr<v2x_msg::msg::DDateTime_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DDateTime_ & other) const
  {
    if (this->year != other.year) {
      return false;
    }
    if (this->month != other.month) {
      return false;
    }
    if (this->day != other.day) {
      return false;
    }
    if (this->hour != other.hour) {
      return false;
    }
    if (this->minute != other.minute) {
      return false;
    }
    if (this->second != other.second) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const DDateTime_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DDateTime_

// alias to use template instance with default allocator
using DDateTime =
  v2x_msg::msg::DDateTime_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__D_DATE_TIME__STRUCT_HPP_
