// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/KistlerStatus.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_STATUS__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_STATUS__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__KistlerStatus __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__KistlerStatus __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KistlerStatus_
{
  using Type = KistlerStatus_<ContainerAllocator>;

  explicit KistlerStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = 0;
      this->temperature = 0.0;
      this->lamp_current = 0.0;
      this->filter_setting = 0;
      this->stst = 0;
      this->filter_off_on = 0;
      this->lamp_current_control = 0;
      this->temperature_ok = 0;
      this->head_status = 0;
      this->angle_switched_off = 0;
      this->direction = 0;
      this->ang_vel_correction = 0;
      this->direction_motion = 0;
      this->direction_mounting = 0;
      this->direction_head_is_valid = 0;
      this->direction_head = 0;
    }
  }

  explicit KistlerStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = 0;
      this->temperature = 0.0;
      this->lamp_current = 0.0;
      this->filter_setting = 0;
      this->stst = 0;
      this->filter_off_on = 0;
      this->lamp_current_control = 0;
      this->temperature_ok = 0;
      this->head_status = 0;
      this->angle_switched_off = 0;
      this->direction = 0;
      this->ang_vel_correction = 0;
      this->direction_motion = 0;
      this->direction_mounting = 0;
      this->direction_head_is_valid = 0;
      this->direction_head = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sensor_id_type =
    uint16_t;
  _sensor_id_type sensor_id;
  using _temperature_type =
    double;
  _temperature_type temperature;
  using _lamp_current_type =
    double;
  _lamp_current_type lamp_current;
  using _filter_setting_type =
    uint8_t;
  _filter_setting_type filter_setting;
  using _stst_type =
    uint8_t;
  _stst_type stst;
  using _filter_off_on_type =
    uint8_t;
  _filter_off_on_type filter_off_on;
  using _lamp_current_control_type =
    uint8_t;
  _lamp_current_control_type lamp_current_control;
  using _temperature_ok_type =
    uint8_t;
  _temperature_ok_type temperature_ok;
  using _head_status_type =
    uint8_t;
  _head_status_type head_status;
  using _angle_switched_off_type =
    uint8_t;
  _angle_switched_off_type angle_switched_off;
  using _direction_type =
    uint8_t;
  _direction_type direction;
  using _ang_vel_correction_type =
    uint8_t;
  _ang_vel_correction_type ang_vel_correction;
  using _direction_motion_type =
    uint8_t;
  _direction_motion_type direction_motion;
  using _direction_mounting_type =
    uint8_t;
  _direction_mounting_type direction_mounting;
  using _direction_head_is_valid_type =
    uint8_t;
  _direction_head_is_valid_type direction_head_is_valid;
  using _direction_head_type =
    uint8_t;
  _direction_head_type direction_head;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensor_id(
    const uint16_t & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }
  Type & set__temperature(
    const double & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__lamp_current(
    const double & _arg)
  {
    this->lamp_current = _arg;
    return *this;
  }
  Type & set__filter_setting(
    const uint8_t & _arg)
  {
    this->filter_setting = _arg;
    return *this;
  }
  Type & set__stst(
    const uint8_t & _arg)
  {
    this->stst = _arg;
    return *this;
  }
  Type & set__filter_off_on(
    const uint8_t & _arg)
  {
    this->filter_off_on = _arg;
    return *this;
  }
  Type & set__lamp_current_control(
    const uint8_t & _arg)
  {
    this->lamp_current_control = _arg;
    return *this;
  }
  Type & set__temperature_ok(
    const uint8_t & _arg)
  {
    this->temperature_ok = _arg;
    return *this;
  }
  Type & set__head_status(
    const uint8_t & _arg)
  {
    this->head_status = _arg;
    return *this;
  }
  Type & set__angle_switched_off(
    const uint8_t & _arg)
  {
    this->angle_switched_off = _arg;
    return *this;
  }
  Type & set__direction(
    const uint8_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__ang_vel_correction(
    const uint8_t & _arg)
  {
    this->ang_vel_correction = _arg;
    return *this;
  }
  Type & set__direction_motion(
    const uint8_t & _arg)
  {
    this->direction_motion = _arg;
    return *this;
  }
  Type & set__direction_mounting(
    const uint8_t & _arg)
  {
    this->direction_mounting = _arg;
    return *this;
  }
  Type & set__direction_head_is_valid(
    const uint8_t & _arg)
  {
    this->direction_head_is_valid = _arg;
    return *this;
  }
  Type & set__direction_head(
    const uint8_t & _arg)
  {
    this->direction_head = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::KistlerStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::KistlerStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::KistlerStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::KistlerStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::KistlerStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::KistlerStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::KistlerStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::KistlerStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::KistlerStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::KistlerStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__KistlerStatus
    std::shared_ptr<sd_can_msgs::msg::KistlerStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__KistlerStatus
    std::shared_ptr<sd_can_msgs::msg::KistlerStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KistlerStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->lamp_current != other.lamp_current) {
      return false;
    }
    if (this->filter_setting != other.filter_setting) {
      return false;
    }
    if (this->stst != other.stst) {
      return false;
    }
    if (this->filter_off_on != other.filter_off_on) {
      return false;
    }
    if (this->lamp_current_control != other.lamp_current_control) {
      return false;
    }
    if (this->temperature_ok != other.temperature_ok) {
      return false;
    }
    if (this->head_status != other.head_status) {
      return false;
    }
    if (this->angle_switched_off != other.angle_switched_off) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->ang_vel_correction != other.ang_vel_correction) {
      return false;
    }
    if (this->direction_motion != other.direction_motion) {
      return false;
    }
    if (this->direction_mounting != other.direction_mounting) {
      return false;
    }
    if (this->direction_head_is_valid != other.direction_head_is_valid) {
      return false;
    }
    if (this->direction_head != other.direction_head) {
      return false;
    }
    return true;
  }
  bool operator!=(const KistlerStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KistlerStatus_

// alias to use template instance with default allocator
using KistlerStatus =
  sd_can_msgs::msg::KistlerStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_STATUS__STRUCT_HPP_
