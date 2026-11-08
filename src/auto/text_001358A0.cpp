/* 28 functions from 0x001358A0 to 0x00136860, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
#include <xmmintrin.h>
#include "asm_helpers.h"
#pragma comment(linker, "/alternatename:??0C_00135470@@QAE@XZ=_func_00135470")
#pragma comment(linker, "/alternatename:??2@YAPAXI@Z=_func_001E8A44")
void *func_001E8A44(unsigned int size);
struct C_00135470 {
    int f0;
    int f4;
    char pad8[0x44];
    void func_00135470();
    C_00135470();
    ~C_00135470();
};
struct C_00135A80 {
    char pad0[0x24];
    int f24, f28, f2C, f30;
    C_00135470 *f34;
    int *f38;
    int *f3C;
    int f40;
    void func_001D3F50();
    void func_00135A80(int count, int n1, int *p1, int n2, int *p2, int a6);
};
struct C_00135A60 {
    undefined4 func_00135A60(byte param_1);
};

struct C_00135D70 {
    char pad0[0xC];
    int unkC;
    int unk10;
    void func_00135D70(int a0, int a1);
};


/* binding table: 9 rows of 0x4a entries; rows 1..8 are the per-player ones */
struct C_00135CB0 {
    int tbl[10][0x4a];
    void func_00135CB0();
    void func_00135D00(int a0, int a1);
    void func_00135D30(int idx, int *out, int row);
};
struct C_00136370 {
    char pad0[0xC];
    int unkC;
    char pad10[0xCC0 - 0x10];
    C_00135CB0 *fCC0;
    int func_00136370();
};
extern int D_00284768;
struct S_Vec3_001358A0 { float x, y, z; };
struct S_Body_001358A0 { char pad[0x1c]; S_Vec3_001358A0 pos; };
struct C_001358A0 {
    void *vtbl;
    int f4;
    float f8;
    S_Vec3_001358A0 *fC;
    S_Body_001358A0 *f10;
    S_Body_001358A0 *f14;
    void func_001358A0();
};
struct V4_001358A0 { float x, y, z, w; };
static __forceinline float Sqrt_001358A0(const float &x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&x))); return r; }
extern float D_00275544, D_00275460, D_002755E8;
struct C_00135EE0_Ent {
    int idx;
    int type;
    int sel;
    int state;
    int x;
};
struct C_00135EE0_Rec { int w[6]; };
struct C_00135EE0_Owner {
    char pad[0x1898];
    int unk1898;
};
struct C_00135EE0_Sink {
    virtual void v0() = 0; virtual void v1() = 0; virtual void v2() = 0; virtual void v3() = 0;
    virtual void v4() = 0; virtual void v5() = 0; virtual void v6() = 0; virtual void v7() = 0;
    virtual void v8() = 0; virtual void v9() = 0; virtual void v10() = 0; virtual void v11() = 0;
    virtual void v12() = 0;
    virtual void on(C_00135EE0_Ent *e, void *p) = 0;
    virtual void off(C_00135EE0_Ent *e, void *p) = 0;
};
struct C_00135EE0 {
    char pad0[0x14];
    char *arr14[8];
    char *f34;
    C_00135EE0_Owner *f38;
    int count;
    C_00135EE0_Ent ents[1];
    void func_00135EE0(void);
};
struct C_00135B70 {
    void *vtbl;
    char pad[0x48];
    void *func_00135B70(unsigned int flags);
};
extern int D_002BA700;
struct C_00135E00;
struct C_00135EE0_Ent;
struct S_Game_001358A0 {
    virtual void v0() = 0; virtual void v1() = 0; virtual void v2() = 0; virtual void v3() = 0;
    virtual void v4() = 0; virtual void v5() = 0; virtual void v6() = 0; virtual void v7() = 0;
    virtual void v8() = 0; virtual void v9() = 0; virtual void v10() = 0; virtual void v11() = 0;
    virtual void v12() = 0;
    virtual void on(C_00135EE0_Ent *e, void *p) = 0;
    virtual void off(C_00135EE0_Ent *e, void *p) = 0;
    char pad4[4];
    C_00135E00 *f8;
};
extern S_Game_001358A0 *D_002A8490;
extern int D_00284834;
void func_001E891B(void *p);

struct S_00136110_Dev {
    virtual int v0(int a, int b, int c);
    virtual int v1(int a, int b, int c);
    virtual int v2(int a, int b, int c);
    virtual int v3(int a, int b, int c);
    virtual int v4(int a, int b, int c);
    virtual int v5(int a, int b, int c);
};

struct S_001358A0_Handler : S_00136110_Dev {
    int func_0015AC20(int a);
};

struct S_00136300_Target {
    virtual void v0(int a);
};

struct C_00136300 {
    S_00136300_Target *f0;
    int f4;
    void func_00136300(void);
};

struct C_00135D90 {
    char pad0[0x24];
    float f24;
    float f28;
    float f2C;
    float f30;
    float f34;
    float f38;
    void func_00135D90(float a, float b);
};

/* 5-int record of the pending command list that overlays the ControlInterface from +0x0 */
struct C_001362A0 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    float f24;
    float f28;
    int f2C;
    int f30;
    float f34;
    float f38;
    C_001362A0(int p1, int p2, float p3, int p4, int p5, float p6);
    void func_001362A0(int p1, int p2, float p3, int p4, int p5, float p6);
};

struct S_001367F0_Vec4 {
    int x;
    int y;
    int z;
    int w;
};

struct C_001367F0 {
    char pad0[0x8];
    S_001367F0_Vec4 f8;
    S_001367F0_Vec4 f18;
    S_001367F0_Vec4 f28;
    int func_001367F0(S_001367F0_Vec4 *a, S_001367F0_Vec4 *b, S_001367F0_Vec4 *c);
};

extern S_001367F0_Vec4 D_002A6760;
struct S_001364B0_Record {
    int f0;
    short f4, f6;
    int f8[16], f48[16];
    unsigned short f88[16];
    int fA8[16];
    int padE8;
    int fEC, fF0, fF4;
    int padF8;
};
/* the engine's stream manager: reads/seeks on integer file handles */
struct C_0013B210 {
    int func_0013C8A0(int handle, void *dst, int size, int count);
    int func_0013AFD0(int handle);
    void func_0013AFF0(int handle, int offset, int mode);
};
extern C_0013B210 *D_002BEAAC;

/* cube map group: per-face records loaded from a stream */
struct C_001364B0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    int f4;
    S_001367F0_Vec4 f8, f18, f28;
    int f38, f3C;
    short f40;
    unsigned short f42;
    S_001364B0_Record records[6];
    int f62C;
    void func_001364B0();
    C_001364B0 *func_001365B0(int handle, int discard);
};

struct S_ControlEntry {
    int type;
    int a;
    int b;
    int c;
    int d;
};

/* ControlInterface */
struct C_00135E00 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    S_00136110_Dev *f14[8];
    S_00136110_Dev *f34;
    S_001358A0_Handler *f38;
    int f3C;
    char pad40[0xc80];
    C_00135CB0 *fCC0;
    int fCC4[8];
    int fCE4[8];
    C_00135E00 *func_00135E00(void);
    void func_00135E50(void);
    void func_00135E90(int a0, int a1, int a2, int a3);
    int func_00135FF0(int a0, int kind, int a2, int idx);
    int func_001360B0(int a0, int a1);
    C_00135E00 *func_00136320(unsigned int flags);
    int func_00136110(int a, int idx);
    int func_00136170(int idx, int type, int row);
};

void C_001358A0::func_001358A0()
{
 C_001358A0 * volatile self=this;
 V4_001358A0 d;
 volatile float one=1.0f;
 S_Vec3_001358A0 *c=fC;
 if(c) { V4_001358A0 t; S_Vec3_001358A0 *a=&f14->pos;
 t.x=a->x-c->x;t.y=a->y-c->y;t.z=a->z-c->z;t.w=one;d=t;
 } else { V4_001358A0 t; S_Vec3_001358A0 *b=&f10->pos,*a=&f14->pos;
 t.x=a->x-b->x;t.y=a->y-b->y;t.z=a->z-b->z;t.w=one;d=t; }
 float l2=d.y*d.y+d.z*d.z+d.x*d.x;
 if(!(l2<=D_00275544)) {
 float len; _mm_store_ss(&len,_mm_sqrt_ss(_mm_set_ss(l2)));
 float inv=D_00275460/len;
 V4_001358A0 n;
 n.x=d.x*inv;n.y=d.y*inv;n.z=d.z*inv;
 C_001358A0 *p=self;
 if(p->fC==0 && p->f4==0) {
 float k=(p->f8-len)*D_002755E8;
 S_Vec3_001358A0 t; S_Vec3_001358A0 *b=&p->f10->pos;
 t.x=k*n.x;t.y=k*n.y;t.z=k*n.z;
 b->x-=t.x;b->y-=t.y;b->z-=t.z;
 S_Vec3_001358A0 *a=&self->f14->pos;
 a->x+=t.x;a->y+=t.y;a->z+=t.z;
 } else {float k=p->f8-len; S_Vec3_001358A0 t; S_Vec3_001358A0 *a=&p->f14->pos;
 t.x=k*n.x;t.y=k*n.y;t.z=k*n.z;
 a->x+=t.x;a->y+=t.y;a->z+=t.z;}
 }
}

undefined4 C_00135A60::func_00135A60(byte param_1)
{
  int func_00135740(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00135740();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00135A80::func_00135A80(int count, int n1, int *p1, int n2, int *p2, int a6)
{
    f24 = count;
    C_00135470 *arr = new C_00135470[count];
    f34 = arr;
    for (int i = 0; i < f24; ++i) f34[i].f4 = i;
    f28 = n1;
    if (n1 > 0) {
        f38 = (int *)func_001E8A44(n1 * 4);
        memcpy(f38, p1, f28 * 4);
    }
    f2C = n2;
    if (n2 > 0) {
        f3C = (int *)func_001E8A44(n2 * 4);
        memcpy(f3C, p2, f2C * 4);
    }
    f40 = a6;
    func_001D3F50();
}

void *C_00135B70::func_00135B70(unsigned int flags)
{
    if (flags & 2) {
        int *base = (int *)this - 1;
        int n = *base;
        C_00135B70 *p = this + n;
        while (--n >= 0) {
            --p;
            p->vtbl = &D_00284768;
        }
        if (flags & 1)
            func_001E891B(base);
        return base;
    }
    vtbl = &D_00284768;
    if (flags & 1)
        func_001E891B(this);
    return this;
}

int func_00135C70(int param_1, int param_2, int *param_3, int param_4)
{
    if ((*param_3 == param_1) && (param_3[1] == param_2)) {
        if (param_2 != 0) {
            return 1;
        }
        if (D_002A8490->f8->f38 != 0) {
            if (D_002A8490->f8->f38->func_0015AC20(param_4) != 0) {
                return 1;
            }
        }
    }
    return 0;
}

void C_00135CB0::func_00135CB0()
{
    int *in_ECX = (int *)this;
    int *puVar1;
    int *puVar2;
    int iVar3;
    int iVar4;
    puVar2 = (int *)((char *)in_ECX + 0xa68);
    iVar4 = 0x4a;
    do {
        puVar2[-0x29a] = -1;
        puVar1 = puVar2 - 0x250;
        iVar3 = 8;
        do {
            *puVar1 = -1;
            puVar1 = puVar1 + 0x4a;
            iVar3 = iVar3 - 1;
        } while (iVar3 != 0);
        *puVar2 = -1;
        puVar2 = puVar2 + 1;
        iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
}

void C_00135CB0::func_00135D00(int param_1, int param_2)
{
    int *puVar1;
    int iVar2;
    if (param_1 >= 0 && param_1 < 0x4a) {
        puVar1 = (int *)((char *)this + 0x128 + param_1 * 4);
        iVar2 = 8;
        do {
            *puVar1 = param_2;
            puVar1 = puVar1 + 0x4a;
            iVar2 = iVar2 - 1;
        } while (iVar2 != 0);
    }
}

void C_00135CB0::func_00135D30(int idx, int *out, int row)
{
    if (idx >= 0 && idx < 0x4a && row < 8) {
        *out = tbl[row + 1][idx];
    } else {
        *out = -1;
    }
}

void C_00135D70::func_00135D70(int a0, int a1) {
    unkC = a0;
    unk10 = a1;
}

void C_00135D90::func_00135D90(float a, float b)
{
    float v = (a / b) * (f30 - f2C) + f2C;

    if (v >= f34) {
        f24 = (v - f34) * ((f30 - f28) / (f30 - f34)) + f28;
    } else if (v <= f38) {
        f24 = (v - f38) * ((f28 - f2C) / (f38 - f2C)) + f28;
    } else {
        f24 = f28;
    }
}

C_00135E00 *C_00135E00::func_00135E00(void)
{
    int i;
    int *p;

    vtbl = (void *)&D_00284834;
    f4 = 0;
    f8 = 0;
    f10 = 0;
    i = 0;
    p = fCC4;
    do {
        p[0] = i;
        p[8] = i;
        p[-0x32c] = 0;
        i++;
        p++;
    } while (i < 8);
    f34 = 0;
    f38 = 0;
    fCC0 = 0;
    f3C = 0;
    fC = 0;
    return this;
}

void C_00135E00::func_00135E50(void)
{
    vtbl = (void *)&D_00284834;
    if (fC != 0 && fCC0 != 0) {
        func_001E891B(fCC0);
        fCC0 = 0;
    }
}

int func_00135E80()
{
    return ++D_002BA700;
}

void C_00135E00::func_00135E90(int a0, int a1, int a2, int a3)
{
    S_ControlEntry *list = (S_ControlEntry *)pad40;
    list[f3C].type = a0;
    list[f3C].b = a3;
    list[f3C].a = a1;
    list[f3C].c = a2;
    ((int *)this)[(f3C + 4) * 5] = 0x3f;
    f3C++;
}

void C_00135EE0::func_00135EE0(void) {
    for (int i = 0; i < count; i++) {
        C_00135EE0_Ent *e = &ents[i];
        int v = (int)f38;
        if (v != 0) {
            v = f38->unk1898;
        }
        e->x = v;
        switch (e->type) {
        case 0:
            if (e->state == 0) {
                D_002A8490->on(e, (char *)f38 + e->idx * 0x18 + 0x20);
            }
            if (e->state == 1) {
                D_002A8490->off(e, (char *)f38 + e->idx * 0x18 + 0x20);
            }
            break;
        case 1:
            if (e->state == 0) {
                D_002A8490->on(e, f34 + e->idx * 0x18 + 0x1c);
            }
            if (e->state == 1) {
                D_002A8490->off(e, f34 + e->idx * 0x18 + 0x1c);
            }
            break;
        case 2:
            if (e->state == 0) {
                D_002A8490->on(e, arr14[e->sel] + e->idx * 0x18 + 0x324);
            }
            if (e->state == 1) {
                D_002A8490->off(e, arr14[e->sel] + e->idx * 0x18 + 0x324);
            }
            break;
        }
    }
}

int C_00135E00::func_00135FF0(int a0, int kind, int a2, int idx)
{
    S_00136110_Dev *dev;
    switch (kind) {
    case 2:
        dev = f14[idx];
        if (dev != 0 && dev->v3(a0, a2, 0) != 0) {
            return 1;
        }
        break;
    case 1:
        dev = f34;
        if (dev != 0 && dev->v5(a0, a2, 0) != 0) {
            return 1;
        }
        break;
    case 0:
        dev = f38;
        if (dev != 0 && dev->v5(a0, a2, 0) != 0) {
            return 1;
        }
        break;
    }
    return 0;
}

int C_00135E00::func_001360B0(int a0, int a1)
{
    S_00136110_Dev *dev;
    dev = f14[0];
    if (dev != 0 && dev->v2(a0, a1, 0) != 0) {
        return 1;
    }
    dev = f38;
    if (dev != 0 && dev->v4(a0, a1, 0) != 0) {
        return 1;
    }
    dev = f34;
    if (dev != 0 && dev->v4(a0, a1, 0) != 0) {
        return 1;
    }
    return 0;
}

int C_00135E00::func_00136110(int a, int idx)
{
    S_00136110_Dev *dev = f14[idx];

    if (dev != 0) {
        if (dev->v3(a, 0x3f, 0) != 0) {
            return 1;
        }
    }
    return 0;
}

int C_00135E00::func_00136170(int idx, int type, int row)
{
    C_00135CB0 *t = fCC0;

    if (t != 0) {
        switch (type) {
        case 0:
            if (idx >= 0 && idx < 0x4a) {
                return t->tbl[0][idx];
            }
            break;
        case 1:
            if (idx >= 0 && idx < 0x4a) {
                return t->tbl[9][idx];
            }
            break;
        case 2:
            t->func_00135D30(idx, &idx, row);
            return idx;
        }
    }
    return -1;
}

int func_001361E0(int idx, int type, int *binding, int a3)
{
    int v;
    C_00135CB0 *t = D_002A8490->f8->fCC0;

    if (t == 0) {
        return 0;
    }
    switch (type) {
    case 0:
        if (D_002A8490->f8->f38 != 0) {
            if (D_002A8490->f8->f38->func_0015AC20(a3) == 0) {
                return 0;
            }
        }
        if (idx >= 0 && idx < 0x4a) {
            v = D_002A8490->f8->fCC0->tbl[0][idx];
        } else {
            v = -1;
        }
        break;
    case 1:
        if (idx >= 0 && idx < 0x4a) {
            v = t->tbl[9][idx];
        } else {
            v = -1;
        }
        break;
    case 2:
        t->func_00135D30(idx, &v, binding[2]);
        break;
    default:
        v = -1;
        break;
    }
    if (binding[0] == v && binding[1] == type && v != -1) {
        return 1;
    }
    return 0;
}

C_001362A0::C_001362A0(int p1, int p2, float p3, int p4, int p5, float p6)
{
    f0 = 0;
    f14 = 0;
    fC = -1;
    f34 = p3 + p6;
    f18 = 0;
    f1C = 0;
    f20 = 0;
    f38 = p3 - p6;
    f10 = -1;
    f2C = p1;
    f30 = p2;
    f24 = p3;
    f28 = p3;
    f4 = p4;
    f8 = p5;
}

void C_00136300::func_00136300(void)
{
    if (*(int *)((char *)D_002A8490 + 8) != 0 && f0 != 0) {
        f0->v0(f4);
    }
}

C_00135E00 *C_00135E00::func_00136320(unsigned int flags)
{
    vtbl = (void *)&D_00284834;
    if (fC != 0 && fCC0 != 0) {
        func_001E891B(fCC0);
        fCC0 = 0;
    }
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int C_00136370::func_00136370()
{
    C_00135CB0 *p = (C_00135CB0 *)func_001E8A44(0xb90);
    if (p != 0)
        p->func_00135CB0();
    else
        p = 0;
    fCC0 = p;
    unkC = 1;
    return 1;
}

int func_00136460(int param_1, int param_2, int param_3)
{
    switch ((param_1 >> (param_2 * 2) >> (param_3 * 8)) & 3) {
    case 0:
        return 0x200;
    case 1:
        return 0x40;
    case 2:
        return 0x80;
    case 3:
        return 0x100;
    }
    return 0;
}

void C_001364B0::func_001364B0()
{
    f42 = 0xffff;
    f62C = 0;
    f3C = 0;
    f40 = 0;
    f38 = -1;
    f8 = D_002A6760;
    f18 = D_002A6760;
    f28 = D_002A6760;
    for (int i = 0; i < 6; ++i) {
        records[i].f0 = 0;
        records[i].f4 = 0;
        records[i].f6 = 0;
        for (int j = 0; j < 16; ++j) {
            records[i].f8[j] = 0;
            records[i].f48[j] = 0;
            records[i].f88[j] = 0xffff;
            records[i].fA8[j] = -1;
        }
        records[i].fEC = 0;
        records[i].fF0 = 0;
        records[i].fF4 = 0;
    }
}

C_001364B0 *C_001364B0::func_001365B0(int handle, int discard)
{
    int i;
    int j;
    int pad;
    int h;

    f38 = handle;
    if (D_002BEAAC->func_0013C8A0(handle, &f3C, 4, 1) != 1) goto fail;
    if (D_002BEAAC->func_0013C8A0(f38, &handle, 2, 1) != 1) goto fail;
    if (D_002BEAAC->func_0013C8A0(f38, &f42, 2, 1) != 1) goto fail;
    for (i = 0; i < 6; i++) {
        if (D_002BEAAC->func_0013C8A0(f38, &records[i].f4, 2, 1) != 1) goto fail;
    }
    for (i = 0; i < 6; i++) {
        if (D_002BEAAC->func_0013C8A0(f38, &records[i].f0, 4, 1) != 1) goto fail;
    }
    if (D_002BEAAC->func_0013C8A0(f38, &f8, 0xc, 1) != 1) goto fail;
    if (D_002BEAAC->func_0013C8A0(f38, &f18, 0xc, 1) != 1) goto fail;
    if (D_002BEAAC->func_0013C8A0(f38, &f28, 0xc, 1) != 1) goto fail;
    if (handle & 4) {
        for (i = 0; i < 6; i++) {
            if (D_002BEAAC->func_0013C8A0(f38, records[i].f88, 0x20, 1) != 1) goto fail;
        }
    }
    if (handle & 1) {
        for (i = 0; i < 6; i++) {
            for (j = 0; j < 16; j++) {
                if (D_002BEAAC->func_0013C8A0(f38, &records[i].f48[j], 4, 1) != 1) goto fail;
            }
        }
    }
    if (handle & 2) {
        h = f38;
        pad = 0x800 - D_002BEAAC->func_0013AFD0(h) % 0x800;
        if (pad != 0x800) {
            D_002BEAAC->func_0013AFF0(h, pad, 1);
        }
    }
    f62C = D_002BEAAC->func_0013AFD0(f38);
    if (discard != 0) {
fail:
        v2();
        return 0;
    }
    return this;
}

int C_001367F0::func_001367F0(S_001367F0_Vec4 *a, S_001367F0_Vec4 *b, S_001367F0_Vec4 *c)
{
    if (a != 0) {
        f8 = *a;
    }
    if (b != 0) {
        f18 = *b;
    }
    if (c != 0) {
        f28 = *c;
    }
    return 1;
}

