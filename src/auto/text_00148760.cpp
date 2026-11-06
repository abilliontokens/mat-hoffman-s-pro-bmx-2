/* 1 function from 0x00148760 to 0x00148768, found by Ghidra. */
#include "common.h"

struct C_00148850 {
    void func_00148850(void *param);
};

struct C_00148760 {
    void func_00148760(void *param);
};

struct PixelAnimationData {
    virtual void pa0();
    virtual void pa1();
    virtual void pa2();
    int f4;
    void *f8;
};

struct DXVSDataItem {
    virtual void func_00148850(void *param);
};

struct DXPixelAnimationData : PixelAnimationData, DXVSDataItem {
    void func_00148850(void *param);
};

void C_00148760::func_00148760(void *param)
{
    ((C_00148850 *)((char *)this - 0xC))->func_00148850(param);
}
