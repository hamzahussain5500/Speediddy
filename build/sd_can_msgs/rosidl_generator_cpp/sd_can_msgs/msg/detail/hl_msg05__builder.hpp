// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/HLMsg05.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG05__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG05__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/hl_msg05__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_HLMsg05_hl_vel_up
{
public:
  explicit Init_HLMsg05_hl_vel_up(::sd_can_msgs::msg::HLMsg05 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::HLMsg05 hl_vel_up(::sd_can_msgs::msg::HLMsg05::_hl_vel_up_type arg)
  {
    msg_.hl_vel_up = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg05 msg_;
};

class Init_HLMsg05_hl_vel_north
{
public:
  explicit Init_HLMsg05_hl_vel_north(::sd_can_msgs::msg::HLMsg05 & msg)
  : msg_(msg)
  {}
  Init_HLMsg05_hl_vel_up hl_vel_north(::sd_can_msgs::msg::HLMsg05::_hl_vel_north_type arg)
  {
    msg_.hl_vel_north = std::move(arg);
    return Init_HLMsg05_hl_vel_up(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg05 msg_;
};

class Init_HLMsg05_hl_vel_east
{
public:
  explicit Init_HLMsg05_hl_vel_east(::sd_can_msgs::msg::HLMsg05 & msg)
  : msg_(msg)
  {}
  Init_HLMsg05_hl_vel_north hl_vel_east(::sd_can_msgs::msg::HLMsg05::_hl_vel_east_type arg)
  {
    msg_.hl_vel_east = std::move(arg);
    return Init_HLMsg05_hl_vel_north(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg05 msg_;
};

class Init_HLMsg05_hl_height
{
public:
  explicit Init_HLMsg05_hl_height(::sd_can_msgs::msg::HLMsg05 & msg)
  : msg_(msg)
  {}
  Init_HLMsg05_hl_vel_east hl_height(::sd_can_msgs::msg::HLMsg05::_hl_height_type arg)
  {
    msg_.hl_height = std::move(arg);
    return Init_HLMsg05_hl_vel_east(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg05 msg_;
};

class Init_HLMsg05_header
{
public:
  Init_HLMsg05_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HLMsg05_hl_height header(::sd_can_msgs::msg::HLMsg05::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HLMsg05_hl_height(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg05 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::HLMsg05>()
{
  return sd_can_msgs::msg::builder::Init_HLMsg05_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG05__BUILDER_HPP_
