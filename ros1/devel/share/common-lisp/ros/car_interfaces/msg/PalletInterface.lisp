; Auto-generated. Do not edit!


(cl:in-package car_interfaces-msg)


;//! \htmlinclude PalletInterface.msg.html

(cl:defclass <PalletInterface> (roslisp-msg-protocol:ros-message)
  ((pallet_x
    :reader pallet_x
    :initarg :pallet_x
    :type cl:float
    :initform 0.0)
   (pallet_y
    :reader pallet_y
    :initarg :pallet_y
    :type cl:float
    :initform 0.0)
   (pallet_heading
    :reader pallet_heading
    :initarg :pallet_heading
    :type cl:float
    :initform 0.0))
)

(cl:defclass PalletInterface (<PalletInterface>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PalletInterface>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PalletInterface)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-msg:<PalletInterface> is deprecated: use car_interfaces-msg:PalletInterface instead.")))

(cl:ensure-generic-function 'pallet_x-val :lambda-list '(m))
(cl:defmethod pallet_x-val ((m <PalletInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:pallet_x-val is deprecated.  Use car_interfaces-msg:pallet_x instead.")
  (pallet_x m))

(cl:ensure-generic-function 'pallet_y-val :lambda-list '(m))
(cl:defmethod pallet_y-val ((m <PalletInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:pallet_y-val is deprecated.  Use car_interfaces-msg:pallet_y instead.")
  (pallet_y m))

(cl:ensure-generic-function 'pallet_heading-val :lambda-list '(m))
(cl:defmethod pallet_heading-val ((m <PalletInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:pallet_heading-val is deprecated.  Use car_interfaces-msg:pallet_heading instead.")
  (pallet_heading m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PalletInterface>) ostream)
  "Serializes a message object of type '<PalletInterface>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'pallet_x))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'pallet_y))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'pallet_heading))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PalletInterface>) istream)
  "Deserializes a message object of type '<PalletInterface>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'pallet_x) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'pallet_y) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'pallet_heading) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PalletInterface>)))
  "Returns string type for a message object of type '<PalletInterface>"
  "car_interfaces/PalletInterface")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PalletInterface)))
  "Returns string type for a message object of type 'PalletInterface"
  "car_interfaces/PalletInterface")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PalletInterface>)))
  "Returns md5sum for a message object of type '<PalletInterface>"
  "d3851b4afec05d2d716993bd4b1f4057")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PalletInterface)))
  "Returns md5sum for a message object of type 'PalletInterface"
  "d3851b4afec05d2d716993bd4b1f4057")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PalletInterface>)))
  "Returns full string definition for message of type '<PalletInterface>"
  (cl:format cl:nil "float64 pallet_x~%float64 pallet_y~%~%float64 pallet_heading~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PalletInterface)))
  "Returns full string definition for message of type 'PalletInterface"
  (cl:format cl:nil "float64 pallet_x~%float64 pallet_y~%~%float64 pallet_heading~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PalletInterface>))
  (cl:+ 0
     8
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PalletInterface>))
  "Converts a ROS message object to a list"
  (cl:list 'PalletInterface
    (cl:cons ':pallet_x (pallet_x msg))
    (cl:cons ':pallet_y (pallet_y msg))
    (cl:cons ':pallet_heading (pallet_heading msg))
))
