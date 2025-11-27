std_msgs/Header header       # ros时间戳
int64  gps_time                      #时间戳
float64  PosLon        # 经度
float64  PosLat         # 纬度
float64  PosAlt         # 高度
float64  VelE         # 东向速度
float64  VelN        # 北向速度
float64  VelU        # 天向速度
float64  Vel          # 车辆速度

float64  AngleHeading         # 偏航角（-180-180）
float64  AnglePitch        # 俯仰角（-90-90）
float64  AngleRoll         # 横滚角（-180-180）

int32  system_state                #惯导模式（0-初始化；1-卫导模式；2-组合导航模式；3-纯惯导模式）
int32  GpsNumSatsUsed         #主天线使用卫星数
int32  satellite_status              #卫星状态（0-不定位不定向；1-单点定位定向；   2-伪距差分定位定向；3-组合推算；4-RTK稳定解定位定向；5-RTK浮点解定位定向；6-单点定位不定向； 7-伪距差分定位不定向；8-RTK稳定解定位不定向；9-RTK浮点解定位不定向）
float64  GpsAge                     #差分延时
bool  state                              #设备状态（0-状态异常；1-状态正常）
float64 posX                           #定位点UTM坐标x
float64 posY                           #定位点UTM坐标y
float64 posZ                           #定位点UTM坐标z
float32  process_time    # 进程处理时间

