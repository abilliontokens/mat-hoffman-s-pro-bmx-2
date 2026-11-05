/* 13 functions from 0x001324B0 to 0x00132DB8, found by Ghidra. */
#include "common.h"

struct CinematographerCam {
    void *vtbl;
    char pad_4[0x80 - 0x4];
    void *unk80;
    void *unk84;
    void *unk88;
    void *unk8C;
    void *unk90;
    void *unk94;
    void func_001324B0();
    void func_0012B540();
};

struct C_00132540 {
    void func_00132540();
};

struct Class_002845AC {
    void func_00132DB0();
    void func_00132DE0();
};

extern int D_00284514;
void func_001E891B(void *ptr);

void Class_002845AC::func_00132DB0()
{
    ((Class_002845AC *)((char *)this - *(int *)((char *)this - 4)))->func_00132DE0();
}
