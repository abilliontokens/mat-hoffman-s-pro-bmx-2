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

int C_000292C0::func_000292C0() {
    if (f6a8) {
        f1fc->func_00133ED0();
        f1fc->func_00133F10(0);
        if (f1fc->fa7 & 0x20) {
            if (!f69c) {
                f6c8++;
                f6fc = 0;
            }
            if (f6c8 <= f6c4 && !(f760 < D_00275544)) {
                copy_295D0(&f6cc, f1fc->f54->f78);
                copy_295D0(&f6dc, f1fc->f54->f74);
                if (f69c) {
                    goto hit;
                } else {
                    Q_292C0 a, b, c, d;
                    a.x = 0; a.y = 0; a.z = 0; a.w = 1.0f;
                    b.x = 0; b.y = 0; b.z = 0; b.w = 1.0f;
                    f230->func_00197B40(&a, &b);
                    c = f1e0->f238;
                    c.w = 0;
                    d = *func_0001E9E0(&a, &c);
                    Q_292C0 e = *func_0001E9E0(&a, &d);
                    Q_292C0 g = *func_0001E9E0(&a, &f6dc);
                    float p = g.y * b.y + g.x * b.x + g.z * b.z;
                    float q = e.y * d.y + e.x * d.x + e.z * d.z;
                    float ap = abs_28CD0(p);
                    float aq = abs_28CD0(q);
                    if (!(aq > f6bc) && !(aq < f6c0) && !(ap > f6b4) && !(ap < f6b8)) {
                    hit:
                        Q_292C0 r;
                        f230->func_00198120(&r, &f6cc);
                        f6a4 = r.w < D_00275544 ? 1 : 0;
                        f69c = 1;
                        return 1;
                    }
                }
            }
        }
    }
    f69c = 0;
    return 0;
}

int C_295D0::func_000295D0(int activate) {
 if (!f704 && f6a8 && f714) {
 f200->func_00133ED0(); f200->func_00133F10(0);
 if (f200->fa7 & 0x20) {
 char *s=(char*)f200->f54;
 f6cc=**(Q_292C0**)(s+0x78); f6dc=**(Q_292C0**)(s+0x74);
 Q_292C0 v[8]; Q_292C0 *normal=&f6dc; Q_292C0 *origin=&f6cc;
 f6f4=0; f230->func_00198120(&v[5],&f6cc);
 v[0].x=v[0].y=v[0].z=0; v[0].w=1; v[2].x=v[2].y=v[2].z=0; v[2].w=1;
 f230->func_00197B40(&v[0],&v[2]);
 v[0]=*func_0001E9E0(&v[4],&v[0]); v[2]=*func_0001E9E0(&v[1],&v[2]);
 v[4]=*func_0001E9E0(&v[6],func_0001C610(&v[1],&v[0],&v[2]));
 v[1]=f1e0->f238; v[1]=*func_0001E9E0(&v[7],&v[1]);
 v[3].x=v[3].y=v[3].z=0; v[3].w=1; f230->func_00197E70(&v[3]);
 v[3].x-=origin->x;
 v[3].y-=origin->y;
 v[3].z-=origin->z;
 if (!(v[3].z*normal->z + (v[3].y*normal->y + v[3].x*normal->x) < D_00275544)) {
 float p=v[0].z*normal->z+(v[0].y*normal->y+v[0].x*normal->x);
 float q=v[1].y*normal->y+v[1].x*normal->x+v[1].z*normal->z;
 if (-f6f0 < q) { f704=0; f70c=0; return 0; }
 if (q+p <= -f6ec) {
 if (!activate) return 0;
 f704=1; f6a4=(v[4].y*normal->y+v[4].x*normal->x+v[4].z*normal->z < D_00275544)?1:0;
 f714=0; f21c->func_0011A550(&f6cc,&f6dc); func_00027C30(); return 1;
 }
 }
 f704=0; f70c=0;
 }
 }
 return 0;
}

void C_000298F0::func_000298F0(int a0)
{
    float t;
    V4_000298F0 v;
    f230->func_001994C0(0, &f10C, &f11C);
    if ((f468 != 0 || f704 != 0 || f70C != 0 || f680 != 0 || f1E8->f68 != 0) && f5C8 == 0) {
        if (f468 != 0) {
            t = f5C0;
            v = D_002A1110;
        } else if (f704 != 0 || f70C != 0 || f460 != 0) {
            t = D_00275544;
            v = D_002A1110;
        } else if (f680 != 0 || f1E0->f28 < D_00275548) {
            t = D_00275544;
            v = f1E8->f1A0;
        } else {
            float c = f1E0->f26C * f60C * D_002766A0;
            c = AsmMaxF(c, -1.0f);
            c = AsmMinF(c, 1.0f);
            if (f20C->f30 != 0) {
                t = func_00011020(func_00011040(c, -f614), f614);
            } else {
                t = func_00011020(func_00011040(c, -f610), f610);
            }
            if (f1E0->f250 < D_00275544 && f20C->f30 == 0) {
                t = -t;
            }
            v = f1E8->f1A0;
        }
        func_00158390(-t, f10C, v, &f12C);
    } else {
        f220->func_000269B0(f11C.x, FLT_MAX_298F0, FLT_MAX_298F0);
        f224->func_000269B0(f11C.y, FLT_MAX_298F0, FLT_MAX_298F0);
        f228->func_000269B0(f11C.z, FLT_MAX_298F0, FLT_MAX_298F0);
        f12C = f11C;
    }
}
