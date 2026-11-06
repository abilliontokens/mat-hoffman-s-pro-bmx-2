/* 5 functions from 0x001C4FB0 to 0x001C5DE0, found by Ghidra. */
#include "common.h"

extern int D_0028E6B0;
void *func_001E8A44(unsigned int size);
struct VisibilityQuadTreeNode {
    void *vtbl;
    char pad4[0x10];
    void func_0017CE10();
};
extern int D_0028E664;
extern int D_002F07E8;
void func_001E891B(void *p);
int __stdcall func_001927C0(int a0, int a1);

struct S_001C5C50_View {
    char pad0[0x1e8];
    unsigned int width;
    unsigned int height;
};
extern float D_00275460, D_002755E4, D_002755E8;

/* VisibilityQuadTree */
struct C_001C5AA0 {
    char pad0[0x890];
    int unk890;
    char pad894[4];
    int unk898;
    void func_001C5AA0();
    void func_001927C0(int a0, int a1);
};

struct C_001C5AC0 {
    void *vtbl;
    void func_0017C520();
    C_001C5AC0 *func_001C5AC0(unsigned int flags);
};

void C_001C5AA0::func_001C5AA0()
{
    func_001927C0(unk890, unk898);
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

