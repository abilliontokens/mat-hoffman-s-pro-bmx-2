/* 5 functions from 0x001C4FB0 to 0x001C5DE0, found by Ghidra. */
#include "common.h"

extern int D_0028E664;
extern int D_002F07E8;
void func_001E891B(void *p);
int __stdcall func_001927C0(int a0, int a1);

/* VisibilityQuadTree */
struct C_001C5AA0 {
    virtual ~C_001C5AA0();
    char pad4[0x88C];
    int unk890;
    char pad894[4];
    int unk898;
    void func_001C5AA0();
};

struct C_001C5AC0 {
    void *vtbl;
    void func_0017C520();
    C_001C5AC0 *func_001C5AC0(unsigned int flags);
};

void C_001C5AA0::func_001C5AA0()
{
    int a = unk890;
    int b = unk898;
    func_001927C0(a, b);
}

C_001C5AC0 *C_001C5AC0::func_001C5AC0(unsigned int flags)
{
    vtbl = &D_0028E664;
    D_002F07E8 = 0;
    func_0017C520();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

