# 全局路径规划话题
# 话题名称：local_path_planning_data  
# 话题接口：car_interfaces/msg/LocalPathPlanningInterface.msg

float64     timestamp       # 时间戳
float64[]   startpoint      # 起点位置，先经后纬
float64[]   endpoint        # 终点位置，先经后纬
float64[]   longitude       # 途径点经度
float64[]   latitude        # 途径点纬度
float32[]   speed           # 途径点速度
float32[]   angle           # 途径点速度角度（航向角角度）
float32     control_mode    # 控制模式：-1（默认）：巡航，0：终点模式，1：停障模式，2：减速，3：绕障，4：跟车
float32     path_end_dis    # 距离下发的终点距离，单位为m
float32     process_time    # 进程处理时间

# 其中routedata格式float32[]为一维数组·
# 储存按照[longitude,latitude,speed,angle,longitude,latitude,speed, angle, ……]存储
# 4个长度数据为一组
# float longitude   # 途径点经度
# float latitude    # 途径点纬度
# float speed       # 途径点速度
# float angle       # 途径点速度角度（航向角角度）
