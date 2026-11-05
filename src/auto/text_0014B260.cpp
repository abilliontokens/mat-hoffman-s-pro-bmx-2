/* 4 functions from 0x0014B260 to 0x0014C1C0, found by Ghidra. */
#include "common.h"

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    Vec4() {}
    Vec4(f32 x_, f32 y_, f32 z_, f32 w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
};

struct DynamicRayCollisionObject {
    char pad_0[0xa6];
    unsigned char unkA6;
    unsigned char unkA7;
    int unkA8;
    char padAC[0x10];
    f32 *unkBC;
    Vec4 *unkC0;
    Vec4 *unkC4;
    void func_0014BA40(int param_1);
    void func_0014B940();
    void func_00157A00(int param_1);
};

void DynamicRayCollisionObject::func_0014BA40(int param_1)
{
    if (unkA6 != 0) {
        func_0014B940();
    }
    unkA7 = unkA7 & 0xef;
    func_00157A00(param_1);
}
