// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_mapping_msgs:srv/HADMapService.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MAPPING_MSGS__SRV__DETAIL__HAD_MAP_SERVICE__STRUCT_HPP_
#define AUTOWARE_AUTO_MAPPING_MSGS__SRV__DETAIL__HAD_MAP_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autoware_auto_mapping_msgs__srv__HADMapService_Request __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_mapping_msgs__srv__HADMapService_Request __declspec(deprecated)
#endif

namespace autoware_auto_mapping_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HADMapService_Request_
{
  using Type = HADMapService_Request_<ContainerAllocator>;

  explicit HADMapService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit HADMapService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _requested_primitives_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _requested_primitives_type requested_primitives;
  using _geom_upper_bound_type =
    rosidl_runtime_cpp::BoundedVector<double, 3, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _geom_upper_bound_type geom_upper_bound;
  using _geom_lower_bound_type =
    rosidl_runtime_cpp::BoundedVector<double, 3, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _geom_lower_bound_type geom_lower_bound;

  // setters for named parameter idiom
  Type & set__requested_primitives(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->requested_primitives = _arg;
    return *this;
  }
  Type & set__geom_upper_bound(
    const rosidl_runtime_cpp::BoundedVector<double, 3, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->geom_upper_bound = _arg;
    return *this;
  }
  Type & set__geom_lower_bound(
    const rosidl_runtime_cpp::BoundedVector<double, 3, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->geom_lower_bound = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FULL_MAP =
    0u;
  static constexpr uint8_t ALL_PRIMITIVES =
    1u;
  static constexpr uint8_t DRIVEABLE_GEOMETRY =
    2u;
  static constexpr uint8_t REGULATORY_ELEMENTS =
    3u;
  static constexpr uint8_t STATIC_OBJECTS =
    4u;

  // pointer types
  using RawPtr =
    autoware_auto_mapping_msgs::srv::HADMapService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_mapping_msgs::srv::HADMapService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_mapping_msgs::srv::HADMapService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_mapping_msgs::srv::HADMapService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_mapping_msgs::srv::HADMapService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_mapping_msgs::srv::HADMapService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_mapping_msgs::srv::HADMapService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_mapping_msgs::srv::HADMapService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_mapping_msgs::srv::HADMapService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_mapping_msgs::srv::HADMapService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_mapping_msgs__srv__HADMapService_Request
    std::shared_ptr<autoware_auto_mapping_msgs::srv::HADMapService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_mapping_msgs__srv__HADMapService_Request
    std::shared_ptr<autoware_auto_mapping_msgs::srv::HADMapService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HADMapService_Request_ & other) const
  {
    if (this->requested_primitives != other.requested_primitives) {
      return false;
    }
    if (this->geom_upper_bound != other.geom_upper_bound) {
      return false;
    }
    if (this->geom_lower_bound != other.geom_lower_bound) {
      return false;
    }
    return true;
  }
  bool operator!=(const HADMapService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HADMapService_Request_

// alias to use template instance with default allocator
using HADMapService_Request =
  autoware_auto_mapping_msgs::srv::HADMapService_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HADMapService_Request_<ContainerAllocator>::FULL_MAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HADMapService_Request_<ContainerAllocator>::ALL_PRIMITIVES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HADMapService_Request_<ContainerAllocator>::DRIVEABLE_GEOMETRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HADMapService_Request_<ContainerAllocator>::REGULATORY_ELEMENTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HADMapService_Request_<ContainerAllocator>::STATIC_OBJECTS;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace autoware_auto_mapping_msgs


// Include directives for member types
// Member 'map'
#include "autoware_auto_mapping_msgs/msg/detail/had_map_bin__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_mapping_msgs__srv__HADMapService_Response __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_mapping_msgs__srv__HADMapService_Response __declspec(deprecated)
#endif

namespace autoware_auto_mapping_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HADMapService_Response_
{
  using Type = HADMapService_Response_<ContainerAllocator>;

  explicit HADMapService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = 0l;
    }
  }

  explicit HADMapService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = 0l;
    }
  }

  // field types and members
  using _map_type =
    autoware_auto_mapping_msgs::msg::HADMapBin_<ContainerAllocator>;
  _map_type map;
  using _answer_type =
    int32_t;
  _answer_type answer;

  // setters for named parameter idiom
  Type & set__map(
    const autoware_auto_mapping_msgs::msg::HADMapBin_<ContainerAllocator> & _arg)
  {
    this->map = _arg;
    return *this;
  }
  Type & set__answer(
    const int32_t & _arg)
  {
    this->answer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_mapping_msgs::srv::HADMapService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_mapping_msgs::srv::HADMapService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_mapping_msgs::srv::HADMapService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_mapping_msgs::srv::HADMapService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_mapping_msgs::srv::HADMapService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_mapping_msgs::srv::HADMapService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_mapping_msgs::srv::HADMapService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_mapping_msgs::srv::HADMapService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_mapping_msgs::srv::HADMapService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_mapping_msgs::srv::HADMapService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_mapping_msgs__srv__HADMapService_Response
    std::shared_ptr<autoware_auto_mapping_msgs::srv::HADMapService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_mapping_msgs__srv__HADMapService_Response
    std::shared_ptr<autoware_auto_mapping_msgs::srv::HADMapService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HADMapService_Response_ & other) const
  {
    if (this->map != other.map) {
      return false;
    }
    if (this->answer != other.answer) {
      return false;
    }
    return true;
  }
  bool operator!=(const HADMapService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HADMapService_Response_

// alias to use template instance with default allocator
using HADMapService_Response =
  autoware_auto_mapping_msgs::srv::HADMapService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autoware_auto_mapping_msgs

namespace autoware_auto_mapping_msgs
{

namespace srv
{

struct HADMapService
{
  using Request = autoware_auto_mapping_msgs::srv::HADMapService_Request;
  using Response = autoware_auto_mapping_msgs::srv::HADMapService_Response;
};

}  // namespace srv

}  // namespace autoware_auto_mapping_msgs

#endif  // AUTOWARE_AUTO_MAPPING_MSGS__SRV__DETAIL__HAD_MAP_SERVICE__STRUCT_HPP_
