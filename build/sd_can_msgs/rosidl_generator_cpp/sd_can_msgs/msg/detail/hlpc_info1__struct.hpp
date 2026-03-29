// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/HLPCInfo1.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HLPC_INFO1__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HLPC_INFO1__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sd_can_msgs__msg__HLPCInfo1 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__HLPCInfo1 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HLPCInfo1_
{
  using Type = HLPCInfo1_<ContainerAllocator>;

  explicit HLPCInfo1_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hlpc_network_ping = 0;
      this->hlpc_lidar_status_left = 0;
      this->hlpc_lidar_status_front = 0;
      this->hlpc_lidar_status_right = 0;
      this->hlpc_radar_status_front = 0;
      this->hlpc_radar_status_left = 0;
      this->hlpc_radar_status_right = 0;
      this->hlpc_radar_status_rear = 0;
      this->hlpc_vector_nav_fix = 0;
      this->hlpc_alive_c4 = 0;
    }
  }

  explicit HLPCInfo1_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hlpc_network_ping = 0;
      this->hlpc_lidar_status_left = 0;
      this->hlpc_lidar_status_front = 0;
      this->hlpc_lidar_status_right = 0;
      this->hlpc_radar_status_front = 0;
      this->hlpc_radar_status_left = 0;
      this->hlpc_radar_status_right = 0;
      this->hlpc_radar_status_rear = 0;
      this->hlpc_vector_nav_fix = 0;
      this->hlpc_alive_c4 = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _hlpc_network_ping_type =
    uint16_t;
  _hlpc_network_ping_type hlpc_network_ping;
  using _hlpc_lidar_status_left_type =
    uint8_t;
  _hlpc_lidar_status_left_type hlpc_lidar_status_left;
  using _hlpc_lidar_status_front_type =
    uint8_t;
  _hlpc_lidar_status_front_type hlpc_lidar_status_front;
  using _hlpc_lidar_status_right_type =
    uint8_t;
  _hlpc_lidar_status_right_type hlpc_lidar_status_right;
  using _hlpc_radar_status_front_type =
    uint8_t;
  _hlpc_radar_status_front_type hlpc_radar_status_front;
  using _hlpc_radar_status_left_type =
    uint8_t;
  _hlpc_radar_status_left_type hlpc_radar_status_left;
  using _hlpc_radar_status_right_type =
    uint8_t;
  _hlpc_radar_status_right_type hlpc_radar_status_right;
  using _hlpc_radar_status_rear_type =
    uint8_t;
  _hlpc_radar_status_rear_type hlpc_radar_status_rear;
  using _hlpc_vector_nav_fix_type =
    uint8_t;
  _hlpc_vector_nav_fix_type hlpc_vector_nav_fix;
  using _hlpc_alive_c4_type =
    uint8_t;
  _hlpc_alive_c4_type hlpc_alive_c4;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__hlpc_network_ping(
    const uint16_t & _arg)
  {
    this->hlpc_network_ping = _arg;
    return *this;
  }
  Type & set__hlpc_lidar_status_left(
    const uint8_t & _arg)
  {
    this->hlpc_lidar_status_left = _arg;
    return *this;
  }
  Type & set__hlpc_lidar_status_front(
    const uint8_t & _arg)
  {
    this->hlpc_lidar_status_front = _arg;
    return *this;
  }
  Type & set__hlpc_lidar_status_right(
    const uint8_t & _arg)
  {
    this->hlpc_lidar_status_right = _arg;
    return *this;
  }
  Type & set__hlpc_radar_status_front(
    const uint8_t & _arg)
  {
    this->hlpc_radar_status_front = _arg;
    return *this;
  }
  Type & set__hlpc_radar_status_left(
    const uint8_t & _arg)
  {
    this->hlpc_radar_status_left = _arg;
    return *this;
  }
  Type & set__hlpc_radar_status_right(
    const uint8_t & _arg)
  {
    this->hlpc_radar_status_right = _arg;
    return *this;
  }
  Type & set__hlpc_radar_status_rear(
    const uint8_t & _arg)
  {
    this->hlpc_radar_status_rear = _arg;
    return *this;
  }
  Type & set__hlpc_vector_nav_fix(
    const uint8_t & _arg)
  {
    this->hlpc_vector_nav_fix = _arg;
    return *this;
  }
  Type & set__hlpc_alive_c4(
    const uint8_t & _arg)
  {
    this->hlpc_alive_c4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::HLPCInfo1_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::HLPCInfo1_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::HLPCInfo1_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::HLPCInfo1_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::HLPCInfo1_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::HLPCInfo1_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::HLPCInfo1_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::HLPCInfo1_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::HLPCInfo1_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::HLPCInfo1_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__HLPCInfo1
    std::shared_ptr<sd_can_msgs::msg::HLPCInfo1_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__HLPCInfo1
    std::shared_ptr<sd_can_msgs::msg::HLPCInfo1_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HLPCInfo1_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->hlpc_network_ping != other.hlpc_network_ping) {
      return false;
    }
    if (this->hlpc_lidar_status_left != other.hlpc_lidar_status_left) {
      return false;
    }
    if (this->hlpc_lidar_status_front != other.hlpc_lidar_status_front) {
      return false;
    }
    if (this->hlpc_lidar_status_right != other.hlpc_lidar_status_right) {
      return false;
    }
    if (this->hlpc_radar_status_front != other.hlpc_radar_status_front) {
      return false;
    }
    if (this->hlpc_radar_status_left != other.hlpc_radar_status_left) {
      return false;
    }
    if (this->hlpc_radar_status_right != other.hlpc_radar_status_right) {
      return false;
    }
    if (this->hlpc_radar_status_rear != other.hlpc_radar_status_rear) {
      return false;
    }
    if (this->hlpc_vector_nav_fix != other.hlpc_vector_nav_fix) {
      return false;
    }
    if (this->hlpc_alive_c4 != other.hlpc_alive_c4) {
      return false;
    }
    return true;
  }
  bool operator!=(const HLPCInfo1_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HLPCInfo1_

// alias to use template instance with default allocator
using HLPCInfo1 =
  sd_can_msgs::msg::HLPCInfo1_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__HLPC_INFO1__STRUCT_HPP_
