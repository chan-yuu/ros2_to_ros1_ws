; Auto-generated. Do not edit!


(cl:in-package car_interfaces-msg)


;//! \htmlinclude TargetDetectionInterface.msg.html

(cl:defclass <TargetDetectionInterface> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (objects
    :reader objects
    :initarg :objects
    :type (cl:vector car_interfaces-msg:Object)
   :initform (cl:make-array 0 :element-type 'car_interfaces-msg:Object :initial-element (cl:make-instance 'car_interfaces-msg:Object))))
)

(cl:defclass TargetDetectionInterface (<TargetDetectionInterface>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TargetDetectionInterface>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TargetDetectionInterface)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-msg:<TargetDetectionInterface> is deprecated: use car_interfaces-msg:TargetDetectionInterface instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <TargetDetectionInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:header-val is deprecated.  Use car_interfaces-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'objects-val :lambda-list '(m))
(cl:defmethod objects-val ((m <TargetDetectionInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:objects-val is deprecated.  Use car_interfaces-msg:objects instead.")
  (objects m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TargetDetectionInterface>) ostream)
  "Serializes a message object of type '<TargetDetectionInterface>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'objects))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'objects))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TargetDetectionInterface>) istream)
  "Deserializes a message object of type '<TargetDetectionInterface>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'objects) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'objects)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'car_interfaces-msg:Object))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TargetDetectionInterface>)))
  "Returns string type for a message object of type '<TargetDetectionInterface>"
  "car_interfaces/TargetDetectionInterface")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TargetDetectionInterface)))
  "Returns string type for a message object of type 'TargetDetectionInterface"
  "car_interfaces/TargetDetectionInterface")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TargetDetectionInterface>)))
  "Returns md5sum for a message object of type '<TargetDetectionInterface>"
  "735eae5f7f43274afc03991f37962f29")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TargetDetectionInterface)))
  "Returns md5sum for a message object of type 'TargetDetectionInterface"
  "735eae5f7f43274afc03991f37962f29")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TargetDetectionInterface>)))
  "Returns full string definition for message of type '<TargetDetectionInterface>"
  (cl:format cl:nil "# topic : /lidar_camera_det/detections~%# frame_id : velo_link~%std_msgs/Header header  ~%Object[] objects~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: car_interfaces/Object~%float32 conf            # 得分~%float32 class_id        # 类别~%float32 track_id	    # 跟踪id~%float32 x               # 全局 相对加+车辆定位  单位m~%float32 y	            # 全局 相对加+车辆定位  单位m~%float32 z	            # 全局 相对加+车辆定位  单位m~%float32 l_x	            # 相对 单位m~%float32 l_y	            # 相对 单位m~%float32 l_z	            # 相对 单位m~%float32 pitch	        # unit:rad,关于车辆坐标系z轴角度+车辆pitch ~%float32 roll	        # unit:rad,关于车辆坐标系y轴角度+车辆roll ~%float32 yaw	            # unit:rad,degree+车辆航向 yaw ~%float32 degree	        # 角度,车辆坐标系x轴夹角 ~%float32 distance	    # 单位m~%float32 height	        # 单位m~%float32 target_width    # 单位m~%float32 target_height   # 单位m~%float32[] left_boudary_point~%float32[] right_boudary_point~%float32[] top_boudary_point~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TargetDetectionInterface)))
  "Returns full string definition for message of type 'TargetDetectionInterface"
  (cl:format cl:nil "# topic : /lidar_camera_det/detections~%# frame_id : velo_link~%std_msgs/Header header  ~%Object[] objects~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: car_interfaces/Object~%float32 conf            # 得分~%float32 class_id        # 类别~%float32 track_id	    # 跟踪id~%float32 x               # 全局 相对加+车辆定位  单位m~%float32 y	            # 全局 相对加+车辆定位  单位m~%float32 z	            # 全局 相对加+车辆定位  单位m~%float32 l_x	            # 相对 单位m~%float32 l_y	            # 相对 单位m~%float32 l_z	            # 相对 单位m~%float32 pitch	        # unit:rad,关于车辆坐标系z轴角度+车辆pitch ~%float32 roll	        # unit:rad,关于车辆坐标系y轴角度+车辆roll ~%float32 yaw	            # unit:rad,degree+车辆航向 yaw ~%float32 degree	        # 角度,车辆坐标系x轴夹角 ~%float32 distance	    # 单位m~%float32 height	        # 单位m~%float32 target_width    # 单位m~%float32 target_height   # 单位m~%float32[] left_boudary_point~%float32[] right_boudary_point~%float32[] top_boudary_point~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TargetDetectionInterface>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'objects) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TargetDetectionInterface>))
  "Converts a ROS message object to a list"
  (cl:list 'TargetDetectionInterface
    (cl:cons ':header (header msg))
    (cl:cons ':objects (objects msg))
))
