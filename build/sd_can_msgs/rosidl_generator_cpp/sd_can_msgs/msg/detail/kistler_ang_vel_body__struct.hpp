// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/KistlerAngVelBody.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_ANG_VEL_BODY__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_ANG_VEL_BODY__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__KistlerAngVelBody __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__KistlerAngVelBody __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KistlerAngVelBody_
{
  using Type = KistlerAngVelBody_<ContainerAllocator>;

  explicit KistlerAngVelBody_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ang_vel_x_body = 0.0;
      this->ang_vel_y_body = 0.0;
      this->ang_vel_z_body = 0.0;
    }
  }

  explicit KistlerAngVelBody_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ang_vel_x_body = 0.0;
      this->ang_vel_y_body = 0.0;
      this->ang_vel_z_body = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ang_vel_x_body_type =
    double;
  _ang_vel_x_body_type ang_vel_x_body;
  using _ang_vel_y_body_type =
    double;
  _ang_vel_y_body_type ang_vel_y_body;
  using _ang_vel_z_body_type =
    double;
  _ang_vel_z_body_type ang_vel_z_body;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ang_vel_x_body(
    const double & _arg)
  {
    this->ang_vel_x_body = _arg;
    return *this;
  }
  Type & set__ang_vel_y_body(
    const double & _arg)
  {
    this->ang_vel_y_body = _arg;
    return *this;
  }
  Type & set__ang_vel_z_body(
    const double & _arg)
  {
    this->ang_vel_z_body = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::KistlerAngVelBody_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::KistlerAngVelBody_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::KistlerAngVelBody_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::KistlerAngVelBody_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::KistlerAngVelBody_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::KistlerAngVelBody_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::KistlerAngVelBody_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::KistlerAngVelBody_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::KistlerAngVelBody_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::KistlerAngVelBody_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__KistlerAngVelBody
    std::shared_ptr<sd_can_msgs::msg::KistlerAngVelBody_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__KistlerAngVelBody
    std::shared_ptr<sd_can_msgs::msg::KistlerAngVelBody_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KistlerAngVelBody_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ang_vel_x_body != other.ang_vel_x_body) {
      return false;
    }
    if (this->ang_vel_y_body != other.ang_vel_y_body) {
      return false;
    }
    if (this->ang_vel_z_body != other.ang_vel_z_body) {
      return false;
    }
    return true;
  }
  bool operator!=(const KistlerAngVelBody_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KistlerAngVelBody_

// alias to use template instance with default allocator
using KistlerAngVelBody =
  sd_can_msgs::msg::KistlerAngVelBody_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_ANG_VEL_BODY__STRUCT_HPP_
