/* 2 functions from 0x0003D910 to 0x0003E660, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
struct V4 { float x, y, z, w; void identity(); };
struct Blk { char pad[0x358]; int w; int h; int d; char pad2[4]; int flag; };
struct Q { char pad[0x28]; void func_00197E70(V4*); void func_00197B40(V4*, V4*); };
struct Sub { int a; int b; Q* q; };
struct Obj {
    char pad0[0x438];
    int f438;
    char pad1[0x45c - 0x43c];
    int f45c;
    int f460;
    char pad2[0x49c - 0x464];
    int* grid;
    char pad3[0x564 - 0x4a0];
    Sub* f564;
    int func_00038B10(Q*, V4, V4, int*, int*, int*, int);
    void func_00038A70(Q*, Blk**);
    int _func_0003E410();
};
extern float D_00276E9C;
extern float D_00276E98;

struct __declspec(align(16)) AV4 : V4 {};
struct NodeD {
    virtual void nv0();
    virtual void nv1();
    virtual void nv2();
    void func_00199600(V4 v);
    void func_00198F50(V4 *a, V4 *b, int c, int d, int e);
    void func_0019AC50();
    void func_001824E0(V4 *a, float b, float c, float d);
    void func_00133EF0(V4 *a);
    void func_00198E60();
    void func_00157810();
    void func_001332A0();
};
struct Obj390 { void func_00198390(); };
struct MidD {
    char pad0[4];
    Obj390 *f4;
    char pad8[8];
    int f10;
    void func_00164820(int a);
    void func_001670C0(int a, int b, int c);
    void func_00132D20();
    void func_00194EE0(V4 v);
};
struct Mid2D { char pad0[4]; int f4; };
struct MgrD {
    char pad0[0x1a4];
    MidD *f1A4;
    char pad1A8[4];
    Mid2D *f1AC;
};
struct F4ObjD {
    char pad0[0xe8];
    NodeD *fE8;
    NodeD *fEC;
    void func_000A3B60(int a);
    void func_001332A0();
    void func_00157810();
};
struct Sub2D {
    int a;
    F4ObjD *f4;
    NodeD *f8;
    NodeD *fC;
    NodeD *f10;
    int f14;
    int *f18;
};
struct Obj44D { char pad0[0x5c]; MidD *f5C; };
struct RetD {
    char pad0[8];
    NodeD *f8;
    char padC[4];
    void *f10;
};
struct A530D { void func_0015A250(int a); void func_0015A180(int a); };
struct Obj64D { char pad0[0x530]; A530D *f530; void func_000A3B60(F4ObjD *a); };
struct ArrObjD { void func_000377F0(int a); };
struct GObjD {
    virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3();
    virtual void g4(); virtual void g5(); virtual void g6();
    virtual void vf7(int a);
    virtual void vf8();
};
extern GObjD *D_002EFDB8;
extern float D_002A14D4;
extern float D_002A14D8;
extern float D_002A14DC;
extern float D_002A14E0;
inline void V4::identity() { *(int *)&x = *(int *)&D_002A14D4; *(int *)&y = *(int *)&D_002A14D8; *(int *)&z = *(int *)&D_002A14DC; *(int *)&w = *(int *)&D_002A14E0; }
void func_001E891B(void *p);
int func_000265C0(V4 *out, V4 *a, V4 *b, V4 *c, int d, int e);

struct C_0003D910 {
    char pad0[0x44];
    Obj44D *f44;
    char pad48[0x1c];
    Obj64D *f64;
    char pad68[0x268];
    int f2D0;
    char pad2D4[4];
    int f2D8;
    int f2DC;
    int f2E0;
    char pad2E4[0x1a8];
    int f48C;
    char pad490[0x10];
    int f4A0;
    char pad4A4[0x48];
    V4 v4EC;
    V4 v4FC;
    V4 v50C;
    V4 v51C;
    char pad52C[0x38];
    Sub2D *f564;
    NodeD *f568;
    NodeD *f56C;
    NodeD *f570;
    char pad574[0x24];
    MgrD *f598;
    MgrD *f59C;
    int f5A0;
    int *f5A4;
    char pad5A8[0xc];
    int f5B4;
    int *f5B8;
    void func_0003D910(int a0);
    RetD *func_00038A10(NodeD *a, int *b);
    void func_000399A0(int a);
    void func_000392B0();
    __forceinline int Get_0003D910(int i) { if (f5B4 <= 0 || f5B8 == 0 || i >= f5B4) return 0; return f5B8[i]; }
    __forceinline int Find_0003D910(NodeD *p) { int result=-1; for(int i=f5B4-1;i>=0;--i) { if (p==(NodeD *)Get_0003D910(i)) { result=i; break; } } return result; }
};

#pragma optimize("y", on)
void C_0003D910::func_0003D910(int a0)
{
    __declspec(align(16)) float L[20];
    D_002EFDB8->vf7(1);
    D_002EFDB8->vf8();
    if (f564 == 0) {
        return;
    }
    if (f48C != -1 && a0 == 0) {
        if (f2D8 != 0) {
            f2D8 = 0;
            f59C->f1A4->func_00164820(f59C->f1AC->f4);
            f59C->f1A4->func_001670C0(0, 0, 0);
            f59C->f1A4->f10 = 1;
            f59C->f1A4->func_00132D20();
            f59C->f1A4->f4->func_00198390();
        }
        int st = f564->a;
        if (st == 0) {
            f564->f8->func_00199600(v4EC);
            f564->f8->func_00198F50(&v4FC, &v50C, 0, 1, 0);
            f564->f8->func_0019AC50();
            if (f568 != 0) {
                func_000265C0((V4 *)(L + 4), &v4EC, &v4FC, &v50C, 0, 1);
                f568->func_00133EF0((V4 *)(L + 4));
            }
            f564->f8->func_001824E0((V4 *)L, 1.0f, 1.0f, 1.0f);
            goto apply;
        } else if (st == 2) {
            RetD *r = func_00038A10(f564->f4->fEC, 0);
            if (r != 0) {
                r->f8->func_001824E0((V4 *)L, 1.0f, 1.0f, 1.0f);
            }
            RetD *r2 = func_00038A10(f564->f4->fE8, 0);
            if (r2 != 0) {
                r2->f8->func_001824E0((V4 *)L, 1.0f, 1.0f, 1.0f);
            }
            f564 = (Sub2D *)r2;
            V4 v = *(V4 *)((char *)f564->f10 + 0x24);
            f44->f5C->func_00194EE0(v);
            *(int *)&f44->f5C->f4 = 1;
            f4A0 = 0;
            func_000399A0(0);
            goto restored;
        } else if (st >= 3) {
            f564->f8->func_00199600(v4EC);
            f564->f8->func_00198F50(&v4FC, &v50C, 0, 1, 0);
            f564->f8->func_0019AC50();
            if (f568 != 0) {
                func_000265C0((V4 *)(L + 4), &v4EC, &v4FC, &v50C, 0, 1);
                f568->func_00133EF0((V4 *)(L + 4));
            }
            f564->f8->func_001824E0((V4 *)L, 1.0f, 1.0f, 1.0f);
            if (f564->a == 3 || f564->a == 5) {
                f564->fC->func_00199600(v4EC);
                f564->fC->func_00198F50(&v4FC, &v50C, 0, 1, 0);
                f564->fC->func_0019AC50();
                f56C->func_00133EF0((V4 *)(L + 4));
                f564->fC->func_001824E0((V4 *)L, 1.0f, 1.0f, 1.0f);
            }
            if (f564->a == 4 || f564->a == 5) {
                f570->func_00133EF0((V4 *)(L + 4));

            }
        apply:
            func_000392B0();
        }
        restored:
        int i;
        if (f564->f14 > 0) {
            for (i = 0; i < f564->f14; i++) {
                f64->f530->func_0015A250(f564->f18[i]);
            }
        }
        f48C = -1;
        f570 = 0;
        f56C = 0;
        f568 = 0;
        f564 = 0;
        return;
    }
    if ((f2D0 != 0 && f2DC == 0) || (f2D8 != 0 && f2E0 == 0)) {
        if (f2D0 != 0) {
            f2D0 = 0;
            f598->f1A4->f4->func_00198390();
        }
        if (f2D8 != 0) {
            f2D8 = 0;
            f59C->f1A4->func_00164820(f59C->f1AC->f4);
            f59C->f1A4->func_001670C0(0, 0, 0);
            f59C->f1A4->f10 = 1;
            f59C->f1A4->func_00132D20();
            f59C->f1A4->f4->func_00198390();
        }
        func_001E891B(f564);
        f564 = 0;
        goto clear;
    } else {
        v51C = *(V4 *)&D_002A14D4;
        if (f564->a == 0) {
            int i;
            if (f564->f14 > 0) {
                for (i = 0; i < f564->f14; i++) {
                    f64->f530->func_0015A180(f564->f18[i]);
                }
                func_001E891B(f564->f18);
            }
            f564->f8->func_00198E60();
            f564->f8->func_00157810();
            f564->f8->nv2();
            f564->f8 = 0;
        } else if (f564->a == 1) {
            if (f48C != -1) {
                ((ArrObjD *)((char *)this + 0x5a0))->func_000377F0(f48C);
                f48C = -1;
            }
            f564->f8->func_00198E60();
            f564->f8->func_00157810();
            f564->f8->nv2();
            (*(NodeD **)((char *)f564->f10 + 0x2e4))->func_001332A0();
            f564->f10->func_00157810();
            f564->f10->nv2();
            f564->f10 = 0;
        } else if (f564->a == 2) {
            int key[2];
            if (f48C != -1) {
                ((ArrObjD *)((char *)this + 0x5a0))->func_000377F0(f48C);
                f48C = -1;
            }
            RetD *r = func_00038A10(f564->f4->fE8, key);
            r->f8->func_00198E60();
            r->f8->func_00157810();
            r->f8->nv2();
            func_001E891B(r);
            ((ArrObjD *)((char *)this + 0x5a0))->func_000377F0(key[0]);
            RetD *r2 = func_00038A10(f564->f4->fEC, key);
            r2->f8->func_00198E60();
            r2->f8->func_00157810();
            r2->f8->nv2();
            func_001E891B(r2);
            ((ArrObjD *)((char *)this + 0x5a0))->func_000377F0(key[0]);
            f64->func_000A3B60(f564->f4);
            (*(NodeD **)((char *)f564->f4->fE8 + 0x2e4))->func_001332A0();
            (*(NodeD **)((char *)f564->f4->fEC + 0x2e4))->func_001332A0();
            f564->f4->fE8->func_00157810();
            f564->f4->fEC->func_00157810();
            f564->f4->fE8->nv2();
            f564->f4->fEC->nv2();
            f564->f4->func_00157810();
            ((NodeD *)f564->f4)->nv2();
            f564->f4 = 0;
        } else if (f564->a >= 3) {
            int i;
            if (f564->f14 > 0) {
                for (i = 0; i < f564->f14; i++) {
                    f64->f530->func_0015A180(f564->f18[i]);
                }
                func_001E891B(f564->f18);
            }
            f564->f8->func_00198E60();
            f564->f8->func_00157810();
            f564->f8->nv2();
            if (f564->a == 3 || f564->a == 5) {
                f564->fC->func_00198E60();
                f564->fC->func_00157810();
                f564->fC->nv2();
                f564->fC = 0;
            }
        }
        func_001E891B(f564);
        f564 = 0;
    }
    if (f48C != -1) {
        int idx568 = Find_0003D910(f568);
        int idx56C=-1;
        if(f56C) for(int search1=f5B4-1; search1>=0;--search1) { if(f56C==(NodeD *)Get_0003D910(search1)) {idx56C=search1;break;} }
        int idx570=-1;
        if(f570) for(int search2=f5B4-1; search2>=0;--search2) { if(f570==(NodeD *)Get_0003D910(search2)) {idx570=search2;break;} }
        if (f5A0 > 0 && f5A4 != 0 && f48C < f5A0) {
            f5A4[f48C] = f5A4[f5A0 - 1];
            f5A0 = f5A0 - 1;
        }
        if (idx570 >= 0 && f5B4 > 0 && f5B8 != 0 && idx570 < f5B4) {
            f5B8[idx570] = f5B8[f5B4 - 1];
            f5B4 = f5B4 - 1;
        }
        if (idx56C >= 0 && f5B4 > 0 && f5B8 != 0 && idx56C < f5B4) {
            f5B8[idx56C] = f5B8[f5B4 - 1];
            f5B4 = f5B4 - 1;
        }
        if (idx568 >= 0 && f5B4 > 0 && f5B8 != 0 && idx568 < f5B4) {
            f5B8[idx568] = f5B8[f5B4 - 1];
            f5B4 = f5B4 - 1;
        }
    }
    if (f568 != 0) {
        f568->func_001332A0();
        f568->func_00157810();
        f568->nv2();
        f568 = 0;
    }
    if (f56C != 0) {
        f56C->func_001332A0();
        f56C->func_00157810();
        f56C->nv2();
        f56C = 0;
    }
    if (f570 != 0) {
        f570->func_001332A0();
        f570->func_00157810();
        f570->nv2();
        f570 = 0;
    }
clear:
    f564=0;f568=0;f56C=0;f570=0;
}
#pragma optimize("", on)
int Obj::_func_0003E410()
{
    V4 a, b, c;
    int px, py, pz;
    Blk *blk;
    int w, h, d;
    int i, j;

    a.z = 0.0f; a.y = 0.0f; a.x = 0.0f; a.w = 1.0f;
    b.z = 0.0f; b.y = 0.0f; b.x = 0.0f; b.w = 1.0f;
    c.z = 0.0f; c.y = 0.0f; c.x = 0.0f; c.w = 1.0f;
    int t = f564->a;
    blk = 0;
    if (t != 0)
        return 1;
    f564->q->func_00197E70(&a);
    f564->q->func_00197B40(&b, &c);
    if ((float)f438 <= a.y)
        return 1;
    if (func_00038B10(f564->q + 1, a, b, &px, &py, &pz, 1) == 0)
        return 1;
    func_00038A70(f564->q + 1, &blk);
    if (!blk->flag)
        return 1;
    w = blk->w;
    h = blk->h;
    d = blk->d;
    if (d > f45c)
        d = f45c;
    d += py;
    if (d >= f45c || h <= 0)
        return 1;
    for (i = 0; i < h; i++) {
        int row = (px + i) * f45c;
        for (j = 0; j < w; j++) {
            int col = (px + j) * f45c;
            if (b.x > D_00276E9C || b.x < D_00276E98) {
                if (grid[(row + d) * f460 + j + pz])
                    return 1;
            } else {
                if (grid[(col + d) * f460 + i + pz])
                    return 1;
            }
        }
    }
    return 0;
}
#pragma optimize("", on)

