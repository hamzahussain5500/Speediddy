// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/HLPCInfo1.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HLPC_INFO1__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HLPC_INFO1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/hlpc_info1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_HLPCInfo1_hlpc_alive_c4
{
public:
  explicit Init_HLPCInfo1_hlpc_alive_c4(::sd_can_msgs::msg::HLPCInfo1 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::HLPCInfo1 hlpc_alive_c4(::sd_can_msgs::msg::HLPCInfo1::_hlpc_alive_c4_type arg)
  {
    msg_.hlpc_alive_c4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::HLPCInfo1 msg_;
};

class Init_HLPCInfo1_hlpc_vector_nav_fix
{
public:
  explicit Init_HLPCInfo1_hlpc_vector_nav_fix(::sd_can_msgs::msg::HLPCInfo1 & msg)
  : msg_(msg)
  {}
  Init_HLPCInfo1_hlpc_alive_c4 hlpc_vector_nav_fix(::sd_can_msgs::msg::HLPCInfo1::_hlpc_vector_nav_fix_type arg)
  {
    msg_.hlpc_vector_nav_fix = std::move(arg);
    return Init_HLPCInfo1_hlpc_alive_c4(msg_);
  }

private:
  ::sd_can_msgs::msg::HLPCInfo1 msg_;
};

class Init_HLPCInfo1_hlpc_radar_status_rear
{
public:
  explicit Init_HLPCInfo1_hlpc_radar_status_rear(::sd_can_msgs::msg::HLPCInfo1 & msg)
  : msg_(msg)
  {}
  Init_HLPCInfo1_hlpc_vector_nav_fix hlpc_radar_status_rear(::sd_can_msgs::msg::HLPCInfo1::_hlpc_radar_status_rear_type arg)
  {
    msg_.hlpc_radar_status_rear = std::move(arg);
    return Init_HLPCInfo1_hlpc_vector_nav_fix(msg_);
  }

private:
  ::sd_can_msgs::msg::HLPCInfo1 msg_;
};

class Init_HLPCInfo1_hlpc_radar_status_right
{
public:
  explicit Init_HLPCInfo1_hlpc_radar_status_right(::sd_can_msgs::msg::HLPCInfo1 & msg)
  : msg_(msg)
  {}
  Init_HLPCInfo1_hlpc_radar_status_rear hlpc_radar_status_right(::sd_can_msgs::msg::HLPCInfo1::_hlpc_radar_status_right_type arg)
  {
    msg_.hlpc_radar_status_right = std::move(arg);
    return Init_HLPCInfo1_hlpc_radar_status_rear(msg_);
  }

private:
  ::sd_can_msgs::msg::HLPCInfo1 msg_;
};

class Init_HLPCInfo1_hlpc_radar_status_left
{
public:
  explicit Init_HLPCInfo1_hlpc_radar_status_left(::sd_can_msgs::msg::HLPCInfo1 & msg)
  : msg_(msg)
  {}
  Init_HLPCInfo1_hlpc_radar_status_right hlpc_radar_status_left(::sd_can_msgs::msg::HLPCInfo1::_hlpc_radar_status_left_type arg)
  {
    msg_.hlpc_radar_status_left = std::move(arg);
    return Init_HLPCInfo1_hlpc_radar_status_right(msg_);
  }

private:
  ::sd_can_msgs::msg::HLPCInfo1 msg_;
};

class Init_HLPCInfo1_hlpc_radar_status_front
{
public:
  explicit Init_HLPCInfo1_hlpc_radar_status_front(::sd_can_msgs::msg::HLPCInfo1 & msg)
  : msg_(msg)
  {}
  Init_HLPCInfo1_hlpc_radar_status_left hlpc_radar_status_front(::sd_can_msgs::msg::HLPCInfo1::_hlpc_radar_status_front_type arg)
  {
    msg_.hlpc_radar_status_front = std::move(arg);
    return Init_HLPCInfo1_hlpc_radar_status_left(msg_);
  }

private:
  ::sd_can_msgs::msg::HLPCInfo1 msg_;
};

class Init_HLPCInfo1_hlpc_lidar_status_right
{
public:
  explicit Init_HLPCInfo1_hlpc_lidar_status_right(::sd_can_msgs::msg::HLPCInfo1 & msg)
  : msg_(msg)
  {}
  Init_HLPCInfo1_hlpc_radar_status_front hlpc_lidar_status_right(::sd_can_msgs::msg::HLPCInfo1::_hlpc_lidar_status_right_type arg)
  {
    msg_.hlpc_lidar_status_right = std::move(arg);
    return Init_HLPCInfo1_hlpc_radar_status_front(msg_);
  }

private:
  ::sd_can_msgs::msg::HLPCInfo1 msg_;
};

class Init_HLPCInfo1_hlpc_lidar_status_front
{
public:
  explicit Init_HLPCInfo1_hlpc_lidar_status_front(::sd_can_msgs::msg::HLPCInfo1 & msg)
  : msg_(msg)
  {}
  Init_HLPCInfo1_hlpc_lidar_status_right hlpc_lidar_status_front(::sd_can_msgs::msg::HLPCInfo1::_hlpc_lidar_status_front_type arg)
  {
    msg_.hlpc_lidar_status_front = std::move(arg);
    return Init_HLPCInfo1_hlpc_lidar_status_right(msg_);
  }

private:
  ::sd_can_msgs::msg::HLPCInfo1 msg_;
};

class Init_HLPCInfo1_hlpc_lidar_status_left
{
public:
  explicit Init_HLPCInfo1_hlpc_lidar_status_left(::sd_can_msgs::msg::HLPCInfo1 & msg)
  : msg_(msg)
  {}
  Init_HLPCInfo1_hlpc_lidar_status_front hlpc_lidar_status_left(::sd_can_msgs::msg::HLPCInfo1::_hlpc_lidar_status_left_type arg)
  {
    msg_.hlpc_lidar_status_left = std::move(arg);
    return Init_HLPCInfo1_hlpc_lidar_status_front(msg_);
  }

private:
  ::sd_can_msgs::msg::HLPCInfo1 msg_;
};

class Init_HLPCInfo1_hlpc_network_ping
{
public:
  explicit Init_HLPCInfo1_hlpc_network_ping(::sd_can_msgs::msg::HLPCInfo1 & msg)
  : msg_(msg)
  {}
  Init_HLPCInfo1_hlpc_lidar_status_left hlpc_network_ping(::sd_can_msgs::msg::HLPCInfo1::_hlpc_network_ping_type arg)
  {
    msg_.hlpc_network_ping = std::move(arg);
    return Init_HLPCInfo1_hlpc_lidar_status_left(msg_);
  }

private:
  ::sd_can_msgs::msg::HLPCInfo1 msg_;
};

class Init_HLPCInfo1_header
{
public:
  Init_HLPCInfo1_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HLPCInfo1_hlpc_network_ping header(::sd_can_msgs::msg::HLPCInfo1::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HLPCInfo1_hlpc_network_ping(msg_);
  }

private:
  ::sd_can_msgs::msg::HLPCInfo1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::HLPCInfo1>()
{
  return sd_can_msgs::msg::builder::Init_HLPCInfo1_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__HLPC_INFO1__BUILDER_HPP_
