// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_interfaces:msg/CarDecisionInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__CAR_DECISION_INTERFACE__TRAITS_HPP_
#define CAR_INTERFACES__MSG__DETAIL__CAR_DECISION_INTERFACE__TRAITS_HPP_

#include "car_interfaces/msg/detail/car_decision_interface__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const car_interfaces::msg::CarDecisionInterface & msg,
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

  // member: stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop: ";
    value_to_yaml(msg.stop, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: maxspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maxspeed: ";
    value_to_yaml(msg.maxspeed, out);
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

  // member: statemode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "statemode: ";
    value_to_yaml(msg.statemode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const car_interfaces::msg::CarDecisionInterface & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<car_interfaces::msg::CarDecisionInterface>()
{
  return "car_interfaces::msg::CarDecisionInterface";
}

template<>
inline const char * name<car_interfaces::msg::CarDecisionInterface>()
{
  return "car_interfaces/msg/CarDecisionInterface";
}

template<>
struct has_fixed_size<car_interfaces::msg::CarDecisionInterface>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<car_interfaces::msg::CarDecisionInterface>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<car_interfaces::msg::CarDecisionInterface>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_INTERFACES__MSG__DETAIL__CAR_DECISION_INTERFACE__TRAITS_HPP_
