// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/MM710TX1ZAY.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__MM710_TX1_ZAY__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__MM710_TX1_ZAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/mm710_tx1_zay__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MM710TX1ZAY & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: crc
  {
    out << "crc: ";
    rosidl_generator_traits::value_to_yaml(msg.crc, out);
    out << ", ";
  }

  // member: ay_stat
  {
    out << "ay_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.ay_stat, out);
    out << ", ";
  }

  // member: msg_cnt
  {
    out << "msg_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_cnt, out);
    out << ", ";
  }

  // member: ay
  {
    out << "ay: ";
    rosidl_generator_traits::value_to_yaml(msg.ay, out);
    out << ", ";
  }

  // member: temp_rate_z
  {
    out << "temp_rate_z: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_rate_z, out);
    out << ", ";
  }

  // member: yaw_rate_stat
  {
    out << "yaw_rate_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate_stat, out);
    out << ", ";
  }

  // member: clu_stat
  {
    out << "clu_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.clu_stat, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MM710TX1ZAY & msg,
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

  // member: crc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crc: ";
    rosidl_generator_traits::value_to_yaml(msg.crc, out);
    out << "\n";
  }

  // member: ay_stat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ay_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.ay_stat, out);
    out << "\n";
  }

  // member: msg_cnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_cnt, out);
    out << "\n";
  }

  // member: ay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ay: ";
    rosidl_generator_traits::value_to_yaml(msg.ay, out);
    out << "\n";
  }

  // member: temp_rate_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_rate_z: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_rate_z, out);
    out << "\n";
  }

  // member: yaw_rate_stat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate_stat, out);
    out << "\n";
  }

  // member: clu_stat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clu_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.clu_stat, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MM710TX1ZAY & msg, bool use_flow_style = false)
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
  const sd_can_msgs::msg::MM710TX1ZAY & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::MM710TX1ZAY & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::MM710TX1ZAY>()
{
  return "sd_can_msgs::msg::MM710TX1ZAY";
}

template<>
inline const char * name<sd_can_msgs::msg::MM710TX1ZAY>()
{
  return "sd_can_msgs/msg/MM710TX1ZAY";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::MM710TX1ZAY>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::MM710TX1ZAY>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::MM710TX1ZAY>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__MM710_TX1_ZAY__TRAITS_HPP_
