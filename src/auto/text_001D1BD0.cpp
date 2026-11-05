/* 3 functions from 0x001D1BD0 to 0x001D2A40, found by Ghidra. */
#include "common.h"

int __stdcall func_001DDC28(int a);
int __stdcall func_001DDDD6(int a, int b);
int __stdcall func_001DD13C(int a);

struct C_001D27F0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_001D27F0 {
    char pad0[0x18];
    int unk18;
    int unk1C;
    int unk20;
    int unk24;
    int unk28;
    int unk2C;
    char pad30[0x20];
    C_001D27F0_Obj *unk50;
    void func_001D27F0(void);
};
