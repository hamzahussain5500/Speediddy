// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560RideFront.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_RIDE_FRONT__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_RIDE_FRONT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_ride_front__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560RideFront_damper_stroke_fr
{
public:
  explicit Init_Badenia560RideFront_damper_stroke_fr(::sd_can_msgs::msg::Badenia560RideFront & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560RideFront damper_stroke_fr(::sd_can_msgs::msg::Badenia560RideFront::_damper_stroke_fr_type arg)
  {
    msg_.damper_stroke_fr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560RideFront msg_;
};

class Init_Badenia560RideFront_damper_stroke_fl
{
public:
  explicit Init_Badenia560RideFront_damper_stroke_fl(::sd_can_msgs::msg::Badenia560RideFront & msg)
  : msg_(msg)
  {}
  Init_Badenia560RideFront_damper_stroke_fr damper_stroke_fl(::sd_can_msgs::msg::Badenia560RideFront::_damper_stroke_fl_type arg)
  {
    msg_.damper_stroke_fl = std::move(arg);
    return Init_Badenia560RideFront_damper_stroke_fr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560RideFront msg_;
};

class Init_Badenia560RideFront_damper_stroke_f3rd
{
public:
  explicit Init_Badenia560RideFront_damper_stroke_f3rd(::sd_can_msgs::msg::Badenia560RideFront & msg)
  : msg_(msg)
  {}
  Init_Badenia560RideFront_damper_stroke_fl damper_stroke_f3rd(::sd_can_msgs::msg::Badenia560RideFront::_damper_stroke_f3rd_type arg)
  {
    msg_.damper_stroke_f3rd = std::move(arg);
    return Init_Badenia560RideFront_damper_stroke_fl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560RideFront msg_;
};

class Init_Badenia560RideFront_ride_height_front
{
public:
  explicit Init_Badenia560RideFront_ride_height_front(::sd_can_msgs::msg::Badenia560RideFront & msg)
  : msg_(msg)
  {}
  Init_Badenia560RideFront_damper_stroke_f3rd ride_height_front(::sd_can_msgs::msg::Badenia560RideFront::_ride_height_front_type arg)
  {
    msg_.ride_height_front = std::move(arg);
    return Init_Badenia560RideFront_damper_stroke_f3rd(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560RideFront msg_;
};

class Init_Badenia560RideFront_header
{
public:
  Init_Badenia560RideFront_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560RideFront_ride_height_front header(::sd_can_msgs::msg::Badenia560RideFront::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560RideFront_ride_height_front(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560RideFront msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560RideFront>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560RideFront_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_RIDE_FRONT__BUILDER_HPP_
