; Auto-generated. Do not edit!


(cl:in-package car_interfaces-msg)


;//! \htmlinclude RoadList.msg.html

(cl:defclass <RoadList> (roslisp-msg-protocol:ros-message)
  ((paths
    :reader paths
    :initarg :paths
    :type (cl:vector car_interfaces-msg:Pathplan)
   :initform (cl:make-array 0 :element-type 'car_interfaces-msg:Pathplan :initial-element (cl:make-instance 'car_interfaces-msg:Pathplan)))
   (path_length
    :reader path_length
    :initarg :path_length
    :type cl:fixnum
    :initform 0)
   (end_points
    :reader end_points
    :initarg :end_points
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (dis_every_end
    :reader dis_every_end
    :initarg :dis_every_end
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass RoadList (<RoadList>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RoadList>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RoadList)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-msg:<RoadList> is deprecated: use car_interfaces-msg:RoadList instead.")))

(cl:ensure-generic-function 'paths-val :lambda-list '(m))
(cl:defmethod paths-val ((m <RoadList>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:paths-val is deprecated.  Use car_interfaces-msg:paths instead.")
  (paths m))

(cl:ensure-generic-function 'path_length-val :lambda-list '(m))
(cl:defmethod path_length-val ((m <RoadList>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:path_length-val is deprecated.  Use car_interfaces-msg:path_length instead.")
  (path_length m))

(cl:ensure-generic-function 'end_points-val :lambda-list '(m))
(cl:defmethod end_points-val ((m <RoadList>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:end_points-val is deprecated.  Use car_interfaces-msg:end_points instead.")
  (end_points m))

(cl:ensure-generic-function 'dis_every_end-val :lambda-list '(m))
(cl:defmethod dis_every_end-val ((m <RoadList>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:dis_every_end-val is deprecated.  Use car_interfaces-msg:dis_every_end instead.")
  (dis_every_end m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RoadList>) ostream)
  "Serializes a message object of type '<RoadList>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'paths))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'paths))
  (cl:let* ((signed (cl:slot-value msg 'path_length)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'end_points))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'end_points))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'dis_every_end))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'dis_every_end))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RoadList>) istream)
  "Deserializes a message object of type '<RoadList>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'paths) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'paths)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'car_interfaces-msg:Pathplan))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'path_length) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'end_points) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'end_points)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'dis_every_end) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'dis_every_end)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RoadList>)))
  "Returns string type for a message object of type '<RoadList>"
  "car_interfaces/RoadList")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RoadList)))
  "Returns string type for a message object of type 'RoadList"
  "car_interfaces/RoadList")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RoadList>)))
  "Returns md5sum for a message object of type '<RoadList>"
  "9b41673bd6f78e4df2d5e654099939f0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RoadList)))
  "Returns md5sum for a message object of type 'RoadList"
  "9b41673bd6f78e4df2d5e654099939f0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RoadList>)))
  "Returns full string definition for message of type '<RoadList>"
  (cl:format cl:nil "Pathplan[] paths~%int8 path_length~%float32[] end_points~%float32[] dis_every_end~%================================================================================~%MSG: car_interfaces/Pathplan~%Pointplan[] points~%================================================================================~%MSG: car_interfaces/Pointplan~%float64 x~%float64 y~%float64 yaw~%float64 speed~%float64 kappa~%int8 gear~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RoadList)))
  "Returns full string definition for message of type 'RoadList"
  (cl:format cl:nil "Pathplan[] paths~%int8 path_length~%float32[] end_points~%float32[] dis_every_end~%================================================================================~%MSG: car_interfaces/Pathplan~%Pointplan[] points~%================================================================================~%MSG: car_interfaces/Pointplan~%float64 x~%float64 y~%float64 yaw~%float64 speed~%float64 kappa~%int8 gear~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RoadList>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'paths) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     1
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'end_points) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'dis_every_end) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RoadList>))
  "Converts a ROS message object to a list"
  (cl:list 'RoadList
    (cl:cons ':paths (paths msg))
    (cl:cons ':path_length (path_length msg))
    (cl:cons ':end_points (end_points msg))
    (cl:cons ':dis_every_end (dis_every_end msg))
))
