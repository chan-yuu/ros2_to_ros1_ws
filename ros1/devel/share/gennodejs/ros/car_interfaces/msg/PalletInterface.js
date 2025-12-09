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

class PalletInterface {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.pallet_x = null;
      this.pallet_y = null;
      this.pallet_heading = null;
    }
    else {
      if (initObj.hasOwnProperty('pallet_x')) {
        this.pallet_x = initObj.pallet_x
      }
      else {
        this.pallet_x = 0.0;
      }
      if (initObj.hasOwnProperty('pallet_y')) {
        this.pallet_y = initObj.pallet_y
      }
      else {
        this.pallet_y = 0.0;
      }
      if (initObj.hasOwnProperty('pallet_heading')) {
        this.pallet_heading = initObj.pallet_heading
      }
      else {
        this.pallet_heading = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type PalletInterface
    // Serialize message field [pallet_x]
    bufferOffset = _serializer.float64(obj.pallet_x, buffer, bufferOffset);
    // Serialize message field [pallet_y]
    bufferOffset = _serializer.float64(obj.pallet_y, buffer, bufferOffset);
    // Serialize message field [pallet_heading]
    bufferOffset = _serializer.float64(obj.pallet_heading, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type PalletInterface
    let len;
    let data = new PalletInterface(null);
    // Deserialize message field [pallet_x]
    data.pallet_x = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [pallet_y]
    data.pallet_y = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [pallet_heading]
    data.pallet_heading = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 24;
  }

  static datatype() {
    // Returns string type for a message object
    return 'car_interfaces/PalletInterface';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd3851b4afec05d2d716993bd4b1f4057';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64 pallet_x
    float64 pallet_y
    
    float64 pallet_heading
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new PalletInterface(null);
    if (msg.pallet_x !== undefined) {
      resolved.pallet_x = msg.pallet_x;
    }
    else {
      resolved.pallet_x = 0.0
    }

    if (msg.pallet_y !== undefined) {
      resolved.pallet_y = msg.pallet_y;
    }
    else {
      resolved.pallet_y = 0.0
    }

    if (msg.pallet_heading !== undefined) {
      resolved.pallet_heading = msg.pallet_heading;
    }
    else {
      resolved.pallet_heading = 0.0
    }

    return resolved;
    }
};

module.exports = PalletInterface;
