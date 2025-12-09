; Auto-generated. Do not edit!


(cl:in-package car_interfaces-msg)


;//! \htmlinclude single_task.msg.html

(cl:defclass <single_task> (roslisp-msg-protocol:ros-message)
  ((task_id
    :reader task_id
    :initarg :task_id
    :type cl:string
    :initform "")
   (bale_num_to_handle
    :reader bale_num_to_handle
    :initarg :bale_num_to_handle
    :type cl:integer
    :initform 0)
   (destination_shelf_area
    :reader destination_shelf_area
    :initarg :destination_shelf_area
    :type cl:string
    :initform "")
   (origin_shelf_job_position
    :reader origin_shelf_job_position
    :initarg :origin_shelf_job_position
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose))
   (destination_shelf_job_position
    :reader destination_shelf_job_position
    :initarg :destination_shelf_job_position
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose)))
)

(cl:defclass single_task (<single_task>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <single_task>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'single_task)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-msg:<single_task> is deprecated: use car_interfaces-msg:single_task instead.")))

(cl:ensure-generic-function 'task_id-val :lambda-list '(m))
(cl:defmethod task_id-val ((m <single_task>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:task_id-val is deprecated.  Use car_interfaces-msg:task_id instead.")
  (task_id m))

(cl:ensure-generic-function 'bale_num_to_handle-val :lambda-list '(m))
(cl:defmethod bale_num_to_handle-val ((m <single_task>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:bale_num_to_handle-val is deprecated.  Use car_interfaces-msg:bale_num_to_handle instead.")
  (bale_num_to_handle m))

(cl:ensure-generic-function 'destination_shelf_area-val :lambda-list '(m))
(cl:defmethod destination_shelf_area-val ((m <single_task>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:destination_shelf_area-val is deprecated.  Use car_interfaces-msg:destination_shelf_area instead.")
  (destination_shelf_area m))

(cl:ensure-generic-function 'origin_shelf_job_position-val :lambda-list '(m))
(cl:defmethod origin_shelf_job_position-val ((m <single_task>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:origin_shelf_job_position-val is deprecated.  Use car_interfaces-msg:origin_shelf_job_position instead.")
  (origin_shelf_job_position m))

(cl:ensure-generic-function 'destination_shelf_job_position-val :lambda-list '(m))
(cl:defmethod destination_shelf_job_position-val ((m <single_task>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:destination_shelf_job_position-val is deprecated.  Use car_interfaces-msg:destination_shelf_job_position instead.")
  (destination_shelf_job_position m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <single_task>) ostream)
  "Serializes a message object of type '<single_task>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'task_id))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'task_id))
  (cl:let* ((signed (cl:slot-value msg 'bale_num_to_handle)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'destination_shelf_area))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'destination_shelf_area))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'origin_shelf_job_position) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'destination_shelf_job_position) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <single_task>) istream)
  "Deserializes a message object of type '<single_task>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'task_id) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'task_id) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'bale_num_to_handle) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'destination_shelf_area) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'destination_shelf_area) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'origin_shelf_job_position) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'destination_shelf_job_position) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<single_task>)))
  "Returns string type for a message object of type '<single_task>"
  "car_interfaces/single_task")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'single_task)))
  "Returns string type for a message object of type 'single_task"
  "car_interfaces/single_task")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<single_task>)))
  "Returns md5sum for a message object of type '<single_task>"
  "cd39bd39ec0bd232a174cb3a0b3c77c0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'single_task)))
  "Returns md5sum for a message object of type 'single_task"
  "cd39bd39ec0bd232a174cb3a0b3c77c0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<single_task>)))
  "Returns full string definition for message of type '<single_task>"
  (cl:format cl:nil "string task_id~%int32 bale_num_to_handle~%string destination_shelf_area~%geometry_msgs/Pose origin_shelf_job_position~%geometry_msgs/Pose destination_shelf_job_position~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'single_task)))
  "Returns full string definition for message of type 'single_task"
  (cl:format cl:nil "string task_id~%int32 bale_num_to_handle~%string destination_shelf_area~%geometry_msgs/Pose origin_shelf_job_position~%geometry_msgs/Pose destination_shelf_job_position~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <single_task>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'task_id))
     4
     4 (cl:length (cl:slot-value msg 'destination_shelf_area))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'origin_shelf_job_position))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'destination_shelf_job_position))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <single_task>))
  "Converts a ROS message object to a list"
  (cl:list 'single_task
    (cl:cons ':task_id (task_id msg))
    (cl:cons ':bale_num_to_handle (bale_num_to_handle msg))
    (cl:cons ':destination_shelf_area (destination_shelf_area msg))
    (cl:cons ':origin_shelf_job_position (origin_shelf_job_position msg))
    (cl:cons ':destination_shelf_job_position (destination_shelf_job_position msg))
))
