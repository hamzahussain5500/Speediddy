// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/Badenia560BadeniaMisc.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BADENIA_MISC__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BADENIA_MISC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/badenia560_badenia_misc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Badenia560BadeniaMisc & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: lap_time
  {
    out << "lap_time: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_time, out);
    out << ", ";
  }

  // member: lap_distance
  {
    out << "lap_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_distance, out);
    out << ", ";
  }

  // member: lap_number
  {
    out << "lap_number: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_number, out);
    out << ", ";
  }

  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Badenia560BadeniaMisc & msg,
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

  // member: lap_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap_time: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_time, out);
    out << "\n";
  }

  // member: lap_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_distance, out);
    out << "\n";
  }

  // member: lap_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap_number: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_number, out);
    out << "\n";
  }

  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Badenia560BadeniaMisc & msg, bool use_flow_style = false)
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
  const sd_can_msgs::msg::Badenia560BadeniaMisc & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::Badenia560BadeniaMisc & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::Badenia560BadeniaMisc>()
{
  return "sd_can_msgs::msg::Badenia560BadeniaMisc";
}

template<>
inline const char * name<sd_can_msgs::msg::Badenia560BadeniaMisc>()
{
  return "sd_can_msgs/msg/Badenia560BadeniaMisc";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::Badenia560BadeniaMisc>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::Badenia560BadeniaMisc>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::Badenia560BadeniaMisc>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BADENIA_MISC__TRAITS_HPP_
