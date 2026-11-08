/* 1 function from 0x00109F80 to 0x0010A3B0, found by Ghidra. */
#include "common.h"

struct Obj208 { void func_0001EED0(); };
struct Obj5 { void func_00026270(int); };
struct Cls109F80 {
    void func_00109F80();
    void func_001056E0();
    void func_00105A40();
    void func_00027C30();
    void func_00027D40();
    void func_00028070();
};
extern int D_002A3A3C, D_002A3A40, D_002A3A44, D_002A3A48;
struct V4_109F80 { int a, b, c, d; };
#define I(o) (*(int*)((char*)this + (o)))
#define F(o) (*(float*)((char*)this + (o)))
#define P(o) (*(int**)((char*)this + (o)))

void Cls109F80::func_00109F80()
{
    int minus = -1;
    int one = 1;
    I(0x824) = 0; I(0x828) = 0; I(0x82c) = 0; I(0x830) = 0x3f800000;
    I(0xa34) = 0; I(0x45c) = 0; I(0x11a4) = 0; I(0x1214) = 0; I(0x1fc0) = 0; I(0xa50) = 0;
    I(0x1050) = 0; I(0x108c) = 0; I(0x1088) = 0; I(0x1e54) = one; I(0x1e60) = 0; I(0x1e5c) = 0;
    I(0x15f8) = 0; I(0x1650) = 0x3f800000; I(0x163c) = 0; I(0x1644) = 0; I(0x1648) = 0; I(0x1640) = 0;
    I(0x1fa4) = 0; I(0x1fa0) = 0; I(0x1e40) = 0; I(0x1e44) = 0; I(0x1e48) = 0;
    I(0x1e4c) = 0x3d23d70a; I(0x1e50) = 0x40000000;
    I(0x1614) = 0; I(0x1618) = 0; I(0x161c) = 0; I(0x1620) = 0;
    I(0x1f78) = 0; I(0x1f7c) = 0; I(0x1f80) = 0; I(0x1138) = 0; I(0x15f0) = 0; I(0x15e0) = one;
    I(0x1604) = 0; I(0x15fc) = 0; I(0x113c) = 0; I(0x1140) = 0; I(0x1f84) = 0; I(0x1e64) = 0;
    I(0x1f6c) = 0; I(0x1f70) = 0; I(0x1f74) = 0; I(0xa30) = one;
    I(0x1054) = 0; I(0x1060) = 0; I(0x1064) = 0; I(0x1068) = 0; I(0x112c) = 0; I(0x894) = 0;
    I(0x1144) = 0; I(0x1148) = 0; I(0x114c) = 0; I(0x1150) = 0; I(0x1154) = 0;
    I(0x1204) = 0; I(0x1208) = 0; I(0x1210) = 0; I(0x120c) = 0; I(0x1130) = 0; I(0x11dc) = 0;
    I(0x1174) = 0; I(0x978) = 0; I(0x97c) = 0; I(0x1184) = 0; I(0x1188) = 0; I(0x20ac) = 0;
    for (int i = 0; i < 32; i++) { I(0x1e68 + i * 4) = 0; I(0x1ee8 + i * 4) = 0; }
    I(0x998) = 0; I(0x994) = 0; I(0x62c) = 0; I(0x980) = one; I(0x984) = one; I(0x988) = one; I(0x98c) = 0; I(0x990) = one;
    I(0x1624) = 0; I(0x1628) = 0; I(0x162c) = 0; I(0x1630) = 0; I(0x1118) = 0;
    I(0x11d8) = 0; I(0x11d0) = 0; I(0x11dc) = 0; I(0x11e0) = 0; I(0x11e4) = 0; I(0x11e8) = 0;
    I(0x704) = 0; I(0x70c) = 0; I(0x454) = 0; I(0x458) = 0;
    I(0x9d8) = minus; I(0xa44) = minus; I(0x1134) = minus; I(0x1158) = minus; I(0x115c) = minus;
    I(0x44c) = 0; I(0x450) = 0; I(0x448) = 0; I(0x11d4) = 0; I(0x69c) = 0; I(0x468) = 0; I(0x470) = 0;
    I(0x9d0) = 0; I(0x9d4) = 0; I(0x460) = 0; I(0x1124) = 0; I(0x1120) = 0; I(0x644) = 0; I(0x684) = 0; I(0x490) = 0;
    if (I(0x208)) ((Obj208*)I(0x208))->func_0001EED0();
    I(0x1128) = 0; I(0x2020) = one;
    *(V4_109F80*)((char*)this + 0x2028) = *(V4_109F80*)&D_002A3A3C;
    *(V4_109F80*)((char*)this + 0x2038) = *(V4_109F80*)&D_002A3A3C;
    I(0x2048) = 0; I(0x20b0) = 0x3e800000; I(0x20b4) = 0; I(0x20b8) = 0; I(0x20bc) = 0; I(0x20c0) = 0x3f800000;
    I(0x7cc) = 0; I(0x78c) = 0;
    int* q = P(0x1084);
    if (q) {
        q[0] = 0;
        for (int i = 0; i < 5; i++) { q[1 + i] = minus; q[6 + i] = 0; }
        for (int k = 1; k <= 5; k++) { if (q[k] != minus) q[0]++; }
    }
    P(0x1084)[0xb] = minus;
    func_001056E0();
    func_00105A40();
    if (I(0x5ec)) ((Obj5*)I(0x5ec))->func_00026270(0);
    if (I(0x5f0)) ((Obj5*)I(0x5f0))->func_00026270(0);
    if (I(0x5f4)) ((Obj5*)I(0x5f4))->func_00026270(0);
    func_00027C30();
    func_00027D40();
    func_00028070();
}
