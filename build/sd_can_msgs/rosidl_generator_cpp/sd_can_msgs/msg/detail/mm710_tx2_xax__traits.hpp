// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/MM710TX2XAX.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__MM710_TX2_XAX__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__MM710_TX2_XAX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/mm710_tx2_xax__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MM710TX2XAX & msg,
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

  // member: ax_stat
  {
    out << "ax_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.ax_stat, out);
    out << ", ";
  }

  // member: msg_cnt
  {
    out << "msg_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_cnt, out);
    out << ", ";
  }

  // member: ax
  {
    out << "ax: ";
    rosidl_generator_traits::value_to_yaml(msg.ax, out);
    out << ", ";
  }

  // member: clu_diag
  {
    out << "clu_diag: ";
    rosidl_generator_traits::value_to_yaml(msg.clu_diag, out);
    out << ", ";
  }

  // member: roll_rate_stat
  {
    out << "roll_rate_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_rate_stat, out);
    out << ", ";
  }

  // member: clu_stat
  {
    out << "clu_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.clu_stat, out);
    out << ", ";
  }

  // member: roll_rate
  {
    out << "roll_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MM710TX2XAX & msg,
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

  // member: ax_stat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ax_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.ax_stat, out);
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

  // member: ax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ax: ";
    rosidl_generator_traits::value_to_yaml(msg.ax, out);
    out << "\n";
  }

  // member: clu_diag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clu_diag: ";
    rosidl_generator_traits::value_to_yaml(msg.clu_diag, out);
    out << "\n";
  }

  // member: roll_rate_stat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_rate_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_rate_stat, out);
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

  // member: roll_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MM710TX2XAX & msg, bool use_flow_style = false)
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
  const sd_can_msgs::msg::MM710TX2XAX & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::MM710TX2XAX & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::MM710TX2XAX>()
{
  return "sd_can_msgs::msg::MM710TX2XAX";
}

template<>
inline const char * name<sd_can_msgs::msg::MM710TX2XAX>()
{
  return "sd_can_msgs/msg/MM710TX2XAX";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::MM710TX2XAX>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::MM710TX2XAX>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::MM710TX2XAX>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__MM710_TX2_XAX__TRAITS_HPP_
