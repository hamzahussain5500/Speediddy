// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/HLMsg03Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG03_LEGACY__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG03_LEGACY__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__HLMsg03Legacy __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__HLMsg03Legacy __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HLMsg03Legacy_
{
  using Type = HLMsg03Legacy_<ContainerAllocator>;

  explicit HLMsg03Legacy_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hl_alive_03 = 0;
      this->hl_dbw_enable = 0;
      this->hl_push_to_pass_on = 0;
      this->hl_pdu1_activate_gnss = 0;
      this->hl_pdu1_activate_oss = 0;
      this->hl_ice_enable = 0;
      this->hl_pdu1_activate_lidar_r = 0;
      this->hl_pdu1_activate_lidar_cn = 0;
      this->hl_pdu1_activate_lidar_l = 0;
      this->hl_pdu1_activate_radar_rear = 0;
      this->hl_pdu1_activate_radar_cn = 0;
      this->hl_pdu1_activate_radar_r = 0;
      this->hl_pdu1_activate_radar_l = 0;
      this->ice_start_fuel_level_l = 0.0;
      this->hl_crancking_by_pass = 0;
    }
  }

  explicit HLMsg03Legacy_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hl_alive_03 = 0;
      this->hl_dbw_enable = 0;
      this->hl_push_to_pass_on = 0;
      this->hl_pdu1_activate_gnss = 0;
      this->hl_pdu1_activate_oss = 0;
      this->hl_ice_enable = 0;
      this->hl_pdu1_activate_lidar_r = 0;
      this->hl_pdu1_activate_lidar_cn = 0;
      this->hl_pdu1_activate_lidar_l = 0;
      this->hl_pdu1_activate_radar_rear = 0;
      this->hl_pdu1_activate_radar_cn = 0;
      this->hl_pdu1_activate_radar_r = 0;
      this->hl_pdu1_activate_radar_l = 0;
      this->ice_start_fuel_level_l = 0.0;
      this->hl_crancking_by_pass = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _hl_alive_03_type =
    uint8_t;
  _hl_alive_03_type hl_alive_03;
  using _hl_dbw_enable_type =
    uint8_t;
  _hl_dbw_enable_type hl_dbw_enable;
  using _hl_push_to_pass_on_type =
    uint8_t;
  _hl_push_to_pass_on_type hl_push_to_pass_on;
  using _hl_pdu1_activate_gnss_type =
    uint8_t;
  _hl_pdu1_activate_gnss_type hl_pdu1_activate_gnss;
  using _hl_pdu1_activate_oss_type =
    uint8_t;
  _hl_pdu1_activate_oss_type hl_pdu1_activate_oss;
  using _hl_ice_enable_type =
    uint8_t;
  _hl_ice_enable_type hl_ice_enable;
  using _hl_pdu1_activate_lidar_r_type =
    uint8_t;
  _hl_pdu1_activate_lidar_r_type hl_pdu1_activate_lidar_r;
  using _hl_pdu1_activate_lidar_cn_type =
    uint8_t;
  _hl_pdu1_activate_lidar_cn_type hl_pdu1_activate_lidar_cn;
  using _hl_pdu1_activate_lidar_l_type =
    uint8_t;
  _hl_pdu1_activate_lidar_l_type hl_pdu1_activate_lidar_l;
  using _hl_pdu1_activate_radar_rear_type =
    uint8_t;
  _hl_pdu1_activate_radar_rear_type hl_pdu1_activate_radar_rear;
  using _hl_pdu1_activate_radar_cn_type =
    uint8_t;
  _hl_pdu1_activate_radar_cn_type hl_pdu1_activate_radar_cn;
  using _hl_pdu1_activate_radar_r_type =
    uint8_t;
  _hl_pdu1_activate_radar_r_type hl_pdu1_activate_radar_r;
  using _hl_pdu1_activate_radar_l_type =
    uint8_t;
  _hl_pdu1_activate_radar_l_type hl_pdu1_activate_radar_l;
  using _ice_start_fuel_level_l_type =
    double;
  _ice_start_fuel_level_l_type ice_start_fuel_level_l;
  using _hl_crancking_by_pass_type =
    uint8_t;
  _hl_crancking_by_pass_type hl_crancking_by_pass;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__hl_alive_03(
    const uint8_t & _arg)
  {
    this->hl_alive_03 = _arg;
    return *this;
  }
  Type & set__hl_dbw_enable(
    const uint8_t & _arg)
  {
    this->hl_dbw_enable = _arg;
    return *this;
  }
  Type & set__hl_push_to_pass_on(
    const uint8_t & _arg)
  {
    this->hl_push_to_pass_on = _arg;
    return *this;
  }
  Type & set__hl_pdu1_activate_gnss(
    const uint8_t & _arg)
  {
    this->hl_pdu1_activate_gnss = _arg;
    return *this;
  }
  Type & set__hl_pdu1_activate_oss(
    const uint8_t & _arg)
  {
    this->hl_pdu1_activate_oss = _arg;
    return *this;
  }
  Type & set__hl_ice_enable(
    const uint8_t & _arg)
  {
    this->hl_ice_enable = _arg;
    return *this;
  }
  Type & set__hl_pdu1_activate_lidar_r(
    const uint8_t & _arg)
  {
    this->hl_pdu1_activate_lidar_r = _arg;
    return *this;
  }
  Type & set__hl_pdu1_activate_lidar_cn(
    const uint8_t & _arg)
  {
    this->hl_pdu1_activate_lidar_cn = _arg;
    return *this;
  }
  Type & set__hl_pdu1_activate_lidar_l(
    const uint8_t & _arg)
  {
    this->hl_pdu1_activate_lidar_l = _arg;
    return *this;
  }
  Type & set__hl_pdu1_activate_radar_rear(
    const uint8_t & _arg)
  {
    this->hl_pdu1_activate_radar_rear = _arg;
    return *this;
  }
  Type & set__hl_pdu1_activate_radar_cn(
    const uint8_t & _arg)
  {
    this->hl_pdu1_activate_radar_cn = _arg;
    return *this;
  }
  Type & set__hl_pdu1_activate_radar_r(
    const uint8_t & _arg)
  {
    this->hl_pdu1_activate_radar_r = _arg;
    return *this;
  }
  Type & set__hl_pdu1_activate_radar_l(
    const uint8_t & _arg)
  {
    this->hl_pdu1_activate_radar_l = _arg;
    return *this;
  }
  Type & set__ice_start_fuel_level_l(
    const double & _arg)
  {
    this->ice_start_fuel_level_l = _arg;
    return *this;
  }
  Type & set__hl_crancking_by_pass(
    const uint8_t & _arg)
  {
    this->hl_crancking_by_pass = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::HLMsg03Legacy_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::HLMsg03Legacy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::HLMsg03Legacy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::HLMsg03Legacy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::HLMsg03Legacy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::HLMsg03Legacy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::HLMsg03Legacy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::HLMsg03Legacy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::HLMsg03Legacy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::HLMsg03Legacy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__HLMsg03Legacy
    std::shared_ptr<sd_can_msgs::msg::HLMsg03Legacy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__HLMsg03Legacy
    std::shared_ptr<sd_can_msgs::msg::HLMsg03Legacy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HLMsg03Legacy_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->hl_alive_03 != other.hl_alive_03) {
      return false;
    }
    if (this->hl_dbw_enable != other.hl_dbw_enable) {
      return false;
    }
    if (this->hl_push_to_pass_on != other.hl_push_to_pass_on) {
      return false;
    }
    if (this->hl_pdu1_activate_gnss != other.hl_pdu1_activate_gnss) {
      return false;
    }
    if (this->hl_pdu1_activate_oss != other.hl_pdu1_activate_oss) {
      return false;
    }
    if (this->hl_ice_enable != other.hl_ice_enable) {
      return false;
    }
    if (this->hl_pdu1_activate_lidar_r != other.hl_pdu1_activate_lidar_r) {
      return false;
    }
    if (this->hl_pdu1_activate_lidar_cn != other.hl_pdu1_activate_lidar_cn) {
      return false;
    }
    if (this->hl_pdu1_activate_lidar_l != other.hl_pdu1_activate_lidar_l) {
      return false;
    }
    if (this->hl_pdu1_activate_radar_rear != other.hl_pdu1_activate_radar_rear) {
      return false;
    }
    if (this->hl_pdu1_activate_radar_cn != other.hl_pdu1_activate_radar_cn) {
      return false;
    }
    if (this->hl_pdu1_activate_radar_r != other.hl_pdu1_activate_radar_r) {
      return false;
    }
    if (this->hl_pdu1_activate_radar_l != other.hl_pdu1_activate_radar_l) {
      return false;
    }
    if (this->ice_start_fuel_level_l != other.ice_start_fuel_level_l) {
      return false;
    }
    if (this->hl_crancking_by_pass != other.hl_crancking_by_pass) {
      return false;
    }
    return true;
  }
  bool operator!=(const HLMsg03Legacy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HLMsg03Legacy_

// alias to use template instance with default allocator
using HLMsg03Legacy =
  sd_can_msgs::msg::HLMsg03Legacy_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG03_LEGACY__STRUCT_HPP_
