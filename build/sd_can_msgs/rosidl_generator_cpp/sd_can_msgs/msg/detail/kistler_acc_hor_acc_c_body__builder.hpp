// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/KistlerAccHorAccCBody.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_ACC_HOR_ACC_C_BODY__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_ACC_HOR_ACC_C_BODY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/kistler_acc_hor_acc_c_body__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_KistlerAccHorAccCBody_acc_c_body
{
public:
  explicit Init_KistlerAccHorAccCBody_acc_c_body(::sd_can_msgs::msg::KistlerAccHorAccCBody & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::KistlerAccHorAccCBody acc_c_body(::sd_can_msgs::msg::KistlerAccHorAccCBody::_acc_c_body_type arg)
  {
    msg_.acc_c_body = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerAccHorAccCBody msg_;
};

class Init_KistlerAccHorAccCBody_acc_z_hor
{
public:
  explicit Init_KistlerAccHorAccCBody_acc_z_hor(::sd_can_msgs::msg::KistlerAccHorAccCBody & msg)
  : msg_(msg)
  {}
  Init_KistlerAccHorAccCBody_acc_c_body acc_z_hor(::sd_can_msgs::msg::KistlerAccHorAccCBody::_acc_z_hor_type arg)
  {
    msg_.acc_z_hor = std::move(arg);
    return Init_KistlerAccHorAccCBody_acc_c_body(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerAccHorAccCBody msg_;
};

class Init_KistlerAccHorAccCBody_acc_y_hor
{
public:
  explicit Init_KistlerAccHorAccCBody_acc_y_hor(::sd_can_msgs::msg::KistlerAccHorAccCBody & msg)
  : msg_(msg)
  {}
  Init_KistlerAccHorAccCBody_acc_z_hor acc_y_hor(::sd_can_msgs::msg::KistlerAccHorAccCBody::_acc_y_hor_type arg)
  {
    msg_.acc_y_hor = std::move(arg);
    return Init_KistlerAccHorAccCBody_acc_z_hor(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerAccHorAccCBody msg_;
};

class Init_KistlerAccHorAccCBody_acc_x_hor
{
public:
  explicit Init_KistlerAccHorAccCBody_acc_x_hor(::sd_can_msgs::msg::KistlerAccHorAccCBody & msg)
  : msg_(msg)
  {}
  Init_KistlerAccHorAccCBody_acc_y_hor acc_x_hor(::sd_can_msgs::msg::KistlerAccHorAccCBody::_acc_x_hor_type arg)
  {
    msg_.acc_x_hor = std::move(arg);
    return Init_KistlerAccHorAccCBody_acc_y_hor(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerAccHorAccCBody msg_;
};

class Init_KistlerAccHorAccCBody_header
{
public:
  Init_KistlerAccHorAccCBody_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KistlerAccHorAccCBody_acc_x_hor header(::sd_can_msgs::msg::KistlerAccHorAccCBody::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_KistlerAccHorAccCBody_acc_x_hor(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerAccHorAccCBody msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::KistlerAccHorAccCBody>()
{
  return sd_can_msgs::msg::builder::Init_KistlerAccHorAccCBody_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_ACC_HOR_ACC_C_BODY__BUILDER_HPP_
