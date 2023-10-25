// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/RequestorType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REQUESTOR_TYPE__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__REQUESTOR_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__RequestorType __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__RequestorType __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RequestorType_
{
  using Type = RequestorType_<ContainerAllocator>;

  explicit RequestorType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->role = 0ll;
      this->subrole = 0ll;
      this->request = 0ll;
      this->iso3833vehicletype = 0ll;
      this->hpmstype = 0ll;
    }
  }

  explicit RequestorType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->role = 0ll;
      this->subrole = 0ll;
      this->request = 0ll;
      this->iso3833vehicletype = 0ll;
      this->hpmstype = 0ll;
    }
  }

  // field types and members
  using _role_type =
    int64_t;
  _role_type role;
  using _subrole_type =
    int64_t;
  _subrole_type subrole;
  using _request_type =
    int64_t;
  _request_type request;
  using _iso3833vehicletype_type =
    int64_t;
  _iso3833vehicletype_type iso3833vehicletype;
  using _hpmstype_type =
    int64_t;
  _hpmstype_type hpmstype;

  // setters for named parameter idiom
  Type & set__role(
    const int64_t & _arg)
  {
    this->role = _arg;
    return *this;
  }
  Type & set__subrole(
    const int64_t & _arg)
  {
    this->subrole = _arg;
    return *this;
  }
  Type & set__request(
    const int64_t & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__iso3833vehicletype(
    const int64_t & _arg)
  {
    this->iso3833vehicletype = _arg;
    return *this;
  }
  Type & set__hpmstype(
    const int64_t & _arg)
  {
    this->hpmstype = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::RequestorType_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::RequestorType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::RequestorType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::RequestorType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RequestorType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RequestorType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RequestorType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RequestorType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::RequestorType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::RequestorType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__RequestorType
    std::shared_ptr<v2x_msg::msg::RequestorType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__RequestorType
    std::shared_ptr<v2x_msg::msg::RequestorType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RequestorType_ & other) const
  {
    if (this->role != other.role) {
      return false;
    }
    if (this->subrole != other.subrole) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->iso3833vehicletype != other.iso3833vehicletype) {
      return false;
    }
    if (this->hpmstype != other.hpmstype) {
      return false;
    }
    return true;
  }
  bool operator!=(const RequestorType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RequestorType_

// alias to use template instance with default allocator
using RequestorType =
  v2x_msg::msg::RequestorType_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__REQUESTOR_TYPE__STRUCT_HPP_
