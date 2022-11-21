// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__OBJECT__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__OBJECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'datetime'
#include "v2x_msg/msg/detail/d_date_time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__Object __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__Object __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object_
{
  using Type = Object_<ContainerAllocator>;

  explicit Object_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : datetime(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obdist = 0ll;
      this->obdirect = 0ll;
    }
  }

  explicit Object_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : datetime(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obdist = 0ll;
      this->obdirect = 0ll;
    }
  }

  // field types and members
  using _obdist_type =
    int64_t;
  _obdist_type obdist;
  using _obdirect_type =
    int64_t;
  _obdirect_type obdirect;
  using _datetime_type =
    v2x_msg::msg::DDateTime_<ContainerAllocator>;
  _datetime_type datetime;

  // setters for named parameter idiom
  Type & set__obdist(
    const int64_t & _arg)
  {
    this->obdist = _arg;
    return *this;
  }
  Type & set__obdirect(
    const int64_t & _arg)
  {
    this->obdirect = _arg;
    return *this;
  }
  Type & set__datetime(
    const v2x_msg::msg::DDateTime_<ContainerAllocator> & _arg)
  {
    this->datetime = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::Object_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::Object_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::Object_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::Object_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Object_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Object_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Object_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Object_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::Object_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::Object_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__Object
    std::shared_ptr<v2x_msg::msg::Object_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__Object
    std::shared_ptr<v2x_msg::msg::Object_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object_ & other) const
  {
    if (this->obdist != other.obdist) {
      return false;
    }
    if (this->obdirect != other.obdirect) {
      return false;
    }
    if (this->datetime != other.datetime) {
      return false;
    }
    return true;
  }
  bool operator!=(const Object_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object_

// alias to use template instance with default allocator
using Object =
  v2x_msg::msg::Object_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__OBJECT__STRUCT_HPP_
