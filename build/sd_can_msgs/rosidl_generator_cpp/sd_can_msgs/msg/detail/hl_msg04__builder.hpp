// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/HLMsg04.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HL_MSG04__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__HL_MSG04__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/hl_msg04__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_HLMsg04_hl_longitude
{
public:
  explicit Init_HLMsg04_hl_longitude(::sd_can_msgs::msg::HLMsg04 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::HLMsg04 hl_longitude(::sd_can_msgs::msg::HLMsg04::_hl_longitude_type arg)
  {
    msg_.hl_longitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg04 msg_;
};

class Init_HLMsg04_hl_latitude
{
public:
  explicit Init_HLMsg04_hl_latitude(::sd_can_msgs::msg::HLMsg04 & msg)
  : msg_(msg)
  {}
  Init_HLMsg04_hl_longitude hl_latitude(::sd_can_msgs::msg::HLMsg04::_hl_latitude_type arg)
  {
    msg_.hl_latitude = std::move(arg);
    return Init_HLMsg04_hl_longitude(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg04 msg_;
};

class Init_HLMsg04_header
{
public:
  Init_HLMsg04_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HLMsg04_hl_latitude header(::sd_can_msgs::msg::HLMsg04::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HLMsg04_hl_latitude(msg_);
  }

private:
  ::sd_can_msgs::msg::HLMsg04 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::HLMsg04>()
{
  return sd_can_msgs::msg::builder::Init_HLMsg04_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__HL_MSG04__BUILDER_HPP_
