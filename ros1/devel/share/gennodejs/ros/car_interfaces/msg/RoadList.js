// Auto-generated. Do not edit!

// (in-package car_interfaces.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let Pathplan = require('./Pathplan.js');

//-----------------------------------------------------------

class RoadList {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.paths = null;
      this.path_length = null;
      this.end_points = null;
      this.dis_every_end = null;
    }
    else {
      if (initObj.hasOwnProperty('paths')) {
        this.paths = initObj.paths
      }
      else {
        this.paths = [];
      }
      if (initObj.hasOwnProperty('path_length')) {
        this.path_length = initObj.path_length
      }
      else {
        this.path_length = 0;
      }
      if (initObj.hasOwnProperty('end_points')) {
        this.end_points = initObj.end_points
      }
      else {
        this.end_points = [];
      }
      if (initObj.hasOwnProperty('dis_every_end')) {
        this.dis_every_end = initObj.dis_every_end
      }
      else {
        this.dis_every_end = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type RoadList
    // Serialize message field [paths]
    // Serialize the length for message field [paths]
    bufferOffset = _serializer.uint32(obj.paths.length, buffer, bufferOffset);
    obj.paths.forEach((val) => {
      bufferOffset = Pathplan.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [path_length]
    bufferOffset = _serializer.int8(obj.path_length, buffer, bufferOffset);
    // Serialize message field [end_points]
    bufferOffset = _arraySerializer.float32(obj.end_points, buffer, bufferOffset, null);
    // Serialize message field [dis_every_end]
    bufferOffset = _arraySerializer.float32(obj.dis_every_end, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type RoadList
    let len;
    let data = new RoadList(null);
    // Deserialize message field [paths]
    // Deserialize array length for message field [paths]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.paths = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.paths[i] = Pathplan.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [path_length]
    data.path_length = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [end_points]
    data.end_points = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [dis_every_end]
    data.dis_every_end = _arrayDeserializer.float32(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.paths.forEach((val) => {
      length += Pathplan.getMessageSize(val);
    });
    length += 4 * object.end_points.length;
    length += 4 * object.dis_every_end.length;
    return length + 13;
  }

  static datatype() {
    // Returns string type for a message object
    return 'car_interfaces/RoadList';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '9b41673bd6f78e4df2d5e654099939f0';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Pathplan[] paths
    int8 path_length
    float32[] end_points
    float32[] dis_every_end
    ================================================================================
    MSG: car_interfaces/Pathplan
    Pointplan[] points
    ================================================================================
    MSG: car_interfaces/Pointplan
    float64 x
    float64 y
    float64 yaw
    float64 speed
    float64 kappa
    int8 gear
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new RoadList(null);
    if (msg.paths !== undefined) {
      resolved.paths = new Array(msg.paths.length);
      for (let i = 0; i < resolved.paths.length; ++i) {
        resolved.paths[i] = Pathplan.Resolve(msg.paths[i]);
      }
    }
    else {
      resolved.paths = []
    }

    if (msg.path_length !== undefined) {
      resolved.path_length = msg.path_length;
    }
    else {
      resolved.path_length = 0
    }

    if (msg.end_points !== undefined) {
      resolved.end_points = msg.end_points;
    }
    else {
      resolved.end_points = []
    }

    if (msg.dis_every_end !== undefined) {
      resolved.dis_every_end = msg.dis_every_end;
    }
    else {
      resolved.dis_every_end = []
    }

    return resolved;
    }
};

module.exports = RoadList;
