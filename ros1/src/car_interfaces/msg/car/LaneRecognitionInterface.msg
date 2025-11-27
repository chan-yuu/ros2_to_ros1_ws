float64  timestamp  #时间戳
uint8  id  # 摄像头ID
float32  centeroffset     # 车辆相对于车道中心线偏移的距离，默认0
float32  a0     # 左侧车道中心线的表达式：y = a0+a1*x+ a2*x^2+a3*x^3；
float32  a1     # 左侧车道中心线的表达式：y = a0+a1*x+ a2*x^2+a3*x^3；
float32  a2     # 左侧车道中心线的表达式：y = a0+a1*x+ a2*x^2+a3*x^3；
float32  a3     # 左侧车道中心线的表达式：y = a0+a1*x+ a2*x^2+a3*x^3；sensor_msgs/Image  resultimage     # 融合后的车道线识别图像
float32  process_time    # 进程处理时间


