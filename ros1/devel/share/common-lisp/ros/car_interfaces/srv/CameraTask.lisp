; Auto-generated. Do not edit!


(cl:in-package car_interfaces-srv)


;//! \htmlinclude CameraTask-request.msg.html

(cl:defclass <CameraTask-request> (roslisp-msg-protocol:ros-message)
  ((data
    :reader data
    :initarg :data
    :type cl:fixnum
    :initform 0))
)

(cl:defclass CameraTask-request (<CameraTask-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CameraTask-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CameraTask-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-srv:<CameraTask-request> is deprecated: use car_interfaces-srv:CameraTask-request instead.")))

(cl:ensure-generic-function 'data-val :lambda-list '(m))
(cl:defmethod data-val ((m <CameraTask-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:data-val is deprecated.  Use car_interfaces-srv:data instead.")
  (data m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CameraTask-request>) ostream)
  "Serializes a message object of type '<CameraTask-request>"
  (cl:let* ((signed (cl:slot-value msg 'data)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CameraTask-request>) istream)
  "Deserializes a message object of type '<CameraTask-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'data) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CameraTask-request>)))
  "Returns string type for a service object of type '<CameraTask-request>"
  "car_interfaces/CameraTaskRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CameraTask-request)))
  "Returns string type for a service object of type 'CameraTask-request"
  "car_interfaces/CameraTaskRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CameraTask-request>)))
  "Returns md5sum for a message object of type '<CameraTask-request>"
  "208d4ab53cf12eb941a7d93b34b7532b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CameraTask-request)))
  "Returns md5sum for a message object of type 'CameraTask-request"
  "208d4ab53cf12eb941a7d93b34b7532b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CameraTask-request>)))
  "Returns full string definition for message of type '<CameraTask-request>"
  (cl:format cl:nil "int8 data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CameraTask-request)))
  "Returns full string definition for message of type 'CameraTask-request"
  (cl:format cl:nil "int8 data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CameraTask-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CameraTask-request>))
  "Converts a ROS message object to a list"
  (cl:list 'CameraTask-request
    (cl:cons ':data (data msg))
))
;//! \htmlinclude CameraTask-response.msg.html

(cl:defclass <CameraTask-response> (roslisp-msg-protocol:ros-message)
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

(cl:defclass CameraTask-response (<CameraTask-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CameraTask-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CameraTask-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-srv:<CameraTask-response> is deprecated: use car_interfaces-srv:CameraTask-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <CameraTask-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:success-val is deprecated.  Use car_interfaces-srv:success instead.")
  (success m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <CameraTask-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:message-val is deprecated.  Use car_interfaces-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CameraTask-response>) ostream)
  "Serializes a message object of type '<CameraTask-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CameraTask-response>) istream)
  "Deserializes a message object of type '<CameraTask-response>"
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CameraTask-response>)))
  "Returns string type for a service object of type '<CameraTask-response>"
  "car_interfaces/CameraTaskResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CameraTask-response)))
  "Returns string type for a service object of type 'CameraTask-response"
  "car_interfaces/CameraTaskResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CameraTask-response>)))
  "Returns md5sum for a message object of type '<CameraTask-response>"
  "208d4ab53cf12eb941a7d93b34b7532b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CameraTask-response)))
  "Returns md5sum for a message object of type 'CameraTask-response"
  "208d4ab53cf12eb941a7d93b34b7532b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CameraTask-response>)))
  "Returns full string definition for message of type '<CameraTask-response>"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CameraTask-response)))
  "Returns full string definition for message of type 'CameraTask-response"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CameraTask-response>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CameraTask-response>))
  "Converts a ROS message object to a list"
  (cl:list 'CameraTask-response
    (cl:cons ':success (success msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'CameraTask)))
  'CameraTask-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'CameraTask)))
  'CameraTask-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CameraTask)))
  "Returns string type for a service object of type '<CameraTask>"
  "car_interfaces/CameraTask")