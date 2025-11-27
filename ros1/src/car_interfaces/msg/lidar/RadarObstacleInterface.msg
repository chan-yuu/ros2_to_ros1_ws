float64  timestamp  #时间戳
uint8  id  # 毫米波雷达ID
uint16  number  #障碍物数量
float32[]  obstacledata  #障碍物数据
float32  process_time    # 进程处理时间
#其中obstacledata格式float32[]为一维数组，储存按照[x  ,y  ,z  ,v  , x ,y ,z ,v ,latv ,……]存储49个长度数据为一组
# float  length       # 障碍物长度m，精度为0.01
# float  width       # 障碍物宽度m，精度为0.01
# float  height       # 障碍物高度m，精度为0.01
# float  x     # 障碍物的x坐标[米]，精度为0.01
# float  y   # 障碍物的y坐标[米]，精度为0.01
# float  z    # 障碍物的z坐标[米]，精度为0.01
# float  v=0    # 障碍物径向速度m/s，精度为0.01
# float  latv=0  # 障碍物的横向速度m/s，精度为0.01