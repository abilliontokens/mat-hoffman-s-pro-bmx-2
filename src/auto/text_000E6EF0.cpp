/* 2 functions from 0x000E6EF0 to 0x000E7AD0, found by Ghidra. */
#include "common.h"
struct LookupObj_000F1980 {
    int *func_0018C160(int a);
};
struct GObjRoot_000F1980 {
    char pad0[0x2ec];
    LookupObj_000F1980 *p2EC;
};
extern GObjRoot_000F1980 *D_002A8490;
extern float D_00275AEC;
extern int D_00281A34, D_002786A0, D_00278678, D_0027958C;
struct ClampObj_000F1980 {
    char pad0[0x10];
    float f10;
    float f14;
};
struct MidObj_000F1980 {
    ClampObj_000F1980 *func_0018C070();
};
struct SubElem_000F1980 {
    ClampObj_000F1980 *func_001D5AA0();
};
struct BmxUIPageRiderOps {
    char pad0[0x514];
    SubElem_000F1980 *a514[5], *a528[5], *a53c[5], *a550[5];
    char pad564[0x154];
    SubElem_000F1980 *a6b8[6], *a6d0[4], *a6e0[4];
    void func_000E7820();
    void func_001578D0();
};
