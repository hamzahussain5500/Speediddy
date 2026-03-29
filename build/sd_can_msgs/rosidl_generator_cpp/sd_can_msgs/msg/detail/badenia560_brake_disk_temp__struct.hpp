// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/Badenia560BrakeDiskTemp.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BRAKE_DISK_TEMP__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BRAKE_DISK_TEMP__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__Badenia560BrakeDiskTemp __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__Badenia560BrakeDiskTemp __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Badenia560BrakeDiskTemp_
{
  using Type = Badenia560BrakeDiskTemp_<ContainerAllocator>;

  explicit Badenia560BrakeDiskTemp_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brake_disk_temp_fl = 0.0;
      this->brake_disk_temp_fr = 0.0;
      this->brake_disk_temp_rr = 0.0;
      this->brake_disk_temp_rl = 0.0;
    }
  }

  explicit Badenia560BrakeDiskTemp_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brake_disk_temp_fl = 0.0;
      this->brake_disk_temp_fr = 0.0;
      this->brake_disk_temp_rr = 0.0;
      this->brake_disk_temp_rl = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _brake_disk_temp_fl_type =
    double;
  _brake_disk_temp_fl_type brake_disk_temp_fl;
  using _brake_disk_temp_fr_type =
    double;
  _brake_disk_temp_fr_type brake_disk_temp_fr;
  using _brake_disk_temp_rr_type =
    double;
  _brake_disk_temp_rr_type brake_disk_temp_rr;
  using _brake_disk_temp_rl_type =
    double;
  _brake_disk_temp_rl_type brake_disk_temp_rl;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__brake_disk_temp_fl(
    const double & _arg)
  {
    this->brake_disk_temp_fl = _arg;
    return *this;
  }
  Type & set__brake_disk_temp_fr(
    const double & _arg)
  {
    this->brake_disk_temp_fr = _arg;
    return *this;
  }
  Type & set__brake_disk_temp_rr(
    const double & _arg)
  {
    this->brake_disk_temp_rr = _arg;
    return *this;
  }
  Type & set__brake_disk_temp_rl(
    const double & _arg)
  {
    this->brake_disk_temp_rl = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::Badenia560BrakeDiskTemp_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::Badenia560BrakeDiskTemp_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560BrakeDiskTemp_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560BrakeDiskTemp_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560BrakeDiskTemp_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560BrakeDiskTemp_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560BrakeDiskTemp_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560BrakeDiskTemp_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560BrakeDiskTemp_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560BrakeDiskTemp_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560BrakeDiskTemp
    std::shared_ptr<sd_can_msgs::msg::Badenia560BrakeDiskTemp_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560BrakeDiskTemp
    std::shared_ptr<sd_can_msgs::msg::Badenia560BrakeDiskTemp_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Badenia560BrakeDiskTemp_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->brake_disk_temp_fl != other.brake_disk_temp_fl) {
      return false;
    }
    if (this->brake_disk_temp_fr != other.brake_disk_temp_fr) {
      return false;
    }
    if (this->brake_disk_temp_rr != other.brake_disk_temp_rr) {
      return false;
    }
    if (this->brake_disk_temp_rl != other.brake_disk_temp_rl) {
      return false;
    }
    return true;
  }
  bool operator!=(const Badenia560BrakeDiskTemp_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Badenia560BrakeDiskTemp_

// alias to use template instance with default allocator
using Badenia560BrakeDiskTemp =
  sd_can_msgs::msg::Badenia560BrakeDiskTemp_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BRAKE_DISK_TEMP__STRUCT_HPP_
