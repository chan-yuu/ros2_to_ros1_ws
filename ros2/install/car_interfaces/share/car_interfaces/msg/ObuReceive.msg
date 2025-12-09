#红绿灯倒数秒数上报
uint8	color    #相位颜色 1：绿色 2：红  3：黄色
uint8	time     #当前灯色剩余时间
float32	dis_to_stopline   #与红绿灯路口中心距离

#背景车协作式请求下发
uint8	cutin_flag	#1:减速

# 终点+途径点1+途径点2的经纬度
float64	end_point_lat
float64	end_point_lon
float64	transit_point_1_lat
float64	transit_point_1_lon
float64	transit_point_2_lat
float64	transit_point_2_lon
