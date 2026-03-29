// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560RideRear.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_RIDE_REAR__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_RIDE_REAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_ride_rear__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560RideRear_damper_stroke_rr
{
public:
  explicit Init_Badenia560RideRear_damper_stroke_rr(::sd_can_msgs::msg::Badenia560RideRear & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560RideRear damper_stroke_rr(::sd_can_msgs::msg::Badenia560RideRear::_damper_stroke_rr_type arg)
  {
    msg_.damper_stroke_rr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560RideRear msg_;
};

class Init_Badenia560RideRear_damper_stroke_rl
{
public:
  explicit Init_Badenia560RideRear_damper_stroke_rl(::sd_can_msgs::msg::Badenia560RideRear & msg)
  : msg_(msg)
  {}
  Init_Badenia560RideRear_damper_stroke_rr damper_stroke_rl(::sd_can_msgs::msg::Badenia560RideRear::_damper_stroke_rl_type arg)
  {
    msg_.damper_stroke_rl = std::move(arg);
    return Init_Badenia560RideRear_damper_stroke_rr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560RideRear msg_;
};

class Init_Badenia560RideRear_damper_stroke_r3rd
{
public:
  explicit Init_Badenia560RideRear_damper_stroke_r3rd(::sd_can_msgs::msg::Badenia560RideRear & msg)
  : msg_(msg)
  {}
  Init_Badenia560RideRear_damper_stroke_rl damper_stroke_r3rd(::sd_can_msgs::msg::Badenia560RideRear::_damper_stroke_r3rd_type arg)
  {
    msg_.damper_stroke_r3rd = std::move(arg);
    return Init_Badenia560RideRear_damper_stroke_rl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560RideRear msg_;
};

class Init_Badenia560RideRear_ride_height_rear
{
public:
  explicit Init_Badenia560RideRear_ride_height_rear(::sd_can_msgs::msg::Badenia560RideRear & msg)
  : msg_(msg)
  {}
  Init_Badenia560RideRear_damper_stroke_r3rd ride_height_rear(::sd_can_msgs::msg::Badenia560RideRear::_ride_height_rear_type arg)
  {
    msg_.ride_height_rear = std::move(arg);
    return Init_Badenia560RideRear_damper_stroke_r3rd(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560RideRear msg_;
};

class Init_Badenia560RideRear_header
{
public:
  Init_Badenia560RideRear_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560RideRear_ride_height_rear header(::sd_can_msgs::msg::Badenia560RideRear::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560RideRear_ride_height_rear(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560RideRear msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560RideRear>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560RideRear_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_RIDE_REAR__BUILDER_HPP_
