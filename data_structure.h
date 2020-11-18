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
    int[] to_send;
    byte[] status_bytes;
};