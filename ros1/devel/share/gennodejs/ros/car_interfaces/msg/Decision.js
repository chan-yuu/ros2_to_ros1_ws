// Auto-generated. Do not edit!

// (in-package car_interfaces.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Decision {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.brake_enable = null;
      this.value_brake = null;
    }
    else {
      if (initObj.hasOwnProperty('brake_enable')) {
        this.brake_enable = initObj.brake_enable
      }
      else {
        this.brake_enable = 0.0;
      }
      if (initObj.hasOwnProperty('value_brake')) {
        this.value_brake = initObj.value_brake
      }
      else {
        this.value_brake = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Decision
    // Serialize message field [brake_enable]
    bufferOffset = _serializer.float32(obj.brake_enable, buffer, bufferOffset);
    // Serialize message field [value_brake]
    bufferOffset = _serializer.float32(obj.value_brake, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Decision
    let len;
    let data = new Decision(null);
    // Deserialize message field [brake_enable]
    data.brake_enable = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [value_brake]
    data.value_brake = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'car_interfaces/Decision';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd400007abdee232a447063e2c6c629e0';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32 brake_enable  #刹车使能
    float32 value_brake   #刹车量
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Decision(null);
    if (msg.brake_enable !== undefined) {
      resolved.brake_enable = msg.brake_enable;
    }
    else {
      resolved.brake_enable = 0.0
    }

    if (msg.value_brake !== undefined) {
      resolved.value_brake = msg.value_brake;
    }
    else {
      resolved.value_brake = 0.0
    }

    return resolved;
    }
};

module.exports = Decision;
