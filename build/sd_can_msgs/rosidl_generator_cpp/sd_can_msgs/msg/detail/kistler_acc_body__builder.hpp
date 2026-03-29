// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/KistlerAccBody.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_ACC_BODY__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_ACC_BODY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/kistler_acc_body__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_KistlerAccBody_acc_z_body
{
public:
  explicit Init_KistlerAccBody_acc_z_body(::sd_can_msgs::msg::KistlerAccBody & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::KistlerAccBody acc_z_body(::sd_can_msgs::msg::KistlerAccBody::_acc_z_body_type arg)
  {
    msg_.acc_z_body = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerAccBody msg_;
};

class Init_KistlerAccBody_acc_y_body
{
public:
  explicit Init_KistlerAccBody_acc_y_body(::sd_can_msgs::msg::KistlerAccBody & msg)
  : msg_(msg)
  {}
  Init_KistlerAccBody_acc_z_body acc_y_body(::sd_can_msgs::msg::KistlerAccBody::_acc_y_body_type arg)
  {
    msg_.acc_y_body = std::move(arg);
    return Init_KistlerAccBody_acc_z_body(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerAccBody msg_;
};

class Init_KistlerAccBody_acc_x_body
{
public:
  explicit Init_KistlerAccBody_acc_x_body(::sd_can_msgs::msg::KistlerAccBody & msg)
  : msg_(msg)
  {}
  Init_KistlerAccBody_acc_y_body acc_x_body(::sd_can_msgs::msg::KistlerAccBody::_acc_x_body_type arg)
  {
    msg_.acc_x_body = std::move(arg);
    return Init_KistlerAccBody_acc_y_body(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerAccBody msg_;
};

class Init_KistlerAccBody_header
{
public:
  Init_KistlerAccBody_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KistlerAccBody_acc_x_body header(::sd_can_msgs::msg::KistlerAccBody::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_KistlerAccBody_acc_x_body(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerAccBody msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::KistlerAccBody>()
{
  return sd_can_msgs::msg::builder::Init_KistlerAccBody_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_ACC_BODY__BUILDER_HPP_
