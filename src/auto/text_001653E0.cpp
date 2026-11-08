/* 9 functions from 0x001653E0 to 0x001662A0, found by Ghidra. */
#include "common.h"
struct Obj1653 { virtual void v0(); virtual void v1(); virtual void get(float t, float *out); virtual void get2(float t, float *out); int f4; };
struct Set1653 { char pad[0x14]; Obj1653 **f14; Obj1653 **f18; int f1c; int f20; char pad24[0x14]; float f38; };
struct Node1653 { char pad0[0x170]; int f170; void func_00199300(void *p); void func_00199650(void *p); };
struct Elem1653 { char pad0[0x34]; Node1653 *f34; char pad38[8]; };
struct C1653 { char pad0[4]; void *f4; char pad8[4]; int fc; char pad10[8]; int f18; char pad1C[0x1D0]; Elem1653 *f1EC; int *f1F0; char pad1F4[0xC]; float *f200; float *f204; void func_001653E0(Set1653*, Set1653*, Set1653*, Set1653*, float, float, float, int, float); };
void func_0015C7D0(float *a, float *b, float *out, float t);
extern float D_00275544;

void func_001641B0(void *a, void *b);

struct Vec4_165EF0 {
    f32 x, y, z, w;
    __forceinline Vec4_165EF0 operator-(const Vec4_165EF0 &b) const { Vec4_165EF0 r; r.x=x-b.x; r.y=y-b.y; r.z=z-b.z; r.w=1.0f; return r; }
    Vec4_165EF0 operator*(float s) const { Vec4_165EF0 r; r.x=x*s; r.y=y*s; r.z=z*s; r.w=1.0f; return r; }
    Vec4_165EF0 operator+(const Vec4_165EF0 &b) const { Vec4_165EF0 r; r.x=x+b.x; r.y=y+b.y; r.z=z+b.z; r.w=1.0f; return r; }
};

struct C_001659D0_Obj4 {
    int func_00198330(int a);
};

struct C_001659D0_Elem {
    char pad0[0x34];
    int f34;
    char pad38[0x8];
};

struct C_001659D0 {
    char pad0[0x4];
    C_001659D0_Obj4 *f4;       /* 0x04 */
    char pad8[0x1E0];          /* 0x08 */
    int f1E8;                  /* 0x1E8 */
    C_001659D0_Elem *f1EC;     /* 0x1EC */
    void func_001659D0(int *a, int b, int c);
};

struct C_00165EF0_Obj {
    virtual void v0();
    virtual void v1(f32 a, Vec4_165EF0 *out);
    virtual void v2(f32 a, Vec4_165EF0 *out);
};

struct C_00165EF0_Arg1 {
    char pad0[0x18];
    C_00165EF0_Obj **f18;      /* 0x18 */
    char pad1C[0x1C];          /* 0x1C */
    f32 f38;                   /* 0x38 */
};

struct C_00165EF0 {
    char pad0[0xC];
    void *fC;                  /* 0x0C */
    int func_00164650(int a);
    void func_00165EF0(Vec4_165EF0 *out, C_00165EF0_Arg1 *a1, f32 a2, int a3, void *a4);
    Vec4_165EF0 func_00165EF0(C_00165EF0_Arg1 *a1, f32 a2, int a3, void *a4);
};

struct C_00165E20_Node {
    char pad0[0x170];
    int f170;
};

struct C_00165E20_Elem {
    char pad0[0x34];
    C_00165E20_Node *f34;
    char pad38[0x8];
};

struct C_00165E20_Item {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(f32 a, Vec4_165EF0 *out);
    int f4;
};

struct C_00165E20_Arg1 {
    char pad0[0x14];
    C_00165E20_Item **f14;     /* 0x14 */
    char pad18[0x20];          /* 0x18 */
    f32 f38;                   /* 0x38 */
};

void func_001640D0(void *a, int b, void *c, void *d);

struct C_00165E20 {
    char pad0[0x4];
    void *f4;                  /* 0x04 */
    char pad8[0x4];            /* 0x08 */
    void *fC;                  /* 0x0C */
    char pad10[0x1DC];         /* 0x10 */
    C_00165E20_Elem *f1EC;     /* 0x1EC */
    int *f1F0;                 /* 0x1F0 */
    int func_00164650(int a);
    Vec4_165EF0 func_00165E20(C_00165E20_Arg1 *a1, f32 a2, int a3, void *a4);
};

void *func_001E8AA5(unsigned int size);
void *func_001E8A44(unsigned int size);
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
char *func_001EA1EE(char *str);
char *func_001E95A4(char *s, const char *delim);
extern char D_00275678[];
extern char D_00287E50[];
extern char D_00287E40[];
extern int D_00276274;

struct C_0013B210 {
    int func_0013C9F0(char *name, int *mode);
    int func_0013C6E0(int h, char *buf, int size);
    void func_0013C110(int h);
};
extern C_0013B210 *D_002BEAAC;

struct C_00165D00_Node {
    void func_00199300(Vec4_165EF0 *p);
    void func_00199650(Vec4_165EF0 *p);
};

struct C_00165D00_Elem {
    char pad0[0x34];
    C_00165D00_Node *f34;      /* 0x34 */
    char pad38[8];
};

struct C_00165D00_Src {
    void func_00199A70(int a, Vec4_165EF0 *out);
};

struct C_00165D00_Slot {
    char pad0[8];
    C_00165D00_Src *f8;        /* 0x08 */
};

struct C_00165D00 {
    char pad0[0x1EC];
    C_00165D00_Elem *f1EC;     /* 0x1EC */
    char pad1F0[0x10];
    Vec4_165EF0 *f200;         /* 0x200 */
    Vec4_165EF0 *f204;         /* 0x204 */
    char pad208[4];
    int f20C;                  /* 0x20C */
    C_00165D00_Slot **f210;    /* 0x210 */
    Vec4_165EF0 *f214;         /* 0x214 */
    int f218;                  /* 0x218 */
    int *f21C;                 /* 0x21C */
    void func_00165D00(f32 scale);
};

/* node/elem pair driven by func_00165A20 (f170 + the two 0x1993xx sinks) */
struct C_00165A20_Node {
    char pad0[0x170];
    int f170;
    void func_00199300(Vec4_165EF0 *p);
    void func_00199650(Vec4_165EF0 *p);
};

struct C_00165A20_Elem {
    char pad0[0x34];
    C_00165A20_Node *f34;
    char pad38[8];
};

struct C_00165A20_Item {
    virtual void v0();
    virtual void v1();
    virtual void v2(f32 a, Vec4_165EF0 *out);
    virtual void v3(f32 a, Vec4_165EF0 *out);
    int f4;
};

struct C_00165A20_Arg1 {
    char pad0[0x14];
    C_00165A20_Item **f14;     /* 0x14 */
    C_00165A20_Item **f18;     /* 0x18 */
    int f1C;                   /* 0x1C */
    int f20;                   /* 0x20 */
};

struct C_00165A20 {
    char pad0[0x4];
    void *f4;                  /* 0x04 */
    char pad8[4];              /* 0x08 */
    int fC;                    /* 0x0C */
    char pad10[0x1DC];         /* 0x10 */
    C_00165A20_Elem *f1EC;     /* 0x1EC */
    int *f1F0;                 /* 0x1F0 */
    char pad1F4[0x18];         /* 0x1F4 */
    int f20C;                  /* 0x20C */
    C_00165D00_Slot **f210;    /* 0x210 */
    Vec4_165EF0 *f214;         /* 0x214 */
    int f218;                  /* 0x218 */
    int *f21C;                 /* 0x21C */
    void func_00165A20(C_00165A20_Arg1 *a1, int *unused, f32 a2, int *mask, void *a4);
};

extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);
extern char D_00287E48[];
#include <string.h>
#include "asm_helpers.h"

static inline int min_165F70(const int &a, const int &b) { return a > b ? b : a; }
static __forceinline int min_165F70_volatile(const volatile int &a, const volatile int &b) { int x = a, y = b; return x > y ? y : x; }

/* axis mirror used by func_00165A20: flip one of y/z/w by mode, then negate all three */
static __forceinline void mirror_165A20(Vec4_165EF0 *v, int mode)
{
    float z = v->z;
    float w = v->w;
    float t = v->y;

    if (mode == 0) {
        t = -t;
    } else if (mode == 1) {
        z = -z;
    } else if (mode == 2) {
        w = -w;
    }
    v->y = -t;
    v->z = -z;
    v->w = -w;
}

struct C_00165F70_Elem {
    char name[0x38];
    int f38;
    int f3C;
};

struct C_00165F70 {
    char pad0[0x98];
    char f98[0xF8];
    char f190[0x58];
    char pad1E8[4];
    C_00165F70_Elem *f1EC;
    char pad1F0[0xC];
    int f1FC;
    unsigned char func_00164650(const char *name);
    void func_00165F70(void);
};

struct C_00166190 {
    char pad0[0xE8];
    char fE8[0xA8];            /* 0xE8 */
    char f190[0x58];           /* 0x190 */
    int f1E8;                  /* 0x1E8 */
    char pad1EC[4];
    int *f1F0;                 /* 0x1F0 */
    unsigned char func_00164650(const char *name);
    void func_00166190(void);
};

struct C_00165980 {
    char pad0[0x1e8];
    int unk1E8;
    void func_00165980(int **out, int value);
};

void C1653::func_001653E0(Set1653 *a, Set1653 *b, Set1653 *c, Set1653 *d, float s, float blend1, float blend2, int flag, float t2)
{
    float t;
    int i;
    int idx;
    f18 = 0;
    t = s * a->f38;
    for (i = 0; i < a->f20; i++) {
        Vec4_165EF0 v[4];
        a->f18[i]->get(t, (float *)&v[0]);
        b->f18[i]->get(t, (float *)&v[1]);
        func_0015C7D0((float *)&v[1], (float *)&v[0], (float *)&v[1], blend1);
        c->f18[i]->get(t, (float *)&v[2]);
        d->f18[i]->get(t, (float *)&v[3]);
        func_0015C7D0((float *)&v[3], (float *)&v[2], (float *)&v[3], blend2);
        func_0015C7D0((float *)&v[3], (float *)&v[1], (float *)&v[1], blend1);
        if (flag) {
            mirror_165A20(&v[1], fc);
            idx = f1F0[a->f18[i]->f4];
        } else {
            idx = a->f18[i]->f4;
        }
        if (t2 > D_00275544 && f200) {
            v[0] = ((Vec4_165EF0 *)f200)[idx];
            func_0015C7D0((float *)&v[1], (float *)&v[0], (float *)&v[1], t2);
        }
        f1EC[idx].f34->func_00199300((void *)&v[1]);
    }
    for (i = 0; i < a->f1c; i++) {
        Vec4_165EF0 v[3];
        v[0].x = v[0].y = v[0].z = 0.0f; v[0].w = 1.0f;
        v[1].x = v[1].y = v[1].z = 0.0f; v[1].w = 1.0f;
        v[2].x = v[2].y = v[2].z = 0.0f; v[2].w = 1.0f;
        a->f14[i]->get2(t, (float *)&v[0]);
        b->f14[i]->get2(t, (float *)&v[1]);
        v[0] = v[1] - (v[1] - v[0]) * blend1;
        c->f14[i]->get2(t, (float *)&v[2]);
        v[0] = v[2] - (v[2] - v[0]) * blend2;
        d->f14[i]->get2(t, (float *)&v[2]);
        v[0] = v[2] - (v[2] - v[0]) * blend1;
        if (flag) {
            func_001640D0(f4, f1EC[f1F0[a->f14[i]->f4]].f34->f170, (void *)fc, &v[0]);
            idx = f1F0[a->f14[i]->f4];
        } else {
            idx = a->f14[i]->f4;
        }
        if (t2 > D_00275544 && f204) {
            v[1] = ((Vec4_165EF0 *)f204)[idx];
            v[0] = v[0] + (v[1] - v[0]) * t2;
        }
        f1EC[idx].f34->func_00199650((void *)&v[0]);
    }
}

void C_00165980::func_00165980(int **out, int value)
{
    int i;
    *out = (int *)func_001E8AA5(unk1E8 << 2);
    for (i = 0; i < unk1E8; i++) {
        (*out)[i] = value;
    }
}

void C_001659D0::func_001659D0(int *a, int b, int c)
{
    int idx = f4->func_00198330(b);
    int i;
    for (i = 0; i < f1E8; i++) {
        if (f1EC[i].f34 == idx) {
            a[i] = c;
            return;
        }
    }
}

void C_00165A20::func_00165A20(C_00165A20_Arg1 *a1, int *unused, f32 a2, int *mask, void *a4)
{
    Vec4_165EF0 v;
    int i;
    int j;

    for (i = 0; i < a1->f20; i++) {
        if (mask != 0 && mask[a1->f18[i]->f4] != 0) {
            continue;
        }
        for (j = 0; j < f218; j++) {
            if (f21C[j] == a1->f18[i]->f4) {
                break;
            }
        }
        a1->f18[i]->v2(*(float *)&unused, &v);
        if (a4 != 0) {
            Vec4_165EF0 temp;
            temp.x = v.y;
            double z = v.z, w = v.w;
            if (fC == 0) temp.x = -temp.x;
            else if (fC == 1) z = -z;
            else if (fC == 2) w = -w;
            v.y = -temp.x; v.z = (float)-z; v.w = (float)-w;
            f1EC[f1F0[a1->f18[i]->f4]].f34->func_00199300(&v);
        } else {
            f1EC[a1->f18[i]->f4].f34->func_00199300(&v);
        }
    }
    for (i = 0; i < a1->f1C; i++) {
        if (mask != 0 && mask[a1->f14[i]->f4] != 0) {
            continue;
        }
        for (j = 0; j < f218; j++) {
            if (f21C[j] == a1->f18[i]->f4) {
                break;
            }
        }
        v.x = v.y = v.z = 0.0f;
        v.w = 1.0f;
        a1->f14[i]->v3(*(float *)&unused, &v);
        if (a4 != 0) {
            func_001640D0(f4, f1EC[f1F0[a1->f14[i]->f4]].f34->f170, (void *)fC, &v);
            f1EC[f1F0[a1->f14[i]->f4]].f34->func_00199650(&v);
        } else {
            f1EC[a1->f14[i]->f4].f34->func_00199650(&v);
        }
    }
    for (i = 0; i < f20C; i++) {
        Vec4_165EF0 d;
        Vec4_165EF0 *p;
        v.x = v.y = v.z = 0.0f;
        v.w = 1.0f;
        f210[i]->f8->func_00199A70(0, &v);
        d.x = v.x * a2;
        d.y = v.y * a2;
        d.z = v.z * a2;
        p = &f214[i];
        p->x = d.x + p->x;
        p->y = d.y + p->y;
        p->z = d.z + p->z;
    }
}

void C_00165D00::func_00165D00(f32 scale)
{
    int i;

    for (i = 0; i < f218; i++) {
        f1EC[f21C[i]].f34->func_00199300(&f200[f21C[i]]);
        f1EC[f21C[i]].f34->func_00199650(&f204[f21C[i]]);
    }
    for (i = 0; i < f20C; i++) {
        Vec4_165EF0 v;
        Vec4_165EF0 d;
        Vec4_165EF0 *p;
        v.x = v.y = v.z = 0.0f;
        v.w = 1.0f;
        f210[i]->f8->func_00199A70(0, &v);
        d.x = v.x * scale;
        d.y = v.y * scale;
        d.z = v.z * scale;
        p = &f214[i];
        p->x = d.x + p->x;
        p->y = d.y + p->y;
        p->z = d.z + p->z;
    }
}

Vec4_165EF0 C_00165E20::func_00165E20(C_00165E20_Arg1 *a1, f32 a2, int a3, void *a4)
{
    Vec4_165EF0 v;
    int idx;
    a2 = a2 * a1->f38;
    idx = (u8)func_00164650(a3);
    v.x = v.y = v.z = 0.0f;
    v.w = 1.0f;
    a1->f14[idx]->v3(a2, &v);
    if (a4)
        func_001640D0(f4, f1EC[f1F0[a1->f14[idx]->f4]].f34->f170, fC, &v);
    return v;
}

Vec4_165EF0 C_00165EF0::func_00165EF0(C_00165EF0_Arg1 *a1, f32 a2, int a3, void *a4)
{
    Vec4_165EF0 v;
    float t = a2 * a1->f38;
    int idx = (u8)func_00164650(a3);
    a1->f18[idx]->v2(t, &v);
    if (a4) func_001641B0(fC, &v);
    return v;
}

void C_00165F70::func_00165F70(void)
{
    char buf[0x100];
    int id;
    int idx;
    char *p;
    char *tok;

    if (this->f1FC == 0) {
        int l = strlen(this->f190);
        int m = 0xff;
        int n = AsmMinI(m, l);
        func_001E8920(buf, this->f190, n);
        buf[n] = 0;
        strcat(buf, this->f98);
        id = D_002BEAAC->func_0013C9F0(buf, &D_00276274);
        if (id == -1) return;
        {
            while (D_002BEAAC->func_0013C6E0(id, buf, 0xFF)) {
                func_001EA1EE(buf);
                idx = func_00164650(func_001E95A4(buf, D_00287E50));
                if (idx != 0xff) {
                    tok = func_001E95A4(0, D_00287E48);
                    int l2 = strlen(tok);
                    int m2 = 0x31;
                    int n2 = AsmMinI(m2, l2);
                    func_001E8920(this->f1EC[idx].name, tok, n2);
                    C_00165F70_Elem *entry = &this->f1EC[idx];
                    entry->name[n2] = 0;
                    entry = &this->f1EC[idx];
                    entry->f38 = 0;
                    entry = &this->f1EC[idx];
                    entry->f3C = 1;
                    p = func_001E95A4(0, D_00287E40);
                    if (p) {
                        func_001EA1EE(p);
                        if (*p == 'T')
                            this->f1EC[idx].f38 = 1;
                    }
                }
            }
            D_002BEAAC->func_0013C110(id);
        }
        this->f1FC = 1;
    }
}

void C_00166190::func_00166190(void)
{
    char buf[0x104];
    int id;
    int a;
    int b;

    func_001ADCC0(buf, 0x104, D_00275678, f190, fE8);
    id = D_002BEAAC->func_0013C9F0(buf, &D_00276274);
    if (id != -1) {
        f1F0 = (int *)func_001E8A44(f1E8 << 2);
        while (D_002BEAAC->func_0013C6E0(id, buf, 0xFF)) {
            func_001EA1EE(buf);
            a = func_00164650(func_001E95A4(buf, D_00287E50));
            b = func_00164650(func_001E95A4(0, D_00287E40));
            f1F0[a] = b;
            f1F0[b] = a;
        }
        D_002BEAAC->func_0013C110(id);
    }
}

