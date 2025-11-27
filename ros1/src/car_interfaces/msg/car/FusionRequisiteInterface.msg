float64  timestamp  #时间戳
uint8  id   # 车辆ID
float32  centeroffset     # 车道中心线偏移距离，默认0
uint8  signnumber  #交通标识数量
float32[]  signdata  #交通标志数据
float32[]  lightdata  # 红绿灯数据
float32[]  obstacledata  #障碍物数据
float64  longitude        # 经度
float64  latitude         # 纬度
float64  height         # 高度
float64 posX                           #定位点UTM坐标x
float64 posY                           #定位点UTM坐标y
float64 posZ                           #定位点UTM坐标z
float32  yaw         # 偏航角（-180,180）
float32  pitch        # 俯仰角（-90-90）
float32  roll         # 横滚角（-180-180）
float32  eastvelocity         # 东向速度
float32  northvelocity        # 北向速度
float32  skyvelocity         # 天向速度
float32  carspeed    # 车辆速度，单位为m/s

