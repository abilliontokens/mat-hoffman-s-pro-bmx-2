/* 4 functions from 0x00154C10 to 0x00155890, found by Ghidra. */
#include "common.h"

extern int D_00286DD4;

struct C_001C7310 {
    void func_001C7310(void *param);
};

struct C_00155450 {
    void *vtbl;
    char pad4[0x380];
    int f384, f388, f38C, f390, f394, f398, f39C, f3A0;
    int f3A4, f3A8, f3AC, f3B0, f3B4, f3B8;
    char pad3BC[0x28];
    int f3E4;
    C_00155450 *func_00155450(void *param);
};

C_00155450 *C_00155450::func_00155450(void *param)
{
    ((C_001C7310 *)this)->func_001C7310(param);
    f384 = 0;
    f388 = 0;
    f38C = 0;
    f390 = 0;
    f394 = 0;
    f398 = 0;
    f39C = 0;
    f3A0 = 0;
    f3A8 = 0;
    f3A4 = 0;
    f3AC = 0;
    f3B0 = 0;
    f3B4 = 0;
    f3B8 = 0;
    f3E4 = 0;
    vtbl = (void *)&D_00286DD4;
    return this;
}
