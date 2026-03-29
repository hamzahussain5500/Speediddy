// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_map_msgs:msg/SnState.idl
// generated code does not contain a copyright notice

#ifndef SD_MAP_MSGS__MSG__DETAIL__SN_STATE__BUILDER_HPP_
#define SD_MAP_MSGS__MSG__DETAIL__SN_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_map_msgs/msg/detail/sn_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_map_msgs
{

namespace msg
{

namespace builder
{

class Init_SnState_status
{
public:
  explicit Init_SnState_status(::sd_map_msgs::msg::SnState & msg)
  : msg_(msg)
  {}
  ::sd_map_msgs::msg::SnState status(::sd_map_msgs::msg::SnState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_map_msgs::msg::SnState msg_;
};

class Init_SnState_epsi
{
public:
  explicit Init_SnState_epsi(::sd_map_msgs::msg::SnState & msg)
  : msg_(msg)
  {}
  Init_SnState_status epsi(::sd_map_msgs::msg::SnState::_epsi_type arg)
  {
    msg_.epsi = std::move(arg);
    return Init_SnState_status(msg_);
  }

private:
  ::sd_map_msgs::msg::SnState msg_;
};

class Init_SnState_n
{
public:
  explicit Init_SnState_n(::sd_map_msgs::msg::SnState & msg)
  : msg_(msg)
  {}
  Init_SnState_epsi n(::sd_map_msgs::msg::SnState::_n_type arg)
  {
    msg_.n = std::move(arg);
    return Init_SnState_epsi(msg_);
  }

private:
  ::sd_map_msgs::msg::SnState msg_;
};

class Init_SnState_d_idx
{
public:
  explicit Init_SnState_d_idx(::sd_map_msgs::msg::SnState & msg)
  : msg_(msg)
  {}
  Init_SnState_n d_idx(::sd_map_msgs::msg::SnState::_d_idx_type arg)
  {
    msg_.d_idx = std::move(arg);
    return Init_SnState_n(msg_);
  }

private:
  ::sd_map_msgs::msg::SnState msg_;
};

class Init_SnState_ds
{
public:
  explicit Init_SnState_ds(::sd_map_msgs::msg::SnState & msg)
  : msg_(msg)
  {}
  Init_SnState_d_idx ds(::sd_map_msgs::msg::SnState::_ds_type arg)
  {
    msg_.ds = std::move(arg);
    return Init_SnState_d_idx(msg_);
  }

private:
  ::sd_map_msgs::msg::SnState msg_;
};

class Init_SnState_idx
{
public:
  Init_SnState_idx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SnState_ds idx(::sd_map_msgs::msg::SnState::_idx_type arg)
  {
    msg_.idx = std::move(arg);
    return Init_SnState_ds(msg_);
  }

private:
  ::sd_map_msgs::msg::SnState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_map_msgs::msg::SnState>()
{
  return sd_map_msgs::msg::builder::Init_SnState_idx();
}

}  // namespace sd_map_msgs

#endif  // SD_MAP_MSGS__MSG__DETAIL__SN_STATE__BUILDER_HPP_
