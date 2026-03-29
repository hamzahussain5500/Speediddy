// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/TEXIB6rTx2.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__TEXIB6R_TX2__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__TEXIB6R_TX2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/texib6r_tx2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_TEXIB6rTx2_gyr_x
{
public:
  explicit Init_TEXIB6rTx2_gyr_x(::sd_can_msgs::msg::TEXIB6rTx2 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::TEXIB6rTx2 gyr_x(::sd_can_msgs::msg::TEXIB6rTx2::_gyr_x_type arg)
  {
    msg_.gyr_x = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::TEXIB6rTx2 msg_;
};

class Init_TEXIB6rTx2_gyr_y
{
public:
  explicit Init_TEXIB6rTx2_gyr_y(::sd_can_msgs::msg::TEXIB6rTx2 & msg)
  : msg_(msg)
  {}
  Init_TEXIB6rTx2_gyr_x gyr_y(::sd_can_msgs::msg::TEXIB6rTx2::_gyr_y_type arg)
  {
    msg_.gyr_y = std::move(arg);
    return Init_TEXIB6rTx2_gyr_x(msg_);
  }

private:
  ::sd_can_msgs::msg::TEXIB6rTx2 msg_;
};

class Init_TEXIB6rTx2_gyr_z
{
public:
  explicit Init_TEXIB6rTx2_gyr_z(::sd_can_msgs::msg::TEXIB6rTx2 & msg)
  : msg_(msg)
  {}
  Init_TEXIB6rTx2_gyr_y gyr_z(::sd_can_msgs::msg::TEXIB6rTx2::_gyr_z_type arg)
  {
    msg_.gyr_z = std::move(arg);
    return Init_TEXIB6rTx2_gyr_y(msg_);
  }

private:
  ::sd_can_msgs::msg::TEXIB6rTx2 msg_;
};

class Init_TEXIB6rTx2_header
{
public:
  Init_TEXIB6rTx2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TEXIB6rTx2_gyr_z header(::sd_can_msgs::msg::TEXIB6rTx2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TEXIB6rTx2_gyr_z(msg_);
  }

private:
  ::sd_can_msgs::msg::TEXIB6rTx2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::TEXIB6rTx2>()
{
  return sd_can_msgs::msg::builder::Init_TEXIB6rTx2_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__TEXIB6R_TX2__BUILDER_HPP_
