// Auto-generated. Do not edit!

// (in-package car_interfaces.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class single_task {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.task_id = null;
      this.bale_num_to_handle = null;
      this.destination_shelf_area = null;
      this.origin_shelf_job_position = null;
      this.destination_shelf_job_position = null;
    }
    else {
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
      if (initObj.hasOwnProperty('destination_shelf_area')) {
        this.destination_shelf_area = initObj.destination_shelf_area
      }
      else {
        this.destination_shelf_area = '';
      }
      if (initObj.hasOwnProperty('origin_shelf_job_position')) {
        this.origin_shelf_job_position = initObj.origin_shelf_job_position
      }
      else {
        this.origin_shelf_job_position = new geometry_msgs.msg.Pose();
      }
      if (initObj.hasOwnProperty('destination_shelf_job_position')) {
        this.destination_shelf_job_position = initObj.destination_shelf_job_position
      }
      else {
        this.destination_shelf_job_position = new geometry_msgs.msg.Pose();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type single_task
    // Serialize message field [task_id]
    bufferOffset = _serializer.string(obj.task_id, buffer, bufferOffset);
    // Serialize message field [bale_num_to_handle]
    bufferOffset = _serializer.int32(obj.bale_num_to_handle, buffer, bufferOffset);
    // Serialize message field [destination_shelf_area]
    bufferOffset = _serializer.string(obj.destination_shelf_area, buffer, bufferOffset);
    // Serialize message field [origin_shelf_job_position]
    bufferOffset = geometry_msgs.msg.Pose.serialize(obj.origin_shelf_job_position, buffer, bufferOffset);
    // Serialize message field [destination_shelf_job_position]
    bufferOffset = geometry_msgs.msg.Pose.serialize(obj.destination_shelf_job_position, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type single_task
    let len;
    let data = new single_task(null);
    // Deserialize message field [task_id]
    data.task_id = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [bale_num_to_handle]
    data.bale_num_to_handle = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [destination_shelf_area]
    data.destination_shelf_area = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [origin_shelf_job_position]
    data.origin_shelf_job_position = geometry_msgs.msg.Pose.deserialize(buffer, bufferOffset);
    // Deserialize message field [destination_shelf_job_position]
    data.destination_shelf_job_position = geometry_msgs.msg.Pose.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.task_id);
    length += _getByteLength(object.destination_shelf_area);
    return length + 124;
  }

  static datatype() {
    // Returns string type for a message object
    return 'car_interfaces/single_task';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'cd39bd39ec0bd232a174cb3a0b3c77c0';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    const resolved = new single_task(null);
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

    if (msg.destination_shelf_area !== undefined) {
      resolved.destination_shelf_area = msg.destination_shelf_area;
    }
    else {
      resolved.destination_shelf_area = ''
    }

    if (msg.origin_shelf_job_position !== undefined) {
      resolved.origin_shelf_job_position = geometry_msgs.msg.Pose.Resolve(msg.origin_shelf_job_position)
    }
    else {
      resolved.origin_shelf_job_position = new geometry_msgs.msg.Pose()
    }

    if (msg.destination_shelf_job_position !== undefined) {
      resolved.destination_shelf_job_position = geometry_msgs.msg.Pose.Resolve(msg.destination_shelf_job_position)
    }
    else {
      resolved.destination_shelf_job_position = new geometry_msgs.msg.Pose()
    }

    return resolved;
    }
};

module.exports = single_task;
