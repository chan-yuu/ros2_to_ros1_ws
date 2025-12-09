// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_interfaces:msg/FusionInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__FUSION_INTERFACE__TRAITS_HPP_
#define CAR_INTERFACES__MSG__DETAIL__FUSION_INTERFACE__TRAITS_HPP_

#include "car_interfaces/msg/detail/fusion_interface__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const car_interfaces::msg::FusionInterface & msg,
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

  // member: carlength
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carlength: ";
    value_to_yaml(msg.carlength, out);
    out << "\n";
  }

  // member: carwidth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carwidth: ";
    value_to_yaml(msg.carwidth, out);
    out << "\n";
  }

  // member: carheight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carheight: ";
    value_to_yaml(msg.carheight, out);
    out << "\n";
  }

  // member: centeroffset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centeroffset: ";
    value_to_yaml(msg.centeroffset, out);
    out << "\n";
  }

  // member: signnumber
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signnumber: ";
    value_to_yaml(msg.signnumber, out);
    out << "\n";
  }

  // member: signdata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.signdata.size() == 0) {
      out << "signdata: []\n";
    } else {
      out << "signdata:\n";
      for (auto item : msg.signdata) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lightdata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lightdata.size() == 0) {
      out << "lightdata: []\n";
    } else {
      out << "lightdata:\n";
      for (auto item : msg.lightdata) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: obstacledata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstacledata.size() == 0) {
      out << "obstacledata: []\n";
    } else {
      out << "obstacledata:\n";
      for (auto item : msg.obstacledata) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: wx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wx: ";
    value_to_yaml(msg.wx, out);
    out << "\n";
  }

  // member: wy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wy: ";
    value_to_yaml(msg.wy, out);
    out << "\n";
  }

  // member: wz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wz: ";
    value_to_yaml(msg.wz, out);
    out << "\n";
  }

  // member: ax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ax: ";
    value_to_yaml(msg.ax, out);
    out << "\n";
  }

  // member: ay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ay: ";
    value_to_yaml(msg.ay, out);
    out << "\n";
  }

  // member: az
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "az: ";
    value_to_yaml(msg.az, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: eastvelocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eastvelocity: ";
    value_to_yaml(msg.eastvelocity, out);
    out << "\n";
  }

  // member: northvelocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "northvelocity: ";
    value_to_yaml(msg.northvelocity, out);
    out << "\n";
  }

  // member: skyvelocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skyvelocity: ";
    value_to_yaml(msg.skyvelocity, out);
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

inline std::string to_yaml(const car_interfaces::msg::FusionInterface & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<car_interfaces::msg::FusionInterface>()
{
  return "car_interfaces::msg::FusionInterface";
}

template<>
inline const char * name<car_interfaces::msg::FusionInterface>()
{
  return "car_interfaces/msg/FusionInterface";
}

template<>
struct has_fixed_size<car_interfaces::msg::FusionInterface>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<car_interfaces::msg::FusionInterface>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<car_interfaces::msg::FusionInterface>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_INTERFACES__MSG__DETAIL__FUSION_INTERFACE__TRAITS_HPP_
