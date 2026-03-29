// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/RcStatus01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__RC_STATUS01__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__RC_STATUS01__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/rc_status01__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_RcStatus01_rc_sector_flag
{
public:
  explicit Init_RcStatus01_rc_sector_flag(::sd_can_msgs::msg::RcStatus01 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::RcStatus01 rc_sector_flag(::sd_can_msgs::msg::RcStatus01::_rc_sector_flag_type arg)
  {
    msg_.rc_sector_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::RcStatus01 msg_;
};

class Init_RcStatus01_rc_track_flag
{
public:
  explicit Init_RcStatus01_rc_track_flag(::sd_can_msgs::msg::RcStatus01 & msg)
  : msg_(msg)
  {}
  Init_RcStatus01_rc_sector_flag rc_track_flag(::sd_can_msgs::msg::RcStatus01::_rc_track_flag_type arg)
  {
    msg_.rc_track_flag = std::move(arg);
    return Init_RcStatus01_rc_sector_flag(msg_);
  }

private:
  ::sd_can_msgs::msg::RcStatus01 msg_;
};

class Init_RcStatus01_rc_car_flag
{
public:
  explicit Init_RcStatus01_rc_car_flag(::sd_can_msgs::msg::RcStatus01 & msg)
  : msg_(msg)
  {}
  Init_RcStatus01_rc_track_flag rc_car_flag(::sd_can_msgs::msg::RcStatus01::_rc_car_flag_type arg)
  {
    msg_.rc_car_flag = std::move(arg);
    return Init_RcStatus01_rc_track_flag(msg_);
  }

private:
  ::sd_can_msgs::msg::RcStatus01 msg_;
};

class Init_RcStatus01_rc_session_type
{
public:
  explicit Init_RcStatus01_rc_session_type(::sd_can_msgs::msg::RcStatus01 & msg)
  : msg_(msg)
  {}
  Init_RcStatus01_rc_car_flag rc_session_type(::sd_can_msgs::msg::RcStatus01::_rc_session_type_type arg)
  {
    msg_.rc_session_type = std::move(arg);
    return Init_RcStatus01_rc_car_flag(msg_);
  }

private:
  ::sd_can_msgs::msg::RcStatus01 msg_;
};

class Init_RcStatus01_header
{
public:
  Init_RcStatus01_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RcStatus01_rc_session_type header(::sd_can_msgs::msg::RcStatus01::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RcStatus01_rc_session_type(msg_);
  }

private:
  ::sd_can_msgs::msg::RcStatus01 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::RcStatus01>()
{
  return sd_can_msgs::msg::builder::Init_RcStatus01_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__RC_STATUS01__BUILDER_HPP_
