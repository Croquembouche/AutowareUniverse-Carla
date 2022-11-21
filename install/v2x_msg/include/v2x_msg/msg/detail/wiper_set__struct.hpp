// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/WiperSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__WIPER_SET__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__WIPER_SET__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__WiperSet __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__WiperSet __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WiperSet_
{
  using Type = WiperSet_<ContainerAllocator>;

  explicit WiperSet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->statusfront = 0ll;
      this->ratefront = 0ll;
      this->statusrear = 0ll;
      this->raterear = 0ll;
    }
  }

  explicit WiperSet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->statusfront = 0ll;
      this->ratefront = 0ll;
      this->statusrear = 0ll;
      this->raterear = 0ll;
    }
  }

  // field types and members
  using _statusfront_type =
    int64_t;
  _statusfront_type statusfront;
  using _ratefront_type =
    int64_t;
  _ratefront_type ratefront;
  using _statusrear_type =
    int64_t;
  _statusrear_type statusrear;
  using _raterear_type =
    int64_t;
  _raterear_type raterear;

  // setters for named parameter idiom
  Type & set__statusfront(
    const int64_t & _arg)
  {
    this->statusfront = _arg;
    return *this;
  }
  Type & set__ratefront(
    const int64_t & _arg)
  {
    this->ratefront = _arg;
    return *this;
  }
  Type & set__statusrear(
    const int64_t & _arg)
  {
    this->statusrear = _arg;
    return *this;
  }
  Type & set__raterear(
    const int64_t & _arg)
  {
    this->raterear = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::WiperSet_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::WiperSet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::WiperSet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::WiperSet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::WiperSet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::WiperSet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::WiperSet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::WiperSet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::WiperSet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::WiperSet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__WiperSet
    std::shared_ptr<v2x_msg::msg::WiperSet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__WiperSet
    std::shared_ptr<v2x_msg::msg::WiperSet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WiperSet_ & other) const
  {
    if (this->statusfront != other.statusfront) {
      return false;
    }
    if (this->ratefront != other.ratefront) {
      return false;
    }
    if (this->statusrear != other.statusrear) {
      return false;
    }
    if (this->raterear != other.raterear) {
      return false;
    }
    return true;
  }
  bool operator!=(const WiperSet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WiperSet_

// alias to use template instance with default allocator
using WiperSet =
  v2x_msg::msg::WiperSet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__WIPER_SET__STRUCT_HPP_
