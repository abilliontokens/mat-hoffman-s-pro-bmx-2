/* 10 functions from 0x00088B60 to 0x00089290, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include <string.h>
#include "asm_helpers.h"

extern int D_002799BC;
extern int D_00279A44;
extern float D_00278E60;
extern float D_002755E0;
extern float D_00275AE8;

struct C_00157600 {
    void func_00157600(int a0);
};

struct S_00088F70_Child {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int a);
    virtual void v6(int a);
    virtual int v7();
};

struct C_00088F70 {
    void *vtbl;
    char pad4[0x24];
    u32 f28;
    u32 f2C;
    f32 f30;
    f32 f34;
    f32 f38;
    u32 f3C;
    S_00088F70_Child *f40;
    C_00088F70 *func_00088DA0(int a0);
    void func_00088F70(int a, int b);
    void func_00089010();
    void func_00089050(float dt);
    void func_00157A00(float dt);
};

struct C_000891A0 {
    void *vtbl;
    char pad4[0x20];
    u32 f24[4];
    char pad34[0x68];
    u32 f9C;
    u32 fA0[16];
    u32 fE0[16];
    u32 f120;
    u32 f124;
    u32 f128;
    u32 f12C;
    C_000891A0 *func_000891A0(int unused);
};

struct C_00089040 {
    bool func_00089040(void);
};

void func_001E891B(void *p);

struct C_001D6410 {
    void func_001D6410(void);
};

struct DelObjC_00089210 {
    virtual void Destroy(int a0);
};

/* EditorMenuOverlay */
struct C_00089210 {
    void *vtbl;
    char pad4[0x20];
    C_001D6410 *arr24[4];
    DelObjC_00089210 *arr34[26];
    DelObjC_00089210 *f9C;
    void func_00157660();
    void func_00089210();
};

extern char D_002A60B0[];
extern char D_00275678[];
extern char D_002A5348[];
extern char D_002A5870[];
extern char D_002A5FA8[];
extern char D_002A48F8[];
extern char D_002A47F0[];
extern int D_00279A34;
extern int D_00279A28;
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(int size);

struct S_00088DD0_Sprite {
    char pad0[0x28];
    u32 f28;
    u32 f2C;
    char pad30[8];
    u32 f38;
    char pad3C[0x1c];
    unsigned char b58;
    void Dirty(unsigned char flags) { b58 |= flags; }
    void SetWidth(u32 w) { if(f28!=w) { f28=w; Dirty(1); } }
    void SetHeight(u32 h) { if(f2C!=h) { f2C=h; Dirty(1); } }
    void SetWidthF(u32 w, int flags) { if(f28!=w) { f28=w; b58 |= flags; } }
    void SetHeightF(u32 h, int flags) { if(f2C!=h) { f2C=h; b58 |= flags; } }
    S_00088DD0_Sprite *func_001D5760();
    void func_001D5810(void *a, int b, int c, int d);
};

struct S_00088DD0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *a, int b, int c, int d, int e);
};

struct S_00088DD0_Mid {
    char pad0[0xb4];
    int fB4;
};
struct S_00088DD0_Glob {
    char pad0[4];
    S_00088DD0_Mid *f4;
};
extern S_00088DD0_Glob *D_002A8490;

struct S_00088DD0_Ctor {
    S_00088DD0_Ctor *func_001CF740(int a, int b, int c);
};

struct S_00088DD0_Arg {
    char pad0[0x64];
    struct { char pad[0x4c0]; int f4C0; } *f64;
};

struct C_00088DD0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    S_00088DD0_Sprite *f2C;
    char pad30[0x10];
    S_00088DD0_Obj *f40;
    C_00088DD0 *func_00088DD0(int a0, int a1, S_00088DD0_Arg *a2);
};

struct S_00088B60_Sprite {
    char pad0[4];
    f32 f4;
    f32 f8;
    char padC[0x4c];
    unsigned char b58;
};
struct S_00088B60_Player {
    char pad0[0xf0];
    char fF0[0x80];
    f32 f170[3];
    char pad17C[0x70];
    int f1EC;
};
struct S_00088B60_Game {
    char pad0[4];
    S_00088B60_Player *f4;
};
extern S_00088B60_Game *D_002EFDB8;
struct S_00088B60_Proj {
    int func_001C5C50(S_00088B60_Player *a, void *b, f32 *c, f32 *d, int e);
};
extern S_00088B60_Proj *D_002AB66C;
struct S_00088B60_Ent {
    char pad0[0x5c];
    int f5C;
};
struct S_00088B60_World {
    char pad0[0x4e4];
    S_00088B60_Ent *f4E4[1];
};
extern S_00088B60_World *D_002B9120;
extern float D_002755E4;
extern float D_002756C4;
extern float D_002755E8;

/* DirectionArrowOverlay */
struct C_00088B60 {
    void *vtbl;
    char pad4[0x28];
    S_00088B60_Sprite *f2C;
    int f30;
    f32 f34[3];
    char pad40[4];
    u32 f44;
    f32 f48;
    f32 f4C;
    f32 f50;
    void func_00088B60();
    void func_001578D0();
};

struct C_00088F60 {
    void func_00088F60(int param_1);
};


void C_00088B60::func_00088B60()
{
    f32 v[4];
    S_00088B60_Player *p;
    S_00088B60_Sprite *s;
    S_00088B60_Ent *e;
    float w, h, dx, dy, dz, sq, len;

    if (*(u32 *)((char *)D_002A8490 + 0x10) != f44) return;
    v[0] = 0.0f; v[1] = 0.0f; v[2] = 0.0f; v[3] = 1.0f;
    p = D_002EFDB8->f4;
    f30 = D_002AB66C->func_001C5C50(p, p->fF0, f34, v, 0);
    p = D_002EFDB8->f4;
    h = (float)(u32)p->f1EC - v[1] - D_002756C4;
    w = v[0] - D_002756C4;
    s = f2C;
    if (w != s->f4 || s->f8 != h) {
        s->f4 = w;
        s->f8 = h;
        s->b58 |= 1;
    }
    p = D_002EFDB8->f4;
    dx = p->f170[0] - f34[0];
    dy = p->f170[1] - f34[1];
    dz = p->f170[2] - f34[2];
    sq = dx * dx + dy * dy + dz * dz;
    _mm_store_ss(&len, _mm_sqrt_ss(_mm_load_ss(&sq)));
    *(u32 *)&len &= 0x7fffffff;
    if (len > f4C) {
        f48 = 1.0f;
    } else {
        float z = 0.0f;
        float t = (len + f50 - f4C) / f50;
        _mm_store_ss(&f48, _mm_max_ss(_mm_load_ss(&t), _mm_load_ss(&z)));
    }
    e = D_002B9120->f4E4[f44];
    if (e != 0 && e->f5C != 0) f48 *= D_002755E8;
    func_001578D0();
}

C_00088F70 *C_00088F70::func_00088DA0(int a0)
{
    ((C_00157600 *)this)->func_00157600(a0);
    f2C = 0;
    f28 = 0;
    f30 = 0;
    f34 = 0;
    f3C = 0;
    f38 = 0;
    vtbl = &D_002799BC;
    return this;
}

C_00088DD0 *C_00088DD0::func_00088DD0(int a0, int a1, S_00088DD0_Arg *a2)
{
 f24=a0; f28=a1;
 func_001ADCC0(D_002A60B0,0x104,D_00275678,D_002A5348,D_002A5FA8);
 S_00088DD0_Sprite *p=(S_00088DD0_Sprite*)func_001E8A44(0x64);
 p=p?p->func_001D5760():0; f2C=p;
 p->func_001D5810(&D_00279A34,0,0,0);
 unsigned two=2, one=1;
 unsigned h;
 if(f24==two) {
 f2C->SetWidth(0x43a00000); h=0x43e00000;
 } else {
 f2C->SetWidth(0x44200000); h=0x43600000;
 }
 f2C->SetHeight(h);
 p=f2C;
 if(f28==one)p->f38=(p->f38&0xffdd3737)|0xdd3737;
 else p->f38=(p->f38&0xffaaaaff)|0xaaaaff;
 p->b58|=two;
 p=f2C; *((unsigned char*)p+0x3b)=0;p->b58|=two;
 func_001ADCC0(D_002A48F8,0x104,D_00275678,D_002A5870,D_002A47F0);
 S_00088DD0_Ctor *c=(S_00088DD0_Ctor*)func_001E8A44(0x20c);
 c=c?c->func_001CF740(D_002A8490->f4->fB4,a2->f64->f4C0,one):0;
 f40=(S_00088DD0_Obj*)c; f40->v4(&D_00279A28,0x81,one,0,0);
 func_001ADCC0(D_002A60B0,0x104,D_00275678,D_002A5870,D_002A5FA8);
 return this;
}

void C_00088F60::func_00088F60(int param_1)
{
  int in_ECX = (int)this;
  
  *(float *)(in_ECX + 0x30) = (float)param_1;
  return;
}

void C_00088F70::func_00088F70(volatile int a, volatile int b)
{
    C_00088F70 * volatile self = this;
    int tmp;
    int * volatile p;
    float t;
    if ((float)a > self->f34 && b == 0) {
        if (self->f40->v7() == 0) {
            self->f40->v5(0);
        }
    }
    self->f34 = (float)a;
    if (b != 0) {
        p = &tmp;
        t = self->f34 / self->f30;
        *p = _mm_cvtss_si32(*(__m128 *)&t);
        self->f3C = tmp;
        if (self->f40->v7() != 0) {
            self->f40->v6(0);
        }
    }
}

void C_00088F70::func_00089010()
{
    f34 = f30;
    f3C = 0xff;
    if (f40->v7() != 0) {
        f40->v6(0);
    }
}

bool C_00089040::func_00089040(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x3c) == 0xff;
}

void C_00088F70::func_00089050(float dt)
{
    float ratio = f34 / f30;
    int value;
    int *p = &value;
    int cur;
    if (f34 < f30) {
        *p = (int)(ratio * ratio * D_00278E60);
    } else {
        value = 255;
    }
    cur = value < 255 ? value : 255;
    value = cur;
    if (value != (int)f3C) f38 += dt;
    if (f38 > D_002755E0 && value != (int)f3C) {
        if (value > (int)f3C) ++f3C; else --f3C;
        f38 = 0;
        if (value == (int)f3C) f40->v6(0);
    }
    if (f38 > D_00275AE8) f40->v6(0);
    func_00157A00(dt);
}

C_000891A0 *C_000891A0::func_000891A0(int unused)
{
    int i;
    ((C_00157600 *)this)->func_00157600(1);
    vtbl = &D_00279A44;
    for (i = 0; i < 4; i++) {
        f24[i] = 0;
    }
    for (i = 0; i < 16; i++) {
        fA0[i] = 0;
    }
    for (i = 0; i < 16; i++) {
        fE0[i] = 0;
    }
    f120 = 0;
    f124 = 0;
    f12C = 0;
    f9C = 0;
    f128 = 1;
    return this;
}

void C_00089210::func_00089210()
{
    vtbl = &D_00279A44;
    for (int i = 0; i < 4; i++) {
        C_001D6410 *p = arr24[i];
        if (p != 0) {
            p->func_001D6410();
            func_001E891B(p);
            arr24[i] = 0;
        }
    }
    for (int j = 0; j < 26; j++) {
        if (arr34[j] != 0) {
            arr34[j]->Destroy(1);
            arr34[j] = 0;
        }
    }
    if (f9C != 0) {
        f9C->Destroy(1);
        f9C = 0;
    }
    func_00157660();
}

