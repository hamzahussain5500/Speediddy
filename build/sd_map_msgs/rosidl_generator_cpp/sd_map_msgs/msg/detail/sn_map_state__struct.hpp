// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_map_msgs:msg/SnMapState.idl
// generated code does not contain a copyright notice

#ifndef SD_MAP_MSGS__MSG__DETAIL__SN_MAP_STATE__STRUCT_HPP_
#define SD_MAP_MSGS__MSG__DETAIL__SN_MAP_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'track_sn_state'
// Member 'pitlane_sn_state'
#include "sd_map_msgs/msg/detail/sn_lane_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sd_map_msgs__msg__SnMapState __attribute__((deprecated))
#else
# define DEPRECATED__sd_map_msgs__msg__SnMapState __declspec(deprecated)
#endif

namespace sd_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SnMapState_
{
  using Type = SnMapState_<ContainerAllocator>;

  explicit SnMapState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : track_sn_state(_init),
    pitlane_sn_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_lane = 0;
    }
  }

  explicit SnMapState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : track_sn_state(_alloc, _init),
    pitlane_sn_state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_lane = 0;
    }
  }

  // field types and members
  using _current_lane_type =
    uint8_t;
  _current_lane_type current_lane;
  using _track_sn_state_type =
    sd_map_msgs::msg::SnLaneState_<ContainerAllocator>;
  _track_sn_state_type track_sn_state;
  using _pitlane_sn_state_type =
    sd_map_msgs::msg::SnLaneState_<ContainerAllocator>;
  _pitlane_sn_state_type pitlane_sn_state;

  // setters for named parameter idiom
  Type & set__current_lane(
    const uint8_t & _arg)
  {
    this->current_lane = _arg;
    return *this;
  }
  Type & set__track_sn_state(
    const sd_map_msgs::msg::SnLaneState_<ContainerAllocator> & _arg)
  {
    this->track_sn_state = _arg;
    return *this;
  }
  Type & set__pitlane_sn_state(
    const sd_map_msgs::msg::SnLaneState_<ContainerAllocator> & _arg)
  {
    this->pitlane_sn_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_map_msgs::msg::SnMapState_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_map_msgs::msg::SnMapState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_map_msgs::msg::SnMapState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_map_msgs::msg::SnMapState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_map_msgs::msg::SnMapState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_map_msgs::msg::SnMapState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_map_msgs::msg::SnMapState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_map_msgs::msg::SnMapState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_map_msgs::msg::SnMapState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_map_msgs::msg::SnMapState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_map_msgs__msg__SnMapState
    std::shared_ptr<sd_map_msgs::msg::SnMapState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_map_msgs__msg__SnMapState
    std::shared_ptr<sd_map_msgs::msg::SnMapState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SnMapState_ & other) const
  {
    if (this->current_lane != other.current_lane) {
      return false;
    }
    if (this->track_sn_state != other.track_sn_state) {
      return false;
    }
    if (this->pitlane_sn_state != other.pitlane_sn_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SnMapState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SnMapState_

// alias to use template instance with default allocator
using SnMapState =
  sd_map_msgs::msg::SnMapState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_map_msgs

#endif  // SD_MAP_MSGS__MSG__DETAIL__SN_MAP_STATE__STRUCT_HPP_
