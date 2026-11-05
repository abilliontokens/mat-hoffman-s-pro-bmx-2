/* 4 functions from 0x001A96D0 to 0x001AA270, found by Ghidra. */
#include "common.h"
struct V4 { float x, y, z, w; };
struct Other { char pad[0x204]; unsigned flags; char pad2[8]; float a; float b; };
struct Body {
    char p0[0x24]; Other* o; char p1[0x28]; int f4c; int f50; char p2[0x2c]; unsigned f7c; char p3[0x14];
    float f94; float f98; char p4[8]; float a0[2]; float a8[2]; char p5[0x0c]; int fb8;
    void func_001A9D20(Other* other, unsigned mask, V4 p4, V4 p5, float f);
};
void __stdcall func_001A96D0(Other* o, int a, V4 b, V4 c);
