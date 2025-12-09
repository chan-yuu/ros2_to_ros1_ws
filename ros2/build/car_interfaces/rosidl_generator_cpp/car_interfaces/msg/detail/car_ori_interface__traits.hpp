// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_interfaces:msg/CarOriInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__CAR_ORI_INTERFACE__TRAITS_HPP_
#define CAR_INTERFACES__MSG__DETAIL__CAR_ORI_INTERFACE__TRAITS_HPP_

#include "car_interfaces/msg/detail/car_ori_interface__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const car_interfaces::msg::CarOriInterface & msg,
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

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: carspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carspeed: ";
    value_to_yaml(msg.carspeed, out);
    out << "\n";
  }

  // member: steerangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steerangle: ";
    value_to_yaml(msg.steerangle, out);
    out << "\n";
  }

  // member: gearpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gearpos: ";
    value_to_yaml(msg.gearpos, out);
    out << "\n";
  }

  // member: braketq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "braketq: ";
    value_to_yaml(msg.braketq, out);
    out << "\n";
  }

  // member: parkingstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parkingstate: ";
    value_to_yaml(msg.parkingstate, out);
    out << "\n";
  }

  // member: soc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "soc: ";
    value_to_yaml(msg.soc, out);
    out << "\n";
  }

  // member: batteryvol
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "batteryvol: ";
    value_to_yaml(msg.batteryvol, out);
    out << "\n";
  }

  // member: batterydischargecur
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "batterydischargecur: ";
    value_to_yaml(msg.batterydischargecur, out);
    out << "\n";
  }

  // member: car_run_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "car_run_mode: ";
    value_to_yaml(msg.car_run_mode, out);
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

  // member: left_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_light: ";
    value_to_yaml(msg.left_light, out);
    out << "\n";
  }

  // member: right_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_light: ";
    value_to_yaml(msg.right_light, out);
    out << "\n";
  }

  // member: reversing_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reversing_light: ";
    value_to_yaml(msg.reversing_light, out);
    out << "\n";
  }

  // member: speaker
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speaker: ";
    value_to_yaml(msg.speaker, out);
    out << "\n";
  }

  // member: start_button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_button: ";
    value_to_yaml(msg.start_button, out);
    out << "\n";
  }

  // member: stop_button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_button: ";
    value_to_yaml(msg.stop_button, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    value_to_yaml(msg.error, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const car_interfaces::msg::CarOriInterface & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<car_interfaces::msg::CarOriInterface>()
{
  return "car_interfaces::msg::CarOriInterface";
}

template<>
inline const char * name<car_interfaces::msg::CarOriInterface>()
{
  return "car_interfaces/msg/CarOriInterface";
}

template<>
struct has_fixed_size<car_interfaces::msg::CarOriInterface>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<car_interfaces::msg::CarOriInterface>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<car_interfaces::msg::CarOriInterface>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_INTERFACES__MSG__DETAIL__CAR_ORI_INTERFACE__TRAITS_HPP_
