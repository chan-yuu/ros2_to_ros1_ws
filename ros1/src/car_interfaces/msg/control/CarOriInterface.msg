float64 Angle  # 方向盘转角反馈
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