// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/SignalRequesterInfo.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_REQUESTER_INFO__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__SIGNAL_REQUESTER_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'id'
#include "v2x_msg/msg/detail/vehicle_id__struct.hpp"
// Member 'typedata'
#include "v2x_msg/msg/detail/requestor_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__SignalRequesterInfo __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__SignalRequesterInfo __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SignalRequesterInfo_
{
  using Type = SignalRequesterInfo_<ContainerAllocator>;

  explicit SignalRequesterInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    typedata(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request = 0ll;
      this->sequencenumber = 0ll;
      this->basicvehiclerole = 0ll;
    }
  }

  explicit SignalRequesterInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init),
    typedata(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request = 0ll;
      this->sequencenumber = 0ll;
      this->basicvehiclerole = 0ll;
    }
  }

  // field types and members
  using _id_type =
    v2x_msg::msg::VehicleID_<ContainerAllocator>;
  _id_type id;
  using _request_type =
    int64_t;
  _request_type request;
  using _sequencenumber_type =
    int64_t;
  _sequencenumber_type sequencenumber;
  using _basicvehiclerole_type =
    int64_t;
  _basicvehiclerole_type basicvehiclerole;
  using _typedata_type =
    v2x_msg::msg::RequestorType_<ContainerAllocator>;
  _typedata_type typedata;

  // setters for named parameter idiom
  Type & set__id(
    const v2x_msg::msg::VehicleID_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__request(
    const int64_t & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__sequencenumber(
    const int64_t & _arg)
  {
    this->sequencenumber = _arg;
    return *this;
  }
  Type & set__basicvehiclerole(
    const int64_t & _arg)
  {
    this->basicvehiclerole = _arg;
    return *this;
  }
  Type & set__typedata(
    const v2x_msg::msg::RequestorType_<ContainerAllocator> & _arg)
  {
    this->typedata = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::SignalRequesterInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::SignalRequesterInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::SignalRequesterInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::SignalRequesterInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SignalRequesterInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SignalRequesterInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SignalRequesterInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SignalRequesterInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::SignalRequesterInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::SignalRequesterInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__SignalRequesterInfo
    std::shared_ptr<v2x_msg::msg::SignalRequesterInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__SignalRequesterInfo
    std::shared_ptr<v2x_msg::msg::SignalRequesterInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SignalRequesterInfo_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->sequencenumber != other.sequencenumber) {
      return false;
    }
    if (this->basicvehiclerole != other.basicvehiclerole) {
      return false;
    }
    if (this->typedata != other.typedata) {
      return false;
    }
    return true;
  }
  bool operator!=(const SignalRequesterInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SignalRequesterInfo_

// alias to use template instance with default allocator
using SignalRequesterInfo =
  v2x_msg::msg::SignalRequesterInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_REQUESTER_INFO__STRUCT_HPP_
