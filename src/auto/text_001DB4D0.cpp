/* 3 functions from 0x001DB4D0 to 0x001DC010, found by Ghidra. */
#include "common.h"
void func_001E891B(void *p);
void __stdcall func_00201100(void *p);
extern int D_0028F8F4;
struct C_00012140 { void func_00012140(void); };
struct C_0014A540 { void func_0014A540(void); };
struct I_Release { virtual void v0(); virtual void v1(); virtual void Release(); };
struct XboxWaterDisplacement {
    void *vtbl;
    char pad04[0x24];
    I_Release *f28;
    char pad2C[0x1C];
    void *f48;
    char pad4C[0x94];
    C_0014A540 *fE0;
    C_0014A540 *fE4;
    C_0014A540 *fE8;
    C_0014A540 *fEC;
    C_00012140 *fF0;
    C_00012140 *fF4;
    C_00012140 *fF8;
    C_00012140 *fFC;
    char pad100[0x108];
    I_Release *f208;
    void *f20C;
    char pad210[0x8];
    void *f218[3];
    void *f224[3];
    void *f230[0x96];
    void *f488[6];
    I_Release *f4A0;
    void func_001DBA40(void);
    void func_001CA1C0(void);
};

void XboxWaterDisplacement::func_001DBA40(void)
{
    int i;
    vtbl = &D_0028F8F4;
    C_00012140 *p;
    if ((p = fF0) != 0) { p->func_00012140(); func_001E891B(p); }
    if ((p = fF4) != 0) { p->func_00012140(); func_001E891B(p); }
    if ((p = fF8) != 0) { p->func_00012140(); func_001E891B(p); }
    if ((p = fFC) != 0) { p->func_00012140(); func_001E891B(p); }
    if (f4A0) f4A0->Release();
    if (f48) func_001E891B(f48);
    if (f28) f28->Release();
    C_0014A540 *q;
    if ((q = fE8) != 0) { q->func_0014A540(); func_001E891B(q); }
    if ((q = fE0) != 0) { q->func_0014A540(); func_001E891B(q); }
    if ((q = fE4) != 0) { q->func_0014A540(); func_001E891B(q); }
    if ((q = fEC) != 0) { q->func_0014A540(); func_001E891B(q); }
    if (f208) f208->Release();
    if (f20C) {
        func_001E891B(f20C);
        f20C = 0;
    }
    for (i = 0; i < 3; i++) {
        if (f218[i]) func_00201100(f218[i]);
        if (f224[i]) func_00201100(f224[i]);
    }
    for (i = 0; i < 0x96; i++) {
        if (f230[i]) func_00201100(f230[i]);
    }
    for (i = 0; i < 6; i++) {
        if (f488[i]) func_00201100(f488[i]);
    }
    func_001CA1C0();
}
