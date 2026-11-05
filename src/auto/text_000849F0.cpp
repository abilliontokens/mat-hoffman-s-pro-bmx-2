/* 5 functions from 0x000849F0 to 0x00085630, found by Ghidra. */
#include "common.h"

struct C_001D6410 { void func_001D6410(); };
void func_001E891B(void *);
extern int D_00279644;

struct C_00085520 {
    int vtbl;
    char pad4[0x20];
    C_001D6410 *a24[8];
    C_001D6410 *a44[8];
    C_001D6410 *a64[8];
    C_001D6410 *a84[4];
    C_001D6410 *f94;
    C_001D6410 *f98;
    C_001D6410 *f9C;
    void func_00157660();
    void func_00085520();
};

void C_00085520::func_00085520()
{
    int i;
    C_001D6410 *p;
    vtbl = (int)&D_00279644;
    for (i = 0; i < 8; i++) {
        p = a24[i];
        if (p) { p->func_001D6410(); func_001E891B(p); }
        p = a44[i];
        if (p) { p->func_001D6410(); func_001E891B(p); }
        p = a64[i];
        if (p) { p->func_001D6410(); func_001E891B(p); }
    }
    for (i = 0; i < 4; i++) {
        p = a84[i];
        if (p) { p->func_001D6410(); func_001E891B(p); }
    }
    p = f94;
    if (p) { p->func_001D6410(); func_001E891B(p); f94 = 0; }
    p = f9C;
    if (p) { p->func_001D6410(); func_001E891B(p); f9C = 0; }
    p = f98;
    if (p) { p->func_001D6410(); func_001E891B(p); f98 = 0; }
    func_00157660();
}
