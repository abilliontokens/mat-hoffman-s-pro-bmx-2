/* 1 function from 0x000399A0 to 0x0003A990, found by Ghidra. */
#include "common.h"
#include "grid_000392B0.h"

extern float D_002A14D4, D_002A14D8, D_002A14DC, D_002A14E0;
extern float D_00275AEC, D_00275548;
extern int D_00276CA4;

struct S_000399A0_Slot {
    int type;                 /* 0x00 */
    void *f4;                 /* 0x04 */
    S_000392B0_Obj *obj;      /* 0x08 */
    void *f0c;                /* 0x0c */
    void *f10;                /* 0x10 */
};

struct S_000399A0_Obj2 {
    char pad0[0xe8];
    void *fE8;                /* 0xe8 */
    void *fEC;                /* 0xec */
};

struct C_000399A0 {
    char pad0[0x450];
    int f450;
    char pad454[8];
    int f45C, f460, f464, f468;
    char pad46c[0x30];
    S_000392B0_Obj **f49C;
    int f4a0;
    int pad4a4;
    int f4a8;
    float f4ac, f4b0, f4b4;
    char pad4b8[0xac];
    S_000399A0_Slot *f564;
    char pad568[0x3e0];
    float f948;
    int func_00038A70(int *, void **);
    int func_000395A0(S_000392B0_Vec4 pos);
    int func_000399A0(int mode);
};

int C_000399A0::func_000399A0(int mode) {
    S_000392B0_Vec4 a;
    S_000392B0_Vec4 b;
    S_000392B0_Vec4 c, d;
    int dx, dz;

    a.x = D_002A14D4;
    a.y = D_002A14D8;
    a.z = D_002A14DC;
    a.w = D_002A14E0;

    if (f564 != 0) {
        if (f564->type == 0 || f564->type >= 3) {
            f564->obj->func_00197E70(&a);
        } else if (f564->type == 1) {
            a = *(S_000392B0_Vec4 *)((char *)f564->f10 + 0x24);
        } else if (f564->type == 2) {
            S_000399A0_Obj2 *o = (S_000399A0_Obj2 *)f564->f4;
            S_000392B0_Vec4 *pc = (S_000392B0_Vec4 *)((char *)o->fE8 + 0x24);
            S_000392B0_Vec4 *pd = (S_000392B0_Vec4 *)((char *)o->fEC + 0x24);
            c = *pc;
            d = *pd;
            if (c.x > d.x || c.z > d.z) {
                dx = (int)(c.x - d.x);
                dz = (int)(c.z - d.z);
                a.x = d.x + (float)(dx / 2);
                a.y = d.y + (float)((int)(c.y - d.y) / 2);
                a.z = d.z + (float)(dz / 2);
            } else {
                dx = (int)(d.x - c.x);
                dz = (int)(d.z - c.z);
                a.x = c.x + (float)(dx / 2);
                a.y = c.y + (float)((int)(d.y - c.y) / 2);
                a.z = c.z + (float)(dz / 2);
            }
            if (dx > 0) f4a0 = ((dx / 5) % 2) != 0;
            else if (dz > 0) f4a0 = ((dz / 5) % 2) != 0;
        }
    }

    f948 = f468;
    if (a.x != D_002A14D4 || a.y != D_002A14D8 || a.z != D_002A14DC) {
        a.x = (float)(int)a.x;
        a.y = (float)(int)a.y;
        a.z = (float)(int)a.z;
        f4b0 = a.y;
        if (f4ac != D_002A14D4 || f4b0 != D_002A14D8 || f4b4 != D_002A14DC) {
            return 1;
        }
    }
    return 1;
}
