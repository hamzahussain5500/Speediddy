// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/RcStatus01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__RC_STATUS01__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__RC_STATUS01__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__RcStatus01 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__RcStatus01 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RcStatus01_
{
  using Type = RcStatus01_<ContainerAllocator>;

  explicit RcStatus01_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rc_session_type = 0;
      this->rc_car_flag = 0;
      this->rc_track_flag = 0;
      this->rc_sector_flag = 0;
    }
  }

  explicit RcStatus01_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rc_session_type = 0;
      this->rc_car_flag = 0;
      this->rc_track_flag = 0;
      this->rc_sector_flag = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rc_session_type_type =
    uint8_t;
  _rc_session_type_type rc_session_type;
  using _rc_car_flag_type =
    uint8_t;
  _rc_car_flag_type rc_car_flag;
  using _rc_track_flag_type =
    uint16_t;
  _rc_track_flag_type rc_track_flag;
  using _rc_sector_flag_type =
    uint8_t;
  _rc_sector_flag_type rc_sector_flag;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rc_session_type(
    const uint8_t & _arg)
  {
    this->rc_session_type = _arg;
    return *this;
  }
  Type & set__rc_car_flag(
    const uint8_t & _arg)
  {
    this->rc_car_flag = _arg;
    return *this;
  }
  Type & set__rc_track_flag(
    const uint16_t & _arg)
  {
    this->rc_track_flag = _arg;
    return *this;
  }
  Type & set__rc_sector_flag(
    const uint8_t & _arg)
  {
    this->rc_sector_flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::RcStatus01_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::RcStatus01_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::RcStatus01_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::RcStatus01_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::RcStatus01_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::RcStatus01_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::RcStatus01_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::RcStatus01_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::RcStatus01_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::RcStatus01_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__RcStatus01
    std::shared_ptr<sd_can_msgs::msg::RcStatus01_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__RcStatus01
    std::shared_ptr<sd_can_msgs::msg::RcStatus01_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RcStatus01_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rc_session_type != other.rc_session_type) {
      return false;
    }
    if (this->rc_car_flag != other.rc_car_flag) {
      return false;
    }
    if (this->rc_track_flag != other.rc_track_flag) {
      return false;
    }
    if (this->rc_sector_flag != other.rc_sector_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const RcStatus01_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RcStatus01_

// alias to use template instance with default allocator
using RcStatus01 =
  sd_can_msgs::msg::RcStatus01_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__RC_STATUS01__STRUCT_HPP_
