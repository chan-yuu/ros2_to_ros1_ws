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

class FaultDiagnosisInterface {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.lidar_state = null;
      this.can_state = null;
      this.gps_can_state = null;
      this.gps_system_state = null;
      this.camera_state = null;
      this.internet_state = null;
      this.v2n_state = null;
      this.location_state = null;
      this.sim_state = null;
    }
    else {
      if (initObj.hasOwnProperty('lidar_state')) {
        this.lidar_state = initObj.lidar_state
      }
      else {
        this.lidar_state = 0;
      }
      if (initObj.hasOwnProperty('can_state')) {
        this.can_state = initObj.can_state
      }
      else {
        this.can_state = 0;
      }
      if (initObj.hasOwnProperty('gps_can_state')) {
        this.gps_can_state = initObj.gps_can_state
      }
      else {
        this.gps_can_state = 0;
      }
      if (initObj.hasOwnProperty('gps_system_state')) {
        this.gps_system_state = initObj.gps_system_state
      }
      else {
        this.gps_system_state = 0;
      }
      if (initObj.hasOwnProperty('camera_state')) {
        this.camera_state = initObj.camera_state
      }
      else {
        this.camera_state = 0;
      }
      if (initObj.hasOwnProperty('internet_state')) {
        this.internet_state = initObj.internet_state
      }
      else {
        this.internet_state = 0;
      }
      if (initObj.hasOwnProperty('v2n_state')) {
        this.v2n_state = initObj.v2n_state
      }
      else {
        this.v2n_state = 0;
      }
      if (initObj.hasOwnProperty('location_state')) {
        this.location_state = initObj.location_state
      }
      else {
        this.location_state = 0;
      }
      if (initObj.hasOwnProperty('sim_state')) {
        this.sim_state = initObj.sim_state
      }
      else {
        this.sim_state = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type FaultDiagnosisInterface
    // Serialize message field [lidar_state]
    bufferOffset = _serializer.int8(obj.lidar_state, buffer, bufferOffset);
    // Serialize message field [can_state]
    bufferOffset = _serializer.int8(obj.can_state, buffer, bufferOffset);
    // Serialize message field [gps_can_state]
    bufferOffset = _serializer.int8(obj.gps_can_state, buffer, bufferOffset);
    // Serialize message field [gps_system_state]
    bufferOffset = _serializer.int8(obj.gps_system_state, buffer, bufferOffset);
    // Serialize message field [camera_state]
    bufferOffset = _serializer.int8(obj.camera_state, buffer, bufferOffset);
    // Serialize message field [internet_state]
    bufferOffset = _serializer.int8(obj.internet_state, buffer, bufferOffset);
    // Serialize message field [v2n_state]
    bufferOffset = _serializer.int8(obj.v2n_state, buffer, bufferOffset);
    // Serialize message field [location_state]
    bufferOffset = _serializer.int8(obj.location_state, buffer, bufferOffset);
    // Serialize message field [sim_state]
    bufferOffset = _serializer.int8(obj.sim_state, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type FaultDiagnosisInterface
    let len;
    let data = new FaultDiagnosisInterface(null);
    // Deserialize message field [lidar_state]
    data.lidar_state = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [can_state]
    data.can_state = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [gps_can_state]
    data.gps_can_state = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [gps_system_state]
    data.gps_system_state = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [camera_state]
    data.camera_state = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [internet_state]
    data.internet_state = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [v2n_state]
    data.v2n_state = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [location_state]
    data.location_state = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [sim_state]
    data.sim_state = _deserializer.int8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 9;
  }

  static datatype() {
    // Returns string type for a message object
    return 'car_interfaces/FaultDiagnosisInterface';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '0acf205619b222615d838811655182ab';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int8 lidar_state
    int8 can_state
    int8 gps_can_state
    int8 gps_system_state
    int8 camera_state
    int8 internet_state
    
    int8 v2n_state
    int8 location_state
    int8 sim_state
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new FaultDiagnosisInterface(null);
    if (msg.lidar_state !== undefined) {
      resolved.lidar_state = msg.lidar_state;
    }
    else {
      resolved.lidar_state = 0
    }

    if (msg.can_state !== undefined) {
      resolved.can_state = msg.can_state;
    }
    else {
      resolved.can_state = 0
    }

    if (msg.gps_can_state !== undefined) {
      resolved.gps_can_state = msg.gps_can_state;
    }
    else {
      resolved.gps_can_state = 0
    }

    if (msg.gps_system_state !== undefined) {
      resolved.gps_system_state = msg.gps_system_state;
    }
    else {
      resolved.gps_system_state = 0
    }

    if (msg.camera_state !== undefined) {
      resolved.camera_state = msg.camera_state;
    }
    else {
      resolved.camera_state = 0
    }

    if (msg.internet_state !== undefined) {
      resolved.internet_state = msg.internet_state;
    }
    else {
      resolved.internet_state = 0
    }

    if (msg.v2n_state !== undefined) {
      resolved.v2n_state = msg.v2n_state;
    }
    else {
      resolved.v2n_state = 0
    }

    if (msg.location_state !== undefined) {
      resolved.location_state = msg.location_state;
    }
    else {
      resolved.location_state = 0
    }

    if (msg.sim_state !== undefined) {
      resolved.sim_state = msg.sim_state;
    }
    else {
      resolved.sim_state = 0
    }

    return resolved;
    }
};

module.exports = FaultDiagnosisInterface;
