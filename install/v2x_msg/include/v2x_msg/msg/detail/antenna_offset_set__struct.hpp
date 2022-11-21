// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/AntennaOffsetSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ANTENNA_OFFSET_SET__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__ANTENNA_OFFSET_SET__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__AntennaOffsetSet __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__AntennaOffsetSet __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AntennaOffsetSet_
{
  using Type = AntennaOffsetSet_<ContainerAllocator>;

  explicit AntennaOffsetSet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->antoffsetx = 0ll;
      this->antoffsety = 0ll;
      this->antoffsetz = 0ll;
    }
  }

  explicit AntennaOffsetSet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->antoffsetx = 0ll;
      this->antoffsety = 0ll;
      this->antoffsetz = 0ll;
    }
  }

  // field types and members
  using _antoffsetx_type =
    int64_t;
  _antoffsetx_type antoffsetx;
  using _antoffsety_type =
    int64_t;
  _antoffsety_type antoffsety;
  using _antoffsetz_type =
    int64_t;
  _antoffsetz_type antoffsetz;

  // setters for named parameter idiom
  Type & set__antoffsetx(
    const int64_t & _arg)
  {
    this->antoffsetx = _arg;
    return *this;
  }
  Type & set__antoffsety(
    const int64_t & _arg)
  {
    this->antoffsety = _arg;
    return *this;
  }
  Type & set__antoffsetz(
    const int64_t & _arg)
  {
    this->antoffsetz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::AntennaOffsetSet_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::AntennaOffsetSet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::AntennaOffsetSet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::AntennaOffsetSet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::AntennaOffsetSet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::AntennaOffsetSet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::AntennaOffsetSet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::AntennaOffsetSet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::AntennaOffsetSet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::AntennaOffsetSet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__AntennaOffsetSet
    std::shared_ptr<v2x_msg::msg::AntennaOffsetSet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__AntennaOffsetSet
    std::shared_ptr<v2x_msg::msg::AntennaOffsetSet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AntennaOffsetSet_ & other) const
  {
    if (this->antoffsetx != other.antoffsetx) {
      return false;
    }
    if (this->antoffsety != other.antoffsety) {
      return false;
    }
    if (this->antoffsetz != other.antoffsetz) {
      return false;
    }
    return true;
  }
  bool operator!=(const AntennaOffsetSet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AntennaOffsetSet_

// alias to use template instance with default allocator
using AntennaOffsetSet =
  v2x_msg::msg::AntennaOffsetSet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ANTENNA_OFFSET_SET__STRUCT_HPP_
