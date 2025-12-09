from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, LogInfo
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration, PythonExpression
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # 声明启动参数
        DeclareLaunchArgument(
            'enable_benchmark',
            default_value='false',
            description='Enable benchmark testing'
        ),
        DeclareLaunchArgument(
            'test_duration',
            default_value='60',
            description='Test duration in seconds'
        ),
        DeclareLaunchArgument(
            'log_file_path',
            default_value='/tmp/performance_test_log.csv',
            description='Path to performance log file'
        ),
        DeclareLaunchArgument(
            'report_interval',
            default_value='5.0',
            description='Performance report interval in seconds'
        ),
        
        # 启动信息
        LogInfo(msg='Starting Performance Evaluation System...'),
        
        # 性能监控节点
        Node(
            package='data_bridge_ros2',
            executable='performance_monitor',
            name='performance_monitor',
            output='screen',
            parameters=[
                {'monitor_pointcloud': True},
                {'monitor_imu': True},
                {'report_interval_sec': LaunchConfiguration('report_interval')},
                {'log_to_file': True},
                {'log_file_path': LaunchConfiguration('log_file_path')}
            ],
            remappings=[
                ('/performance_metrics', '/system/performance_metrics')
            ]
        ),
        
        # 基准测试节点（条件启动）
        Node(
            package='data_bridge_ros2',
            executable='benchmark_tool',
            name='benchmark_tool',
            output='screen',
            condition=IfCondition(
                PythonExpression(["'", LaunchConfiguration('enable_benchmark'), "' == 'true'"])
            ),
            parameters=[
                {'test_type': 'mixed'},
                {'test_name': 'performance_evaluation'},
                {'pointcloud_frequency': 10.0},
                {'imu_frequency': 100.0},
                {'test_duration_sec': LaunchConfiguration('test_duration')},
                {'enable_stress_test': False},
                {'stress_multiplier': 1.0},
                {'save_results': True},
                {'results_file': '/tmp/benchmark_results.json'}
            ]
        ),
        
        LogInfo(msg='Performance Evaluation System started successfully!')
    ])