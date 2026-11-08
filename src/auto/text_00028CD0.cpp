/* 5 functions from 0x00028CD0 to 0x00029BD0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "asm_helpers.h"
struct C_00029290 {
    undefined4 func_00029290(void);
};

struct Q_292C0 { float x, y, z, w; };
static inline float dot_295D0(const Q_292C0 &a, const Q_292C0 &b) { return a.y*b.y + a.x*b.x + a.z*b.z; }
static inline Q_292C0 subtract_295D0(const Q_292C0 &a, const Q_292C0 &b) { Q_292C0 r; r.x=a.x-b.x; r.y=a.y-b.y; r.z=a.z-b.z; r.w=a.w-b.w; return r; }
static __forceinline void copy_295D0(Q_292C0 *dst, const Q_292C0 *src) { *dst = *src; }
struct Q_292C0_Src { char pad0[0x74]; Q_292C0 *f74; Q_292C0 *f78; };
struct Q_292C0_Obj {
    char pad0[0x54]; Q_292C0_Src *f54; char pad58[0xa7 - 0x58]; unsigned char fa7;
    void func_00133ED0(); float func_00133F10(int);
};
struct Q_292C0_Orient { void func_00197E70(Q_292C0 *out); void func_00197B40(Q_292C0 *a, Q_292C0 *b); Q_292C0 *func_00198120(Q_292C0 *out, Q_292C0 *in); };
struct Q_292C0_Aux { char pad0[0x238]; Q_292C0 f238; };
Q_292C0 *func_0001E9E0(Q_292C0 *out, Q_292C0 *in);
struct C_000292C0 {
    char pad0[0x1e0]; Q_292C0_Aux *f1e0; char pad1e4[0x18]; Q_292C0_Obj *f1fc; char pad200[0x30]; Q_292C0_Orient *f230;
    char pad234[0x69c - 0x234]; int f69c; char pad6a0[4]; int f6a4; int f6a8; char pad6ac[8]; float f6b4, f6b8, f6bc, f6c0; int f6c4, f6c8; Q_292C0 f6cc, f6dc; char pad6ec[0x6fc - 0x6ec]; int f6fc; char pad700[0x760 - 0x700]; float f760;
    int func_000292C0();
};
Q_292C0 *func_0001C610(Q_292C0 *, Q_292C0 *, Q_292C0 *);
struct C_295D0_Event { void func_0011A550(Q_292C0 *, Q_292C0 *); };
struct C_295D0 {
 char p0[0x1e0]; Q_292C0_Aux *f1e0; char p1e4[0x1c]; Q_292C0_Obj *f200; char p204[0x18]; C_295D0_Event *f21c; char p220[0x10]; Q_292C0_Orient *f230; char p234[0x470]; int f6a4,f6a8; char p6ac[0x20]; Q_292C0 f6cc,f6dc; float f6ec,f6f0; int f6f4; char p6f8[0xc]; int f704; char p708[4]; int f70c; char p710[4]; int f714;
 int func_000295D0(int); void func_00027C30();
};
struct C_28CD0_Call { void func_0005DA40(void *); void func_0005DA80(int); int func_00026A70(int); void func_000B6080(void *); void func_00026130(); };
static __forceinline float abs_28CD0(float v)
{
    volatile float t = v;
    volatile unsigned int u = *(volatile unsigned int *)&t & 0x7fffffff;
    return *(volatile float *)&u;
}
struct S_28CD0_Arg {
    char pad0[8];
    int f8;
    char padC[4];
    int f10;
    char pad14[0x40 - 0x14];
    Q_292C0 f40;
};
struct S_28CD0 {
    char pad0[0x1e0];
    Q_292C0_Aux *f1e0;
    char pad1e4[4];
    C_28CD0_Call *f1e8;
    char pad1ec[0x210 - 0x1ec];
    C_28CD0_Call *f210;
    C_28CD0_Call *f214;
    C_28CD0_Call *f218;
    char pad21c[0x230 - 0x21c];
    Q_292C0_Orient *f230;
    char pad234[0x468 - 0x234];
    int f468;
    char pad46c[4];
    int f470;
    char pad474[4];
    int f478;
    int f47c;
    int f480;
    int f484;
    int f488;
    char pad48c[0x4ac - 0x48c];
    float f4ac;
    char pad4b0[0x5f4 - 0x4b0];
    C_28CD0_Call *f5f4;
    char pad5f8[0x680 - 0x5f8];
    int f680;
    int f684;
    char pad688[0x738 - 0x688];
    int f738;
    char pad73c[4];
    int f740;
    char pad744[0x760 - 0x744];
    float f760;
};
struct C_28CD0 { char data[0x764]; void func_00028CD0(void *); void func_00027C30(); };
void func_00026340(Q_292C0 *, Q_292C0 *);
float func_0014F510(float);
extern float D_002756DC, D_00275F58;
extern double D_00276698;
extern int D_002B9108;
extern Q_292C0 D_002A10F0;
extern float D_00275544;
#define FLT_MAX_298F0 3.402823466e+38f

struct V4_000298F0 {
    float x, y, z, w;
};

static __forceinline void InitV4_00028CD0(V4_000298F0 *v)
{
    v->z = 0;
    v->y = 0;
    v->x = 0;
    v->w = 1.0f;
}

extern float D_00275544;
extern float D_00275548;
extern float D_002766A0;
extern V4_000298F0 D_002A1110;

float func_00011040(float a, float b);
float func_00011020(float a, float b);
void func_00158390(float f, V4_000298F0 a, V4_000298F0 b, V4_000298F0 *out);

struct C_000269B0 {
    void func_000269B0(float a, float b, float c);
};

struct C_001994C0 {
    void func_001994C0(int a, V4_000298F0 *b, V4_000298F0 *c);
};

struct S_298F0_A {
    char pad0[0x28];
    float f28;
    char pad2C[0x250 - 0x2C];
    float f250;
    char pad254[0x26C - 0x254];
    float f26C;
};

struct S_298F0_B {
    char pad0[0x68];
    int f68;
    char pad6C[0x1A0 - 0x6C];
    V4_000298F0 f1A0;
};

struct S_298F0_C {
    char pad0[0x30];
    int f30;
};

struct C_000298F0 {
    char pad0[0x10C];
    V4_000298F0 f10C;
    V4_000298F0 f11C;
    V4_000298F0 f12C;
    char pad13C[0x1E0 - 0x13C];
    S_298F0_A *f1E0;
    char pad1E4[4];
    S_298F0_B *f1E8;
    char pad1EC[0x20C - 0x1EC];
    S_298F0_C *f20C;
    char pad210[0x220 - 0x210];
    C_000269B0 *f220;
    C_000269B0 *f224;
    C_000269B0 *f228;
    char pad22C[4];
    C_001994C0 *f230;
    char pad234[0x460 - 0x234];
    int f460;
    char pad464[4];
    int f468;
    char pad46C[0x5C0 - 0x46C];
    float f5C0;
    char pad5C4[4];
    int f5C8;
    char pad5CC[0x60C - 0x5CC];
    float f60C;
    float f610;
    float f614;
    char pad618[0x680 - 0x618];
    int f680;
    char pad684[0x704 - 0x684];
    int f704;
    char pad708[4];
    int f70C;
    void func_000298F0(int a0);
};


void C_28CD0::func_00028CD0(void *arg0)
{
    S_28CD0 *self = (S_28CD0 *)this;
    V4_000298F0 a, b, c, d, e, f, g, h, up;
    V4_000298F0 neg, cross;
    V4_000298F0 *p;
#define SELF (*(S_28CD0 *volatile *)&self)
#define ARG (*(S_28CD0_Arg *volatile *)&arg0)

    a.z = a.y = a.x = 0; a.w = 1;
    b.z = b.y = b.x = 0; b.w = 1;
    c.z = c.y = c.x = 0; c.w = 1;
    d.z = d.y = d.x = 0; d.w = 1;
    e.z = e.y = e.x = 0; e.w = 1;
    f.z = f.y = f.x = 0; f.w = 1;
    g.z = g.y = g.x = 0; g.w = 1;
    h.z = h.y = h.x = 0; h.w = 1;
    up.x = 0; up.y = 1; up.z = 0; up.w = 1;
    if (SELF->f478 == 0) {
        return;
    }
    if (SELF->f760 < D_00275544 || ARG->f8 == 0) {
        SELF->f470 = 0;
        return;
    }
    SELF->f230->func_00197B40((Q_292C0 *)&a, (Q_292C0 *)&b);
    f = a;
    f.y = 0;
    func_00026340((Q_292C0 *)&f, (Q_292C0 *)&f);
    p = (V4_000298F0 *)&SELF->f1e0->f238;
    c = *p;
    e = c;
    e.y = 0;
    func_00026340((Q_292C0 *)&e, (Q_292C0 *)&e);
    func_00026340((Q_292C0 *)&d, (Q_292C0 *)&c);
    p = (V4_000298F0 *)&ARG->f40;
    g = *p;
    func_00026340((Q_292C0 *)&g, (Q_292C0 *)&g);
    if (abs_28CD0(g.y) > D_002756DC) {
        SELF->f470 = 0;
        return;
    }
    h = g;
    h.y = 0;
    func_00026340((Q_292C0 *)&h, (Q_292C0 *)&h);
    neg = *(V4_000298F0 *)func_0001E9E0((Q_292C0 *)&up,
        func_0001C610((Q_292C0 *)&cross, (Q_292C0 *)&h, (Q_292C0 *)&up));
    up.x = neg.x * D_00275F58;
    up.y = neg.y * D_00275F58;
    up.z = neg.z * D_00275F58;
    if (func_0014F510((float)(D_00276698 - SELF->f4ac)) < abs_28CD0(g.x * d.x + d.y * g.y + g.z * d.z)) {
        SELF->f470 = 0;
        return;
    }
    SELF->f210->func_0005DA40(ARG);
    SELF->f210->func_0005DA80(2);
    if (SELF->f1e8->func_00026A70(D_002B9108) != 0 || SELF->f680 != 0) {
        SELF->f480 = 0;
        SELF->f218->func_000B6080(SELF->f210);
    } else {
        if (ARG->f10 == 0) {
            SELF->f480 = 1;
        } else {
            SELF->f480 = (SELF->f684 != 0) + 2;
            if (ARG->f10 == 1) {
                if (neg.x * e.x + neg.y * e.y + neg.z * e.z >= D_00275544) {
                    SELF->f470 = 0;
                    return;
                }
            } else {
                if (up.x * e.x + up.y * e.y + up.z * e.z >= D_00275544) {
                    SELF->f470 = 0;
                    return;
                }
            }
        }
        SELF->f214->func_000B6080(SELF->f210);
        SELF->f5f4->func_00026130();
        SELF->f484 = 0;
        SELF->f488 = 0;
    }
    SELF->f468 = 1;
    SELF->f470 = 1;
    ((C_28CD0 *)SELF)->func_00027C30();
    SELF->f47c = 1;
    SELF->f738 = 0;
    SELF->f740 = 0;
    p = (V4_000298F0 *)&SELF->f1e0->f238;
    *p = *(V4_000298F0 *)&D_002A10F0;
#undef SELF
#undef ARG
}

undefined4 C_00029290::func_00029290(void)
{
  int in_ECX = (int)this;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*(int *)(in_ECX + 0x468) != 0) && (*(int *)(in_ECX + 0x210) != 0)) &&
     (*(int *)(*(int *)(in_ECX + 0x210) + 0x78) == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

