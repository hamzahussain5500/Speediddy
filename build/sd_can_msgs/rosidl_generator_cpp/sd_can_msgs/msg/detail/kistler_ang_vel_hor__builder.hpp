// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/KistlerAngVelHor.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_ANG_VEL_HOR__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_ANG_VEL_HOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/kistler_ang_vel_hor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_KistlerAngVelHor_ang_vel_z_hor
{
public:
  explicit Init_KistlerAngVelHor_ang_vel_z_hor(::sd_can_msgs::msg::KistlerAngVelHor & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::KistlerAngVelHor ang_vel_z_hor(::sd_can_msgs::msg::KistlerAngVelHor::_ang_vel_z_hor_type arg)
  {
    msg_.ang_vel_z_hor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerAngVelHor msg_;
};

class Init_KistlerAngVelHor_ang_vel_y_hor
{
public:
  explicit Init_KistlerAngVelHor_ang_vel_y_hor(::sd_can_msgs::msg::KistlerAngVelHor & msg)
  : msg_(msg)
  {}
  Init_KistlerAngVelHor_ang_vel_z_hor ang_vel_y_hor(::sd_can_msgs::msg::KistlerAngVelHor::_ang_vel_y_hor_type arg)
  {
    msg_.ang_vel_y_hor = std::move(arg);
    return Init_KistlerAngVelHor_ang_vel_z_hor(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerAngVelHor msg_;
};

class Init_KistlerAngVelHor_ang_vel_x_hor
{
public:
  explicit Init_KistlerAngVelHor_ang_vel_x_hor(::sd_can_msgs::msg::KistlerAngVelHor & msg)
  : msg_(msg)
  {}
  Init_KistlerAngVelHor_ang_vel_y_hor ang_vel_x_hor(::sd_can_msgs::msg::KistlerAngVelHor::_ang_vel_x_hor_type arg)
  {
    msg_.ang_vel_x_hor = std::move(arg);
    return Init_KistlerAngVelHor_ang_vel_y_hor(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerAngVelHor msg_;
};

class Init_KistlerAngVelHor_header
{
public:
  Init_KistlerAngVelHor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KistlerAngVelHor_ang_vel_x_hor header(::sd_can_msgs::msg::KistlerAngVelHor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_KistlerAngVelHor_ang_vel_x_hor(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerAngVelHor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::KistlerAngVelHor>()
{
  return sd_can_msgs::msg::builder::Init_KistlerAngVelHor_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_ANG_VEL_HOR__BUILDER_HPP_
