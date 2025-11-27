#ifndef TF_SHARED_MEMORY_H
#define TF_SHARED_MEMORY_H

#include <cstdint>
#include <cstring>

// TF变换数据结构
struct TFTransform {
    char parent_frame[64];      // 父坐标系名称
    char child_frame[64];       // 子坐标系名称
    double translation[3];      // 平移 x, y, z
    double rotation[4];         // 旋转四元数 x, y, z, w
    uint64_t timestamp_sec;     // 时间戳秒部分
    uint32_t timestamp_nanosec; // 时间戳纳秒部分
    bool is_static;             // 是否为静态变换
};

// TF共享内存头部
struct TFSharedMemoryHeader {
    uint32_t transform_count;   // 当前变换数量
    uint32_t max_transforms;    // 最大变换数量
    uint64_t last_update_ns;    // 最后更新时间戳
    bool data_ready;            // 数据就绪标志
    char reserved[32];          // 保留字段
};

// TF共享内存完整结构
struct TFSharedData {
    TFSharedMemoryHeader header;
    TFTransform transforms[100]; // 最多支持100个变换
};

// 共享内存配置常量
const char* const TF_SHM_KEY_FILE = "/tmp";
const int TF_SHM_KEY_ID = 'T';          // 'T' for TF
const int TF_SEM_KEY_ID = 't';          // 't' for TF semaphore
const size_t MAX_TF_TRANSFORMS = 100;

#endif // TF_SHARED_MEMORY_H