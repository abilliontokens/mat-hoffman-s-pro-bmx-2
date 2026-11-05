/* 3 functions from 0x0014CC60 to 0x0014D720, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
struct C_0013C8A0 {
    void func_0013C8A0(int key, void *out, int size, int flag);
};
extern C_0013C8A0 *D_002BEAAC;
struct S_0014D360_Vector { float x,y,z,w; };
struct C_000BA430 {
    void func_000BA430(S_0014D360_Vector *, int, int, int);
};
struct C_001C4F40 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual int v6(S_0014D360_Vector *, S_0014D360_Vector *, int);
    virtual void v7(void *, int, S_0014D360_Vector *, S_0014D360_Vector *);
};
extern C_001C4F40 *D_002F07E8;
extern float D_0027A094, D_002755E8;
struct C_0014CC60;
extern C_0014CC60 *D_002BF250;


void *__cdecl func_001E83E8(void *p, int size);
int __cdecl func_0013F650(void);

/* two lists that grow 20 entries at a time: f48 holds one entry per item,
   f21D8 twenty per item */
struct C_0014CC60 {
    char pad0[0x48];
    int *f48;
    char pad4C[0x524];
    int f570;
    char pad574[0x10];
    int f584;
    char pad588[0x1C4C];
    int f21D4;
    int *f21D8;
    int func_0014D360(int handle, int flag);
    void func_0014D670(int v);
};

void C_0014CC60::func_0014D670(int v)
{
    int i;

    if (f570 == f584) {
        f48 = (int *)func_001E83E8(f48, f584 * 4 + 0x50);
        if (f48 == 0) {
            return;
        }
        f584 += 0x14;
    }
    f48[f570] = v;
    f570++;
    if (f570 - 1 == f21D4) {
        f21D8 = (int *)func_001E83E8(f21D8, f21D4 * 4 + 0x50);
        if (f21D8 != 0) {
            f21D4 += 0x14;
            for (i = 0; i < 0x14; i++) {
                f21D8[f570 + i - 1] = func_0013F650();
            }
        }
    }
}
