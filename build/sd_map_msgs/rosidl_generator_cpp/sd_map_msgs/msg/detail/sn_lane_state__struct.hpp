// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_map_msgs:msg/SnLaneState.idl
// generated code does not contain a copyright notice

#ifndef SD_MAP_MSGS__MSG__DETAIL__SN_LANE_STATE__STRUCT_HPP_
#define SD_MAP_MSGS__MSG__DETAIL__SN_LANE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'sn_state'
#include "sd_map_msgs/msg/detail/sn_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sd_map_msgs__msg__SnLaneState __attribute__((deprecated))
#else
# define DEPRECATED__sd_map_msgs__msg__SnLaneState __declspec(deprecated)
#endif

namespace sd_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SnLaneState_
{
  using Type = SnLaneState_<ContainerAllocator>;

  explicit SnLaneState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sn_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_inside_borders = false;
      this->dist_to_border = 0.0;
    }
  }

  explicit SnLaneState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sn_state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_inside_borders = false;
      this->dist_to_border = 0.0;
    }
  }

  // field types and members
  using _sn_state_type =
    sd_map_msgs::msg::SnState_<ContainerAllocator>;
  _sn_state_type sn_state;
  using _is_inside_borders_type =
    bool;
  _is_inside_borders_type is_inside_borders;
  using _dist_to_border_type =
    double;
  _dist_to_border_type dist_to_border;

  // setters for named parameter idiom
  Type & set__sn_state(
    const sd_map_msgs::msg::SnState_<ContainerAllocator> & _arg)
  {
    this->sn_state = _arg;
    return *this;
  }
  Type & set__is_inside_borders(
    const bool & _arg)
  {
    this->is_inside_borders = _arg;
    return *this;
  }
  Type & set__dist_to_border(
    const double & _arg)
  {
    this->dist_to_border = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_map_msgs::msg::SnLaneState_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_map_msgs::msg::SnLaneState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_map_msgs::msg::SnLaneState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_map_msgs::msg::SnLaneState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_map_msgs::msg::SnLaneState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_map_msgs::msg::SnLaneState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_map_msgs::msg::SnLaneState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_map_msgs::msg::SnLaneState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_map_msgs::msg::SnLaneState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_map_msgs::msg::SnLaneState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_map_msgs__msg__SnLaneState
    std::shared_ptr<sd_map_msgs::msg::SnLaneState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_map_msgs__msg__SnLaneState
    std::shared_ptr<sd_map_msgs::msg::SnLaneState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SnLaneState_ & other) const
  {
    if (this->sn_state != other.sn_state) {
      return false;
    }
    if (this->is_inside_borders != other.is_inside_borders) {
      return false;
    }
    if (this->dist_to_border != other.dist_to_border) {
      return false;
    }
    return true;
  }
  bool operator!=(const SnLaneState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SnLaneState_

// alias to use template instance with default allocator
using SnLaneState =
  sd_map_msgs::msg::SnLaneState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_map_msgs

#endif  // SD_MAP_MSGS__MSG__DETAIL__SN_LANE_STATE__STRUCT_HPP_
