// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/SignalStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_STATUS__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__SIGNAL_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'id'
#include "v2x_msg/msg/detail/intersection_reference_id__struct.hpp"
// Member 'sigstatus'
#include "v2x_msg/msg/detail/signal_status_package__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__SignalStatus __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__SignalStatus __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SignalStatus_
{
  using Type = SignalStatus_<ContainerAllocator>;

  explicit SignalStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sequencenumber = 0ll;
    }
  }

  explicit SignalStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sequencenumber = 0ll;
    }
  }

  // field types and members
  using _sequencenumber_type =
    int64_t;
  _sequencenumber_type sequencenumber;
  using _id_type =
    v2x_msg::msg::IntersectionReferenceID_<ContainerAllocator>;
  _id_type id;
  using _sigstatus_type =
    std::vector<v2x_msg::msg::SignalStatusPackage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::SignalStatusPackage_<ContainerAllocator>>>;
  _sigstatus_type sigstatus;

  // setters for named parameter idiom
  Type & set__sequencenumber(
    const int64_t & _arg)
  {
    this->sequencenumber = _arg;
    return *this;
  }
  Type & set__id(
    const v2x_msg::msg::IntersectionReferenceID_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__sigstatus(
    const std::vector<v2x_msg::msg::SignalStatusPackage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::SignalStatusPackage_<ContainerAllocator>>> & _arg)
  {
    this->sigstatus = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::SignalStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::SignalStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::SignalStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::SignalStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SignalStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SignalStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SignalStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SignalStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::SignalStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::SignalStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__SignalStatus
    std::shared_ptr<v2x_msg::msg::SignalStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__SignalStatus
    std::shared_ptr<v2x_msg::msg::SignalStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SignalStatus_ & other) const
  {
    if (this->sequencenumber != other.sequencenumber) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->sigstatus != other.sigstatus) {
      return false;
    }
    return true;
  }
  bool operator!=(const SignalStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SignalStatus_

// alias to use template instance with default allocator
using SignalStatus =
  v2x_msg::msg::SignalStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_STATUS__STRUCT_HPP_
