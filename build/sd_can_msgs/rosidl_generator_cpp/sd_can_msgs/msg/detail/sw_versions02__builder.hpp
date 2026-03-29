// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/SwVersions02.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS02__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS02__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/sw_versions02__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_SwVersions02_cba_fr_sw_build_version
{
public:
  explicit Init_SwVersions02_cba_fr_sw_build_version(::sd_can_msgs::msg::SwVersions02 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::SwVersions02 cba_fr_sw_build_version(::sd_can_msgs::msg::SwVersions02::_cba_fr_sw_build_version_type arg)
  {
    msg_.cba_fr_sw_build_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions02 msg_;
};

class Init_SwVersions02_cba_fr_sw_major_version
{
public:
  explicit Init_SwVersions02_cba_fr_sw_major_version(::sd_can_msgs::msg::SwVersions02 & msg)
  : msg_(msg)
  {}
  Init_SwVersions02_cba_fr_sw_build_version cba_fr_sw_major_version(::sd_can_msgs::msg::SwVersions02::_cba_fr_sw_major_version_type arg)
  {
    msg_.cba_fr_sw_major_version = std::move(arg);
    return Init_SwVersions02_cba_fr_sw_build_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions02 msg_;
};

class Init_SwVersions02_cba_fr_sw_minor_version
{
public:
  explicit Init_SwVersions02_cba_fr_sw_minor_version(::sd_can_msgs::msg::SwVersions02 & msg)
  : msg_(msg)
  {}
  Init_SwVersions02_cba_fr_sw_major_version cba_fr_sw_minor_version(::sd_can_msgs::msg::SwVersions02::_cba_fr_sw_minor_version_type arg)
  {
    msg_.cba_fr_sw_minor_version = std::move(arg);
    return Init_SwVersions02_cba_fr_sw_major_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions02 msg_;
};

class Init_SwVersions02_cba_fl_sw_build_version
{
public:
  explicit Init_SwVersions02_cba_fl_sw_build_version(::sd_can_msgs::msg::SwVersions02 & msg)
  : msg_(msg)
  {}
  Init_SwVersions02_cba_fr_sw_minor_version cba_fl_sw_build_version(::sd_can_msgs::msg::SwVersions02::_cba_fl_sw_build_version_type arg)
  {
    msg_.cba_fl_sw_build_version = std::move(arg);
    return Init_SwVersions02_cba_fr_sw_minor_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions02 msg_;
};

class Init_SwVersions02_cba_fl_sw_major_version
{
public:
  explicit Init_SwVersions02_cba_fl_sw_major_version(::sd_can_msgs::msg::SwVersions02 & msg)
  : msg_(msg)
  {}
  Init_SwVersions02_cba_fl_sw_build_version cba_fl_sw_major_version(::sd_can_msgs::msg::SwVersions02::_cba_fl_sw_major_version_type arg)
  {
    msg_.cba_fl_sw_major_version = std::move(arg);
    return Init_SwVersions02_cba_fl_sw_build_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions02 msg_;
};

class Init_SwVersions02_cba_fl_sw_minor_version
{
public:
  explicit Init_SwVersions02_cba_fl_sw_minor_version(::sd_can_msgs::msg::SwVersions02 & msg)
  : msg_(msg)
  {}
  Init_SwVersions02_cba_fl_sw_major_version cba_fl_sw_minor_version(::sd_can_msgs::msg::SwVersions02::_cba_fl_sw_minor_version_type arg)
  {
    msg_.cba_fl_sw_minor_version = std::move(arg);
    return Init_SwVersions02_cba_fl_sw_major_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions02 msg_;
};

class Init_SwVersions02_header
{
public:
  Init_SwVersions02_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SwVersions02_cba_fl_sw_minor_version header(::sd_can_msgs::msg::SwVersions02::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SwVersions02_cba_fl_sw_minor_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions02 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::SwVersions02>()
{
  return sd_can_msgs::msg::builder::Init_SwVersions02_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS02__BUILDER_HPP_
