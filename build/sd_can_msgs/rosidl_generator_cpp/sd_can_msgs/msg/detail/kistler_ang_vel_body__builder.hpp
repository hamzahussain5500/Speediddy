// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/KistlerAngVelBody.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_ANG_VEL_BODY__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_ANG_VEL_BODY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/kistler_ang_vel_body__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_KistlerAngVelBody_ang_vel_z_body
{
public:
  explicit Init_KistlerAngVelBody_ang_vel_z_body(::sd_can_msgs::msg::KistlerAngVelBody & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::KistlerAngVelBody ang_vel_z_body(::sd_can_msgs::msg::KistlerAngVelBody::_ang_vel_z_body_type arg)
  {
    msg_.ang_vel_z_body = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerAngVelBody msg_;
};

class Init_KistlerAngVelBody_ang_vel_y_body
{
public:
  explicit Init_KistlerAngVelBody_ang_vel_y_body(::sd_can_msgs::msg::KistlerAngVelBody & msg)
  : msg_(msg)
  {}
  Init_KistlerAngVelBody_ang_vel_z_body ang_vel_y_body(::sd_can_msgs::msg::KistlerAngVelBody::_ang_vel_y_body_type arg)
  {
    msg_.ang_vel_y_body = std::move(arg);
    return Init_KistlerAngVelBody_ang_vel_z_body(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerAngVelBody msg_;
};

class Init_KistlerAngVelBody_ang_vel_x_body
{
public:
  explicit Init_KistlerAngVelBody_ang_vel_x_body(::sd_can_msgs::msg::KistlerAngVelBody & msg)
  : msg_(msg)
  {}
  Init_KistlerAngVelBody_ang_vel_y_body ang_vel_x_body(::sd_can_msgs::msg::KistlerAngVelBody::_ang_vel_x_body_type arg)
  {
    msg_.ang_vel_x_body = std::move(arg);
    return Init_KistlerAngVelBody_ang_vel_y_body(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerAngVelBody msg_;
};

class Init_KistlerAngVelBody_header
{
public:
  Init_KistlerAngVelBody_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KistlerAngVelBody_ang_vel_x_body header(::sd_can_msgs::msg::KistlerAngVelBody::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_KistlerAngVelBody_ang_vel_x_body(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerAngVelBody msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::KistlerAngVelBody>()
{
  return sd_can_msgs::msg::builder::Init_KistlerAngVelBody_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_ANG_VEL_BODY__BUILDER_HPP_
