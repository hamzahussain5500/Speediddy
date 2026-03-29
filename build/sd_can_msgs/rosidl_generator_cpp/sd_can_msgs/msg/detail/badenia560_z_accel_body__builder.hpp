// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560ZAccelBody.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_Z_ACCEL_BODY__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_Z_ACCEL_BODY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_z_accel_body__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560ZAccelBody_gz_body_rr
{
public:
  explicit Init_Badenia560ZAccelBody_gz_body_rr(::sd_can_msgs::msg::Badenia560ZAccelBody & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560ZAccelBody gz_body_rr(::sd_can_msgs::msg::Badenia560ZAccelBody::_gz_body_rr_type arg)
  {
    msg_.gz_body_rr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560ZAccelBody msg_;
};

class Init_Badenia560ZAccelBody_gz_body_fr
{
public:
  explicit Init_Badenia560ZAccelBody_gz_body_fr(::sd_can_msgs::msg::Badenia560ZAccelBody & msg)
  : msg_(msg)
  {}
  Init_Badenia560ZAccelBody_gz_body_rr gz_body_fr(::sd_can_msgs::msg::Badenia560ZAccelBody::_gz_body_fr_type arg)
  {
    msg_.gz_body_fr = std::move(arg);
    return Init_Badenia560ZAccelBody_gz_body_rr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560ZAccelBody msg_;
};

class Init_Badenia560ZAccelBody_header
{
public:
  Init_Badenia560ZAccelBody_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560ZAccelBody_gz_body_fr header(::sd_can_msgs::msg::Badenia560ZAccelBody::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560ZAccelBody_gz_body_fr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560ZAccelBody msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560ZAccelBody>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560ZAccelBody_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_Z_ACCEL_BODY__BUILDER_HPP_
