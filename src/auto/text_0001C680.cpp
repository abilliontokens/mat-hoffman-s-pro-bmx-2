/* 40 functions from 0x0001C2E0 to 0x0001D280, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <string.h>
#include <xmmintrin.h>
#include "asm_helpers.h"
static __forceinline float clamp_ordered_1C870(float r, float c, float e)
{
    if (e > c) {
        if (r > e) return e;
        if (r < c) return c;
    } else {
        if (r < e) return e;
        if (r > c) return c;
    }
    return r;
}
struct Texture_1C2E0 {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
 virtual void Load(int,int,int);
 virtual void Create(void *,int,int,int,int,int,int,int,int);
 int f4,f8,fC; char pad[0x100];
 Texture_1C2E0 *func_001D6AD0(int);
};
struct Image_1C2E0 {char pad[14]; short width,height; unsigned char bits,pad13; void *pixels;};
Image_1C2E0 *func_001B3560(int,int);
void func_001B3970(Image_1C2E0 *);
struct C_0001C2E0 {
 virtual void v0(); virtual void v1(); virtual void Reset();
 int f4,f8,fC,f10,f14,f18; Texture_1C2E0 **f1C;
 C_0001C2E0 *func_0001C2E0(int,int);
};
struct S_0001C610_V4;
struct C_00197EC0_1C750 { void func_00197EC0(void *out, void *in); };
struct C_0001C750 {
 char pad0[0x130]; float f130[4]; float f140[4]; char pad150[0x40]; float f190[4]; char pad1A0[0x8C]; C_00197EC0_1C750 *f22C;
 void func_0001C750(S_0001C610_V4 a, S_0001C610_V4 b);
};
static __forceinline void Add3_1C750(float *a, float *b) { a[0]+=b[0]; a[1]+=b[1]; a[2]+=b[2]; }
static __forceinline __m128 cross_1C750(const float *a, const float *b) {
 return _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(a), _mm_shuffle_ps(_mm_loadu_ps(b), _mm_loadu_ps(b), 0xc9)),
                   _mm_mul_ps(_mm_loadu_ps(b), _mm_shuffle_ps(_mm_loadu_ps(a), _mm_loadu_ps(a), 0xc9)));
}
struct C_0001C710 {
    char pad0[0x130];
    float unk130;
    float unk134;
    float unk138;
    void func_0001C710(float a0, float a1, float a2, int a3);
};

struct C_0001CA50 {
    int unk0;
    void func_0001DFF0(void);
    void *func_0001CA50(int flags);
};

struct C_0001C5B0 {
    float x;
    float y;
    float z;
    C_0001C5B0 *func_0001C5B0(float *p);
};

static __forceinline void vec3_set(float *out, float x, float y, float z) {
    out[3] = 1.0f;
    out[0] = x;
    out[1] = y;
    out[2] = z;
}

struct C_0001C540 {
    char pad0[0x10];
    int unk10;
    int unk14;
    void func_0001C540(void);
};

struct C_0001CBF0 {
    char pad0[0x44];
    int unk44;
    int func_0001CBF0(void);
};

struct V4_1CE80 { float x, y, z, w; };
/* local vector with the default init the compiler shows: z, y, x = 0 then w = 1 */
struct V4C_1CE80 : V4_1CE80 {
    V4C_1CE80() { x = y = z = 0.0f; w = 1.0f; }
};
struct Obj_1CE80 {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
 virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
 virtual void SetA(V4_1CE80 v); virtual void SetB(V4_1CE80 v);
};
struct Node_1CE80 {
 void func_001A15C0(V4_1CE80 *out);
 void func_001A1540(void *a, void *b);
 void func_001A1620(void *out);
};
float func_0001CAF0(V4_1CE80 *a, float *b);
struct C_0001CE80 {
 char pad0[0x58]; int count; int pad5c; Node_1CE80 *nodes[1];
 int func_0001CE80(Obj_1CE80 *obj, float *p, float *q, int unused, float maxd);
};
extern float D_00275544;

struct S_0001C610_V4 {
    float x;
    float y;
    float z;
    float w;
};

static __forceinline float clamp_0001C870(double v, float lo, float hi) {
    if (hi <= lo) {
        if (v < hi) {
            return hi;
        }
        if (lo < v) {
            return lo;
        }
    } else {
        if (hi < v) {
            return hi;
        }
        if (v < lo) {
            return lo;
        }
    }
    return v;
}

struct V4C_0001C680 : S_0001C610_V4 {
    V4C_0001C680() { x = y = z = 0.0f; w = 1.0f; }
};

static __forceinline float cross_0001C610(float *a, float *b, int i, int j) {
    return b[j] * a[i] - b[i] * a[j];
}

static __forceinline float dot3_0001C680(float x, float y, float z, float *p) {
    return x * p[0] + y * p[1] + z * p[2];
}

struct C_0001CD50 {
    char pad0[0x5C];
    int unk5C;
    void func_0001CD50(void);
};

struct C_0001CD40 {
    char pad0[0x5C];
    int unk5C;
    void func_0001CD40(void);
};

struct C_0001C9B0 {
    int unk0;
    void func_0001C9B0(void);
};

struct C_0001C970 {
    int unk0;
    void func_0001C970(void);
};

struct C_0001C920 {
    int unk0;
    void func_0001C920(void);
};

struct C_0001C9C0 {
    int unk0;
    void func_00157660(void);
    void *func_0001C9C0(int flags);
};

struct C_0001CA80 {
    int unk0;
    void func_00157660(void);
    void *func_0001CA80(int flags);
};

struct C_0001C520 {
    int unk0;
    char pad4[0x14];
    int unk18;
    int unk1C;
    void func_0001E050(void);
    C_0001C520 *func_0001C520(void);
};

struct C_0013B210 {
    void func_0013B210(void *);
 void func_0013C8A0(int,void *,int,int);
 void func_0013C110(int);
 int func_0013AFD0(int);
 void func_0013AFF0(int,int,int);
};

extern C_0013B210 *D_002BEAAC;

struct C_0001C550 {
    int unk0;
    void func_0001C290(void);
    void func_0001DFF0(void);
    void *func_0001C550(int flags);
};

void func_001E891B(void *p);
void *func_001E8A44(int size);

struct S16_1A {
    int a;
    int b;
    int c;
    int d;
};

struct S36_1A {
    int f0;
    int f4;
    int f8;
    float fC;
    float f10;
    int f14;
    float f18;
    float f1C;
    float f20;
};

struct C_001A30D0 {
    C_001A30D0 *func_001A30D0(void *a0, int a1, int a2, int a3);
};

struct C_001A23F0 {
    char pad0[0x70];
    S16_1A f70;
    S16_1A f80;
    C_001A23F0 *func_001A23F0(S36_1A s0, S16_1A s1, S16_1A s2, int a17, int a18, int a19, int a20, int a21);
};

struct C_0001CD90 {
    void *func_0001CD90(int arg);
};

struct C_0001D0B0 {
    char pad0[4];
    void *f4;
    int f8;
    int fC;
    unsigned char f10;
    int func_0001D0B0(int count, int p2);
};

struct C_00157660 {
    void func_00157660(void);
};

/* object with a deleting destructor in vtable slot 0 */
struct S_0001D200_Obj {
    virtual void d0(int flags);
};

struct S_0001D200_Slot {
    void func_001A13F0(void);
};

/* AuralScape */
struct C_0001D200 {
    void *vtbl;
    char pad4[0x30];
    void *f34;
    char pad38[0x28];
    S_0001D200_Slot *slots[4];
    char pad70[4];
    void *f74;
    char pad78[0x10];
    void *f88;
    char pad8C[0x10];
    void *f9C;
    char padA0[0x14];
    S_0001D200_Obj *fB4;
    void func_0001D200(void);
};
extern int D_00275DFC;

static __forceinline void init_0001D0F0(int *p) {
    p[1] = 0;
    p[0] = 0;
    p[2] = 0;
    p[3] = 0;
    *(unsigned char *)(p + 4) &= 0xfe;
}

/* AuralScape constructor */
struct C_0001D0F0 {
    void *vtbl;
    char pad4[0x20];
    int f24, f28, f2C, f30;
    void *f34;
    int f38, f3C;
    unsigned char f40;
    char pad41[3];
    int f44, f48, f4C, f50, f54, f58, f5C, f60, f64, f68, f6C;
    int f70, f74, f78, f7C;
    unsigned char f80;
    char pad81[3];
    int f84, f88, f8C, f90;
    unsigned char f94;
    char pad95[3];
    int f98, f9C, fA0, fA4;
    unsigned char fA8;
    char padA9[3];
    int fAC;
    unsigned char fB0;
    void func_00157600(int a);
    C_0001D0F0 *func_0001D0F0(int a);
};
char *func_001E8AC0(const char *s, int c);
int func_00135C70(int a, int b, int c, int d);

struct C_0001CD60 {
    int func_00157BF0(int a, int b);
    void func_0001CD60(int a, int b);
};

struct C_0001CC00;

struct S_0001CC00_Slot {
    S_0001CC00_Slot *func_001D5350(void);
    int func_001A2510(C_0001CC00 *owner, int a, int b);
    void func_001A13F0(void);
    int func_001A15F0(int *p);
    int func_001A1580(float *a, float *b);
    int func_001A1650(int *p);
};

struct C_0001CC00 {
    char pad0[0x2C];
    int unk2C;
    char pad30[0x14];
    int unk44;
    char pad48[0x10];
    int unk58;
    char pad5C[4];
    S_0001CC00_Slot *slots[1];
    int func_0001CC00(int idx, int a, int b);
    int func_0001CC80(int idx);
    void func_0001CCE0(int idx, int *a, float *b, float *c, int *d);
};

struct C_0001CA30 {
    void *vtbl;
    int f4;
    void *f8;
    int fC;
    int f10;
    unsigned char f14;
    char pad15[3];
    int f18;
    void *f1C;
    int f20;
    int f24;
    unsigned char f28;
    char pad29[3];
    unsigned char f2C;
    char pad2D[3];
    C_0001CA30 *func_0001C9F0(void);
    void func_0001CA30(void);
    void *func_0001CAB0(unsigned char flags);
};

struct S_0001CBC0_Item {
    char pad0[0x90];
    float f90;
};

static __forceinline void set_vtbl_0001C9F0(void **p, void *v) {
    *p = v;
}

static __forceinline void clear_bit0_0001C9F0(unsigned char *p) {
    *p &= 0xfe;
}

static __forceinline void init_0001C9F0(C_0001CA30 *p) {
    p->f8 = 0;
    p->f4 = 0;
    p->fC = 0;
    p->f10 = 0;
    clear_bit0_0001C9F0(&p->f14);
    p->f1C = 0;
    p->f18 = 0;
    p->f20 = 0;
    p->f24 = 0;
    clear_bit0_0001C9F0(&p->f28);
    clear_bit0_0001C9F0(&p->f2C);
}

static __forceinline float vec3_abs(float x) {
    int i = *(int *)&x & 0x7fffffff;
    return *(float *)&i;
}

static __forceinline float bits_to_float_1C590(int v) {
    return *(float *)&v;
}

struct C_0001C8F0 {
    void *vtbl;
    char pad4[0x20];
    unsigned char f24;
    char pad25[3];
    int f28;
    int f2C;
    void *func_0001C8F0(int a);
    void func_00157600(int a);
};

struct C_0001C930 {
    void *vtbl;
    char pad4[4];
    unsigned char f8;
    char pad9[0x103];
    int f10C;
    int f110;
    int f114;
    int f118;
    int f11C;
    int f120;
    void *func_0001C930(void);
    void func_0001DFE0(void);
};

struct C_0001C980 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    void *func_0001C980(int a);
    void func_00157600(int a);
};

struct C_0001C4C0_Item {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void func_0001C4C0(int *);
};

struct C_0001C4C0 {
    char pad0[0x18];
    int unk18;
    C_0001C4C0_Item **unk1C;
    void func_0001C4C0(int *);
};

void func_0001C680(S_0001C610_V4 *out, float x, float y, float z, float w, float *m) {
    S_0001C610_V4 r;

    r.x = dot3_0001C680(x, y, z, m);
    r.y = dot3_0001C680(x, y, z, m + 4);
    r.z = dot3_0001C680(x, y, z, m + 8);
    r.w = 1.0f;
    *out = r;
}

void C_0001C710::func_0001C710(float a0, float a1, float a2, int a3) {
    unk130 = a0 + unk130;
    unk134 = a1 + unk134;
    unk138 = a2 + unk138;
}

void C_0001C750::func_0001C750(S_0001C610_V4 a, S_0001C610_V4 b) {
 if(this->f22C) {
 S_0001C610_V4 c, d, v;
 this->f22C->func_00197EC0(&v,&a);
 Add3_1C750(this->f130,&v.x);
 c.z=0; c.y=0; c.x=0; c.w=1;
 vec3_set(&d.x,b.x-this->f190[0],b.y-this->f190[1],b.z-this->f190[2]);
 AsmVec3Cross(&c.x, &d.x, &a.x);
 Add3_1C750(this->f140,&c.x);
 }
}

float func_0001C870(float a, float b, float c, float d, float e)
{
    if (d != b) {
        double r = (a-b)*(e-c)/(d-b)+c;
        if (e > c) {
            if ((float)r > e) return e;
            if ((float)r < c) return c;
        } else {
            if ((float)r < e) return e;
            if ((float)r > c) return c;
        }
        return r;
    }
    return D_00275544;
}

void *C_0001C8F0::func_0001C8F0(int a)
{
    extern int D_00275C0C;
    func_00157600(a);
    f24 |= 1;
    f28 = 0;
    f2C = 0;
    vtbl = (void *)&D_00275C0C;
    return this;
}

void C_0001C920::func_0001C920(void) {
    extern int D_00275C0C;
    int func_00157660(...);
    unk0 = (int)&D_00275C0C;
    func_00157660();
}

void *C_0001C930::func_0001C930(void)
{
    extern int D_00275C94;
    func_0001DFE0();
    f10C = 0;
    f110 = 0;
    f114 = 0;
    f118 = 0;
    f11C = 0;
    f120 = 0;
    f8 = 0;
    vtbl = (void *)&D_00275C94;
    return this;
}

void C_0001C970::func_0001C970(void) {
    extern int D_00275C94;
    int func_0001DFF0(...);
    unk0 = (int)&D_00275C94;
    func_0001DFF0();
}

void *C_0001C980::func_0001C980(int a)
{
    extern int D_00275CFC;
    func_00157600(a);
    vtbl = (void *)&D_00275CFC;
    f24 = 1;
    f28 = 0;
    return this;
}

void C_0001C9B0::func_0001C9B0(void) {
    extern int D_00275CFC;
    int func_00157660(...);
    unk0 = (int)&D_00275CFC;
    func_00157660();
}

void *C_0001C9C0::func_0001C9C0(int flags) {
    extern int D_00275C0C;
    void func_001E891B(void *);
    unk0 = (int)&D_00275C0C;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_0001CA30 *C_0001CA30::func_0001C9F0(void)
{
    extern int D_00275DAC;
    vtbl = (void *)&D_00275DAC;
    init_0001D0F0(&f4);
    init_0001D0F0(&f18);
    clear_bit0_0001C9F0(&f2C);
    return this;
}

void C_0001CA30::func_0001CA30(void)
{
    extern int D_00275DAC;
    vtbl = (void *)&D_00275DAC;
    func_001E891B(f1C);
    func_001E891B(f8);
}

void *C_0001CA50::func_0001CA50(int flags) {
    extern int D_00275C94;
    void func_001E891B(void *);
    unk0 = (int)&D_00275C94;
    func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_0001CA80::func_0001CA80(int flags) {
    extern int D_00275CFC;
    void func_001E891B(void *);
    unk0 = (int)&D_00275CFC;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_0001CA30::func_0001CAB0(unsigned char flags)
{
    extern int D_00275DAC;
    vtbl = (void *)&D_00275DAC;
    func_001E891B(f1C);
    func_001E891B(f8);
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

float func_0001CAF0(float *a, float *b)
{
    float d[2], dz;
    d[0] = vec3_abs(a[0] - b[0]);
    d[1] = vec3_abs(a[1] - b[1]);
    dz = vec3_abs(a[2] - b[2]);
    return AsmSqrtF(d[0] * d[0] + d[1] * d[1] + dz * dz);
}

void func_0001CB80(char *s) {
    char *dot = func_001E8AC0(s, '.');
    if (dot != 0) {
        memset(dot, 0, strlen(dot));
    }
}

int func_0001CBC0(S_0001CBC0_Item **a, S_0001CBC0_Item **b)
{
    return (*a)->f90 > (*b)->f90 ? -1 : 1;
}

int C_0001CBF0::func_0001CBF0(void) {
    return ++unk44 - 1;
}

int C_0001CC00::func_0001CC00(int idx, int a, int b) {
    void *mem = func_001E8A44(8);
    S_0001CC00_Slot *obj = mem != 0 ? ((S_0001CC00_Slot *)mem)->func_001D5350() : 0;
    slots[idx] = obj;
    if (obj != 0 && obj->func_001A2510(this, a, b) != 0) {
        unk58++;
        unk2C = 0;
        return 1;
    }
    S_0001CC00_Slot *p = slots[idx];
    if (p != 0) {
        p->func_001A13F0();
        func_001E891B(p);
    }
    slots[idx] = 0;
    return 0;
}

int C_0001CC00::func_0001CC80(int idx) {
    S_0001CC00_Slot *s = slots[idx];
    if (s != 0) {
        s->func_001A13F0();
        func_001E891B(s);
        slots[idx] = 0;
        unk58--;
        unk44--;
        unk2C = 0;
        return 1;
    }
    return 0;
}

void C_0001CC00::func_0001CCE0(int idx, int *a, float *b, float *c, int *d)
{
    if (slots[idx] != 0) {
        if (a != 0) {
            slots[idx]->func_001A15F0(a);
            unk2C++;
        }
        if (b != 0 && c != 0) {
            slots[idx]->func_001A1580(b, c);
        }
        if (d != 0) {
            slots[idx]->func_001A1650(d);
        }
    }
}

void C_0001CD40::func_0001CD40(void) {
    unk5C = 0;
}

void C_0001CD50::func_0001CD50(void) {
    unk5C = 1;
}

void C_0001CD60::func_0001CD60(int a, int b) {
    func_00135C70(0x1f, 0, a, 0x30);
    func_00157BF0(a, b);
}

void *C_0001CD90::func_0001CD90(int arg)
{
    int z = 0;
    void *mem = func_001E8A44(0x204);
    C_001A30D0 *obj = mem != 0 ? ((C_001A30D0 *)mem)->func_001A30D0(this, arg, 5, 1) : 0;

    if (obj == 0) {
        return 0;
    }
    C_001A23F0 *o = (C_001A23F0 *)obj;
    S36_1A s = { 0x168, 0x168, z, 1.0f, 1.0e9f, z, 0.3048f, 1.0f, 1.0f };

    o->func_001A23F0(s, o->f70, o->f80, 2, 0x41a00000, 0x42c80000, z, z);
    return obj;
}

int C_0001CE80::func_0001CE80(Obj_1CE80 *obj, float *p, float *q, int unused, float maxd)
{
    V4C_1CE80 best;
    V4C_1CE80 tmp;
    V4C_1CE80 m2;
    V4C_1CE80 m1;
    V4C_1CE80 m0;
    float **pp = &p;
    float bestd;
    int bi;
    int i;
    if (count > 0) {
        bi = 0;
        bestd = 3.4028235e38f;
        for (i = 0; i < count; i++) {
            float d;
            nodes[i]->func_001A15C0(&tmp);
            d = func_0001CAF0(&tmp, *pp);
            if (d < bestd) {
                bestd = d;
                best = tmp;
                bi = i;
            }
        }
        nodes[bi]->func_001A1540(&m2, &m1);
        nodes[bi]->func_001A1620(&m0);
        float *pv = *pp;
        V4C_1CE80 r;
        r.x = pv[0] - best.x; r.y = pv[1] - best.y; r.z = pv[2] - best.z; r.w = 1.0f;
        if (obj != 0 && bestd < maxd) {
            obj->SetA(r);
            V4C_1CE80 s;
            s.x = q[0] - m0.x; s.y = q[1] - m0.y; s.z = q[2] - m0.z; s.w = 1.0f;
            obj->SetB(s);
            return 1;
        }
    }
    return 0;
}

int C_0001D0B0::func_0001D0B0(int count, int p2)
{
    void *p = func_001E8A44(count * 4);

    f10 |= 1;
    fC = count;
    f4 = p;
    f8 = p2;
    return p != 0;
}

C_0001D0F0 *C_0001D0F0::func_0001D0F0(int a)
{
    int i;
    func_00157600(a);
    vtbl = &D_00275DFC;
    init_0001D0F0(&f30);
    init_0001D0F0(&f70);
    init_0001D0F0(&f84);
    init_0001D0F0(&f98);
    f48 = 0;
    f4C = 0;
    f54 = 0;
    f50 = 0;
    f58 = 0;
    f44 = 0;
    f24 = 0;
    for (i = 0; i < 4; i++) {
        ((int *)&f60)[i] = 0;
    }
    unsigned char b = fB0 | 1;
    fAC = -1;
    fB0 = b;
    f28 = 0;
    f5C = 1;
    f2C = 0;
    f34 = func_001E8A44(4);
    f40 |= 1;
    f3C = 1;
    f38 = 0x10;
    return this;
}

void C_0001D200::func_0001D200(void)
{
    int i;
    S_0001D200_Slot *s;

    vtbl = (void *)&D_00275DFC;
    for (i = 0; i < 4; i++) {
        s = slots[i];
        if (s != 0) {
            s->func_001A13F0();
            func_001E891B(s);
        }
    }
    if (fB4 != 0) {
        fB4->d0(1);
    }
    func_001E891B(f9C);
    func_001E891B(f88);
    func_001E891B(f74);
    func_001E891B(f34);
    ((C_00157660 *)this)->func_00157660();
}
