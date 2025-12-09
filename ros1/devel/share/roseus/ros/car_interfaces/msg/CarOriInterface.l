;; Auto-generated. Do not edit!


(when (boundp 'car_interfaces::CarOriInterface)
  (if (not (find-package "CAR_INTERFACES"))
    (make-package "CAR_INTERFACES"))
  (shadow 'CarOriInterface (find-package "CAR_INTERFACES")))
(unless (find-package "CAR_INTERFACES::CARORIINTERFACE")
  (make-package "CAR_INTERFACES::CARORIINTERFACE"))

(in-package "ROS")
;;//! \htmlinclude CarOriInterface.msg.html


(defclass car_interfaces::CarOriInterface
  :super ros::object
  :slots (_Angle _Acc _open_gas _Drive_Mode _EPOSts _Gear _Car_Speed _Motor_Torque _YK_F _YK_H _Fault1 _Fault2 _Fault3 _Fault4 _Mileage _Brake_Pressure _LR_WheelSpeed _RR_WheelSpeed _SOC _CarSts1 _CarSts2 _LX_Hight _Pitching _Time _LV_Main _LV_zCode _LV_Sun _CarStartState _VCU_Service_Voltage _VCU_Sts _Fault _flag_end_wire _msg_from_wire_to_plan _current_lateral_movement_position _current_clamp_width _now_car_speed ))

(defmethod car_interfaces::CarOriInterface
  (:init
   (&key
    ((:Angle __Angle) 0.0)
    ((:Acc __Acc) 0.0)
    ((:open_gas __open_gas) 0.0)
    ((:Drive_Mode __Drive_Mode) 0)
    ((:EPOSts __EPOSts) 0)
    ((:Gear __Gear) 0)
    ((:Car_Speed __Car_Speed) 0.0)
    ((:Motor_Torque __Motor_Torque) 0.0)
    ((:YK_F __YK_F) 0)
    ((:YK_H __YK_H) 0)
    ((:Fault1 __Fault1) 0)
    ((:Fault2 __Fault2) 0)
    ((:Fault3 __Fault3) 0)
    ((:Fault4 __Fault4) 0)
    ((:Mileage __Mileage) 0.0)
    ((:Brake_Pressure __Brake_Pressure) 0.0)
    ((:LR_WheelSpeed __LR_WheelSpeed) 0.0)
    ((:RR_WheelSpeed __RR_WheelSpeed) 0.0)
    ((:SOC __SOC) 0.0)
    ((:CarSts1 __CarSts1) 0)
    ((:CarSts2 __CarSts2) 0)
    ((:LX_Hight __LX_Hight) 0.0)
    ((:Pitching __Pitching) 0.0)
    ((:Time __Time) 0.0)
    ((:LV_Main __LV_Main) 0)
    ((:LV_zCode __LV_zCode) 0)
    ((:LV_Sun __LV_Sun) 0)
    ((:CarStartState __CarStartState) 0)
    ((:VCU_Service_Voltage __VCU_Service_Voltage) 0.0)
    ((:VCU_Sts __VCU_Sts) 0)
    ((:Fault __Fault) 0)
    ((:flag_end_wire __flag_end_wire) 0)
    ((:msg_from_wire_to_plan __msg_from_wire_to_plan) 0)
    ((:current_lateral_movement_position __current_lateral_movement_position) 0.0)
    ((:current_clamp_width __current_clamp_width) 0.0)
    ((:now_car_speed __now_car_speed) 0.0)
    )
   (send-super :init)
   (setq _Angle (float __Angle))
   (setq _Acc (float __Acc))
   (setq _open_gas (float __open_gas))
   (setq _Drive_Mode (round __Drive_Mode))
   (setq _EPOSts (round __EPOSts))
   (setq _Gear (round __Gear))
   (setq _Car_Speed (float __Car_Speed))
   (setq _Motor_Torque (float __Motor_Torque))
   (setq _YK_F (round __YK_F))
   (setq _YK_H (round __YK_H))
   (setq _Fault1 (round __Fault1))
   (setq _Fault2 (round __Fault2))
   (setq _Fault3 (round __Fault3))
   (setq _Fault4 (round __Fault4))
   (setq _Mileage (float __Mileage))
   (setq _Brake_Pressure (float __Brake_Pressure))
   (setq _LR_WheelSpeed (float __LR_WheelSpeed))
   (setq _RR_WheelSpeed (float __RR_WheelSpeed))
   (setq _SOC (float __SOC))
   (setq _CarSts1 (round __CarSts1))
   (setq _CarSts2 (round __CarSts2))
   (setq _LX_Hight (float __LX_Hight))
   (setq _Pitching (float __Pitching))
   (setq _Time (float __Time))
   (setq _LV_Main (round __LV_Main))
   (setq _LV_zCode (round __LV_zCode))
   (setq _LV_Sun (round __LV_Sun))
   (setq _CarStartState (round __CarStartState))
   (setq _VCU_Service_Voltage (float __VCU_Service_Voltage))
   (setq _VCU_Sts (round __VCU_Sts))
   (setq _Fault (round __Fault))
   (setq _flag_end_wire (round __flag_end_wire))
   (setq _msg_from_wire_to_plan (round __msg_from_wire_to_plan))
   (setq _current_lateral_movement_position (float __current_lateral_movement_position))
   (setq _current_clamp_width (float __current_clamp_width))
   (setq _now_car_speed (float __now_car_speed))
   self)
  (:Angle
   (&optional __Angle)
   (if __Angle (setq _Angle __Angle)) _Angle)
  (:Acc
   (&optional __Acc)
   (if __Acc (setq _Acc __Acc)) _Acc)
  (:open_gas
   (&optional __open_gas)
   (if __open_gas (setq _open_gas __open_gas)) _open_gas)
  (:Drive_Mode
   (&optional __Drive_Mode)
   (if __Drive_Mode (setq _Drive_Mode __Drive_Mode)) _Drive_Mode)
  (:EPOSts
   (&optional __EPOSts)
   (if __EPOSts (setq _EPOSts __EPOSts)) _EPOSts)
  (:Gear
   (&optional __Gear)
   (if __Gear (setq _Gear __Gear)) _Gear)
  (:Car_Speed
   (&optional __Car_Speed)
   (if __Car_Speed (setq _Car_Speed __Car_Speed)) _Car_Speed)
  (:Motor_Torque
   (&optional __Motor_Torque)
   (if __Motor_Torque (setq _Motor_Torque __Motor_Torque)) _Motor_Torque)
  (:YK_F
   (&optional __YK_F)
   (if __YK_F (setq _YK_F __YK_F)) _YK_F)
  (:YK_H
   (&optional __YK_H)
   (if __YK_H (setq _YK_H __YK_H)) _YK_H)
  (:Fault1
   (&optional __Fault1)
   (if __Fault1 (setq _Fault1 __Fault1)) _Fault1)
  (:Fault2
   (&optional __Fault2)
   (if __Fault2 (setq _Fault2 __Fault2)) _Fault2)
  (:Fault3
   (&optional __Fault3)
   (if __Fault3 (setq _Fault3 __Fault3)) _Fault3)
  (:Fault4
   (&optional __Fault4)
   (if __Fault4 (setq _Fault4 __Fault4)) _Fault4)
  (:Mileage
   (&optional __Mileage)
   (if __Mileage (setq _Mileage __Mileage)) _Mileage)
  (:Brake_Pressure
   (&optional __Brake_Pressure)
   (if __Brake_Pressure (setq _Brake_Pressure __Brake_Pressure)) _Brake_Pressure)
  (:LR_WheelSpeed
   (&optional __LR_WheelSpeed)
   (if __LR_WheelSpeed (setq _LR_WheelSpeed __LR_WheelSpeed)) _LR_WheelSpeed)
  (:RR_WheelSpeed
   (&optional __RR_WheelSpeed)
   (if __RR_WheelSpeed (setq _RR_WheelSpeed __RR_WheelSpeed)) _RR_WheelSpeed)
  (:SOC
   (&optional __SOC)
   (if __SOC (setq _SOC __SOC)) _SOC)
  (:CarSts1
   (&optional __CarSts1)
   (if __CarSts1 (setq _CarSts1 __CarSts1)) _CarSts1)
  (:CarSts2
   (&optional __CarSts2)
   (if __CarSts2 (setq _CarSts2 __CarSts2)) _CarSts2)
  (:LX_Hight
   (&optional __LX_Hight)
   (if __LX_Hight (setq _LX_Hight __LX_Hight)) _LX_Hight)
  (:Pitching
   (&optional __Pitching)
   (if __Pitching (setq _Pitching __Pitching)) _Pitching)
  (:Time
   (&optional __Time)
   (if __Time (setq _Time __Time)) _Time)
  (:LV_Main
   (&optional __LV_Main)
   (if __LV_Main (setq _LV_Main __LV_Main)) _LV_Main)
  (:LV_zCode
   (&optional __LV_zCode)
   (if __LV_zCode (setq _LV_zCode __LV_zCode)) _LV_zCode)
  (:LV_Sun
   (&optional __LV_Sun)
   (if __LV_Sun (setq _LV_Sun __LV_Sun)) _LV_Sun)
  (:CarStartState
   (&optional __CarStartState)
   (if __CarStartState (setq _CarStartState __CarStartState)) _CarStartState)
  (:VCU_Service_Voltage
   (&optional __VCU_Service_Voltage)
   (if __VCU_Service_Voltage (setq _VCU_Service_Voltage __VCU_Service_Voltage)) _VCU_Service_Voltage)
  (:VCU_Sts
   (&optional __VCU_Sts)
   (if __VCU_Sts (setq _VCU_Sts __VCU_Sts)) _VCU_Sts)
  (:Fault
   (&optional __Fault)
   (if __Fault (setq _Fault __Fault)) _Fault)
  (:flag_end_wire
   (&optional __flag_end_wire)
   (if __flag_end_wire (setq _flag_end_wire __flag_end_wire)) _flag_end_wire)
  (:msg_from_wire_to_plan
   (&optional __msg_from_wire_to_plan)
   (if __msg_from_wire_to_plan (setq _msg_from_wire_to_plan __msg_from_wire_to_plan)) _msg_from_wire_to_plan)
  (:current_lateral_movement_position
   (&optional __current_lateral_movement_position)
   (if __current_lateral_movement_position (setq _current_lateral_movement_position __current_lateral_movement_position)) _current_lateral_movement_position)
  (:current_clamp_width
   (&optional __current_clamp_width)
   (if __current_clamp_width (setq _current_clamp_width __current_clamp_width)) _current_clamp_width)
  (:now_car_speed
   (&optional __now_car_speed)
   (if __now_car_speed (setq _now_car_speed __now_car_speed)) _now_car_speed)
  (:serialization-length
   ()
   (+
    ;; float64 _Angle
    8
    ;; float64 _Acc
    8
    ;; float64 _open_gas
    8
    ;; int8 _Drive_Mode
    1
    ;; int8 _EPOSts
    1
    ;; int8 _Gear
    1
    ;; float64 _Car_Speed
    8
    ;; float64 _Motor_Torque
    8
    ;; int8 _YK_F
    1
    ;; int8 _YK_H
    1
    ;; int8 _Fault1
    1
    ;; int8 _Fault2
    1
    ;; int8 _Fault3
    1
    ;; int8 _Fault4
    1
    ;; float64 _Mileage
    8
    ;; float32 _Brake_Pressure
    4
    ;; float32 _LR_WheelSpeed
    4
    ;; float32 _RR_WheelSpeed
    4
    ;; float32 _SOC
    4
    ;; int8 _CarSts1
    1
    ;; int8 _CarSts2
    1
    ;; float64 _LX_Hight
    8
    ;; float64 _Pitching
    8
    ;; float64 _Time
    8
    ;; int8 _LV_Main
    1
    ;; int8 _LV_zCode
    1
    ;; int8 _LV_Sun
    1
    ;; int8 _CarStartState
    1
    ;; float32 _VCU_Service_Voltage
    4
    ;; int32 _VCU_Sts
    4
    ;; int8 _Fault
    1
    ;; int8 _flag_end_wire
    1
    ;; int8 _msg_from_wire_to_plan
    1
    ;; float64 _current_lateral_movement_position
    8
    ;; float64 _current_clamp_width
    8
    ;; float64 _now_car_speed
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _Angle
       (sys::poke _Angle (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _Acc
       (sys::poke _Acc (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _open_gas
       (sys::poke _open_gas (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; int8 _Drive_Mode
       (write-byte _Drive_Mode s)
     ;; int8 _EPOSts
       (write-byte _EPOSts s)
     ;; int8 _Gear
       (write-byte _Gear s)
     ;; float64 _Car_Speed
       (sys::poke _Car_Speed (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _Motor_Torque
       (sys::poke _Motor_Torque (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; int8 _YK_F
       (write-byte _YK_F s)
     ;; int8 _YK_H
       (write-byte _YK_H s)
     ;; int8 _Fault1
       (write-byte _Fault1 s)
     ;; int8 _Fault2
       (write-byte _Fault2 s)
     ;; int8 _Fault3
       (write-byte _Fault3 s)
     ;; int8 _Fault4
       (write-byte _Fault4 s)
     ;; float64 _Mileage
       (sys::poke _Mileage (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float32 _Brake_Pressure
       (sys::poke _Brake_Pressure (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _LR_WheelSpeed
       (sys::poke _LR_WheelSpeed (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _RR_WheelSpeed
       (sys::poke _RR_WheelSpeed (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _SOC
       (sys::poke _SOC (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; int8 _CarSts1
       (write-byte _CarSts1 s)
     ;; int8 _CarSts2
       (write-byte _CarSts2 s)
     ;; float64 _LX_Hight
       (sys::poke _LX_Hight (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _Pitching
       (sys::poke _Pitching (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _Time
       (sys::poke _Time (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; int8 _LV_Main
       (write-byte _LV_Main s)
     ;; int8 _LV_zCode
       (write-byte _LV_zCode s)
     ;; int8 _LV_Sun
       (write-byte _LV_Sun s)
     ;; int8 _CarStartState
       (write-byte _CarStartState s)
     ;; float32 _VCU_Service_Voltage
       (sys::poke _VCU_Service_Voltage (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; int32 _VCU_Sts
       (write-long _VCU_Sts s)
     ;; int8 _Fault
       (write-byte _Fault s)
     ;; int8 _flag_end_wire
       (write-byte _flag_end_wire s)
     ;; int8 _msg_from_wire_to_plan
       (write-byte _msg_from_wire_to_plan s)
     ;; float64 _current_lateral_movement_position
       (sys::poke _current_lateral_movement_position (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _current_clamp_width
       (sys::poke _current_clamp_width (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _now_car_speed
       (sys::poke _now_car_speed (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _Angle
     (setq _Angle (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _Acc
     (setq _Acc (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _open_gas
     (setq _open_gas (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; int8 _Drive_Mode
     (setq _Drive_Mode (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _Drive_Mode 127) (setq _Drive_Mode (- _Drive_Mode 256)))
   ;; int8 _EPOSts
     (setq _EPOSts (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _EPOSts 127) (setq _EPOSts (- _EPOSts 256)))
   ;; int8 _Gear
     (setq _Gear (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _Gear 127) (setq _Gear (- _Gear 256)))
   ;; float64 _Car_Speed
     (setq _Car_Speed (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _Motor_Torque
     (setq _Motor_Torque (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; int8 _YK_F
     (setq _YK_F (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _YK_F 127) (setq _YK_F (- _YK_F 256)))
   ;; int8 _YK_H
     (setq _YK_H (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _YK_H 127) (setq _YK_H (- _YK_H 256)))
   ;; int8 _Fault1
     (setq _Fault1 (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _Fault1 127) (setq _Fault1 (- _Fault1 256)))
   ;; int8 _Fault2
     (setq _Fault2 (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _Fault2 127) (setq _Fault2 (- _Fault2 256)))
   ;; int8 _Fault3
     (setq _Fault3 (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _Fault3 127) (setq _Fault3 (- _Fault3 256)))
   ;; int8 _Fault4
     (setq _Fault4 (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _Fault4 127) (setq _Fault4 (- _Fault4 256)))
   ;; float64 _Mileage
     (setq _Mileage (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float32 _Brake_Pressure
     (setq _Brake_Pressure (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _LR_WheelSpeed
     (setq _LR_WheelSpeed (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _RR_WheelSpeed
     (setq _RR_WheelSpeed (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _SOC
     (setq _SOC (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; int8 _CarSts1
     (setq _CarSts1 (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _CarSts1 127) (setq _CarSts1 (- _CarSts1 256)))
   ;; int8 _CarSts2
     (setq _CarSts2 (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _CarSts2 127) (setq _CarSts2 (- _CarSts2 256)))
   ;; float64 _LX_Hight
     (setq _LX_Hight (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _Pitching
     (setq _Pitching (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _Time
     (setq _Time (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; int8 _LV_Main
     (setq _LV_Main (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _LV_Main 127) (setq _LV_Main (- _LV_Main 256)))
   ;; int8 _LV_zCode
     (setq _LV_zCode (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _LV_zCode 127) (setq _LV_zCode (- _LV_zCode 256)))
   ;; int8 _LV_Sun
     (setq _LV_Sun (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _LV_Sun 127) (setq _LV_Sun (- _LV_Sun 256)))
   ;; int8 _CarStartState
     (setq _CarStartState (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _CarStartState 127) (setq _CarStartState (- _CarStartState 256)))
   ;; float32 _VCU_Service_Voltage
     (setq _VCU_Service_Voltage (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; int32 _VCU_Sts
     (setq _VCU_Sts (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int8 _Fault
     (setq _Fault (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _Fault 127) (setq _Fault (- _Fault 256)))
   ;; int8 _flag_end_wire
     (setq _flag_end_wire (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _flag_end_wire 127) (setq _flag_end_wire (- _flag_end_wire 256)))
   ;; int8 _msg_from_wire_to_plan
     (setq _msg_from_wire_to_plan (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _msg_from_wire_to_plan 127) (setq _msg_from_wire_to_plan (- _msg_from_wire_to_plan 256)))
   ;; float64 _current_lateral_movement_position
     (setq _current_lateral_movement_position (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _current_clamp_width
     (setq _current_clamp_width (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _now_car_speed
     (setq _now_car_speed (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get car_interfaces::CarOriInterface :md5sum-) "d4f6f01de7b91510a86389a083d89da5")
(setf (get car_interfaces::CarOriInterface :datatype-) "car_interfaces/CarOriInterface")
(setf (get car_interfaces::CarOriInterface :definition-)
      "float64 Angle  # 方向盘转角反馈
float64 Acc #加速度
float64 open_gas #油门踏板开度
int8 Drive_Mode #驾驶模式
int8 EPOSts #急停
int8 Gear #档位 
float64 Car_Speed #车速
float64 Motor_Torque #油门反馈
int8 YK_F #复位H
int8 YK_H #遥控F

int8 Fault1 # 故障代码1  
int8 Fault2 # 故障代码2  
int8 Fault3 # # 故障代码3  
int8 Fault4 # # 故障代码4  
float64 Mileage # 累计里程

float32 Brake_Pressure #制动压力采样值
float32 LR_WheelSpeed  
float32 RR_WheelSpeed   
float32 SOC   # SOC
int8 CarSts1   # 车辆状态1
int8 CarSts2   # 车辆状态2

float64 LX_Hight # 高度传感器
float64 Pitching   # 俯仰传感器

float64 Time # 日期
int8 LV_Main   # 主版本
int8 LV_zCode   # 子版本
int8 LV_Sun   # 修订版本

int8 CarStartState # 车辆启动状态
float32 VCU_Service_Voltage   # VCU供电电压
int32 VCU_Sts   # VCU状态
int8 Fault   # 整车故障

int8 flag_end_wire # 线控反馈局部终点到达情况
int8 msg_from_wire_to_plan

float64 current_lateral_movement_position  #横移
float64 current_clamp_width #夹抱宽度
float64 now_car_speed #0-100km/h 单位不一样和Car_Speed
")



(provide :car_interfaces/CarOriInterface "d4f6f01de7b91510a86389a083d89da5")


