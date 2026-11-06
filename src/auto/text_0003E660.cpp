/* 1 function from 0x0003E660 to 0x0003EB20, found by Ghidra. */
#include "common.h"
struct S_0003E660_Vec4 { float x, y, z, w; };
struct S_0003E660_Block { char pad[0x358]; int w; int h; int d; };
struct S_0003E660_Obj {
    char pad[0x28];
    int f28;
    void func_00197E70(S_0003E660_Vec4 *a);
    void func_00197B40(S_0003E660_Vec4 *b, S_0003E660_Vec4 *c);
};
struct S_0003E660_Slot { int type; int pad4; S_0003E660_Obj *obj; };
struct C_0003E660 {
    char pad0[0x440];
    float f440;
    char pad444[0x45C - 0x444];
    int f45C;
    int f460;
    char pad464[0x49C - 0x464];
    int *f49C;
    char pad4A0[0x564 - 0x4A0];
    S_0003E660_Slot *f564;
    int func_00038A70(void *param_1, void **param_2);
    int func_00038B10(void *obj, S_0003E660_Vec4 va, S_0003E660_Vec4 vb, int *ox, int *oy, int *oz, int flag);
    int func_0003E410();
    int func_0003E660();
};
extern float D_00276E9C;
extern float D_00276E98;
extern float D_00275548;

int C_0003E660::func_0003E660()
{
    S_0003E660_Vec4 a;
    S_0003E660_Vec4 b;
    S_0003E660_Vec4 c;
    int px, py, pz;
    S_0003E660_Block *blk;
    int w, h, d;
    int i, j, k;
    int idx;

    a.z = 0; a.y = 0; a.x = 0; a.w = 1.0f;
    b.z = 0; b.y = 0; b.x = 0; b.w = 1.0f;
    c.z = 0; c.y = 0; c.x = 0; c.w = 1.0f;
    blk = 0;
    if (f564 == 0)
        return 0;
    if (func_0003E410())
        return 0;
    if (f564->type == 0 || f564->type >= 3) {
        f564->obj->func_00197E70(&a);
        f564->obj->func_00197B40(&b, &c);
        if (func_00038B10(&f564->obj->f28, a, b, &px, &py, &pz, 1) == 0)
            return 0;
        func_00038A70(&f564->obj->f28, (void **)&blk);
        w = blk->w;
        h = blk->h;
        d = blk->d;
        if (d > f45C)
            d = f45C;
        for (i = 0; i < h; i++) {
            for (j = 0; j < w; j++) {
                for (k = 0; k < d; k++) {
                    if (b.x > D_00276E9C || b.x < D_00276E98) {
                        idx = ((i + px) * f45C + k + py) * f460 + j + pz;
                    } else {
                        idx = ((j + px) * f45C + k + py) * f460 + i + pz;
                    }
                    if ((k + py) * D_00275548 != f440)
                        f49C[idx] = 0;
                    else
                        f49C[idx] = 0;
                }
            }
        }
    }
    return 1;
}
