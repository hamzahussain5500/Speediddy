// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_map_msgs:msg/SnState.idl
// generated code does not contain a copyright notice

#ifndef SD_MAP_MSGS__MSG__DETAIL__SN_STATE__STRUCT_HPP_
#define SD_MAP_MSGS__MSG__DETAIL__SN_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sd_map_msgs__msg__SnState __attribute__((deprecated))
#else
# define DEPRECATED__sd_map_msgs__msg__SnState __declspec(deprecated)
#endif

namespace sd_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SnState_
{
  using Type = SnState_<ContainerAllocator>;

  explicit SnState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->idx = 0ul;
      this->ds = 0.0;
      this->d_idx = 0.0;
      this->n = 0.0;
      this->epsi = 0.0;
      this->status = 0;
    }
  }

  explicit SnState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->idx = 0ul;
      this->ds = 0.0;
      this->d_idx = 0.0;
      this->n = 0.0;
      this->epsi = 0.0;
      this->status = 0;
    }
  }

  // field types and members
  using _idx_type =
    uint32_t;
  _idx_type idx;
  using _ds_type =
    double;
  _ds_type ds;
  using _d_idx_type =
    double;
  _d_idx_type d_idx;
  using _n_type =
    double;
  _n_type n;
  using _epsi_type =
    double;
  _epsi_type epsi;
  using _status_type =
    uint8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__idx(
    const uint32_t & _arg)
  {
    this->idx = _arg;
    return *this;
  }
  Type & set__ds(
    const double & _arg)
  {
    this->ds = _arg;
    return *this;
  }
  Type & set__d_idx(
    const double & _arg)
  {
    this->d_idx = _arg;
    return *this;
  }
  Type & set__n(
    const double & _arg)
  {
    this->n = _arg;
    return *this;
  }
  Type & set__epsi(
    const double & _arg)
  {
    this->epsi = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_map_msgs::msg::SnState_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_map_msgs::msg::SnState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_map_msgs::msg::SnState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_map_msgs::msg::SnState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_map_msgs::msg::SnState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_map_msgs::msg::SnState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_map_msgs::msg::SnState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_map_msgs::msg::SnState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_map_msgs::msg::SnState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_map_msgs::msg::SnState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_map_msgs__msg__SnState
    std::shared_ptr<sd_map_msgs::msg::SnState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_map_msgs__msg__SnState
    std::shared_ptr<sd_map_msgs::msg::SnState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SnState_ & other) const
  {
    if (this->idx != other.idx) {
      return false;
    }
    if (this->ds != other.ds) {
      return false;
    }
    if (this->d_idx != other.d_idx) {
      return false;
    }
    if (this->n != other.n) {
      return false;
    }
    if (this->epsi != other.epsi) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SnState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SnState_

// alias to use template instance with default allocator
using SnState =
  sd_map_msgs::msg::SnState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_map_msgs

#endif  // SD_MAP_MSGS__MSG__DETAIL__SN_STATE__STRUCT_HPP_
