// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/WheelsSpeed01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__WHEELS_SPEED01__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__WHEELS_SPEED01__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/wheels_speed01__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelsSpeed01_wss_speed_rr_rad_s
{
public:
  explicit Init_WheelsSpeed01_wss_speed_rr_rad_s(::sd_can_msgs::msg::WheelsSpeed01 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::WheelsSpeed01 wss_speed_rr_rad_s(::sd_can_msgs::msg::WheelsSpeed01::_wss_speed_rr_rad_s_type arg)
  {
    msg_.wss_speed_rr_rad_s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::WheelsSpeed01 msg_;
};

class Init_WheelsSpeed01_wss_speed_rl_rad_s
{
public:
  explicit Init_WheelsSpeed01_wss_speed_rl_rad_s(::sd_can_msgs::msg::WheelsSpeed01 & msg)
  : msg_(msg)
  {}
  Init_WheelsSpeed01_wss_speed_rr_rad_s wss_speed_rl_rad_s(::sd_can_msgs::msg::WheelsSpeed01::_wss_speed_rl_rad_s_type arg)
  {
    msg_.wss_speed_rl_rad_s = std::move(arg);
    return Init_WheelsSpeed01_wss_speed_rr_rad_s(msg_);
  }

private:
  ::sd_can_msgs::msg::WheelsSpeed01 msg_;
};

class Init_WheelsSpeed01_wss_speed_fr_rad_s
{
public:
  explicit Init_WheelsSpeed01_wss_speed_fr_rad_s(::sd_can_msgs::msg::WheelsSpeed01 & msg)
  : msg_(msg)
  {}
  Init_WheelsSpeed01_wss_speed_rl_rad_s wss_speed_fr_rad_s(::sd_can_msgs::msg::WheelsSpeed01::_wss_speed_fr_rad_s_type arg)
  {
    msg_.wss_speed_fr_rad_s = std::move(arg);
    return Init_WheelsSpeed01_wss_speed_rl_rad_s(msg_);
  }

private:
  ::sd_can_msgs::msg::WheelsSpeed01 msg_;
};

class Init_WheelsSpeed01_wss_speed_fl_rad_s
{
public:
  explicit Init_WheelsSpeed01_wss_speed_fl_rad_s(::sd_can_msgs::msg::WheelsSpeed01 & msg)
  : msg_(msg)
  {}
  Init_WheelsSpeed01_wss_speed_fr_rad_s wss_speed_fl_rad_s(::sd_can_msgs::msg::WheelsSpeed01::_wss_speed_fl_rad_s_type arg)
  {
    msg_.wss_speed_fl_rad_s = std::move(arg);
    return Init_WheelsSpeed01_wss_speed_fr_rad_s(msg_);
  }

private:
  ::sd_can_msgs::msg::WheelsSpeed01 msg_;
};

class Init_WheelsSpeed01_header
{
public:
  Init_WheelsSpeed01_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelsSpeed01_wss_speed_fl_rad_s header(::sd_can_msgs::msg::WheelsSpeed01::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WheelsSpeed01_wss_speed_fl_rad_s(msg_);
  }

private:
  ::sd_can_msgs::msg::WheelsSpeed01 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::WheelsSpeed01>()
{
  return sd_can_msgs::msg::builder::Init_WheelsSpeed01_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__WHEELS_SPEED01__BUILDER_HPP_
