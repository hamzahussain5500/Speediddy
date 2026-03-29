// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/RcStatus01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__RC_STATUS01__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__RC_STATUS01__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/rc_status01__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RcStatus01 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: rc_session_type
  {
    out << "rc_session_type: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_session_type, out);
    out << ", ";
  }

  // member: rc_car_flag
  {
    out << "rc_car_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_car_flag, out);
    out << ", ";
  }

  // member: rc_track_flag
  {
    out << "rc_track_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_track_flag, out);
    out << ", ";
  }

  // member: rc_sector_flag
  {
    out << "rc_sector_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_sector_flag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RcStatus01 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: rc_session_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_session_type: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_session_type, out);
    out << "\n";
  }

  // member: rc_car_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_car_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_car_flag, out);
    out << "\n";
  }

  // member: rc_track_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_track_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_track_flag, out);
    out << "\n";
  }

  // member: rc_sector_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_sector_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_sector_flag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RcStatus01 & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sd_can_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sd_can_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sd_can_msgs::msg::RcStatus01 & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::RcStatus01 & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::RcStatus01>()
{
  return "sd_can_msgs::msg::RcStatus01";
}

template<>
inline const char * name<sd_can_msgs::msg::RcStatus01>()
{
  return "sd_can_msgs/msg/RcStatus01";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::RcStatus01>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::RcStatus01>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::RcStatus01>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__RC_STATUS01__TRAITS_HPP_
