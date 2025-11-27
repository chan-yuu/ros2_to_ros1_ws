float32 conf            # 得分
float32 class_id        # 类别
float32 track_id	    # 跟踪id
float32 x               # 全局 相对加+车辆定位  单位m
float32 y	            # 全局 相对加+车辆定位  单位m
float32 z	            # 全局 相对加+车辆定位  单位m
float32 l_x	            # 相对 单位m
float32 l_y	            # 相对 单位m
float32 l_z	            # 相对 单位m
float32 pitch	        # unit:rad,关于车辆坐标系z轴角度+车辆pitch 
float32 roll	        # unit:rad,关于车辆坐标系y轴角度+车辆roll 
float32 yaw	            # unit:rad,degree+车辆航向 yaw 
float32 degree	        # 角度,车辆坐标系x轴夹角 
float32 distance	    # 单位m
float32 height	        # 单位m
float32 target_width    # 单位m
float32 target_height   # 单位m
float32[] left_boudary_point
float32[] right_boudary_point
float32[] top_boudary_point