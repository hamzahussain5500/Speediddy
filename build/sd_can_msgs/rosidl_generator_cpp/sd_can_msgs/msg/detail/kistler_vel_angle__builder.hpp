// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/KistlerVelAngle.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_VEL_ANGLE__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_VEL_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/kistler_vel_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_KistlerVelAngle_angle
{
public:
  explicit Init_KistlerVelAngle_angle(::sd_can_msgs::msg::KistlerVelAngle & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::KistlerVelAngle angle(::sd_can_msgs::msg::KistlerVelAngle::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerVelAngle msg_;
};

class Init_KistlerVelAngle_vel
{
public:
  explicit Init_KistlerVelAngle_vel(::sd_can_msgs::msg::KistlerVelAngle & msg)
  : msg_(msg)
  {}
  Init_KistlerVelAngle_angle vel(::sd_can_msgs::msg::KistlerVelAngle::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_KistlerVelAngle_angle(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerVelAngle msg_;
};

class Init_KistlerVelAngle_vel_y
{
public:
  explicit Init_KistlerVelAngle_vel_y(::sd_can_msgs::msg::KistlerVelAngle & msg)
  : msg_(msg)
  {}
  Init_KistlerVelAngle_vel vel_y(::sd_can_msgs::msg::KistlerVelAngle::_vel_y_type arg)
  {
    msg_.vel_y = std::move(arg);
    return Init_KistlerVelAngle_vel(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerVelAngle msg_;
};

class Init_KistlerVelAngle_vel_x
{
public:
  explicit Init_KistlerVelAngle_vel_x(::sd_can_msgs::msg::KistlerVelAngle & msg)
  : msg_(msg)
  {}
  Init_KistlerVelAngle_vel_y vel_x(::sd_can_msgs::msg::KistlerVelAngle::_vel_x_type arg)
  {
    msg_.vel_x = std::move(arg);
    return Init_KistlerVelAngle_vel_y(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerVelAngle msg_;
};

class Init_KistlerVelAngle_header
{
public:
  Init_KistlerVelAngle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KistlerVelAngle_vel_x header(::sd_can_msgs::msg::KistlerVelAngle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_KistlerVelAngle_vel_x(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerVelAngle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::KistlerVelAngle>()
{
  return sd_can_msgs::msg::builder::Init_KistlerVelAngle_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_VEL_ANGLE__BUILDER_HPP_
