// Auto-generated. Do not edit!

// (in-package car_interfaces.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let pose = require('../msg/pose.js');

//-----------------------------------------------------------


//-----------------------------------------------------------

class TaskStsRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.order_id = null;
      this.business_type = null;
      this.origin_shelf_area = null;
      this.destination_shelf_area = null;
      this.task_id = null;
      this.bale_num_to_handle = null;
      this.task_sts = null;
      this.final_pose = null;
    }
    else {
      if (initObj.hasOwnProperty('order_id')) {
        this.order_id = initObj.order_id
      }
      else {
        this.order_id = '';
      }
      if (initObj.hasOwnProperty('business_type')) {
        this.business_type = initObj.business_type
      }
      else {
        this.business_type = '';
      }
      if (initObj.hasOwnProperty('origin_shelf_area')) {
        this.origin_shelf_area = initObj.origin_shelf_area
      }
      else {
        this.origin_shelf_area = '';
      }
      if (initObj.hasOwnProperty('destination_shelf_area')) {
        this.destination_shelf_area = initObj.destination_shelf_area
      }
      else {
        this.destination_shelf_area = '';
      }
      if (initObj.hasOwnProperty('task_id')) {
        this.task_id = initObj.task_id
      }
      else {
        this.task_id = '';
      }
      if (initObj.hasOwnProperty('bale_num_to_handle')) {
        this.bale_num_to_handle = initObj.bale_num_to_handle
      }
      else {
        this.bale_num_to_handle = 0;
      }
      if (initObj.hasOwnProperty('task_sts')) {
        this.task_sts = initObj.task_sts
      }
      else {
        this.task_sts = 0;
      }
      if (initObj.hasOwnProperty('final_pose')) {
        this.final_pose = initObj.final_pose
      }
      else {
        this.final_pose = new pose();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type TaskStsRequest
    // Serialize message field [order_id]
    bufferOffset = _serializer.string(obj.order_id, buffer, bufferOffset);
    // Serialize message field [business_type]
    bufferOffset = _serializer.string(obj.business_type, buffer, bufferOffset);
    // Serialize message field [origin_shelf_area]
    bufferOffset = _serializer.string(obj.origin_shelf_area, buffer, bufferOffset);
    // Serialize message field [destination_shelf_area]
    bufferOffset = _serializer.string(obj.destination_shelf_area, buffer, bufferOffset);
    // Serialize message field [task_id]
    bufferOffset = _serializer.string(obj.task_id, buffer, bufferOffset);
    // Serialize message field [bale_num_to_handle]
    bufferOffset = _serializer.int8(obj.bale_num_to_handle, buffer, bufferOffset);
    // Serialize message field [task_sts]
    bufferOffset = _serializer.int8(obj.task_sts, buffer, bufferOffset);
    // Serialize message field [final_pose]
    bufferOffset = pose.serialize(obj.final_pose, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type TaskStsRequest
    let len;
    let data = new TaskStsRequest(null);
    // Deserialize message field [order_id]
    data.order_id = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [business_type]
    data.business_type = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [origin_shelf_area]
    data.origin_shelf_area = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [destination_shelf_area]
    data.destination_shelf_area = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [task_id]
    data.task_id = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [bale_num_to_handle]
    data.bale_num_to_handle = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [task_sts]
    data.task_sts = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [final_pose]
    data.final_pose = pose.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.order_id);
    length += _getByteLength(object.business_type);
    length += _getByteLength(object.origin_shelf_area);
    length += _getByteLength(object.destination_shelf_area);
    length += _getByteLength(object.task_id);
    length += pose.getMessageSize(object.final_pose);
    return length + 22;
  }

  static datatype() {
    // Returns string type for a service object
    return 'car_interfaces/TaskStsRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '6f3da65652253ee78f636a2aef7c03f5';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string order_id
    string business_type
    string origin_shelf_area
    string destination_shelf_area
    string task_id
    int8 bale_num_to_handle
    int8 task_sts
    car_interfaces/pose final_pose
    
    ================================================================================
    MSG: car_interfaces/pose
    std_msgs/Header header
    float32 x
    float32 y
    float32 z
    float32 pitch
    float32 roll
    float32 yaw
    bool state
    bool slam_reliability
    
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new TaskStsRequest(null);
    if (msg.order_id !== undefined) {
      resolved.order_id = msg.order_id;
    }
    else {
      resolved.order_id = ''
    }

    if (msg.business_type !== undefined) {
      resolved.business_type = msg.business_type;
    }
    else {
      resolved.business_type = ''
    }

    if (msg.origin_shelf_area !== undefined) {
      resolved.origin_shelf_area = msg.origin_shelf_area;
    }
    else {
      resolved.origin_shelf_area = ''
    }

    if (msg.destination_shelf_area !== undefined) {
      resolved.destination_shelf_area = msg.destination_shelf_area;
    }
    else {
      resolved.destination_shelf_area = ''
    }

    if (msg.task_id !== undefined) {
      resolved.task_id = msg.task_id;
    }
    else {
      resolved.task_id = ''
    }

    if (msg.bale_num_to_handle !== undefined) {
      resolved.bale_num_to_handle = msg.bale_num_to_handle;
    }
    else {
      resolved.bale_num_to_handle = 0
    }

    if (msg.task_sts !== undefined) {
      resolved.task_sts = msg.task_sts;
    }
    else {
      resolved.task_sts = 0
    }

    if (msg.final_pose !== undefined) {
      resolved.final_pose = pose.Resolve(msg.final_pose)
    }
    else {
      resolved.final_pose = new pose()
    }

    return resolved;
    }
};

class TaskStsResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.success = null;
      this.message = null;
    }
    else {
      if (initObj.hasOwnProperty('success')) {
        this.success = initObj.success
      }
      else {
        this.success = false;
      }
      if (initObj.hasOwnProperty('message')) {
        this.message = initObj.message
      }
      else {
        this.message = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type TaskStsResponse
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    // Serialize message field [message]
    bufferOffset = _serializer.string(obj.message, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type TaskStsResponse
    let len;
    let data = new TaskStsResponse(null);
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [message]
    data.message = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.message);
    return length + 5;
  }

  static datatype() {
    // Returns string type for a service object
    return 'car_interfaces/TaskStsResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '937c9679a518e3a18d831e57125ea522';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool success
    string message
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new TaskStsResponse(null);
    if (msg.success !== undefined) {
      resolved.success = msg.success;
    }
    else {
      resolved.success = false
    }

    if (msg.message !== undefined) {
      resolved.message = msg.message;
    }
    else {
      resolved.message = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: TaskStsRequest,
  Response: TaskStsResponse,
  md5sum() { return '8a6ad011433f39152e544540da918dee'; },
  datatype() { return 'car_interfaces/TaskSts'; }
};
