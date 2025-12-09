; Auto-generated. Do not edit!


(cl:in-package car_interfaces-srv)


;//! \htmlinclude GetInitPose-request.msg.html

(cl:defclass <GetInitPose-request> (roslisp-msg-protocol:ros-message)
  ((init_pose
    :reader init_pose
    :initarg :init_pose
    :type geometry_msgs-msg:PoseWithCovarianceStamped
    :initform (cl:make-instance 'geometry_msgs-msg:PoseWithCovarianceStamped)))
)

(cl:defclass GetInitPose-request (<GetInitPose-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetInitPose-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetInitPose-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-srv:<GetInitPose-request> is deprecated: use car_interfaces-srv:GetInitPose-request instead.")))

(cl:ensure-generic-function 'init_pose-val :lambda-list '(m))
(cl:defmethod init_pose-val ((m <GetInitPose-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:init_pose-val is deprecated.  Use car_interfaces-srv:init_pose instead.")
  (init_pose m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetInitPose-request>) ostream)
  "Serializes a message object of type '<GetInitPose-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'init_pose) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetInitPose-request>) istream)
  "Deserializes a message object of type '<GetInitPose-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'init_pose) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetInitPose-request>)))
  "Returns string type for a service object of type '<GetInitPose-request>"
  "car_interfaces/GetInitPoseRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetInitPose-request)))
  "Returns string type for a service object of type 'GetInitPose-request"
  "car_interfaces/GetInitPoseRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetInitPose-request>)))
  "Returns md5sum for a message object of type '<GetInitPose-request>"
  "8f01c405c2d32588f7064cc8b383fa9f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetInitPose-request)))
  "Returns md5sum for a message object of type 'GetInitPose-request"
  "8f01c405c2d32588f7064cc8b383fa9f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetInitPose-request>)))
  "Returns full string definition for message of type '<GetInitPose-request>"
  (cl:format cl:nil "# 请求部分~%geometry_msgs/PoseWithCovarianceStamped init_pose~%~%================================================================================~%MSG: geometry_msgs/PoseWithCovarianceStamped~%# This expresses an estimated pose with a reference coordinate frame and timestamp~%~%Header header~%PoseWithCovariance pose~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/PoseWithCovariance~%# This represents a pose in free space with uncertainty.~%~%Pose pose~%~%# Row-major representation of the 6x6 covariance matrix~%# The orientation parameters use a fixed-axis representation.~%# In order, the parameters are:~%# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)~%float64[36] covariance~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetInitPose-request)))
  "Returns full string definition for message of type 'GetInitPose-request"
  (cl:format cl:nil "# 请求部分~%geometry_msgs/PoseWithCovarianceStamped init_pose~%~%================================================================================~%MSG: geometry_msgs/PoseWithCovarianceStamped~%# This expresses an estimated pose with a reference coordinate frame and timestamp~%~%Header header~%PoseWithCovariance pose~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/PoseWithCovariance~%# This represents a pose in free space with uncertainty.~%~%Pose pose~%~%# Row-major representation of the 6x6 covariance matrix~%# The orientation parameters use a fixed-axis representation.~%# In order, the parameters are:~%# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)~%float64[36] covariance~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetInitPose-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'init_pose))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetInitPose-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GetInitPose-request
    (cl:cons ':init_pose (init_pose msg))
))
;//! \htmlinclude GetInitPose-response.msg.html

(cl:defclass <GetInitPose-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil)
   (message
    :reader message
    :initarg :message
    :type cl:string
    :initform ""))
)

(cl:defclass GetInitPose-response (<GetInitPose-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetInitPose-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetInitPose-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-srv:<GetInitPose-response> is deprecated: use car_interfaces-srv:GetInitPose-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <GetInitPose-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:success-val is deprecated.  Use car_interfaces-srv:success instead.")
  (success m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <GetInitPose-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:message-val is deprecated.  Use car_interfaces-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetInitPose-response>) ostream)
  "Serializes a message object of type '<GetInitPose-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetInitPose-response>) istream)
  "Deserializes a message object of type '<GetInitPose-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'message) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'message) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetInitPose-response>)))
  "Returns string type for a service object of type '<GetInitPose-response>"
  "car_interfaces/GetInitPoseResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetInitPose-response)))
  "Returns string type for a service object of type 'GetInitPose-response"
  "car_interfaces/GetInitPoseResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetInitPose-response>)))
  "Returns md5sum for a message object of type '<GetInitPose-response>"
  "8f01c405c2d32588f7064cc8b383fa9f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetInitPose-response)))
  "Returns md5sum for a message object of type 'GetInitPose-response"
  "8f01c405c2d32588f7064cc8b383fa9f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetInitPose-response>)))
  "Returns full string definition for message of type '<GetInitPose-response>"
  (cl:format cl:nil "# 响应部分~%bool success~%string message~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetInitPose-response)))
  "Returns full string definition for message of type 'GetInitPose-response"
  (cl:format cl:nil "# 响应部分~%bool success~%string message~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetInitPose-response>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetInitPose-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GetInitPose-response
    (cl:cons ':success (success msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GetInitPose)))
  'GetInitPose-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GetInitPose)))
  'GetInitPose-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetInitPose)))
  "Returns string type for a service object of type '<GetInitPose>"
  "car_interfaces/GetInitPose")