; Auto-generated. Do not edit!


(cl:in-package car_interfaces-msg)


;//! \htmlinclude PathSpeedCtrlInterface.msg.html

(cl:defclass <PathSpeedCtrlInterface> (roslisp-msg-protocol:ros-message)
  ((timestamp
    :reader timestamp
    :initarg :timestamp
    :type cl:float
    :initform 0.0)
   (Target_velocity
    :reader Target_velocity
    :initarg :Target_velocity
    :type cl:float
    :initform 0.0)
   (Target_steering_angle
    :reader Target_steering_angle
    :initarg :Target_steering_angle
    :type cl:float
    :initform 0.0)
   (Target_gear
    :reader Target_gear
    :initarg :Target_gear
    :type cl:fixnum
    :initform 0)
   (Target_primary_gear
    :reader Target_primary_gear
    :initarg :Target_primary_gear
    :type cl:fixnum
    :initform 0)
   (Target_EngineSpeedLevel
    :reader Target_EngineSpeedLevel
    :initarg :Target_EngineSpeedLevel
    :type cl:fixnum
    :initform 0)
   (Target_speedlever_percentage
    :reader Target_speedlever_percentage
    :initarg :Target_speedlever_percentage
    :type cl:float
    :initform 0.0)
   (Target_Torque_Nm
    :reader Target_Torque_Nm
    :initarg :Target_Torque_Nm
    :type cl:float
    :initform 0.0)
   (Target_braking_percentage
    :reader Target_braking_percentage
    :initarg :Target_braking_percentage
    :type cl:fixnum
    :initform 0)
   (NearestPoint_Car2Path
    :reader NearestPoint_Car2Path
    :initarg :NearestPoint_Car2Path
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (Cotton_Bin_Ctrl
    :reader Cotton_Bin_Ctrl
    :initarg :Cotton_Bin_Ctrl
    :type cl:fixnum
    :initform 0)
   (CTE
    :reader CTE
    :initarg :CTE
    :type cl:float
    :initform 0.0)
   (dHead
    :reader dHead
    :initarg :dHead
    :type cl:float
    :initform 0.0)
   (brake_enable
    :reader brake_enable
    :initarg :brake_enable
    :type cl:float
    :initform 0.0)
   (value_brake
    :reader value_brake
    :initarg :value_brake
    :type cl:float
    :initform 0.0)
   (flag
    :reader flag
    :initarg :flag
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (UpDown
    :reader UpDown
    :initarg :UpDown
    :type cl:fixnum
    :initform 0)
   (raw_control
    :reader raw_control
    :initarg :raw_control
    :type cl:float
    :initform 0.0)
   (kappa
    :reader kappa
    :initarg :kappa
    :type cl:float
    :initform 0.0)
   (x_trajectory
    :reader x_trajectory
    :initarg :x_trajectory
    :type cl:float
    :initform 0.0)
   (y_trajectory
    :reader y_trajectory
    :initarg :y_trajectory
    :type cl:float
    :initform 0.0)
   (gear
    :reader gear
    :initarg :gear
    :type cl:fixnum
    :initform 0)
   (action
    :reader action
    :initarg :action
    :type cl:fixnum
    :initform 0)
   (FY_Position
    :reader FY_Position
    :initarg :FY_Position
    :type cl:float
    :initform 0.0)
   (FY
    :reader FY
    :initarg :FY
    :type cl:fixnum
    :initform 0)
   (IPC_En
    :reader IPC_En
    :initarg :IPC_En
    :type cl:fixnum
    :initform 0)
   (UpDown_Position
    :reader UpDown_Position
    :initarg :UpDown_Position
    :type cl:float
    :initform 0.0)
   (flag_camera
    :reader flag_camera
    :initarg :flag_camera
    :type cl:fixnum
    :initform 0))
)

(cl:defclass PathSpeedCtrlInterface (<PathSpeedCtrlInterface>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PathSpeedCtrlInterface>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PathSpeedCtrlInterface)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-msg:<PathSpeedCtrlInterface> is deprecated: use car_interfaces-msg:PathSpeedCtrlInterface instead.")))

(cl:ensure-generic-function 'timestamp-val :lambda-list '(m))
(cl:defmethod timestamp-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:timestamp-val is deprecated.  Use car_interfaces-msg:timestamp instead.")
  (timestamp m))

(cl:ensure-generic-function 'Target_velocity-val :lambda-list '(m))
(cl:defmethod Target_velocity-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Target_velocity-val is deprecated.  Use car_interfaces-msg:Target_velocity instead.")
  (Target_velocity m))

(cl:ensure-generic-function 'Target_steering_angle-val :lambda-list '(m))
(cl:defmethod Target_steering_angle-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Target_steering_angle-val is deprecated.  Use car_interfaces-msg:Target_steering_angle instead.")
  (Target_steering_angle m))

(cl:ensure-generic-function 'Target_gear-val :lambda-list '(m))
(cl:defmethod Target_gear-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Target_gear-val is deprecated.  Use car_interfaces-msg:Target_gear instead.")
  (Target_gear m))

(cl:ensure-generic-function 'Target_primary_gear-val :lambda-list '(m))
(cl:defmethod Target_primary_gear-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Target_primary_gear-val is deprecated.  Use car_interfaces-msg:Target_primary_gear instead.")
  (Target_primary_gear m))

(cl:ensure-generic-function 'Target_EngineSpeedLevel-val :lambda-list '(m))
(cl:defmethod Target_EngineSpeedLevel-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Target_EngineSpeedLevel-val is deprecated.  Use car_interfaces-msg:Target_EngineSpeedLevel instead.")
  (Target_EngineSpeedLevel m))

(cl:ensure-generic-function 'Target_speedlever_percentage-val :lambda-list '(m))
(cl:defmethod Target_speedlever_percentage-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Target_speedlever_percentage-val is deprecated.  Use car_interfaces-msg:Target_speedlever_percentage instead.")
  (Target_speedlever_percentage m))

(cl:ensure-generic-function 'Target_Torque_Nm-val :lambda-list '(m))
(cl:defmethod Target_Torque_Nm-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Target_Torque_Nm-val is deprecated.  Use car_interfaces-msg:Target_Torque_Nm instead.")
  (Target_Torque_Nm m))

(cl:ensure-generic-function 'Target_braking_percentage-val :lambda-list '(m))
(cl:defmethod Target_braking_percentage-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Target_braking_percentage-val is deprecated.  Use car_interfaces-msg:Target_braking_percentage instead.")
  (Target_braking_percentage m))

(cl:ensure-generic-function 'NearestPoint_Car2Path-val :lambda-list '(m))
(cl:defmethod NearestPoint_Car2Path-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:NearestPoint_Car2Path-val is deprecated.  Use car_interfaces-msg:NearestPoint_Car2Path instead.")
  (NearestPoint_Car2Path m))

(cl:ensure-generic-function 'Cotton_Bin_Ctrl-val :lambda-list '(m))
(cl:defmethod Cotton_Bin_Ctrl-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Cotton_Bin_Ctrl-val is deprecated.  Use car_interfaces-msg:Cotton_Bin_Ctrl instead.")
  (Cotton_Bin_Ctrl m))

(cl:ensure-generic-function 'CTE-val :lambda-list '(m))
(cl:defmethod CTE-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:CTE-val is deprecated.  Use car_interfaces-msg:CTE instead.")
  (CTE m))

(cl:ensure-generic-function 'dHead-val :lambda-list '(m))
(cl:defmethod dHead-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:dHead-val is deprecated.  Use car_interfaces-msg:dHead instead.")
  (dHead m))

(cl:ensure-generic-function 'brake_enable-val :lambda-list '(m))
(cl:defmethod brake_enable-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:brake_enable-val is deprecated.  Use car_interfaces-msg:brake_enable instead.")
  (brake_enable m))

(cl:ensure-generic-function 'value_brake-val :lambda-list '(m))
(cl:defmethod value_brake-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:value_brake-val is deprecated.  Use car_interfaces-msg:value_brake instead.")
  (value_brake m))

(cl:ensure-generic-function 'flag-val :lambda-list '(m))
(cl:defmethod flag-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:flag-val is deprecated.  Use car_interfaces-msg:flag instead.")
  (flag m))

(cl:ensure-generic-function 'UpDown-val :lambda-list '(m))
(cl:defmethod UpDown-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:UpDown-val is deprecated.  Use car_interfaces-msg:UpDown instead.")
  (UpDown m))

(cl:ensure-generic-function 'raw_control-val :lambda-list '(m))
(cl:defmethod raw_control-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:raw_control-val is deprecated.  Use car_interfaces-msg:raw_control instead.")
  (raw_control m))

(cl:ensure-generic-function 'kappa-val :lambda-list '(m))
(cl:defmethod kappa-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:kappa-val is deprecated.  Use car_interfaces-msg:kappa instead.")
  (kappa m))

(cl:ensure-generic-function 'x_trajectory-val :lambda-list '(m))
(cl:defmethod x_trajectory-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:x_trajectory-val is deprecated.  Use car_interfaces-msg:x_trajectory instead.")
  (x_trajectory m))

(cl:ensure-generic-function 'y_trajectory-val :lambda-list '(m))
(cl:defmethod y_trajectory-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:y_trajectory-val is deprecated.  Use car_interfaces-msg:y_trajectory instead.")
  (y_trajectory m))

(cl:ensure-generic-function 'gear-val :lambda-list '(m))
(cl:defmethod gear-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:gear-val is deprecated.  Use car_interfaces-msg:gear instead.")
  (gear m))

(cl:ensure-generic-function 'action-val :lambda-list '(m))
(cl:defmethod action-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:action-val is deprecated.  Use car_interfaces-msg:action instead.")
  (action m))

(cl:ensure-generic-function 'FY_Position-val :lambda-list '(m))
(cl:defmethod FY_Position-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:FY_Position-val is deprecated.  Use car_interfaces-msg:FY_Position instead.")
  (FY_Position m))

(cl:ensure-generic-function 'FY-val :lambda-list '(m))
(cl:defmethod FY-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:FY-val is deprecated.  Use car_interfaces-msg:FY instead.")
  (FY m))

(cl:ensure-generic-function 'IPC_En-val :lambda-list '(m))
(cl:defmethod IPC_En-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:IPC_En-val is deprecated.  Use car_interfaces-msg:IPC_En instead.")
  (IPC_En m))

(cl:ensure-generic-function 'UpDown_Position-val :lambda-list '(m))
(cl:defmethod UpDown_Position-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:UpDown_Position-val is deprecated.  Use car_interfaces-msg:UpDown_Position instead.")
  (UpDown_Position m))

(cl:ensure-generic-function 'flag_camera-val :lambda-list '(m))
(cl:defmethod flag_camera-val ((m <PathSpeedCtrlInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:flag_camera-val is deprecated.  Use car_interfaces-msg:flag_camera instead.")
  (flag_camera m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PathSpeedCtrlInterface>) ostream)
  "Serializes a message object of type '<PathSpeedCtrlInterface>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'timestamp))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'Target_velocity))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'Target_steering_angle))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Target_gear)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Target_primary_gear)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Target_EngineSpeedLevel)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'Target_speedlever_percentage))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'Target_Torque_Nm))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Target_braking_percentage)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'NearestPoint_Car2Path))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'NearestPoint_Car2Path))
  (cl:let* ((signed (cl:slot-value msg 'Cotton_Bin_Ctrl)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'CTE))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'dHead))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
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
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'flag))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'flag))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'UpDown)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'raw_control))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'kappa))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'x_trajectory))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'y_trajectory))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'gear)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'action)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'FY_Position))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'FY)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'IPC_En)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'UpDown_Position))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'flag_camera)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PathSpeedCtrlInterface>) istream)
  "Deserializes a message object of type '<PathSpeedCtrlInterface>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'timestamp) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Target_velocity) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Target_steering_angle) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Target_gear)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Target_primary_gear)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Target_EngineSpeedLevel)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Target_speedlever_percentage) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Target_Torque_Nm) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Target_braking_percentage)) (cl:read-byte istream))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'NearestPoint_Car2Path) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'NearestPoint_Car2Path)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'Cotton_Bin_Ctrl) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'CTE) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'dHead) (roslisp-utils:decode-single-float-bits bits)))
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
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'flag) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'flag)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'UpDown)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'raw_control) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'kappa) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'x_trajectory) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'y_trajectory) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'gear) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'action) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'FY_Position) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'FY) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'IPC_En) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'UpDown_Position) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'flag_camera) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PathSpeedCtrlInterface>)))
  "Returns string type for a message object of type '<PathSpeedCtrlInterface>"
  "car_interfaces/PathSpeedCtrlInterface")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PathSpeedCtrlInterface)))
  "Returns string type for a message object of type 'PathSpeedCtrlInterface"
  "car_interfaces/PathSpeedCtrlInterface")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PathSpeedCtrlInterface>)))
  "Returns md5sum for a message object of type '<PathSpeedCtrlInterface>"
  "02bb193daca16799d8ba2ebb4fa7c792")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PathSpeedCtrlInterface)))
  "Returns md5sum for a message object of type 'PathSpeedCtrlInterface"
  "02bb193daca16799d8ba2ebb4fa7c792")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PathSpeedCtrlInterface>)))
  "Returns full string definition for message of type '<PathSpeedCtrlInterface>"
  (cl:format cl:nil "float64  timestamp         # 数据帧时间戳~%float32  Target_velocity    # 车辆速度m/s~%float32  Target_steering_angle    # 车辆转角，方向盘转角 ~%uint8  Target_gear   # 01：驻车；02：空挡（N）；03：前进（D）；04：后退（R）；05：无效；~%uint8  Target_primary_gear   # 01：低速，02：中速；03：高速；~%uint8  Target_EngineSpeedLevel   # 01：低速；02：中速；03：高速；~%float32  Target_speedlever_percentage   #车速手柄（采棉机）开度（-1000-1000）   对应【-100%, 100%】，负数为后退，正数为前进。~%float32  Target_Torque_Nm   #目标驱动扭矩（单位：Nm，没有则给0）。~%uint8  Target_braking_percentage   #制动行程请求，最大行程点125，最小行程点为0，单位为个（当前将行程分成125个点）~%float32[] NearestPoint_Car2Path  # 反馈当前车辆位置距离规划的局部路径的最近点，包括：~%# float   longitude        # 途径点经度（东向坐标，单位为：m）~%# float   latitude         # 途径点纬度（北向坐标，单位为：m）~%# float   speed         # 途径点速度（单位：m/s）~%~%~%# add cyun 8.1~%int8 Cotton_Bin_Ctrl #棉线动作使能~%~%~%# add cyun 8.21~%float32 CTE~%float32 dHead~%~%# add cyun 8.30~%float32 brake_enable  #刹车使能~%float32 value_brake   #刹车量~%~%# add cyun 8.31~%float32[]  flag # 标志位，控制给线控，表明发送成功~%~%uint8 UpDown~%float32 raw_control # ~%~%~%float32 kappa #采棉时转弯，提采头的判断~%~%float64 x_trajectory~%float64 y_trajectory~%~%int8 gear # 档位 0 1-倒退 2 3-前进~%int8 action # 0-关 1-取货 2-卸货~%float64 FY_Position~%int8 FY~%~%~%int8 IPC_En~%float32 UpDown_Position~%~%int8 flag_camera~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PathSpeedCtrlInterface)))
  "Returns full string definition for message of type 'PathSpeedCtrlInterface"
  (cl:format cl:nil "float64  timestamp         # 数据帧时间戳~%float32  Target_velocity    # 车辆速度m/s~%float32  Target_steering_angle    # 车辆转角，方向盘转角 ~%uint8  Target_gear   # 01：驻车；02：空挡（N）；03：前进（D）；04：后退（R）；05：无效；~%uint8  Target_primary_gear   # 01：低速，02：中速；03：高速；~%uint8  Target_EngineSpeedLevel   # 01：低速；02：中速；03：高速；~%float32  Target_speedlever_percentage   #车速手柄（采棉机）开度（-1000-1000）   对应【-100%, 100%】，负数为后退，正数为前进。~%float32  Target_Torque_Nm   #目标驱动扭矩（单位：Nm，没有则给0）。~%uint8  Target_braking_percentage   #制动行程请求，最大行程点125，最小行程点为0，单位为个（当前将行程分成125个点）~%float32[] NearestPoint_Car2Path  # 反馈当前车辆位置距离规划的局部路径的最近点，包括：~%# float   longitude        # 途径点经度（东向坐标，单位为：m）~%# float   latitude         # 途径点纬度（北向坐标，单位为：m）~%# float   speed         # 途径点速度（单位：m/s）~%~%~%# add cyun 8.1~%int8 Cotton_Bin_Ctrl #棉线动作使能~%~%~%# add cyun 8.21~%float32 CTE~%float32 dHead~%~%# add cyun 8.30~%float32 brake_enable  #刹车使能~%float32 value_brake   #刹车量~%~%# add cyun 8.31~%float32[]  flag # 标志位，控制给线控，表明发送成功~%~%uint8 UpDown~%float32 raw_control # ~%~%~%float32 kappa #采棉时转弯，提采头的判断~%~%float64 x_trajectory~%float64 y_trajectory~%~%int8 gear # 档位 0 1-倒退 2 3-前进~%int8 action # 0-关 1-取货 2-卸货~%float64 FY_Position~%int8 FY~%~%~%int8 IPC_En~%float32 UpDown_Position~%~%int8 flag_camera~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PathSpeedCtrlInterface>))
  (cl:+ 0
     8
     4
     4
     1
     1
     1
     4
     4
     1
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'NearestPoint_Car2Path) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     1
     4
     4
     4
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'flag) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     1
     4
     4
     8
     8
     1
     1
     8
     1
     1
     4
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PathSpeedCtrlInterface>))
  "Converts a ROS message object to a list"
  (cl:list 'PathSpeedCtrlInterface
    (cl:cons ':timestamp (timestamp msg))
    (cl:cons ':Target_velocity (Target_velocity msg))
    (cl:cons ':Target_steering_angle (Target_steering_angle msg))
    (cl:cons ':Target_gear (Target_gear msg))
    (cl:cons ':Target_primary_gear (Target_primary_gear msg))
    (cl:cons ':Target_EngineSpeedLevel (Target_EngineSpeedLevel msg))
    (cl:cons ':Target_speedlever_percentage (Target_speedlever_percentage msg))
    (cl:cons ':Target_Torque_Nm (Target_Torque_Nm msg))
    (cl:cons ':Target_braking_percentage (Target_braking_percentage msg))
    (cl:cons ':NearestPoint_Car2Path (NearestPoint_Car2Path msg))
    (cl:cons ':Cotton_Bin_Ctrl (Cotton_Bin_Ctrl msg))
    (cl:cons ':CTE (CTE msg))
    (cl:cons ':dHead (dHead msg))
    (cl:cons ':brake_enable (brake_enable msg))
    (cl:cons ':value_brake (value_brake msg))
    (cl:cons ':flag (flag msg))
    (cl:cons ':UpDown (UpDown msg))
    (cl:cons ':raw_control (raw_control msg))
    (cl:cons ':kappa (kappa msg))
    (cl:cons ':x_trajectory (x_trajectory msg))
    (cl:cons ':y_trajectory (y_trajectory msg))
    (cl:cons ':gear (gear msg))
    (cl:cons ':action (action msg))
    (cl:cons ':FY_Position (FY_Position msg))
    (cl:cons ':FY (FY msg))
    (cl:cons ':IPC_En (IPC_En msg))
    (cl:cons ':UpDown_Position (UpDown_Position msg))
    (cl:cons ':flag_camera (flag_camera msg))
))
