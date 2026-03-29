// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/TEXIB6rTx1.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__TEXIB6R_TX1__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__TEXIB6R_TX1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/texib6r_tx1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_TEXIB6rTx1_acc_x
{
public:
  explicit Init_TEXIB6rTx1_acc_x(::sd_can_msgs::msg::TEXIB6rTx1 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::TEXIB6rTx1 acc_x(::sd_can_msgs::msg::TEXIB6rTx1::_acc_x_type arg)
  {
    msg_.acc_x = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::TEXIB6rTx1 msg_;
};

class Init_TEXIB6rTx1_acc_y
{
public:
  explicit Init_TEXIB6rTx1_acc_y(::sd_can_msgs::msg::TEXIB6rTx1 & msg)
  : msg_(msg)
  {}
  Init_TEXIB6rTx1_acc_x acc_y(::sd_can_msgs::msg::TEXIB6rTx1::_acc_y_type arg)
  {
    msg_.acc_y = std::move(arg);
    return Init_TEXIB6rTx1_acc_x(msg_);
  }

private:
  ::sd_can_msgs::msg::TEXIB6rTx1 msg_;
};

class Init_TEXIB6rTx1_acc_z
{
public:
  explicit Init_TEXIB6rTx1_acc_z(::sd_can_msgs::msg::TEXIB6rTx1 & msg)
  : msg_(msg)
  {}
  Init_TEXIB6rTx1_acc_y acc_z(::sd_can_msgs::msg::TEXIB6rTx1::_acc_z_type arg)
  {
    msg_.acc_z = std::move(arg);
    return Init_TEXIB6rTx1_acc_y(msg_);
  }

private:
  ::sd_can_msgs::msg::TEXIB6rTx1 msg_;
};

class Init_TEXIB6rTx1_header
{
public:
  Init_TEXIB6rTx1_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TEXIB6rTx1_acc_z header(::sd_can_msgs::msg::TEXIB6rTx1::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TEXIB6rTx1_acc_z(msg_);
  }

private:
  ::sd_can_msgs::msg::TEXIB6rTx1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::TEXIB6rTx1>()
{
  return sd_can_msgs::msg::builder::Init_TEXIB6rTx1_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__TEXIB6R_TX1__BUILDER_HPP_
