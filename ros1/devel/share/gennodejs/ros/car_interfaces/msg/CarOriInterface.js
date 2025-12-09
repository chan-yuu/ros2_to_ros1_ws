// Auto-generated. Do not edit!

// (in-package car_interfaces.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class CarOriInterface {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.Angle = null;
      this.Acc = null;
      this.open_gas = null;
      this.Drive_Mode = null;
      this.EPOSts = null;
      this.Gear = null;
      this.Car_Speed = null;
      this.Motor_Torque = null;
      this.YK_F = null;
      this.YK_H = null;
      this.Fault1 = null;
      this.Fault2 = null;
      this.Fault3 = null;
      this.Fault4 = null;
      this.Mileage = null;
      this.Brake_Pressure = null;
      this.LR_WheelSpeed = null;
      this.RR_WheelSpeed = null;
      this.SOC = null;
      this.CarSts1 = null;
      this.CarSts2 = null;
      this.LX_Hight = null;
      this.Pitching = null;
      this.Time = null;
      this.LV_Main = null;
      this.LV_zCode = null;
      this.LV_Sun = null;
      this.CarStartState = null;
      this.VCU_Service_Voltage = null;
      this.VCU_Sts = null;
      this.Fault = null;
      this.flag_end_wire = null;
      this.msg_from_wire_to_plan = null;
      this.current_lateral_movement_position = null;
      this.current_clamp_width = null;
      this.now_car_speed = null;
    }
    else {
      if (initObj.hasOwnProperty('Angle')) {
        this.Angle = initObj.Angle
      }
      else {
        this.Angle = 0.0;
      }
      if (initObj.hasOwnProperty('Acc')) {
        this.Acc = initObj.Acc
      }
      else {
        this.Acc = 0.0;
      }
      if (initObj.hasOwnProperty('open_gas')) {
        this.open_gas = initObj.open_gas
      }
      else {
        this.open_gas = 0.0;
      }
      if (initObj.hasOwnProperty('Drive_Mode')) {
        this.Drive_Mode = initObj.Drive_Mode
      }
      else {
        this.Drive_Mode = 0;
      }
      if (initObj.hasOwnProperty('EPOSts')) {
        this.EPOSts = initObj.EPOSts
      }
      else {
        this.EPOSts = 0;
      }
      if (initObj.hasOwnProperty('Gear')) {
        this.Gear = initObj.Gear
      }
      else {
        this.Gear = 0;
      }
      if (initObj.hasOwnProperty('Car_Speed')) {
        this.Car_Speed = initObj.Car_Speed
      }
      else {
        this.Car_Speed = 0.0;
      }
      if (initObj.hasOwnProperty('Motor_Torque')) {
        this.Motor_Torque = initObj.Motor_Torque
      }
      else {
        this.Motor_Torque = 0.0;
      }
      if (initObj.hasOwnProperty('YK_F')) {
        this.YK_F = initObj.YK_F
      }
      else {
        this.YK_F = 0;
      }
      if (initObj.hasOwnProperty('YK_H')) {
        this.YK_H = initObj.YK_H
      }
      else {
        this.YK_H = 0;
      }
      if (initObj.hasOwnProperty('Fault1')) {
        this.Fault1 = initObj.Fault1
      }
      else {
        this.Fault1 = 0;
      }
      if (initObj.hasOwnProperty('Fault2')) {
        this.Fault2 = initObj.Fault2
      }
      else {
        this.Fault2 = 0;
      }
      if (initObj.hasOwnProperty('Fault3')) {
        this.Fault3 = initObj.Fault3
      }
      else {
        this.Fault3 = 0;
      }
      if (initObj.hasOwnProperty('Fault4')) {
        this.Fault4 = initObj.Fault4
      }
      else {
        this.Fault4 = 0;
      }
      if (initObj.hasOwnProperty('Mileage')) {
        this.Mileage = initObj.Mileage
      }
      else {
        this.Mileage = 0.0;
      }
      if (initObj.hasOwnProperty('Brake_Pressure')) {
        this.Brake_Pressure = initObj.Brake_Pressure
      }
      else {
        this.Brake_Pressure = 0.0;
      }
      if (initObj.hasOwnProperty('LR_WheelSpeed')) {
        this.LR_WheelSpeed = initObj.LR_WheelSpeed
      }
      else {
        this.LR_WheelSpeed = 0.0;
      }
      if (initObj.hasOwnProperty('RR_WheelSpeed')) {
        this.RR_WheelSpeed = initObj.RR_WheelSpeed
      }
      else {
        this.RR_WheelSpeed = 0.0;
      }
      if (initObj.hasOwnProperty('SOC')) {
        this.SOC = initObj.SOC
      }
      else {
        this.SOC = 0.0;
      }
      if (initObj.hasOwnProperty('CarSts1')) {
        this.CarSts1 = initObj.CarSts1
      }
      else {
        this.CarSts1 = 0;
      }
      if (initObj.hasOwnProperty('CarSts2')) {
        this.CarSts2 = initObj.CarSts2
      }
      else {
        this.CarSts2 = 0;
      }
      if (initObj.hasOwnProperty('LX_Hight')) {
        this.LX_Hight = initObj.LX_Hight
      }
      else {
        this.LX_Hight = 0.0;
      }
      if (initObj.hasOwnProperty('Pitching')) {
        this.Pitching = initObj.Pitching
      }
      else {
        this.Pitching = 0.0;
      }
      if (initObj.hasOwnProperty('Time')) {
        this.Time = initObj.Time
      }
      else {
        this.Time = 0.0;
      }
      if (initObj.hasOwnProperty('LV_Main')) {
        this.LV_Main = initObj.LV_Main
      }
      else {
        this.LV_Main = 0;
      }
      if (initObj.hasOwnProperty('LV_zCode')) {
        this.LV_zCode = initObj.LV_zCode
      }
      else {
        this.LV_zCode = 0;
      }
      if (initObj.hasOwnProperty('LV_Sun')) {
        this.LV_Sun = initObj.LV_Sun
      }
      else {
        this.LV_Sun = 0;
      }
      if (initObj.hasOwnProperty('CarStartState')) {
        this.CarStartState = initObj.CarStartState
      }
      else {
        this.CarStartState = 0;
      }
      if (initObj.hasOwnProperty('VCU_Service_Voltage')) {
        this.VCU_Service_Voltage = initObj.VCU_Service_Voltage
      }
      else {
        this.VCU_Service_Voltage = 0.0;
      }
      if (initObj.hasOwnProperty('VCU_Sts')) {
        this.VCU_Sts = initObj.VCU_Sts
      }
      else {
        this.VCU_Sts = 0;
      }
      if (initObj.hasOwnProperty('Fault')) {
        this.Fault = initObj.Fault
      }
      else {
        this.Fault = 0;
      }
      if (initObj.hasOwnProperty('flag_end_wire')) {
        this.flag_end_wire = initObj.flag_end_wire
      }
      else {
        this.flag_end_wire = 0;
      }
      if (initObj.hasOwnProperty('msg_from_wire_to_plan')) {
        this.msg_from_wire_to_plan = initObj.msg_from_wire_to_plan
      }
      else {
        this.msg_from_wire_to_plan = 0;
      }
      if (initObj.hasOwnProperty('current_lateral_movement_position')) {
        this.current_lateral_movement_position = initObj.current_lateral_movement_position
      }
      else {
        this.current_lateral_movement_position = 0.0;
      }
      if (initObj.hasOwnProperty('current_clamp_width')) {
        this.current_clamp_width = initObj.current_clamp_width
      }
      else {
        this.current_clamp_width = 0.0;
      }
      if (initObj.hasOwnProperty('now_car_speed')) {
        this.now_car_speed = initObj.now_car_speed
      }
      else {
        this.now_car_speed = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type CarOriInterface
    // Serialize message field [Angle]
    bufferOffset = _serializer.float64(obj.Angle, buffer, bufferOffset);
    // Serialize message field [Acc]
    bufferOffset = _serializer.float64(obj.Acc, buffer, bufferOffset);
    // Serialize message field [open_gas]
    bufferOffset = _serializer.float64(obj.open_gas, buffer, bufferOffset);
    // Serialize message field [Drive_Mode]
    bufferOffset = _serializer.int8(obj.Drive_Mode, buffer, bufferOffset);
    // Serialize message field [EPOSts]
    bufferOffset = _serializer.int8(obj.EPOSts, buffer, bufferOffset);
    // Serialize message field [Gear]
    bufferOffset = _serializer.int8(obj.Gear, buffer, bufferOffset);
    // Serialize message field [Car_Speed]
    bufferOffset = _serializer.float64(obj.Car_Speed, buffer, bufferOffset);
    // Serialize message field [Motor_Torque]
    bufferOffset = _serializer.float64(obj.Motor_Torque, buffer, bufferOffset);
    // Serialize message field [YK_F]
    bufferOffset = _serializer.int8(obj.YK_F, buffer, bufferOffset);
    // Serialize message field [YK_H]
    bufferOffset = _serializer.int8(obj.YK_H, buffer, bufferOffset);
    // Serialize message field [Fault1]
    bufferOffset = _serializer.int8(obj.Fault1, buffer, bufferOffset);
    // Serialize message field [Fault2]
    bufferOffset = _serializer.int8(obj.Fault2, buffer, bufferOffset);
    // Serialize message field [Fault3]
    bufferOffset = _serializer.int8(obj.Fault3, buffer, bufferOffset);
    // Serialize message field [Fault4]
    bufferOffset = _serializer.int8(obj.Fault4, buffer, bufferOffset);
    // Serialize message field [Mileage]
    bufferOffset = _serializer.float64(obj.Mileage, buffer, bufferOffset);
    // Serialize message field [Brake_Pressure]
    bufferOffset = _serializer.float32(obj.Brake_Pressure, buffer, bufferOffset);
    // Serialize message field [LR_WheelSpeed]
    bufferOffset = _serializer.float32(obj.LR_WheelSpeed, buffer, bufferOffset);
    // Serialize message field [RR_WheelSpeed]
    bufferOffset = _serializer.float32(obj.RR_WheelSpeed, buffer, bufferOffset);
    // Serialize message field [SOC]
    bufferOffset = _serializer.float32(obj.SOC, buffer, bufferOffset);
    // Serialize message field [CarSts1]
    bufferOffset = _serializer.int8(obj.CarSts1, buffer, bufferOffset);
    // Serialize message field [CarSts2]
    bufferOffset = _serializer.int8(obj.CarSts2, buffer, bufferOffset);
    // Serialize message field [LX_Hight]
    bufferOffset = _serializer.float64(obj.LX_Hight, buffer, bufferOffset);
    // Serialize message field [Pitching]
    bufferOffset = _serializer.float64(obj.Pitching, buffer, bufferOffset);
    // Serialize message field [Time]
    bufferOffset = _serializer.float64(obj.Time, buffer, bufferOffset);
    // Serialize message field [LV_Main]
    bufferOffset = _serializer.int8(obj.LV_Main, buffer, bufferOffset);
    // Serialize message field [LV_zCode]
    bufferOffset = _serializer.int8(obj.LV_zCode, buffer, bufferOffset);
    // Serialize message field [LV_Sun]
    bufferOffset = _serializer.int8(obj.LV_Sun, buffer, bufferOffset);
    // Serialize message field [CarStartState]
    bufferOffset = _serializer.int8(obj.CarStartState, buffer, bufferOffset);
    // Serialize message field [VCU_Service_Voltage]
    bufferOffset = _serializer.float32(obj.VCU_Service_Voltage, buffer, bufferOffset);
    // Serialize message field [VCU_Sts]
    bufferOffset = _serializer.int32(obj.VCU_Sts, buffer, bufferOffset);
    // Serialize message field [Fault]
    bufferOffset = _serializer.int8(obj.Fault, buffer, bufferOffset);
    // Serialize message field [flag_end_wire]
    bufferOffset = _serializer.int8(obj.flag_end_wire, buffer, bufferOffset);
    // Serialize message field [msg_from_wire_to_plan]
    bufferOffset = _serializer.int8(obj.msg_from_wire_to_plan, buffer, bufferOffset);
    // Serialize message field [current_lateral_movement_position]
    bufferOffset = _serializer.float64(obj.current_lateral_movement_position, buffer, bufferOffset);
    // Serialize message field [current_clamp_width]
    bufferOffset = _serializer.float64(obj.current_clamp_width, buffer, bufferOffset);
    // Serialize message field [now_car_speed]
    bufferOffset = _serializer.float64(obj.now_car_speed, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type CarOriInterface
    let len;
    let data = new CarOriInterface(null);
    // Deserialize message field [Angle]
    data.Angle = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [Acc]
    data.Acc = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [open_gas]
    data.open_gas = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [Drive_Mode]
    data.Drive_Mode = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [EPOSts]
    data.EPOSts = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [Gear]
    data.Gear = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [Car_Speed]
    data.Car_Speed = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [Motor_Torque]
    data.Motor_Torque = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [YK_F]
    data.YK_F = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [YK_H]
    data.YK_H = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [Fault1]
    data.Fault1 = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [Fault2]
    data.Fault2 = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [Fault3]
    data.Fault3 = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [Fault4]
    data.Fault4 = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [Mileage]
    data.Mileage = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [Brake_Pressure]
    data.Brake_Pressure = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [LR_WheelSpeed]
    data.LR_WheelSpeed = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [RR_WheelSpeed]
    data.RR_WheelSpeed = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [SOC]
    data.SOC = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [CarSts1]
    data.CarSts1 = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [CarSts2]
    data.CarSts2 = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [LX_Hight]
    data.LX_Hight = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [Pitching]
    data.Pitching = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [Time]
    data.Time = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [LV_Main]
    data.LV_Main = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [LV_zCode]
    data.LV_zCode = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [LV_Sun]
    data.LV_Sun = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [CarStartState]
    data.CarStartState = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [VCU_Service_Voltage]
    data.VCU_Service_Voltage = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [VCU_Sts]
    data.VCU_Sts = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [Fault]
    data.Fault = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [flag_end_wire]
    data.flag_end_wire = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [msg_from_wire_to_plan]
    data.msg_from_wire_to_plan = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [current_lateral_movement_position]
    data.current_lateral_movement_position = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [current_clamp_width]
    data.current_clamp_width = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [now_car_speed]
    data.now_car_speed = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 138;
  }

  static datatype() {
    // Returns string type for a message object
    return 'car_interfaces/CarOriInterface';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd4f6f01de7b91510a86389a083d89da5';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new CarOriInterface(null);
    if (msg.Angle !== undefined) {
      resolved.Angle = msg.Angle;
    }
    else {
      resolved.Angle = 0.0
    }

    if (msg.Acc !== undefined) {
      resolved.Acc = msg.Acc;
    }
    else {
      resolved.Acc = 0.0
    }

    if (msg.open_gas !== undefined) {
      resolved.open_gas = msg.open_gas;
    }
    else {
      resolved.open_gas = 0.0
    }

    if (msg.Drive_Mode !== undefined) {
      resolved.Drive_Mode = msg.Drive_Mode;
    }
    else {
      resolved.Drive_Mode = 0
    }

    if (msg.EPOSts !== undefined) {
      resolved.EPOSts = msg.EPOSts;
    }
    else {
      resolved.EPOSts = 0
    }

    if (msg.Gear !== undefined) {
      resolved.Gear = msg.Gear;
    }
    else {
      resolved.Gear = 0
    }

    if (msg.Car_Speed !== undefined) {
      resolved.Car_Speed = msg.Car_Speed;
    }
    else {
      resolved.Car_Speed = 0.0
    }

    if (msg.Motor_Torque !== undefined) {
      resolved.Motor_Torque = msg.Motor_Torque;
    }
    else {
      resolved.Motor_Torque = 0.0
    }

    if (msg.YK_F !== undefined) {
      resolved.YK_F = msg.YK_F;
    }
    else {
      resolved.YK_F = 0
    }

    if (msg.YK_H !== undefined) {
      resolved.YK_H = msg.YK_H;
    }
    else {
      resolved.YK_H = 0
    }

    if (msg.Fault1 !== undefined) {
      resolved.Fault1 = msg.Fault1;
    }
    else {
      resolved.Fault1 = 0
    }

    if (msg.Fault2 !== undefined) {
      resolved.Fault2 = msg.Fault2;
    }
    else {
      resolved.Fault2 = 0
    }

    if (msg.Fault3 !== undefined) {
      resolved.Fault3 = msg.Fault3;
    }
    else {
      resolved.Fault3 = 0
    }

    if (msg.Fault4 !== undefined) {
      resolved.Fault4 = msg.Fault4;
    }
    else {
      resolved.Fault4 = 0
    }

    if (msg.Mileage !== undefined) {
      resolved.Mileage = msg.Mileage;
    }
    else {
      resolved.Mileage = 0.0
    }

    if (msg.Brake_Pressure !== undefined) {
      resolved.Brake_Pressure = msg.Brake_Pressure;
    }
    else {
      resolved.Brake_Pressure = 0.0
    }

    if (msg.LR_WheelSpeed !== undefined) {
      resolved.LR_WheelSpeed = msg.LR_WheelSpeed;
    }
    else {
      resolved.LR_WheelSpeed = 0.0
    }

    if (msg.RR_WheelSpeed !== undefined) {
      resolved.RR_WheelSpeed = msg.RR_WheelSpeed;
    }
    else {
      resolved.RR_WheelSpeed = 0.0
    }

    if (msg.SOC !== undefined) {
      resolved.SOC = msg.SOC;
    }
    else {
      resolved.SOC = 0.0
    }

    if (msg.CarSts1 !== undefined) {
      resolved.CarSts1 = msg.CarSts1;
    }
    else {
      resolved.CarSts1 = 0
    }

    if (msg.CarSts2 !== undefined) {
      resolved.CarSts2 = msg.CarSts2;
    }
    else {
      resolved.CarSts2 = 0
    }

    if (msg.LX_Hight !== undefined) {
      resolved.LX_Hight = msg.LX_Hight;
    }
    else {
      resolved.LX_Hight = 0.0
    }

    if (msg.Pitching !== undefined) {
      resolved.Pitching = msg.Pitching;
    }
    else {
      resolved.Pitching = 0.0
    }

    if (msg.Time !== undefined) {
      resolved.Time = msg.Time;
    }
    else {
      resolved.Time = 0.0
    }

    if (msg.LV_Main !== undefined) {
      resolved.LV_Main = msg.LV_Main;
    }
    else {
      resolved.LV_Main = 0
    }

    if (msg.LV_zCode !== undefined) {
      resolved.LV_zCode = msg.LV_zCode;
    }
    else {
      resolved.LV_zCode = 0
    }

    if (msg.LV_Sun !== undefined) {
      resolved.LV_Sun = msg.LV_Sun;
    }
    else {
      resolved.LV_Sun = 0
    }

    if (msg.CarStartState !== undefined) {
      resolved.CarStartState = msg.CarStartState;
    }
    else {
      resolved.CarStartState = 0
    }

    if (msg.VCU_Service_Voltage !== undefined) {
      resolved.VCU_Service_Voltage = msg.VCU_Service_Voltage;
    }
    else {
      resolved.VCU_Service_Voltage = 0.0
    }

    if (msg.VCU_Sts !== undefined) {
      resolved.VCU_Sts = msg.VCU_Sts;
    }
    else {
      resolved.VCU_Sts = 0
    }

    if (msg.Fault !== undefined) {
      resolved.Fault = msg.Fault;
    }
    else {
      resolved.Fault = 0
    }

    if (msg.flag_end_wire !== undefined) {
      resolved.flag_end_wire = msg.flag_end_wire;
    }
    else {
      resolved.flag_end_wire = 0
    }

    if (msg.msg_from_wire_to_plan !== undefined) {
      resolved.msg_from_wire_to_plan = msg.msg_from_wire_to_plan;
    }
    else {
      resolved.msg_from_wire_to_plan = 0
    }

    if (msg.current_lateral_movement_position !== undefined) {
      resolved.current_lateral_movement_position = msg.current_lateral_movement_position;
    }
    else {
      resolved.current_lateral_movement_position = 0.0
    }

    if (msg.current_clamp_width !== undefined) {
      resolved.current_clamp_width = msg.current_clamp_width;
    }
    else {
      resolved.current_clamp_width = 0.0
    }

    if (msg.now_car_speed !== undefined) {
      resolved.now_car_speed = msg.now_car_speed;
    }
    else {
      resolved.now_car_speed = 0.0
    }

    return resolved;
    }
};

module.exports = CarOriInterface;
