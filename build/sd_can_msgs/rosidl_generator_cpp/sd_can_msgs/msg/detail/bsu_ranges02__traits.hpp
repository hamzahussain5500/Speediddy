// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/BSURanges02.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES02__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES02__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/bsu_ranges02__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BSURanges02 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: psa_min_angle_rad
  {
    out << "psa_min_angle_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_min_angle_rad, out);
    out << ", ";
  }

  // member: psa_max_angle_rad
  {
    out << "psa_max_angle_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_max_angle_rad, out);
    out << ", ";
  }

  // member: psa_min_angle_speed_rad_s
  {
    out << "psa_min_angle_speed_rad_s: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_min_angle_speed_rad_s, out);
    out << ", ";
  }

  // member: psa_max_angle_speed_rad_s
  {
    out << "psa_max_angle_speed_rad_s: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_max_angle_speed_rad_s, out);
    out << ", ";
  }

  // member: psa_min_torque_m_nm
  {
    out << "psa_min_torque_m_nm: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_min_torque_m_nm, out);
    out << ", ";
  }

  // member: psa_max_torque_m_nm
  {
    out << "psa_max_torque_m_nm: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_max_torque_m_nm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BSURanges02 & msg,
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

  // member: psa_min_angle_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psa_min_angle_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_min_angle_rad, out);
    out << "\n";
  }

  // member: psa_max_angle_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psa_max_angle_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_max_angle_rad, out);
    out << "\n";
  }

  // member: psa_min_angle_speed_rad_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psa_min_angle_speed_rad_s: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_min_angle_speed_rad_s, out);
    out << "\n";
  }

  // member: psa_max_angle_speed_rad_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psa_max_angle_speed_rad_s: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_max_angle_speed_rad_s, out);
    out << "\n";
  }

  // member: psa_min_torque_m_nm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psa_min_torque_m_nm: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_min_torque_m_nm, out);
    out << "\n";
  }

  // member: psa_max_torque_m_nm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psa_max_torque_m_nm: ";
    rosidl_generator_traits::value_to_yaml(msg.psa_max_torque_m_nm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BSURanges02 & msg, bool use_flow_style = false)
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
  const sd_can_msgs::msg::BSURanges02 & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::BSURanges02 & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::BSURanges02>()
{
  return "sd_can_msgs::msg::BSURanges02";
}

template<>
inline const char * name<sd_can_msgs::msg::BSURanges02>()
{
  return "sd_can_msgs/msg/BSURanges02";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::BSURanges02>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::BSURanges02>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::BSURanges02>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES02__TRAITS_HPP_
