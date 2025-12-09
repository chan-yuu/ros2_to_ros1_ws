// Auto-generated. Do not edit!

// (in-package car_interfaces.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let single_task = require('../msg/single_task.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------


//-----------------------------------------------------------

class cloud_orderRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.order_id = null;
      this.task_info = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('order_id')) {
        this.order_id = initObj.order_id
      }
      else {
        this.order_id = '';
      }
      if (initObj.hasOwnProperty('task_info')) {
        this.task_info = initObj.task_info
      }
      else {
        this.task_info = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type cloud_orderRequest
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [order_id]
    bufferOffset = _serializer.string(obj.order_id, buffer, bufferOffset);
    // Serialize message field [task_info]
    // Serialize the length for message field [task_info]
    bufferOffset = _serializer.uint32(obj.task_info.length, buffer, bufferOffset);
    obj.task_info.forEach((val) => {
      bufferOffset = single_task.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type cloud_orderRequest
    let len;
    let data = new cloud_orderRequest(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [order_id]
    data.order_id = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [task_info]
    // Deserialize array length for message field [task_info]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.task_info = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.task_info[i] = single_task.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += _getByteLength(object.order_id);
    object.task_info.forEach((val) => {
      length += single_task.getMessageSize(val);
    });
    return length + 8;
  }

  static datatype() {
    // Returns string type for a service object
    return 'car_interfaces/cloud_orderRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '77d0fa18394ac387ddeddd7414ed08bb';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    string order_id
    single_task[] task_info
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: car_interfaces/single_task
    string task_id
    int32 bale_num_to_handle
    string destination_shelf_area
    geometry_msgs/Pose origin_shelf_job_position
    geometry_msgs/Pose destination_shelf_job_position
    ================================================================================
    MSG: geometry_msgs/Pose
    # A representation of pose in free space, composed of position and orientation. 
    Point position
    Quaternion orientation
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new cloud_orderRequest(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.order_id !== undefined) {
      resolved.order_id = msg.order_id;
    }
    else {
      resolved.order_id = ''
    }

    if (msg.task_info !== undefined) {
      resolved.task_info = new Array(msg.task_info.length);
      for (let i = 0; i < resolved.task_info.length; ++i) {
        resolved.task_info[i] = single_task.Resolve(msg.task_info[i]);
      }
    }
    else {
      resolved.task_info = []
    }

    return resolved;
    }
};

class cloud_orderResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.task_progress = null;
    }
    else {
      if (initObj.hasOwnProperty('task_progress')) {
        this.task_progress = initObj.task_progress
      }
      else {
        this.task_progress = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type cloud_orderResponse
    // Serialize message field [task_progress]
    bufferOffset = _serializer.float32(obj.task_progress, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type cloud_orderResponse
    let len;
    let data = new cloud_orderResponse(null);
    // Deserialize message field [task_progress]
    data.task_progress = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'car_interfaces/cloud_orderResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'f37f1ca867a358453a87f032439ada55';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32 task_progress
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new cloud_orderResponse(null);
    if (msg.task_progress !== undefined) {
      resolved.task_progress = msg.task_progress;
    }
    else {
      resolved.task_progress = 0.0
    }

    return resolved;
    }
};

module.exports = {
  Request: cloud_orderRequest,
  Response: cloud_orderResponse,
  md5sum() { return '2f612faf22d533382bbf07ab0d079f5c'; },
  datatype() { return 'car_interfaces/cloud_order'; }
};
