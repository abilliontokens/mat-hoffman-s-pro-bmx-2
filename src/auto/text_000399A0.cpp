/* 1 function from 0x000399A0 to 0x0003A990, found by Ghidra. */
#include "common.h"
#include "grid_000392B0.h"
#include "asm_helpers.h"

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

struct Camera_399 {
    int pad0, dirty;
    void func_00194E90(S_000392B0_Vec4 *);
    void func_00194F10(S_000392B0_Vec4 *);
    void func_00194E60(S_000392B0_Vec4);
    void func_00194EE0(S_000392B0_Vec4);
};
struct Holder_399 { char pad0[0x5c]; Camera_399 *camera; };
struct Obj_399 { void func_001824E0(S_000392B0_Vec4 *, float, float, float); };
struct C_000399A0 {
    char pad0[0x44];
    Holder_399 *f44;
    char pad48[0x428-0x48];
    int f428, f42c, f430;
    char pad434[0xc];
    int f440, f444, f448, f44c;
    int f450, f454, f458;
    int f45C, f460;
    float f464, f468;
    char pad46c[0x30];
    S_000392B0_Obj **f49C;
    int f4a0;
    int pad4a4;
    int f4a8;
    float f4ac, f4b0, f4b4;
    int f4b8, f4bc;
    float f4c0;
    char pad4c4[0xa0];
    S_000399A0_Slot *f564;
    char pad568[0x3b0];
    float f918;
    char pad91c[8];
    int f924;
    S_000392B0_Vec4 f928, f938;
    float f948;
    void func_000363E0(S_000392B0_Vec4);
    int func_00038A70(int *, void **);
    int func_000395A0(S_000392B0_Vec4 pos);
    int func_000399A0(int mode);
};

int func_001E8858(float v);
extern float D_002756DC, D_00275F64;
extern float D_002A14D4v;
int type;
void *f4;
S_000392B0_Obj *obj;
void *f0c;
void *f10;
void *fE8;
void *fEC;
int C_000399A0::func_000399A0(int mode) {
    S_000392B0_Vec4 a, b, c, d;
    S_000392B0_Block *blk;
    int ix, iy, iz;
    int dx, dz, m;
    float t;

    a.x = D_002A14D4;
    a.y = D_002A14D8;
    a.z = D_002A14DC;
    a.w = D_002A14E0;
    b.x = 0.0f;
    b.y = 0.0f;
    b.z = 0.0f;
    b.w = 1.0f;

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
                dx = (int)(d.x - c.x);
                dz = (int)(d.z - c.z);
                a.x = c.x + (float)(dx / 2);
                a.y = c.y + (float)((int)(d.y - c.y) / 2);
                a.z = c.z + (float)(dz / 2);
            } else {
                dx = (int)(c.x - d.x);
                dz = (int)(c.z - d.z);
                a.x = d.x + (float)(dx / 2);
                a.y = d.y + (float)((int)(c.y - d.y) / 2);
                a.z = d.z + (float)(dz / 2);
            }
            if (dx > 0) f4a0 = ((dx / 5) % 2) != 0;
            else if (dz > 0) f4a0 = ((dz / 5) % 2) != 0;
        }
    }

    f948 = f468;
    if (a.x != D_002A14D4 || a.y != D_002A14D8 || a.z != D_002A14DC) {
        AsmFloatToIntRound(a.x, &ix);
        AsmFloatToIntRound(a.y, &iy);
        AsmFloatToIntRound(a.z, &iz);
        a.x = (float)ix;
        a.y = (float)iy;
        a.z = (float)iz;
        f4b0 = a.y;
        if (f4ac != D_002A14D4 || f4b0 != D_002A14D8 || f4b4 != D_002A14DC) {
            if (mode == 0) {
                switch (f4a8) {
                case 0: f4ac = a.x - f468; f4b4 = a.z; break;
                case 1: f4ac = a.x + f468; f4b4 = a.z; break;
                case 2: f4ac = a.x; f4b4 = a.z - f468; break;
                case 3: f4ac = a.x; f4b4 = a.z; break;
                case 4: f4ac = a.x - f468; f4b4 = a.z - f468; break;
                case 5: f4ac = a.x - f468; f4b4 = a.z + f468; break;
                case 6: f4ac = a.x + f468; f4b4 = a.z + f468; break;
                case 7: f4ac = a.x + f468; f4b4 = a.z - f468; break;
                }
            } else if (mode == 1) {
                switch (f4a8) {
                case 0: f4ac = a.x + f468; f4b4 = a.z + f468; f4a8 = 7; break;
                case 1: f4ac = a.x; f4b4 = a.z + f468; f4a8 = 3; break;
                case 2: f4ac = a.x - f468; f4b4 = a.z - f468; f4a8 = 4; break;
                case 3: f4ac = a.x - f468; f4b4 = a.z + f468; f4a8 = 5; break;
                case 4: f4ac = a.x + f468; f4b4 = a.z - f468; f4a8 = 6; break;
                case 5: f4ac = a.x - f468; f4b4 = a.z; f4a8 = 0; break;
                case 6: f4ac = a.x + f468; f4b4 = a.z; f4a8 = 1; break;
                case 7: f4ac = a.x; f4b4 = a.z - f468; f4a8 = 2; break;
                }
            } else if (mode == 2) {
                switch (f4a8) {
                case 0: f4ac = a.x - f468; f4b4 = a.z - f468; f4a8 = 4; break;
                case 1: f4ac = a.x - f468; f4b4 = a.z + f468; f4a8 = 5; break;
                case 2: f4ac = a.x; f4b4 = a.z + f468; f4a8 = 3; break;
                case 3: f4ac = a.x + f468; f4b4 = a.z + f468; f4a8 = 7; break;
                case 4: f4ac = a.x + f468; f4b4 = a.z; f4a8 = 1; break;
                case 5: f4ac = a.x + f468; f4b4 = a.z - f468; f4a8 = 6; break;
                case 6: f4ac = a.x; f4b4 = a.z - f468; f4a8 = 2; break;
                case 7: f4ac = a.x - f468; f4b4 = a.z; f4a8 = 0; break;
                }
            }
            if (f564 != 0 && (f564->type == 0 || f564->type >= 3)) {
                blk = 0;
                func_00038A70(&f564->obj->f28, (void **)&blk);
                if (blk == 0) {
                    f4b0 = f4b0 + f464;
                } else {
                    m = AsmMaxI(blk->w, blk->h);
                    t = (float)(m - 1) * D_00275AEC;
                    f948 = f948 + t;
                    f4b0 = f4b0 + f464 + (float)blk->d * D_00275548;
                    switch (f4a8) {
                    case 0: f4ac = f4ac - t; break;
                    case 1: f4ac = f4ac + t; break;
                    case 2: f4b4 = f4b4 - t; break;
                    case 3: f4b4 = f4b4 + t; break;
                    case 4: f4ac = f4ac - t; f4b4 = f4b4 - t; break;
                    case 5: f4ac = f4ac - t; f4b4 = f4b4 + t; break;
                    case 6: f4ac = f4ac + t; f4b4 = f4b4 - t; break;
                    case 7: f4ac = f4ac + t; f4b4 = f4b4 + t; break;
                    }
                }
            }
        }
    }
    return 1;
}
