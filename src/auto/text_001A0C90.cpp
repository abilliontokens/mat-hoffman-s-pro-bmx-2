/* 19 functions from 0x001A0C90 to 0x001A1C90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
#include <xmmintrin.h>
struct Q_001A1930 { float x,y,z,w; };
static inline Q_001A1930 Sub_001A1930(const Q_001A1930 &a,const Q_001A1930 &b) { Q_001A1930 q; q.x=a.x-b.x;q.y=a.y-b.y;q.z=a.z-b.z;q.w=1;return q; }
struct I3_001A1930 { float x,y,z; };
struct O_001A1930 { char pad[8]; I3_001A1930 pos; char pad14[0x24]; I3_001A1930 vel; I3_001A1930 GetPos() { return pos; } };
struct N_001A1930 { int unk0; O_001A1930 *obj;
 void GetPosition(Q_001A1930 *p) {
  O_001A1930 *o=obj;
  if(o) {
   p->x=o->pos.x; p->y=o->pos.y; p->z=o->pos.z;
  }
 }
 void GetVelocity(Q_001A1930 *p) {
  O_001A1930 *o=obj;
  if(o) {
   p->x=o->vel.x; p->y=o->vel.y; p->z=o->vel.z;
  }
 }
};
struct E_001A1930 {
virtual void v0();
virtual void v1();
virtual void v2();
virtual void v3();
virtual void v4();
virtual void v5();
virtual void v6();
virtual void v7();
virtual void v8();
virtual void v9();
virtual void v10();
virtual void v11();
virtual void v12();
virtual void v13();
virtual void v14();
virtual void v15();
virtual void v16();
virtual void v17();
virtual void v18();
virtual void v19();
virtual void v20(Q_001A1930); virtual void v21(Q_001A1930);
};
struct C_001A1930 {
 char pad0[0x4c]; float unk4C; char pad50[0x20];
 Q_001A1930 pos,vel; float distance; N_001A1930 *nearest; int flags;
 char pad9C[0x104]; unsigned char state; char pad1A1[7]; float range;
 char pad1AC[0x10]; E_001A1930 *emitter;
 void func_001A1930(int count, N_001A1930 **nodes);
};
extern float D_0028AEAC;
float func_0001CAF0(Q_001A1930 *,Q_001A1930 *);
struct C_001A1650 {
    undefined4 func_001A1650(undefined4 *param_1);
};

struct C_001A1620 {
    undefined4 func_001A1620(undefined4 *param_1);
};

struct C_001A15F0 {
    undefined4 func_001A15F0(undefined4 *param_1);
};

struct C_001A15C0 {
    undefined4 func_001A15C0(undefined4 *param_1);
};

struct C_001A1850 {
    bool func_001A1850(void);
};

extern int D_0028B3A0;
void func_001CBC10(int e, void *file, int line);

/* returns true (and reports) when hr is a failure code */
static inline int CheckFailed(int hr, int line) {
    if (hr < 0) {
        func_001CBC10(hr, &D_0028B3A0, line);
        return 1;
    }
    return 0;
}

/* the emitter object at +0x1BC: slot 7 is called through */
struct S_001A1B90_Obj {
    virtual int v0(); virtual int v1(); virtual int v2(); virtual int v3();
    virtual int v4(); virtual int v5(); virtual int v6(); virtual int v7();
};

/* SoundEmitter */
struct C_001A1B90 {
    char pad0[0x1B4];
    int f1B4;
    char pad1B8[4];
    S_001A1B90_Obj *f1BC;
    int func_001A1B90();
};

struct V3_001A1540 {
    float x, y, z;
};

/* object held at +4 of C_001A13F0 */
struct S_001A13F0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    char pad4[0x18 - 4];
    V3_001A1540 unk18;
    char pad24[4];
    V3_001A1540 unk28;
    int func_001D7D00(void);
    int func_001D6C40(int a, int b);
};

struct V4_001A0C90 { float x, y, z, w; V4_001A0C90() { z = 0; y = 0; x = 0; w = 1.0f; } };
struct Mat_001A0C90 { float m[16]; };
struct Obj0_001A0C90 {
    void func_00199A70(int idx, V4_001A0C90 *out);
    V4_001A0C90 func_00198040(V4_001A0C90 *in);
    void func_00199C90(V4_001A0C90 axis, float c, float s);
};
struct Obj4_001A0C90 {
    void func_00199BE0(Mat_001A0C90 *m);
    V4_001A0C90 func_00197EC0(V4_001A0C90 *in);
    void func_00199A70(int idx, V4_001A0C90 *out);
};
struct Obj8_001A0C90 {
    void func_00199A70(int idx, V4_001A0C90 *out);
};
struct Prof_001A0C90 {
    int func_00026500(const char *name, int a);
    void func_0019FC40(int h);
    void func_0019FC80(int h);
};
struct Gfx_001A0C90 { char pad0[0x1934]; int f1934; };
struct Glob_001A0C90 { char pad0[0x18]; Gfx_001A0C90 *f18; };
extern int D_002A9D84, D_002A9D80;
extern Glob_001A0C90 *D_002A8490;
extern Prof_001A0C90 *D_002A7CB8;
extern char D_0028B348[];
extern float D_00275460, D_00275F58, D_002755EC;
float func_0014F890(float x);
float func_0014F510(float x);
float func_0014F550(float x);
void func_0011F400(void *out, float x, float y, float z, float s, float c);

struct C_001A0C90 {
    Obj0_001A0C90 *f0;
    Obj4_001A0C90 *f4;
    Obj8_001A0C90 *f8;
    int fC;
    int f10;
    char pad14[8];
    float f1c, f20;
    char pad24[8];
    float f2c, f30, f34, f38;
    char pad3C[4];
    int f40;
    V4_001A0C90 f44;
    void func_001A0510(V4_001A0C90 v);
    void func_001A0C90(V4_001A0C90 v);
};

struct C_001A13F0 {
    char pad0[4];
    S_001A13F0_Obj *unk4;
    void func_001A13F0(void);
    int func_001A1410(void);
    int func_001A1450(int a);
    int func_001A14A0(int a);
    int func_001A14F0(int a);
    int func_001A1540(V3_001A1540 *a, V3_001A1540 *b);
    int func_001A1580(V3_001A1540 *a, V3_001A1540 *b);
};

/* object held at +0x1BC of C_001A1C70 */
struct S_001A1C70_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual int v8(int a);
    void func_001CB560(S_001A1C70_Obj *old);
};

struct C_001A1C70 {
    char pad0[0x1BC];
    S_001A1C70_Obj *unk1BC;
    int func_001A1C70(int a);
    int func_001A1B60(S_001A1C70_Obj *obj);
};

/* true when the format flags ask for the extra state bit */
static inline int FlagsNeedBit(int f)
{
    return (f & 2) == 0 || (f & 4) != 0;
}

/* writes bit 3 of v into b, leaving the rest of b alone */
static inline unsigned char MergeBit3(unsigned char v, unsigned char b)
{
    return b ^ ((v ^ b) & 8);
}

struct S_001A1860_Buf {
    int a[9];
};

struct S_001A1860_Quad {
    int a[4];
};

int func_001D3F50(void);

extern int D_0028B3C4;
extern int D_002A9EEC, D_002A9EF0, D_002A9EF4, D_002A9EF8;
extern int D_002A9ECC, D_002A9ED0, D_002A9ED4, D_002A9ED8;
extern int D_002EFF50;
int __stdcall func_00157600(int a);

/* SoundEmitter */
struct C_001A1680 {
    void *vtbl;
    int u[0x6C];
    C_001A1680 *func_001A1680(int a1, int a2, unsigned short a3, int a0);
};

struct C_001A1860 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    char pad4[0x38];
    S_001A1860_Buf unk3C;
    char pad60[0x10];
    S_001A1860_Quad unk70;
    S_001A1860_Quad unk80;
    char pad90[0x8];
    int unk98;
    char pad9C[0x104];
    u8 unk1A0;
    char pad1A1[0x3];
    int unk1A4;
    int unk1A8;
    int unk1AC;
    int func_001A1860(S_001A1860_Buf buf, S_001A1860_Quad q70, S_001A1860_Quad q80,
                      int a18, int a19, int a20, int a21, int a22);
};


void C_001A13F0::func_001A13F0(void)
{
    if (unk4 != 0) {
        unk4->v2();
        unk4 = 0;
    }
}

int C_001A13F0::func_001A1410(void)
{
    if (unk4 == 0) return 0;
    return !CheckFailed(unk4->func_001D7D00(), 0x45);
}

int C_001A13F0::func_001A1450(int a)
{
    if (unk4 == 0) return 0;
    return !CheckFailed(unk4->func_001D6C40(a, 1), 0x51);
}

int C_001A13F0::func_001A14A0(int a)
{
    if (unk4 == 0) return 0;
    return !CheckFailed(unk4->func_001D6C40(a, 1), 0x5d);
}

int C_001A13F0::func_001A14F0(int a)
{
    if (unk4 == 0) return 0;
    return !CheckFailed(unk4->func_001D6C40(a, 1), 0x69);
}

int C_001A13F0::func_001A1540(V3_001A1540 *a, V3_001A1540 *b)
{
    S_001A13F0_Obj *o = unk4;
    if (o == 0) return 0;
    a->x = o->unk18.x;
    a->y = o->unk18.y;
    a->z = o->unk18.z;
    b->x = o->unk28.x;
    b->y = o->unk28.y;
    b->z = o->unk28.z;
    return 1;
}

int C_001A13F0::func_001A1580(V3_001A1540 *a, V3_001A1540 *b)
{
    int *src;
    int *obj = (int *)unk4;
    if (obj == 0) return 0;
    src = (int *)a;
    obj[6] = src[0];
    obj[7] = src[1];
    obj[8] = src[2];
    src = (int *)b;
    obj[10] = src[0];
    obj[11] = src[1];
    obj[12] = src[2];
    return 1;
}

undefined4 C_001A15C0::func_001A15C0(undefined4 *param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = *(undefined4 *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar1 + 0xc);
  param_1[2] = *(undefined4 *)(iVar1 + 0x10);
  return 1;
}

undefined4 C_001A15F0::func_001A15F0(undefined4 *param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 8) = *param_1;
  *(undefined4 *)(iVar1 + 0xc) = param_1[1];
  *(undefined4 *)(iVar1 + 0x10) = param_1[2];
  return 1;
}

undefined4 C_001A1620::func_001A1620(undefined4 *param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = *(undefined4 *)(iVar1 + 0x38);
  param_1[1] = *(undefined4 *)(iVar1 + 0x3c);
  param_1[2] = *(undefined4 *)(iVar1 + 0x40);
  return 1;
}

undefined4 C_001A1650::func_001A1650(undefined4 *param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x38) = *param_1;
  *(undefined4 *)(iVar1 + 0x3c) = param_1[1];
  *(undefined4 *)(iVar1 + 0x40) = param_1[2];
  return 1;
}

C_001A1680 *C_001A1680::func_001A1680(int a1, int a2, unsigned short a3, int a0)
{
    int *w = (int *)this;
    int *p;
    volatile int v[4];
    int zero = 0;
    int one = 0x3f800000;
    int t;
    func_00157600(a0);
    vtbl = (void *)&D_0028B3C4;
    p = &w[0x28 / 4]; p[2] = zero; p[1] = zero; p[0] = zero; p[3] = one;
    p = &w[0x60 / 4]; p[3] = one; p[2] = zero; p[1] = zero; p[0] = zero;
    p = &w[0x70 / 4]; p[3] = one; p[2] = zero; p[1] = zero; p[0] = zero;
    p = &w[0x80 / 4]; p[3] = one; p[2] = zero; p[1] = zero; p[0] = zero;
    p = &w[0x28 / 4];
    for (int i = 0; i < 9; i++) w[0x3c / 4 + i] = zero;
    w[0x48 / 4] = one; w[0x58 / 4] = one; w[0x5c / 4] = one;
    w[0x24 / 4] = a2;
    w[0x1a4 / 4] = a1;
    v[3] = one;
    v[0] = 0x7f7fffff;
    t = v[0];
    w[0x70 / 4] = t;
    p[0] = t;
    v[1] = 0x7f7fffff;
    t = v[1];
    p[1] = t;
    w[0x74 / 4] = t;
    w[0x3c / 4] = 0x168;
    w[0x40 / 4] = 0x168;
    w[0x44 / 4] = zero;
    w[0x4c / 4] = 0x4e6e6b28;
    w[0x50 / 4] = zero;
    w[0x54 / 4] = 0x3e9c0ebf;
    w[0x1bc / 4] = zero;
    v[2] = 0x7f7fffff;
    p[2] = v[2];
    w[0x78 / 4] = v[2];
    t = v[3];
    p[3] = t;
    w[0x7c / 4] = t;
    w[0x60 / 4] = D_002A9EEC; w[0x64 / 4] = D_002A9EF0;
    w[0x68 / 4] = D_002A9EF4; w[0x6c / 4] = D_002A9EF8;
    w[0x80 / 4] = D_002A9ECC; w[0x84 / 4] = D_002A9ED0;
    w[0x88 / 4] = D_002A9ED4; w[0x8c / 4] = D_002A9ED8;
    w[0x98 / 4] = zero;
    unsigned char c = ((unsigned char *)this)[0x1a0];
    *(unsigned short *)&w[0x1b0 / 4] = a3;
    w[0x1a8 / 4] = zero;
    ((unsigned char *)this)[0x9c] = 0;
    w[0x1ac / 4] = 0x42c80000;
    ((unsigned char *)this)[0x1a0] = c & 0xe0;
    w[0x38 / 4] = D_002EFF50;
    D_002EFF50++;
    w[0x90 / 4] = zero;
    w[0x1b4 / 4] = zero;
    w[0x1b8 / 4] = 1;
    p[0] = D_002A9ECC; p[1] = D_002A9ED0; p[2] = D_002A9ED4; p[3] = D_002A9ED8;
    return this;
}

bool C_001A1850::func_001A1850(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x1bc) != 0;
}

int C_001A1860::func_001A1860(S_001A1860_Buf buf, S_001A1860_Quad q70, S_001A1860_Quad q80,
                              int a18, int a19, int a20, int a21, int a22)
{
    if (func_001D3F50() == 0) {
        goto fail;
    }
    if (unk1A4 == 0) {
        goto fail;
    }
    if ((a18 & 2) == 0 || (a18 & 4) != 0 || a21 != 0) {
        unk1A0 |= 4;
    }
    unk1A0 = MergeBit3((unsigned char)(a22 << 3), unk1A0);
    unk3C = buf;
    unk70 = q70;
    unk80 = q80;
    unk98 = a18;
    unk1A8 = a19;
    unk1AC = a20;
    return (int)this;
fail:
    v2();
    return 0;
}

void C_001A1930::func_001A1930(int count, N_001A1930 **nodes)
{
 Q_001A1930 position,velocity;
 position.x=position.y=position.z=0; position.w=1;
 velocity.x=velocity.y=velocity.z=0;
 distance=3.402823466e38F;
 for(int i=0;i<count;i++){
  O_001A1930 *o=nodes[i]->obj;
  if(o){ int x=((const volatile int*)&o->pos)[0], y=((const volatile int*)&o->pos)[1], z=((const volatile int*)&o->pos)[2]; ((int*)&position)[0]=x;((int*)&position)[1]=y;((int*)&position)[2]=z; }
  float d=func_0001CAF0(&pos,&position);
  if(d<distance){nearest=nodes[i]; distance=d;}
 }
 state &= ~2;
 if(flags&1){
  if(distance>range){
   if((flags&16)&&(state&1)) state &= ~1;
   state &= ~16;
   return;
  }
 }else if((distance>=1.2f*unk4C)) return;
 state |=2;
 O_001A1930 *o=*(O_001A1930 * volatile *)&nearest->obj;
 if(o){velocity.x=o->vel.x;velocity.y=o->vel.y;velocity.z=o->vel.z;}
 o=nearest->obj;
 if(o){int x=((const volatile int*)&o->pos)[0], y=((const volatile int*)&o->pos)[1], z=((const volatile int*)&o->pos)[2]; ((int*)&position)[0]=x;((int*)&position)[1]=y;((int*)&position)[2]=z;}
 { Q_001A1930 t;
 t.x=pos.x-position.x;t.y=pos.y-position.y;t.z=pos.z-position.z;t.w=1;
 if(!emitter) return;
 emitter->v20(t);
 }
 Q_001A1930 delta;
 delta.x=vel.x-velocity.x;delta.y=vel.y-velocity.y;delta.z=vel.z-velocity.z;delta.w=1;
 emitter->v21(delta);
}

int C_001A1C70::func_001A1B60(S_001A1C70_Obj *obj)
{
    if (obj != 0 && unk1BC != obj) {
        obj->func_001CB560(unk1BC);
    }
    unk1BC = obj;
    return 1;
}

int C_001A1B90::func_001A1B90()
{
    if (f1BC == 0)
        return 0;
    if (f1B4 != 0)
        return 1;
    return f1BC->v7();
}

int C_001A1C70::func_001A1C70(int a)
{
    if (unk1BC == 0) return 0;
    return unk1BC->v8(a);
}

