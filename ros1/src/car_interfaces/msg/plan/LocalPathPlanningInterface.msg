# float64  timestamp  #时间戳
# float32[]  startpoint   #起点位置，先经后纬
# float32[]   endpoint    #终点位置，先经后纬
# float32[]   longitude        # 途径点经度
# float32[]   latitude         # 途径点纬度
# float32[]   speed         # 途径点速度
# float32[]   angle         # 途径点速度角度（航向角角度）
# float32[]   kapa         # 途径点曲率
# float32  process_time    # 进程处理时间



float64  timestamp  #时间戳

float32[]  startpoint   #局部路径起点位置
float32[]   endpoint    #局部路径终点位置
string[]   routedata   # 局部路径集合（没有修正路径）
string[]   routedata_fix   # 修正后的局部路径集合（没有修正路径）

float32  process_time    # 进程处理时间
int32 len_path # 全局路径的长度
#int8 Global_Path_End_Flag #终点置1，其他0
int8 plan_over #0-等待规划完成 1-本次规划结束