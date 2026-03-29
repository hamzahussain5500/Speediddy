// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/KistlerCorrevit.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_CORREVIT__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_CORREVIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/kistler_correvit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_KistlerCorrevit_angle_cor
{
public:
  explicit Init_KistlerCorrevit_angle_cor(::sd_can_msgs::msg::KistlerCorrevit & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::KistlerCorrevit angle_cor(::sd_can_msgs::msg::KistlerCorrevit::_angle_cor_type arg)
  {
    msg_.angle_cor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerCorrevit msg_;
};

class Init_KistlerCorrevit_vel_cor
{
public:
  explicit Init_KistlerCorrevit_vel_cor(::sd_can_msgs::msg::KistlerCorrevit & msg)
  : msg_(msg)
  {}
  Init_KistlerCorrevit_angle_cor vel_cor(::sd_can_msgs::msg::KistlerCorrevit::_vel_cor_type arg)
  {
    msg_.vel_cor = std::move(arg);
    return Init_KistlerCorrevit_angle_cor(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerCorrevit msg_;
};

class Init_KistlerCorrevit_vel_y_cor
{
public:
  explicit Init_KistlerCorrevit_vel_y_cor(::sd_can_msgs::msg::KistlerCorrevit & msg)
  : msg_(msg)
  {}
  Init_KistlerCorrevit_vel_cor vel_y_cor(::sd_can_msgs::msg::KistlerCorrevit::_vel_y_cor_type arg)
  {
    msg_.vel_y_cor = std::move(arg);
    return Init_KistlerCorrevit_vel_cor(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerCorrevit msg_;
};

class Init_KistlerCorrevit_vel_x_cor
{
public:
  explicit Init_KistlerCorrevit_vel_x_cor(::sd_can_msgs::msg::KistlerCorrevit & msg)
  : msg_(msg)
  {}
  Init_KistlerCorrevit_vel_y_cor vel_x_cor(::sd_can_msgs::msg::KistlerCorrevit::_vel_x_cor_type arg)
  {
    msg_.vel_x_cor = std::move(arg);
    return Init_KistlerCorrevit_vel_y_cor(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerCorrevit msg_;
};

class Init_KistlerCorrevit_header
{
public:
  Init_KistlerCorrevit_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KistlerCorrevit_vel_x_cor header(::sd_can_msgs::msg::KistlerCorrevit::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_KistlerCorrevit_vel_x_cor(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerCorrevit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::KistlerCorrevit>()
{
  return sd_can_msgs::msg::builder::Init_KistlerCorrevit_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_CORREVIT__BUILDER_HPP_
