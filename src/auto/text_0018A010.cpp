/* 5 functions from 0x0018A010 to 0x0018B010, found by Ghidra. */
#include "common.h"

struct C_0018AFD0 {
    void *vtbl;
    char pad4[0x24];
    void *f28;
    void func_00157660();
    void *func_0018AFD0(unsigned int flags);
};

extern int D_00289ABC;
extern int D_00289830;
extern int D_002897FC;
void func_001E891B(void *p);

/* LightTempData */
struct S_LightTemp_AEF0 {
    void *vtbl;
    char pad4[0x14];
    void *f18;
    void *f1c;
    void *f20;
    void func_00186210(void);
};

/* Light: 12-byte elements, f8 owns a LightTempData */
struct C_0018AEF0 {
    void *vtbl;
    int f4;
    S_LightTemp_AEF0 *f8;
    void *func_0018AEF0(unsigned int flags);
};

void *C_0018AFD0::func_0018AFD0(unsigned int flags)
{
    vtbl = (void *)&D_00289ABC;
    if (f28) func_001E891B(f28);
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}
