float64  timestamp     # 数据帧时间戳
#std_msgs/Header header   后续加入 坐标系信息
float32[] bbox   	# 4 个一组    
float32[] conf		# 1 个一组
float32[] class_id	# 1
float32[] mask		# 32

float32[] tray_degree
float32[] tray_distance
float32[] tray_height

float32[] tray_x
float32[] tray_y
float32[] tray_z
float32[] tray_yaw