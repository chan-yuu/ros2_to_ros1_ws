; Auto-generated. Do not edit!


(cl:in-package car_interfaces-msg)


;//! \htmlinclude Decision.msg.html

(cl:defclass <Decision> (roslisp-msg-protocol:ros-message)
  ((brake_enable
    :reader brake_enable
    :initarg :brake_enable
    :type cl:float
    :initform 0.0)
   (value_brake
    :reader value_brake
    :initarg :value_brake
    :type cl:float
    :initform 0.0))
)

(cl:defclass Decision (<Decision>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Decision>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Decision)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-msg:<Decision> is deprecated: use car_interfaces-msg:Decision instead.")))

(cl:ensure-generic-function 'brake_enable-val :lambda-list '(m))
(cl:defmethod brake_enable-val ((m <Decision>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:brake_enable-val is deprecated.  Use car_interfaces-msg:brake_enable instead.")
  (brake_enable m))

(cl:ensure-generic-function 'value_brake-val :lambda-list '(m))
(cl:defmethod value_brake-val ((m <Decision>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:value_brake-val is deprecated.  Use car_interfaces-msg:value_brake instead.")
  (value_brake m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Decision>) ostream)
  "Serializes a message object of type '<Decision>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'brake_enable))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'value_brake))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Decision>) istream)
  "Deserializes a message object of type '<Decision>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'brake_enable) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'value_brake) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Decision>)))
  "Returns string type for a message object of type '<Decision>"
  "car_interfaces/Decision")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Decision)))
  "Returns string type for a message object of type 'Decision"
  "car_interfaces/Decision")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Decision>)))
  "Returns md5sum for a message object of type '<Decision>"
  "d400007abdee232a447063e2c6c629e0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Decision)))
  "Returns md5sum for a message object of type 'Decision"
  "d400007abdee232a447063e2c6c629e0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Decision>)))
  "Returns full string definition for message of type '<Decision>"
  (cl:format cl:nil "float32 brake_enable  #刹车使能~%float32 value_brake   #刹车量~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Decision)))
  "Returns full string definition for message of type 'Decision"
  (cl:format cl:nil "float32 brake_enable  #刹车使能~%float32 value_brake   #刹车量~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Decision>))
  (cl:+ 0
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Decision>))
  "Converts a ROS message object to a list"
  (cl:list 'Decision
    (cl:cons ':brake_enable (brake_enable msg))
    (cl:cons ':value_brake (value_brake msg))
))
