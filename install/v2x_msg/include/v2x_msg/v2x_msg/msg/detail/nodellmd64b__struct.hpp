// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/Nodellmd64b.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NODELLMD64B__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__NODELLMD64B__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__Nodellmd64b __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__Nodellmd64b __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Nodellmd64b_
{
  using Type = Nodellmd64b_<ContainerAllocator>;

  explicit Nodellmd64b_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longitude = 0ll;
      this->latitude = 0ll;
    }
  }

  explicit Nodellmd64b_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longitude = 0ll;
      this->latitude = 0ll;
    }
  }

  // field types and members
  using _longitude_type =
    int64_t;
  _longitude_type longitude;
  using _latitude_type =
    int64_t;
  _latitude_type latitude;

  // setters for named parameter idiom
  Type & set__longitude(
    const int64_t & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__latitude(
    const int64_t & _arg)
  {
    this->latitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::Nodellmd64b_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::Nodellmd64b_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::Nodellmd64b_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::Nodellmd64b_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Nodellmd64b_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Nodellmd64b_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Nodellmd64b_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Nodellmd64b_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::Nodellmd64b_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::Nodellmd64b_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__Nodellmd64b
    std::shared_ptr<v2x_msg::msg::Nodellmd64b_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__Nodellmd64b
    std::shared_ptr<v2x_msg::msg::Nodellmd64b_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Nodellmd64b_ & other) const
  {
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const Nodellmd64b_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Nodellmd64b_

// alias to use template instance with default allocator
using Nodellmd64b =
  v2x_msg::msg::Nodellmd64b_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NODELLMD64B__STRUCT_HPP_
