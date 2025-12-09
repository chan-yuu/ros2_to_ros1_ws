; Auto-generated. Do not edit!


(cl:in-package car_interfaces-msg)


;//! \htmlinclude CarOriInterface.msg.html

(cl:defclass <CarOriInterface> (roslisp-msg-protocol:ros-message)
  ((Angle
    :reader Angle
    :initarg :Angle
    :type cl:float
    :initform 0.0)
   (Acc
    :reader Acc
    :initarg :Acc
    :type cl:float
    :initform 0.0)
   (open_gas
    :reader open_gas
    :initarg :open_gas
    :type cl:float
    :initform 0.0)
   (Drive_Mode
    :reader Drive_Mode
    :initarg :Drive_Mode
    :type cl:fixnum
    :initform 0)
   (EPOSts
    :reader EPOSts
    :initarg :EPOSts
    :type cl:fixnum
    :initform 0)
   (Gear
    :reader Gear
    :initarg :Gear
    :type cl:fixnum
    :initform 0)
   (Car_Speed
    :reader Car_Speed
    :initarg :Car_Speed
    :type cl:float
    :initform 0.0)
   (Motor_Torque
    :reader Motor_Torque
    :initarg :Motor_Torque
    :type cl:float
    :initform 0.0)
   (YK_F
    :reader YK_F
    :initarg :YK_F
    :type cl:fixnum
    :initform 0)
   (YK_H
    :reader YK_H
    :initarg :YK_H
    :type cl:fixnum
    :initform 0)
   (Fault1
    :reader Fault1
    :initarg :Fault1
    :type cl:fixnum
    :initform 0)
   (Fault2
    :reader Fault2
    :initarg :Fault2
    :type cl:fixnum
    :initform 0)
   (Fault3
    :reader Fault3
    :initarg :Fault3
    :type cl:fixnum
    :initform 0)
   (Fault4
    :reader Fault4
    :initarg :Fault4
    :type cl:fixnum
    :initform 0)
   (Mileage
    :reader Mileage
    :initarg :Mileage
    :type cl:float
    :initform 0.0)
   (Brake_Pressure
    :reader Brake_Pressure
    :initarg :Brake_Pressure
    :type cl:float
    :initform 0.0)
   (LR_WheelSpeed
    :reader LR_WheelSpeed
    :initarg :LR_WheelSpeed
    :type cl:float
    :initform 0.0)
   (RR_WheelSpeed
    :reader RR_WheelSpeed
    :initarg :RR_WheelSpeed
    :type cl:float
    :initform 0.0)
   (SOC
    :reader SOC
    :initarg :SOC
    :type cl:float
    :initform 0.0)
   (CarSts1
    :reader CarSts1
    :initarg :CarSts1
    :type cl:fixnum
    :initform 0)
   (CarSts2
    :reader CarSts2
    :initarg :CarSts2
    :type cl:fixnum
    :initform 0)
   (LX_Hight
    :reader LX_Hight
    :initarg :LX_Hight
    :type cl:float
    :initform 0.0)
   (Pitching
    :reader Pitching
    :initarg :Pitching
    :type cl:float
    :initform 0.0)
   (Time
    :reader Time
    :initarg :Time
    :type cl:float
    :initform 0.0)
   (LV_Main
    :reader LV_Main
    :initarg :LV_Main
    :type cl:fixnum
    :initform 0)
   (LV_zCode
    :reader LV_zCode
    :initarg :LV_zCode
    :type cl:fixnum
    :initform 0)
   (LV_Sun
    :reader LV_Sun
    :initarg :LV_Sun
    :type cl:fixnum
    :initform 0)
   (CarStartState
    :reader CarStartState
    :initarg :CarStartState
    :type cl:fixnum
    :initform 0)
   (VCU_Service_Voltage
    :reader VCU_Service_Voltage
    :initarg :VCU_Service_Voltage
    :type cl:float
    :initform 0.0)
   (VCU_Sts
    :reader VCU_Sts
    :initarg :VCU_Sts
    :type cl:integer
    :initform 0)
   (Fault
    :reader Fault
    :initarg :Fault
    :type cl:fixnum
    :initform 0)
   (flag_end_wire
    :reader flag_end_wire
    :initarg :flag_end_wire
    :type cl:fixnum
    :initform 0)
   (msg_from_wire_to_plan
    :reader msg_from_wire_to_plan
    :initarg :msg_from_wire_to_plan
    :type cl:fixnum
    :initform 0)
   (current_lateral_movement_position
    :reader current_lateral_movement_position
    :initarg :current_lateral_movement_position
    :type cl:float
    :initform 0.0)
   (current_clamp_width
    :reader current_clamp_width
    :initarg :current_clamp_width
    :type cl:float
    :initform 0.0)
   (now_car_speed
    :reader now_car_speed
    :initarg :now_car_speed
    :type cl:float
    :initform 0.0))
)

(cl:defclass CarOriInterface (<CarOriInterface>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CarOriInterface>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CarOriInterface)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name car_interfaces-msg:<CarOriInterface> is deprecated: use car_interfaces-msg:CarOriInterface instead.")))

(cl:ensure-generic-function 'Angle-val :lambda-list '(m))
(cl:defmethod Angle-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Angle-val is deprecated.  Use car_interfaces-msg:Angle instead.")
  (Angle m))

(cl:ensure-generic-function 'Acc-val :lambda-list '(m))
(cl:defmethod Acc-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Acc-val is deprecated.  Use car_interfaces-msg:Acc instead.")
  (Acc m))

(cl:ensure-generic-function 'open_gas-val :lambda-list '(m))
(cl:defmethod open_gas-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:open_gas-val is deprecated.  Use car_interfaces-msg:open_gas instead.")
  (open_gas m))

(cl:ensure-generic-function 'Drive_Mode-val :lambda-list '(m))
(cl:defmethod Drive_Mode-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Drive_Mode-val is deprecated.  Use car_interfaces-msg:Drive_Mode instead.")
  (Drive_Mode m))

(cl:ensure-generic-function 'EPOSts-val :lambda-list '(m))
(cl:defmethod EPOSts-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:EPOSts-val is deprecated.  Use car_interfaces-msg:EPOSts instead.")
  (EPOSts m))

(cl:ensure-generic-function 'Gear-val :lambda-list '(m))
(cl:defmethod Gear-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Gear-val is deprecated.  Use car_interfaces-msg:Gear instead.")
  (Gear m))

(cl:ensure-generic-function 'Car_Speed-val :lambda-list '(m))
(cl:defmethod Car_Speed-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Car_Speed-val is deprecated.  Use car_interfaces-msg:Car_Speed instead.")
  (Car_Speed m))

(cl:ensure-generic-function 'Motor_Torque-val :lambda-list '(m))
(cl:defmethod Motor_Torque-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Motor_Torque-val is deprecated.  Use car_interfaces-msg:Motor_Torque instead.")
  (Motor_Torque m))

(cl:ensure-generic-function 'YK_F-val :lambda-list '(m))
(cl:defmethod YK_F-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:YK_F-val is deprecated.  Use car_interfaces-msg:YK_F instead.")
  (YK_F m))

(cl:ensure-generic-function 'YK_H-val :lambda-list '(m))
(cl:defmethod YK_H-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:YK_H-val is deprecated.  Use car_interfaces-msg:YK_H instead.")
  (YK_H m))

(cl:ensure-generic-function 'Fault1-val :lambda-list '(m))
(cl:defmethod Fault1-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Fault1-val is deprecated.  Use car_interfaces-msg:Fault1 instead.")
  (Fault1 m))

(cl:ensure-generic-function 'Fault2-val :lambda-list '(m))
(cl:defmethod Fault2-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Fault2-val is deprecated.  Use car_interfaces-msg:Fault2 instead.")
  (Fault2 m))

(cl:ensure-generic-function 'Fault3-val :lambda-list '(m))
(cl:defmethod Fault3-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Fault3-val is deprecated.  Use car_interfaces-msg:Fault3 instead.")
  (Fault3 m))

(cl:ensure-generic-function 'Fault4-val :lambda-list '(m))
(cl:defmethod Fault4-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Fault4-val is deprecated.  Use car_interfaces-msg:Fault4 instead.")
  (Fault4 m))

(cl:ensure-generic-function 'Mileage-val :lambda-list '(m))
(cl:defmethod Mileage-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Mileage-val is deprecated.  Use car_interfaces-msg:Mileage instead.")
  (Mileage m))

(cl:ensure-generic-function 'Brake_Pressure-val :lambda-list '(m))
(cl:defmethod Brake_Pressure-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Brake_Pressure-val is deprecated.  Use car_interfaces-msg:Brake_Pressure instead.")
  (Brake_Pressure m))

(cl:ensure-generic-function 'LR_WheelSpeed-val :lambda-list '(m))
(cl:defmethod LR_WheelSpeed-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:LR_WheelSpeed-val is deprecated.  Use car_interfaces-msg:LR_WheelSpeed instead.")
  (LR_WheelSpeed m))

(cl:ensure-generic-function 'RR_WheelSpeed-val :lambda-list '(m))
(cl:defmethod RR_WheelSpeed-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:RR_WheelSpeed-val is deprecated.  Use car_interfaces-msg:RR_WheelSpeed instead.")
  (RR_WheelSpeed m))

(cl:ensure-generic-function 'SOC-val :lambda-list '(m))
(cl:defmethod SOC-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:SOC-val is deprecated.  Use car_interfaces-msg:SOC instead.")
  (SOC m))

(cl:ensure-generic-function 'CarSts1-val :lambda-list '(m))
(cl:defmethod CarSts1-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:CarSts1-val is deprecated.  Use car_interfaces-msg:CarSts1 instead.")
  (CarSts1 m))

(cl:ensure-generic-function 'CarSts2-val :lambda-list '(m))
(cl:defmethod CarSts2-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:CarSts2-val is deprecated.  Use car_interfaces-msg:CarSts2 instead.")
  (CarSts2 m))

(cl:ensure-generic-function 'LX_Hight-val :lambda-list '(m))
(cl:defmethod LX_Hight-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:LX_Hight-val is deprecated.  Use car_interfaces-msg:LX_Hight instead.")
  (LX_Hight m))

(cl:ensure-generic-function 'Pitching-val :lambda-list '(m))
(cl:defmethod Pitching-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Pitching-val is deprecated.  Use car_interfaces-msg:Pitching instead.")
  (Pitching m))

(cl:ensure-generic-function 'Time-val :lambda-list '(m))
(cl:defmethod Time-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Time-val is deprecated.  Use car_interfaces-msg:Time instead.")
  (Time m))

(cl:ensure-generic-function 'LV_Main-val :lambda-list '(m))
(cl:defmethod LV_Main-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:LV_Main-val is deprecated.  Use car_interfaces-msg:LV_Main instead.")
  (LV_Main m))

(cl:ensure-generic-function 'LV_zCode-val :lambda-list '(m))
(cl:defmethod LV_zCode-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:LV_zCode-val is deprecated.  Use car_interfaces-msg:LV_zCode instead.")
  (LV_zCode m))

(cl:ensure-generic-function 'LV_Sun-val :lambda-list '(m))
(cl:defmethod LV_Sun-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:LV_Sun-val is deprecated.  Use car_interfaces-msg:LV_Sun instead.")
  (LV_Sun m))

(cl:ensure-generic-function 'CarStartState-val :lambda-list '(m))
(cl:defmethod CarStartState-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:CarStartState-val is deprecated.  Use car_interfaces-msg:CarStartState instead.")
  (CarStartState m))

(cl:ensure-generic-function 'VCU_Service_Voltage-val :lambda-list '(m))
(cl:defmethod VCU_Service_Voltage-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:VCU_Service_Voltage-val is deprecated.  Use car_interfaces-msg:VCU_Service_Voltage instead.")
  (VCU_Service_Voltage m))

(cl:ensure-generic-function 'VCU_Sts-val :lambda-list '(m))
(cl:defmethod VCU_Sts-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:VCU_Sts-val is deprecated.  Use car_interfaces-msg:VCU_Sts instead.")
  (VCU_Sts m))

(cl:ensure-generic-function 'Fault-val :lambda-list '(m))
(cl:defmethod Fault-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:Fault-val is deprecated.  Use car_interfaces-msg:Fault instead.")
  (Fault m))

(cl:ensure-generic-function 'flag_end_wire-val :lambda-list '(m))
(cl:defmethod flag_end_wire-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:flag_end_wire-val is deprecated.  Use car_interfaces-msg:flag_end_wire instead.")
  (flag_end_wire m))

(cl:ensure-generic-function 'msg_from_wire_to_plan-val :lambda-list '(m))
(cl:defmethod msg_from_wire_to_plan-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:msg_from_wire_to_plan-val is deprecated.  Use car_interfaces-msg:msg_from_wire_to_plan instead.")
  (msg_from_wire_to_plan m))

(cl:ensure-generic-function 'current_lateral_movement_position-val :lambda-list '(m))
(cl:defmethod current_lateral_movement_position-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:current_lateral_movement_position-val is deprecated.  Use car_interfaces-msg:current_lateral_movement_position instead.")
  (current_lateral_movement_position m))

(cl:ensure-generic-function 'current_clamp_width-val :lambda-list '(m))
(cl:defmethod current_clamp_width-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:current_clamp_width-val is deprecated.  Use car_interfaces-msg:current_clamp_width instead.")
  (current_clamp_width m))

(cl:ensure-generic-function 'now_car_speed-val :lambda-list '(m))
(cl:defmethod now_car_speed-val ((m <CarOriInterface>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader car_interfaces-msg:now_car_speed-val is deprecated.  Use car_interfaces-msg:now_car_speed instead.")
  (now_car_speed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CarOriInterface>) ostream)
  "Serializes a message object of type '<CarOriInterface>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'Angle))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'Acc))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'open_gas))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'Drive_Mode)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'EPOSts)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'Gear)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'Car_Speed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'Motor_Torque))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'YK_F)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'YK_H)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'Fault1)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'Fault2)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'Fault3)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'Fault4)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'Mileage))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'Brake_Pressure))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'LR_WheelSpeed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'RR_WheelSpeed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'SOC))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'CarSts1)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'CarSts2)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'LX_Hight))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'Pitching))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'Time))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'LV_Main)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'LV_zCode)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'LV_Sun)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'CarStartState)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'VCU_Service_Voltage))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'VCU_Sts)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'Fault)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'flag_end_wire)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'msg_from_wire_to_plan)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'current_lateral_movement_position))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'current_clamp_width))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'now_car_speed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CarOriInterface>) istream)
  "Deserializes a message object of type '<CarOriInterface>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Angle) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Acc) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'open_gas) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'Drive_Mode) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'EPOSts) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'Gear) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Car_Speed) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Motor_Torque) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'YK_F) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'YK_H) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'Fault1) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'Fault2) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'Fault3) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'Fault4) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Mileage) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Brake_Pressure) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LR_WheelSpeed) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'RR_WheelSpeed) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'SOC) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'CarSts1) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'CarSts2) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'LX_Hight) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Pitching) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Time) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'LV_Main) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'LV_zCode) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'LV_Sun) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'CarStartState) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'VCU_Service_Voltage) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'VCU_Sts) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'Fault) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'flag_end_wire) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'msg_from_wire_to_plan) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'current_lateral_movement_position) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'current_clamp_width) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'now_car_speed) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CarOriInterface>)))
  "Returns string type for a message object of type '<CarOriInterface>"
  "car_interfaces/CarOriInterface")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CarOriInterface)))
  "Returns string type for a message object of type 'CarOriInterface"
  "car_interfaces/CarOriInterface")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CarOriInterface>)))
  "Returns md5sum for a message object of type '<CarOriInterface>"
  "d4f6f01de7b91510a86389a083d89da5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CarOriInterface)))
  "Returns md5sum for a message object of type 'CarOriInterface"
  "d4f6f01de7b91510a86389a083d89da5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CarOriInterface>)))
  "Returns full string definition for message of type '<CarOriInterface>"
  (cl:format cl:nil "float64 Angle  # 方向盘转角反馈~%float64 Acc #加速度~%float64 open_gas #油门踏板开度~%int8 Drive_Mode #驾驶模式~%int8 EPOSts #急停~%int8 Gear #档位 ~%float64 Car_Speed #车速~%float64 Motor_Torque #油门反馈~%int8 YK_F #复位H~%int8 YK_H #遥控F~%~%int8 Fault1 # 故障代码1  ~%int8 Fault2 # 故障代码2  ~%int8 Fault3 # # 故障代码3  ~%int8 Fault4 # # 故障代码4  ~%float64 Mileage # 累计里程~%~%float32 Brake_Pressure #制动压力采样值~%float32 LR_WheelSpeed  ~%float32 RR_WheelSpeed   ~%float32 SOC   # SOC~%int8 CarSts1   # 车辆状态1~%int8 CarSts2   # 车辆状态2~%~%float64 LX_Hight # 高度传感器~%float64 Pitching   # 俯仰传感器~%~%float64 Time # 日期~%int8 LV_Main   # 主版本~%int8 LV_zCode   # 子版本~%int8 LV_Sun   # 修订版本~%~%int8 CarStartState # 车辆启动状态~%float32 VCU_Service_Voltage   # VCU供电电压~%int32 VCU_Sts   # VCU状态~%int8 Fault   # 整车故障~%~%int8 flag_end_wire # 线控反馈局部终点到达情况~%int8 msg_from_wire_to_plan~%~%float64 current_lateral_movement_position  #横移~%float64 current_clamp_width #夹抱宽度~%float64 now_car_speed #0-100km/h 单位不一样和Car_Speed~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CarOriInterface)))
  "Returns full string definition for message of type 'CarOriInterface"
  (cl:format cl:nil "float64 Angle  # 方向盘转角反馈~%float64 Acc #加速度~%float64 open_gas #油门踏板开度~%int8 Drive_Mode #驾驶模式~%int8 EPOSts #急停~%int8 Gear #档位 ~%float64 Car_Speed #车速~%float64 Motor_Torque #油门反馈~%int8 YK_F #复位H~%int8 YK_H #遥控F~%~%int8 Fault1 # 故障代码1  ~%int8 Fault2 # 故障代码2  ~%int8 Fault3 # # 故障代码3  ~%int8 Fault4 # # 故障代码4  ~%float64 Mileage # 累计里程~%~%float32 Brake_Pressure #制动压力采样值~%float32 LR_WheelSpeed  ~%float32 RR_WheelSpeed   ~%float32 SOC   # SOC~%int8 CarSts1   # 车辆状态1~%int8 CarSts2   # 车辆状态2~%~%float64 LX_Hight # 高度传感器~%float64 Pitching   # 俯仰传感器~%~%float64 Time # 日期~%int8 LV_Main   # 主版本~%int8 LV_zCode   # 子版本~%int8 LV_Sun   # 修订版本~%~%int8 CarStartState # 车辆启动状态~%float32 VCU_Service_Voltage   # VCU供电电压~%int32 VCU_Sts   # VCU状态~%int8 Fault   # 整车故障~%~%int8 flag_end_wire # 线控反馈局部终点到达情况~%int8 msg_from_wire_to_plan~%~%float64 current_lateral_movement_position  #横移~%float64 current_clamp_width #夹抱宽度~%float64 now_car_speed #0-100km/h 单位不一样和Car_Speed~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CarOriInterface>))
  (cl:+ 0
     8
     8
     8
     1
     1
     1
     8
     8
     1
     1
     1
     1
     1
     1
     8
     4
     4
     4
     4
     1
     1
     8
     8
     8
     1
     1
     1
     1
     4
     4
     1
     1
     1
     8
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CarOriInterface>))
  "Converts a ROS message object to a list"
  (cl:list 'CarOriInterface
    (cl:cons ':Angle (Angle msg))
    (cl:cons ':Acc (Acc msg))
    (cl:cons ':open_gas (open_gas msg))
    (cl:cons ':Drive_Mode (Drive_Mode msg))
    (cl:cons ':EPOSts (EPOSts msg))
    (cl:cons ':Gear (Gear msg))
    (cl:cons ':Car_Speed (Car_Speed msg))
    (cl:cons ':Motor_Torque (Motor_Torque msg))
    (cl:cons ':YK_F (YK_F msg))
    (cl:cons ':YK_H (YK_H msg))
    (cl:cons ':Fault1 (Fault1 msg))
    (cl:cons ':Fault2 (Fault2 msg))
    (cl:cons ':Fault3 (Fault3 msg))
    (cl:cons ':Fault4 (Fault4 msg))
    (cl:cons ':Mileage (Mileage msg))
    (cl:cons ':Brake_Pressure (Brake_Pressure msg))
    (cl:cons ':LR_WheelSpeed (LR_WheelSpeed msg))
    (cl:cons ':RR_WheelSpeed (RR_WheelSpeed msg))
    (cl:cons ':SOC (SOC msg))
    (cl:cons ':CarSts1 (CarSts1 msg))
    (cl:cons ':CarSts2 (CarSts2 msg))
    (cl:cons ':LX_Hight (LX_Hight msg))
    (cl:cons ':Pitching (Pitching msg))
    (cl:cons ':Time (Time msg))
    (cl:cons ':LV_Main (LV_Main msg))
    (cl:cons ':LV_zCode (LV_zCode msg))
    (cl:cons ':LV_Sun (LV_Sun msg))
    (cl:cons ':CarStartState (CarStartState msg))
    (cl:cons ':VCU_Service_Voltage (VCU_Service_Voltage msg))
    (cl:cons ':VCU_Sts (VCU_Sts msg))
    (cl:cons ':Fault (Fault msg))
    (cl:cons ':flag_end_wire (flag_end_wire msg))
    (cl:cons ':msg_from_wire_to_plan (msg_from_wire_to_plan msg))
    (cl:cons ':current_lateral_movement_position (current_lateral_movement_position msg))
    (cl:cons ':current_clamp_width (current_clamp_width msg))
    (cl:cons ':now_car_speed (now_car_speed msg))
))
