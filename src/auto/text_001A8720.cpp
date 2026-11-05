/* 14 functions from 0x001A8720 to 0x001A96D0, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <xmmintrin.h>

extern float D_00275544;
extern int D_0028BF14;

void func_001E891B(void *p);
void *func_001E8AA5(int size);

struct C_00157660 {
    void func_00157660(void);
};

struct C_001A8B80 {
    void *vtbl;
    char pad4[0x50];
    void *f54;
    char pad58[0x2C];
    void *f84;
    char pad88[4];
    int f8C;
    void *f90;
    char pad94[0x48];
    f32 fDC[10];
    void *func_001A8B80(int flags);
    void func_001A9070(int count);
    void func_001A9220(int idx, f32 v);
    void func_001D3F50(void);
};

void *C_001A8B80::func_001A8B80(int flags)
{
    void *p = f54;

    vtbl = (void *)&D_0028BF14;
    if (p != 0) {
        func_001E891B(p);
    }
    ((C_00157660 *)this)->func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001A8B80::func_001A9070(int count)
{
    f8C = count;
    f84 = func_001E8AA5(count * 0x58);
    f90 = func_001E8AA5(f8C * 0x58);
    func_001D3F50();
}

void C_001A8B80::func_001A9220(int idx, f32 v)
{
    if (idx >= 0 && idx < 10) {
        fDC[idx] = v;
    }
}
