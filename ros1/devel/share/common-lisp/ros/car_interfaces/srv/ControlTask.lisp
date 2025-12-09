; Auto-generated. Do not edit!


(cl:in-package car_interfaces-srv)


;//! \htmlinclude ControlTask-request.msg.html

(cl:defclass <ControlTask-request> (roslisp-msg-protocol:ros-message)
  ((data
    :reader data
    :initarg :data
    :type cl:fixnum
    :initform 0)
   (limited_speed
    :reader limited_speed
    :initarg :limited_speed
    :type cl:float
    :initform 0.0))
)

(cl:defclass ControlTask-request (<ControlTask-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ControlTask-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ControlTask-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-srv:<ControlTask-request> is deprecated: use car_interfaces-srv:ControlTask-request instead.")))

(cl:ensure-generic-function 'data-val :lambda-list '(m))
(cl:defmethod data-val ((m <ControlTask-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:data-val is deprecated.  Use car_interfaces-srv:data instead.")
  (data m))

(cl:ensure-generic-function 'limited_speed-val :lambda-list '(m))
(cl:defmethod limited_speed-val ((m <ControlTask-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:limited_speed-val is deprecated.  Use car_interfaces-srv:limited_speed instead.")
  (limited_speed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ControlTask-request>) ostream)
  "Serializes a message object of type '<ControlTask-request>"
  (cl:let* ((signed (cl:slot-value msg 'data)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'limited_speed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ControlTask-request>) istream)
  "Deserializes a message object of type '<ControlTask-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'data) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'limited_speed) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ControlTask-request>)))
  "Returns string type for a service object of type '<ControlTask-request>"
  "car_interfaces/ControlTaskRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ControlTask-request)))
  "Returns string type for a service object of type 'ControlTask-request"
  "car_interfaces/ControlTaskRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ControlTask-request>)))
  "Returns md5sum for a message object of type '<ControlTask-request>"
  "b2af9fa50c34b99733809c3ac7fab044")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ControlTask-request)))
  "Returns md5sum for a message object of type 'ControlTask-request"
  "b2af9fa50c34b99733809c3ac7fab044")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ControlTask-request>)))
  "Returns full string definition for message of type '<ControlTask-request>"
  (cl:format cl:nil "int8 data~%float32 limited_speed~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ControlTask-request)))
  "Returns full string definition for message of type 'ControlTask-request"
  (cl:format cl:nil "int8 data~%float32 limited_speed~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ControlTask-request>))
  (cl:+ 0
     1
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ControlTask-request>))
  "Converts a ROS message object to a list"
  (cl:list 'ControlTask-request
    (cl:cons ':data (data msg))
    (cl:cons ':limited_speed (limited_speed msg))
))
;//! \htmlinclude ControlTask-response.msg.html

(cl:defclass <ControlTask-response> (roslisp-msg-protocol:ros-message)
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

(cl:defclass ControlTask-response (<ControlTask-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ControlTask-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ControlTask-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-srv:<ControlTask-response> is deprecated: use car_interfaces-srv:ControlTask-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <ControlTask-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:success-val is deprecated.  Use car_interfaces-srv:success instead.")
  (success m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <ControlTask-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-srv:message-val is deprecated.  Use car_interfaces-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ControlTask-response>) ostream)
  "Serializes a message object of type '<ControlTask-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ControlTask-response>) istream)
  "Deserializes a message object of type '<ControlTask-response>"
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ControlTask-response>)))
  "Returns string type for a service object of type '<ControlTask-response>"
  "car_interfaces/ControlTaskResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ControlTask-response)))
  "Returns string type for a service object of type 'ControlTask-response"
  "car_interfaces/ControlTaskResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ControlTask-response>)))
  "Returns md5sum for a message object of type '<ControlTask-response>"
  "b2af9fa50c34b99733809c3ac7fab044")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ControlTask-response)))
  "Returns md5sum for a message object of type 'ControlTask-response"
  "b2af9fa50c34b99733809c3ac7fab044")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ControlTask-response>)))
  "Returns full string definition for message of type '<ControlTask-response>"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ControlTask-response)))
  "Returns full string definition for message of type 'ControlTask-response"
  (cl:format cl:nil "bool success~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ControlTask-response>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ControlTask-response>))
  "Converts a ROS message object to a list"
  (cl:list 'ControlTask-response
    (cl:cons ':success (success msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'ControlTask)))
  'ControlTask-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'ControlTask)))
  'ControlTask-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ControlTask)))
  "Returns string type for a service object of type '<ControlTask>"
  "car_interfaces/ControlTask")