// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/NMEA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NMEA__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__NMEA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__NMEA __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__NMEA __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NMEA_
{
  using Type = NMEA_<ContainerAllocator>;

  explicit NMEA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->rev = 0ll;
      this->msg = 0ll;
      this->wdcount = 0ll;
      this->payload = "";
    }
  }

  explicit NMEA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : payload(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->rev = 0ll;
      this->msg = 0ll;
      this->wdcount = 0ll;
      this->payload = "";
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _rev_type =
    int64_t;
  _rev_type rev;
  using _msg_type =
    int64_t;
  _msg_type msg;
  using _wdcount_type =
    int64_t;
  _wdcount_type wdcount;
  using _payload_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _payload_type payload;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__rev(
    const int64_t & _arg)
  {
    this->rev = _arg;
    return *this;
  }
  Type & set__msg(
    const int64_t & _arg)
  {
    this->msg = _arg;
    return *this;
  }
  Type & set__wdcount(
    const int64_t & _arg)
  {
    this->wdcount = _arg;
    return *this;
  }
  Type & set__payload(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->payload = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::NMEA_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::NMEA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::NMEA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::NMEA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::NMEA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::NMEA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::NMEA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::NMEA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::NMEA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::NMEA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__NMEA
    std::shared_ptr<v2x_msg::msg::NMEA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__NMEA
    std::shared_ptr<v2x_msg::msg::NMEA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NMEA_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->rev != other.rev) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    if (this->wdcount != other.wdcount) {
      return false;
    }
    if (this->payload != other.payload) {
      return false;
    }
    return true;
  }
  bool operator!=(const NMEA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NMEA_

// alias to use template instance with default allocator
using NMEA =
  v2x_msg::msg::NMEA_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NMEA__STRUCT_HPP_
