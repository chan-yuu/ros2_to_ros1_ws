#!/usr/bin/env python3

import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, LogInfo
from launch.substitutions import LaunchConfiguration, PythonExpression
from launch_ros.actions import Node
from launch.conditions import IfCondition

def generate_launch_description():
    # 声明启动参数
    test_type_arg = DeclareLaunchArgument(
        'test_type',
        default_value='single',
        description='Test type: single, all, custom'
    )
    
    test_name_arg = DeclareLaunchArgument(
        'test_name',
        default_value='custom_test',
        description='Name of the test'
    )
    
    pointcloud_freq_arg = DeclareLaunchArgument(
        'pointcloud_frequency',
        default_value='10.0',
        description='PointCloud publishing frequency (Hz)'
    )
    
    imu_freq_arg = DeclareLaunchArgument(
        'imu_frequency',
        default_value='100.0',
        description='IMU publishing frequency (Hz)'
    )
    
    pointcloud_size_arg = DeclareLaunchArgument(
        'pointcloud_size',
        default_value='100000',
        description='Number of points in each pointcloud'
    )
    
    test_duration_arg = DeclareLaunchArgument(
        'test_duration_sec',
        default_value='60',
        description='Test duration in seconds'
    )
    
    enable_pointcloud_arg = DeclareLaunchArgument(
        'enable_pointcloud',
        default_value='true',
        description='Enable pointcloud publishing'
    )
    
    enable_imu_arg = DeclareLaunchArgument(
        'enable_imu',
        default_value='true',
        description='Enable IMU publishing'
    )
    
    save_results_arg = DeclareLaunchArgument(
        'save_results',
        default_value='true',
        description='Save benchmark results to file'
    )
    
    results_file_arg = DeclareLaunchArgument(
        'results_file',
        default_value='/tmp/benchmark_results.csv',
        description='Path to save benchmark results'
    )
    
    # 获取启动配置
    test_type = LaunchConfiguration('test_type')
    test_name = LaunchConfiguration('test_name')
    pointcloud_frequency = LaunchConfiguration('pointcloud_frequency')
    imu_frequency = LaunchConfiguration('imu_frequency')
    pointcloud_size = LaunchConfiguration('pointcloud_size')
    test_duration_sec = LaunchConfiguration('test_duration_sec')
    enable_pointcloud = LaunchConfiguration('enable_pointcloud')
    enable_imu = LaunchConfiguration('enable_imu')
    save_results = LaunchConfiguration('save_results')
    results_file = LaunchConfiguration('results_file')
    
    # 单个测试节点
    single_test_node = Node(
        package='data_bridge_ros2',
        executable='benchmark_tool',
        name='benchmark_tool',
        output='screen',
        parameters=[
            {'test_name': test_name},
            {'pointcloud_frequency': pointcloud_frequency},
            {'imu_frequency': imu_frequency},
            {'pointcloud_size': pointcloud_size},
            {'test_duration_sec': test_duration_sec},
            {'enable_pointcloud': enable_pointcloud},
            {'enable_imu': enable_imu},
            {'save_results': save_results},
            {'results_file': results_file}
        ],
        condition=IfCondition(
            PythonExpression(["'", test_type, "' == 'single' or '", test_type, "' == 'custom'"])
        )
    )
    
    # 全部测试节点
    all_tests_node = Node(
        package='data_bridge_ros2',
        executable='benchmark_tool',
        name='benchmark_tool_all',
        output='screen',
        arguments=['--run-all-tests'],
        condition=IfCondition(
            PythonExpression(["'", test_type, "' == 'all'"])
        )
    )
    
    # 性能监控节点（可选）
    performance_monitor_node = Node(
        package='data_bridge_ros2',
        executable='performance_monitor',
        name='performance_monitor',
        output='screen',
        parameters=[
            {'monitor_pointcloud': True},
            {'monitor_imu': True},
            {'report_interval': 5.0}
        ]
    )
    
    # 日志信息
    log_test_info = LogInfo(
        msg=[
            'Starting benchmark test with parameters:\n',
            '  Test Type: ', test_type, '\n',
            '  Test Name: ', test_name, '\n',
            '  PointCloud Frequency: ', pointcloud_frequency, ' Hz\n',
            '  IMU Frequency: ', imu_frequency, ' Hz\n',
            '  PointCloud Size: ', pointcloud_size, ' points\n',
            '  Test Duration: ', test_duration_sec, ' seconds\n',
            '  Enable PointCloud: ', enable_pointcloud, '\n',
            '  Enable IMU: ', enable_imu, '\n',
            '  Save Results: ', save_results, '\n',
            '  Results File: ', results_file
        ]
    )
    
    return LaunchDescription([
        # 声明参数
        test_type_arg,
        test_name_arg,
        pointcloud_freq_arg,
        imu_freq_arg,
        pointcloud_size_arg,
        test_duration_arg,
        enable_pointcloud_arg,
        enable_imu_arg,
        save_results_arg,
        results_file_arg,
        
        # 日志信息
        log_test_info,
        
        # 节点
        single_test_node,
        all_tests_node,
        performance_monitor_node
    ])