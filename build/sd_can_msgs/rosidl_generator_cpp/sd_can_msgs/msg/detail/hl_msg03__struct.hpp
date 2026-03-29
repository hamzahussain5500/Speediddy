// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/HLMsg03.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG03__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG03__STRUCT_HPP_

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
// Member 'header_legacy'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sd_can_msgs__msg__HLMsg03 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__HLMsg03 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HLMsg03_
{
  using Type = HLMsg03_<ContainerAllocator>;

  explicit HLMsg03_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    header_legacy(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hl_alive_03 = 0;
      this->hl_dbw_enable = 0;
      this->hl_push_to_pass_on = 0;
      this->hl_pdu12_activate_gnss = 0;
      this->hl_pdu12_activate_oss = 0;
      this->hl_ice_enable = 0;
      this->hl_ml_supervisor_activation = 0;
      this->hl_pdu12_activate_lidar = 0;
      this->hl_pdu12_activate_radar = 0;
      this->ice_start_fuel_level_l = 0.0;
      this->hl_crancking_by_pass = 0;
      this->hl_switch_off_ok = 0;
      this->hl_pdu1_activate_gnss_legacy = 0;
      this->hl_pdu1_activate_oss_legacy = 0;
      this->hl_pdu1_activate_lidar_r_legacy = 0;
      this->hl_pdu1_activate_lidar_cn_legacy = 0;
      this->hl_pdu1_activate_lidar_l_legacy = 0;
      this->hl_pdu1_activate_radar_rear_legacy = 0;
      this->hl_pdu1_activate_radar_cn_legacy = 0;
      this->hl_pdu1_activate_radar_r_legacy = 0;
      this->hl_pdu1_activate_radar_l_legacy = 0;
    }
  }

  explicit HLMsg03_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    header_legacy(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hl_alive_03 = 0;
      this->hl_dbw_enable = 0;
      this->hl_push_to_pass_on = 0;
      this->hl_pdu12_activate_gnss = 0;
      this->hl_pdu12_activate_oss = 0;
      this->hl_ice_enable = 0;
      this->hl_ml_supervisor_activation = 0;
      this->hl_pdu12_activate_lidar = 0;
      this->hl_pdu12_activate_radar = 0;
      this->ice_start_fuel_level_l = 0.0;
      this->hl_crancking_by_pass = 0;
      this->hl_switch_off_ok = 0;
      this->hl_pdu1_activate_gnss_legacy = 0;
      this->hl_pdu1_activate_oss_legacy = 0;
      this->hl_pdu1_activate_lidar_r_legacy = 0;
      this->hl_pdu1_activate_lidar_cn_legacy = 0;
      this->hl_pdu1_activate_lidar_l_legacy = 0;
      this->hl_pdu1_activate_radar_rear_legacy = 0;
      this->hl_pdu1_activate_radar_cn_legacy = 0;
      this->hl_pdu1_activate_radar_r_legacy = 0;
      this->hl_pdu1_activate_radar_l_legacy = 0;
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
  using _hl_pdu12_activate_gnss_type =
    uint8_t;
  _hl_pdu12_activate_gnss_type hl_pdu12_activate_gnss;
  using _hl_pdu12_activate_oss_type =
    uint8_t;
  _hl_pdu12_activate_oss_type hl_pdu12_activate_oss;
  using _hl_ice_enable_type =
    uint8_t;
  _hl_ice_enable_type hl_ice_enable;
  using _hl_ml_supervisor_activation_type =
    uint8_t;
  _hl_ml_supervisor_activation_type hl_ml_supervisor_activation;
  using _hl_pdu12_activate_lidar_type =
    uint8_t;
  _hl_pdu12_activate_lidar_type hl_pdu12_activate_lidar;
  using _hl_pdu12_activate_radar_type =
    uint8_t;
  _hl_pdu12_activate_radar_type hl_pdu12_activate_radar;
  using _ice_start_fuel_level_l_type =
    double;
  _ice_start_fuel_level_l_type ice_start_fuel_level_l;
  using _hl_crancking_by_pass_type =
    uint8_t;
  _hl_crancking_by_pass_type hl_crancking_by_pass;
  using _hl_switch_off_ok_type =
    uint8_t;
  _hl_switch_off_ok_type hl_switch_off_ok;
  using _header_legacy_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_legacy_type header_legacy;
  using _hl_pdu1_activate_gnss_legacy_type =
    uint8_t;
  _hl_pdu1_activate_gnss_legacy_type hl_pdu1_activate_gnss_legacy;
  using _hl_pdu1_activate_oss_legacy_type =
    uint8_t;
  _hl_pdu1_activate_oss_legacy_type hl_pdu1_activate_oss_legacy;
  using _hl_pdu1_activate_lidar_r_legacy_type =
    uint8_t;
  _hl_pdu1_activate_lidar_r_legacy_type hl_pdu1_activate_lidar_r_legacy;
  using _hl_pdu1_activate_lidar_cn_legacy_type =
    uint8_t;
  _hl_pdu1_activate_lidar_cn_legacy_type hl_pdu1_activate_lidar_cn_legacy;
  using _hl_pdu1_activate_lidar_l_legacy_type =
    uint8_t;
  _hl_pdu1_activate_lidar_l_legacy_type hl_pdu1_activate_lidar_l_legacy;
  using _hl_pdu1_activate_radar_rear_legacy_type =
    uint8_t;
  _hl_pdu1_activate_radar_rear_legacy_type hl_pdu1_activate_radar_rear_legacy;
  using _hl_pdu1_activate_radar_cn_legacy_type =
    uint8_t;
  _hl_pdu1_activate_radar_cn_legacy_type hl_pdu1_activate_radar_cn_legacy;
  using _hl_pdu1_activate_radar_r_legacy_type =
    uint8_t;
  _hl_pdu1_activate_radar_r_legacy_type hl_pdu1_activate_radar_r_legacy;
  using _hl_pdu1_activate_radar_l_legacy_type =
    uint8_t;
  _hl_pdu1_activate_radar_l_legacy_type hl_pdu1_activate_radar_l_legacy;

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
  Type & set__hl_pdu12_activate_gnss(
    const uint8_t & _arg)
  {
    this->hl_pdu12_activate_gnss = _arg;
    return *this;
  }
  Type & set__hl_pdu12_activate_oss(
    const uint8_t & _arg)
  {
    this->hl_pdu12_activate_oss = _arg;
    return *this;
  }
  Type & set__hl_ice_enable(
    const uint8_t & _arg)
  {
    this->hl_ice_enable = _arg;
    return *this;
  }
  Type & set__hl_ml_supervisor_activation(
    const uint8_t & _arg)
  {
    this->hl_ml_supervisor_activation = _arg;
    return *this;
  }
  Type & set__hl_pdu12_activate_lidar(
    const uint8_t & _arg)
  {
    this->hl_pdu12_activate_lidar = _arg;
    return *this;
  }
  Type & set__hl_pdu12_activate_radar(
    const uint8_t & _arg)
  {
    this->hl_pdu12_activate_radar = _arg;
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
  Type & set__hl_switch_off_ok(
    const uint8_t & _arg)
  {
    this->hl_switch_off_ok = _arg;
    return *this;
  }
  Type & set__header_legacy(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header_legacy = _arg;
    return *this;
  }
  Type & set__hl_pdu1_activate_gnss_legacy(
    const uint8_t & _arg)
  {
    this->hl_pdu1_activate_gnss_legacy = _arg;
    return *this;
  }
  Type & set__hl_pdu1_activate_oss_legacy(
    const uint8_t & _arg)
  {
    this->hl_pdu1_activate_oss_legacy = _arg;
    return *this;
  }
  Type & set__hl_pdu1_activate_lidar_r_legacy(
    const uint8_t & _arg)
  {
    this->hl_pdu1_activate_lidar_r_legacy = _arg;
    return *this;
  }
  Type & set__hl_pdu1_activate_lidar_cn_legacy(
    const uint8_t & _arg)
  {
    this->hl_pdu1_activate_lidar_cn_legacy = _arg;
    return *this;
  }
  Type & set__hl_pdu1_activate_lidar_l_legacy(
    const uint8_t & _arg)
  {
    this->hl_pdu1_activate_lidar_l_legacy = _arg;
    return *this;
  }
  Type & set__hl_pdu1_activate_radar_rear_legacy(
    const uint8_t & _arg)
  {
    this->hl_pdu1_activate_radar_rear_legacy = _arg;
    return *this;
  }
  Type & set__hl_pdu1_activate_radar_cn_legacy(
    const uint8_t & _arg)
  {
    this->hl_pdu1_activate_radar_cn_legacy = _arg;
    return *this;
  }
  Type & set__hl_pdu1_activate_radar_r_legacy(
    const uint8_t & _arg)
  {
    this->hl_pdu1_activate_radar_r_legacy = _arg;
    return *this;
  }
  Type & set__hl_pdu1_activate_radar_l_legacy(
    const uint8_t & _arg)
  {
    this->hl_pdu1_activate_radar_l_legacy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::HLMsg03_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::HLMsg03_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::HLMsg03_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::HLMsg03_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::HLMsg03_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::HLMsg03_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::HLMsg03_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::HLMsg03_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::HLMsg03_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::HLMsg03_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__HLMsg03
    std::shared_ptr<sd_can_msgs::msg::HLMsg03_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__HLMsg03
    std::shared_ptr<sd_can_msgs::msg::HLMsg03_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HLMsg03_ & other) const
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
    if (this->hl_pdu12_activate_gnss != other.hl_pdu12_activate_gnss) {
      return false;
    }
    if (this->hl_pdu12_activate_oss != other.hl_pdu12_activate_oss) {
      return false;
    }
    if (this->hl_ice_enable != other.hl_ice_enable) {
      return false;
    }
    if (this->hl_ml_supervisor_activation != other.hl_ml_supervisor_activation) {
      return false;
    }
    if (this->hl_pdu12_activate_lidar != other.hl_pdu12_activate_lidar) {
      return false;
    }
    if (this->hl_pdu12_activate_radar != other.hl_pdu12_activate_radar) {
      return false;
    }
    if (this->ice_start_fuel_level_l != other.ice_start_fuel_level_l) {
      return false;
    }
    if (this->hl_crancking_by_pass != other.hl_crancking_by_pass) {
      return false;
    }
    if (this->hl_switch_off_ok != other.hl_switch_off_ok) {
      return false;
    }
    if (this->header_legacy != other.header_legacy) {
      return false;
    }
    if (this->hl_pdu1_activate_gnss_legacy != other.hl_pdu1_activate_gnss_legacy) {
      return false;
    }
    if (this->hl_pdu1_activate_oss_legacy != other.hl_pdu1_activate_oss_legacy) {
      return false;
    }
    if (this->hl_pdu1_activate_lidar_r_legacy != other.hl_pdu1_activate_lidar_r_legacy) {
      return false;
    }
    if (this->hl_pdu1_activate_lidar_cn_legacy != other.hl_pdu1_activate_lidar_cn_legacy) {
      return false;
    }
    if (this->hl_pdu1_activate_lidar_l_legacy != other.hl_pdu1_activate_lidar_l_legacy) {
      return false;
    }
    if (this->hl_pdu1_activate_radar_rear_legacy != other.hl_pdu1_activate_radar_rear_legacy) {
      return false;
    }
    if (this->hl_pdu1_activate_radar_cn_legacy != other.hl_pdu1_activate_radar_cn_legacy) {
      return false;
    }
    if (this->hl_pdu1_activate_radar_r_legacy != other.hl_pdu1_activate_radar_r_legacy) {
      return false;
    }
    if (this->hl_pdu1_activate_radar_l_legacy != other.hl_pdu1_activate_radar_l_legacy) {
      return false;
    }
    return true;
  }
  bool operator!=(const HLMsg03_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HLMsg03_

// alias to use template instance with default allocator
using HLMsg03 =
  sd_can_msgs::msg::HLMsg03_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG03__STRUCT_HPP_
