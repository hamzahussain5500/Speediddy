// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/EMStatus01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__EM_STATUS01__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__EM_STATUS01__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/em_status01__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EMStatus01 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: dcdc4812_voltage_v
  {
    out << "dcdc4812_voltage_v: ";
    rosidl_generator_traits::value_to_yaml(msg.dcdc4812_voltage_v, out);
    out << ", ";
  }

  // member: em_status
  {
    out << "em_status: ";
    rosidl_generator_traits::value_to_yaml(msg.em_status, out);
    out << ", ";
  }

  // member: hl_stop_deceleration_1
  {
    out << "hl_stop_deceleration_1: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_stop_deceleration_1, out);
    out << ", ";
  }

  // member: hl_stop_deceleration_2
  {
    out << "hl_stop_deceleration_2: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_stop_deceleration_2, out);
    out << ", ";
  }

  // member: hl_stop_time_to_dec_1
  {
    out << "hl_stop_time_to_dec_1: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_stop_time_to_dec_1, out);
    out << ", ";
  }

  // member: hl_stop_time_to_dec_2
  {
    out << "hl_stop_time_to_dec_2: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_stop_time_to_dec_2, out);
    out << ", ";
  }

  // member: emb_line_pressure_bar_legacy
  {
    out << "emb_line_pressure_bar_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.emb_line_pressure_bar_legacy, out);
    out << ", ";
  }

  // member: emb_tank_pressure_bar_legacy
  {
    out << "emb_tank_pressure_bar_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.emb_tank_pressure_bar_legacy, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EMStatus01 & msg,
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

  // member: dcdc4812_voltage_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dcdc4812_voltage_v: ";
    rosidl_generator_traits::value_to_yaml(msg.dcdc4812_voltage_v, out);
    out << "\n";
  }

  // member: em_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "em_status: ";
    rosidl_generator_traits::value_to_yaml(msg.em_status, out);
    out << "\n";
  }

  // member: hl_stop_deceleration_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_stop_deceleration_1: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_stop_deceleration_1, out);
    out << "\n";
  }

  // member: hl_stop_deceleration_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_stop_deceleration_2: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_stop_deceleration_2, out);
    out << "\n";
  }

  // member: hl_stop_time_to_dec_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_stop_time_to_dec_1: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_stop_time_to_dec_1, out);
    out << "\n";
  }

  // member: hl_stop_time_to_dec_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hl_stop_time_to_dec_2: ";
    rosidl_generator_traits::value_to_yaml(msg.hl_stop_time_to_dec_2, out);
    out << "\n";
  }

  // member: emb_line_pressure_bar_legacy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emb_line_pressure_bar_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.emb_line_pressure_bar_legacy, out);
    out << "\n";
  }

  // member: emb_tank_pressure_bar_legacy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emb_tank_pressure_bar_legacy: ";
    rosidl_generator_traits::value_to_yaml(msg.emb_tank_pressure_bar_legacy, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EMStatus01 & msg, bool use_flow_style = false)
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
  const sd_can_msgs::msg::EMStatus01 & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::EMStatus01 & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::EMStatus01>()
{
  return "sd_can_msgs::msg::EMStatus01";
}

template<>
inline const char * name<sd_can_msgs::msg::EMStatus01>()
{
  return "sd_can_msgs/msg/EMStatus01";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::EMStatus01>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::EMStatus01>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::EMStatus01>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__EM_STATUS01__TRAITS_HPP_
