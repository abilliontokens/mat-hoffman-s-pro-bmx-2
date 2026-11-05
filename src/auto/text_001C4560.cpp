/* 14 functions from 0x001C4560 to 0x001C4FB0, found by Ghidra. */
#include "common.h"
struct C_001C4F70 {
    void func_0017C300(void);
    void func_0017C360(int a1, int a2, int a3, int a4, int a5);
    C_001C4F70 *func_001C4F70(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
};

struct C_001C4FA0 {
    char pad0[0x8B4];
    int unk8B4;
    void func_001C4FA0(int a0);
};


C_001C4F70 *C_001C4F70::func_001C4F70(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    func_0017C300();
    func_0017C360(a1, a3, a4, a6, a7);
    return this;
}

void C_001C4FA0::func_001C4FA0(int a0) {
    unk8B4 = a0;
}
