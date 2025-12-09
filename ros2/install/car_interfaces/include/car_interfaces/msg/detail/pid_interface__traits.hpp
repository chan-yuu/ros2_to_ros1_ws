// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_interfaces:msg/PidInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__PID_INTERFACE__TRAITS_HPP_
#define CAR_INTERFACES__MSG__DETAIL__PID_INTERFACE__TRAITS_HPP_

#include "car_interfaces/msg/detail/pid_interface__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const car_interfaces::msg::PidInterface & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: refspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "refspeed: ";
    value_to_yaml(msg.refspeed, out);
    out << "\n";
  }

  // member: nowspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nowspeed: ";
    value_to_yaml(msg.nowspeed, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear: ";
    value_to_yaml(msg.gear, out);
    out << "\n";
  }

  // member: throttle_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_percentage: ";
    value_to_yaml(msg.throttle_percentage, out);
    out << "\n";
  }

  // member: braking_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "braking_percentage: ";
    value_to_yaml(msg.braking_percentage, out);
    out << "\n";
  }

  // member: process_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process_time: ";
    value_to_yaml(msg.process_time, out);
    out << "\n";
  }

  // member: cte
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cte: ";
    value_to_yaml(msg.cte, out);
    out << "\n";
  }

  // member: dhead
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dhead: ";
    value_to_yaml(msg.dhead, out);
    out << "\n";
  }

  // member: curpos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curpos_x: ";
    value_to_yaml(msg.curpos_x, out);
    out << "\n";
  }

  // member: curpos_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curpos_y: ";
    value_to_yaml(msg.curpos_y, out);
    out << "\n";
  }

  // member: refpox_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "refpox_x: ";
    value_to_yaml(msg.refpox_x, out);
    out << "\n";
  }

  // member: refpox_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "refpox_y: ";
    value_to_yaml(msg.refpox_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const car_interfaces::msg::PidInterface & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<car_interfaces::msg::PidInterface>()
{
  return "car_interfaces::msg::PidInterface";
}

template<>
inline const char * name<car_interfaces::msg::PidInterface>()
{
  return "car_interfaces/msg/PidInterface";
}

template<>
struct has_fixed_size<car_interfaces::msg::PidInterface>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<car_interfaces::msg::PidInterface>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<car_interfaces::msg::PidInterface>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_INTERFACES__MSG__DETAIL__PID_INTERFACE__TRAITS_HPP_
