#pragma once

template<class T>
struct Vector3 {
    T v1;
    T v2;
    T v3;
};



// 一个单独操作包
struct operation {
    int32_t id;
    int32_t status;
    Vector3<float> pos;
    Vector3<float> face;

};


struct status {
    int32_t id;
    int32_t status;
    int32_t role;
    Vector3<float> pos;
    Vector3<float> face;
};


struct stat_change {
    int32_t[] to_send;
    int32_t broadcast;
    char* status_bytes;
    int32_t msg_len;
};