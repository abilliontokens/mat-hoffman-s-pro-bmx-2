/* 24 functions from 0x00157810 to 0x001587F0, found by Ghidra. */
#include "common.h"

extern "C" char *__cdecl strcat(char *, const char *);
extern "C" unsigned int __cdecl strlen(const char *);

struct S_00158390_Vec4 {
    float x, y, z, w;
};
void func_0014F6E0(float a, float *s, float *c);

/* the run-time type information record of an object (typeid(*obj)) */
struct S_00157D40_TypeInfo {
    const char *func_001E9FA2(void);
};
S_00157D40_TypeInfo *func_001EA038(void *obj);
int func_0014FE80(const char *buf, int size, int count, void *file);

extern int D_002DF95C;
extern char D_00287354[], D_00276274[], D_002790E0[], D_00287330[], D_00287314[];
int func_001ADCC0(char *, int, const char *, ...);
void *func_0014FDF0(char *, const char *);
void func_0014FE50(void *);
int func_0014FE90(void *, const char *, ...);

struct S_00157810_Audio {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(int a);
};

extern S_00157810_Audio *D_002EFDB8;

/* child in the intrusive list headed at C_00157810::f10, linked through fC */
struct S_00157810_Child {
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
    virtual void v11(int a);
    virtual void v12(int a);
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18(int a);
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual int v22(int a, int b);
    virtual int v23(int a, int b);
    virtual int v24(int a, int b, int c, int d, int e);
    virtual void v25();
    int pad4;
    S_00157810_Child *f8;
    S_00157810_Child *fC;
    S_00157810_Child *f10;
    S_00157810_Child *f14;
    unsigned int f18;
    unsigned int f1C;
    char pad20;
    unsigned char f21;
    unsigned int func_00157770(void);
    int func_00157810(void);
};

struct C_00157810 {
    void *vtbl;
    int pad4;
    S_00157810_Child *f8;
    S_00157810_Child *fC;
    S_00157810_Child *f10;
    S_00157810_Child *f14;
    unsigned int f18;
    int f1C;
    char f20;
    unsigned char f21_b0 : 1;
    unsigned char f21_b1 : 1;
    unsigned char f21_b2 : 1;
    unsigned char f21_b3 : 1;
    int func_00157810(void);
    void func_001578A0(void);
    int func_001578D0(void);
    int func_00157920(void);
    int func_00157960(void);
    int func_001579B0(void);
    int func_00157A00(int a);
    int func_00157A50(int a);
    int func_00157A90(int a);
    int func_00157AE0(void);
    int func_00157B10(void);
    int func_00157B90(int a, int b);
    int func_00157BF0(int a, int b);
    int func_00157C50(int a, int b, int c, int d, int e);
    void func_00157D40(void *file, int a, int b);
    void func_00158270(char *name, int a, int b);
};

/* node with a parent link (f8) and a child link (fC), unlinked by func_00157CB0 */
struct C_00157CB0 {
    virtual void v0();
    virtual void v1();
    virtual int v2();
    int f4;
    C_00157CB0 *f8;
    C_00157CB0 *fC;
    int func_00157CB0(void);
};

extern int D_002DF948;

struct C_00158360 {
    void *vtbl;
    void func_0001DFF0(void);
    void *func_00158360(int flags);
};

void func_001E891B(void *p);

/* GIDFireball: GameObject (0x24 bytes) followed by five vec4s at 0x4c..0x9b and a flag byte at 0x9c */
struct C_00158590 {
    void *vtbl;
    char pad4[0x20];
    int u[30];
    unsigned char f9C;
    C_00158590 *func_00158590(int a0);
    void func_00157600(int a0);
};

extern int D_002A7B80, D_002A7B84, D_002A7B88, D_002A7B8C;
void *func_001E8A44(int size);
void func_00158510(struct S_00158510_Arg0 *a, struct S_00158510_Arg1 *b);

struct S_001586F0_Obj {
    char pad0[0x60];
    void *f60;
    char pad64[0x38];
    void *f9C;
    char padA0[7];
    unsigned char fA7;
    S_001586F0_Obj *func_0014AB30(int a);
    void func_00129920(int a);
    void func_001334E0(int a);
    void func_0014C1C0(int a, int b, int c);
    void func_0014AC30(int *v, int a);
    void func_001332A0(void);
    void func_00133140(int a, int b);
};

struct C_001586F0 {
    char pad0[0x40];
    S_001586F0_Obj *f40;
    void func_001586F0(int a);
};

extern int D_002DF948;

struct S_00158510_Vec4 {
    int x, y, z, w;
};

struct S_00158510_Src {
    char pad0[0x20];
    S_00158510_Vec4 f20;
    char pad30[0x48];
    S_00158510_Vec4 *f78;
};

struct S_00158510_Dst {
    char pad0[0x7c];
    S_00158510_Vec4 f7C;
    S_00158510_Vec4 f8C;
    unsigned char f9C;
};

struct S_00158510_Arg0 {
    char pad0[0x54];
    S_00158510_Src *f54;
    char pad58[8];
    S_00158510_Dst *f60;
};

struct S_00158510_Arg1 {
    char pad0[0x68];
    int f68;
};

extern int D_002BA160;
extern int D_002B9118;
extern int D_002B9108;
extern int D_002BA148;

/* node of the GameObject tree: prev/next siblings, first child, parent */
struct C_00157CF0 {
    void *vtbl;
    int refs;
    C_00157CF0 *f8;
    C_00157CF0 *fC;
    C_00157CF0 *f10;
    C_00157CF0 *f14;
    int func_00157CB0(void);
    int func_00157CF0(void);
    int func_0001E010(void);
};

unsigned int S_00157810_Child::func_00157770(void)
{
    S_00157810_Child *c;
    unsigned int r = 0;

    for (c = f10; c != 0; c = c->fC) {
        r |= c->func_00157770();
    }
    f1C = r;
    return f18 | r;
}

int C_00157810::func_00157810(void)
{
    S_00157810_Child *p;
    S_00157810_Child *c;
    unsigned int r;

    if (D_002DF948 != 0) {
        return 0;
    }
    if (f8 != 0) {
        f8->fC = fC;
    }
    if (fC != 0) {
        fC->f8 = f8;
    }
    if (f14 != 0 && f14->f10 == (S_00157810_Child *)this) {
        f14->f10 = fC;
    }
    p = (S_00157810_Child *)this;
    while (p->f14 != 0) {
        p = p->f14;
    }
    r = 0;
    for (c = p->f10; c != 0; c = c->fC) {
        r |= c->func_00157770();
    }
    p->f1C = r;
    f14 = 0;
    fC = 0;
    f8 = 0;
    return 1;
}

void C_00157810::func_001578A0(void)
{
    S_00157810_Child *c;

    for (c = f10; c != 0; c = c->fC) {
        c->v25();
    }
    f21_b3 = 1;
}

int C_00157810::func_001578D0(void)
{
    if (f1C & 0x1000) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if ((c->f21 & 1) && !(c->f21 & 8) && (c->f18 & 0x1000)) {
                D_002EFDB8->v7(0);
                c->v14();
            }
        }
    }
    return 1;
}

int C_00157810::func_00157920(void)
{
    if (f1C & 4) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if ((c->f21 & 1) && !(c->f21 & 8) && (c->f18 & 4)) {
                c->v15();
            }
        }
    }
    return 1;
}

int C_00157810::func_00157960(void)
{
    if (f1C & 8) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if ((c->f21 & 1) && !(c->f21 & 8) && (c->f18 & 8)) {
                D_002EFDB8->v7(0);
                c->v16();
            }
        }
    }
    return 1;
}

int C_00157810::func_001579B0(void)
{
    if (f1C & 0x10) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if ((c->f21 & 1) && !(c->f21 & 8) && (c->f18 & 0x10)) {
                D_002EFDB8->v7(0);
                c->v17();
            }
        }
    }
    return 1;
}

int C_00157810::func_00157A00(int a)
{
    if (f1C & 2) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if ((c->f21 & 1) && !(c->f21 & 0xc) && (c->f18 & 2)) {
                D_002EFDB8->v7(0);
                c->v12(a);
            }
        }
    }
    return 1;
}

int C_00157810::func_00157A50(int a)
{
    if (f1C & 1) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if ((c->f21 & 1) && !(c->f21 & 0xc) && (c->f18 & 1)) {
                c->v11(a);
            }
        }
    }
    return 1;
}

int C_00157810::func_00157A90(int a)
{
    f21_b2 = a;
    if (f1C & 0x20) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if ((c->f21 & 1) && !(c->f21 & 8) && (c->f18 & 0x20)) {
                c->v18(a);
            }
        }
    }
    return 1;
}

int C_00157810::func_00157AE0(void)
{
    if (f1C & 0x80) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if (!(c->f21 & 8)) {
                c->v20();
            }
        }
    }
    return 1;
}

int C_00157810::func_00157B10(void)
{
    if (f1C & 0x40) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if (!(c->f21 & 8)) {
                c->v19();
            }
        }
    }
    return 1;
}

int C_00157810::func_00157B90(int a, int b)
{
    if (f1C & 0x200) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if ((c->f21 & 1) && !(c->f21 & 8)) {
                if (c->v22(a, b)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int C_00157810::func_00157BF0(int a, int b)
{
    if (f1C & 0x400) {
        for (S_00157810_Child *c = f10; c != 0; c = c->fC) {
            if ((c->f21 & 1) && !(c->f21 & 8)) {
                if (c->v23(a, b)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int C_00157810::func_00157C50(int a, int b, int c, int d, int e)
{
    if (f1C & 0x800) {
        for (S_00157810_Child *ch = f10; ch != 0; ch = ch->fC) {
            if ((ch->f21 & 2) && !(ch->f21 & 8)) {
                if (ch->v24(a, b, c, d, e)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int C_00157CB0::func_00157CB0(void)
{
    if (D_002DF948 != 0) {
        return 0;
    }
    if (fC != 0) {
        fC->func_00157CB0();
    }
    if (f8 != 0) {
        f8->fC = 0;
    }
    fC = 0;
    return v2();
}

int C_00157CF0::func_00157CF0(void)
{
    if (D_002DF948 != 0) {
        return 0;
    }
    if (f10 != 0) {
        f10->func_00157CB0();
    }
    if (f8 != 0) {
        f8->fC = fC;
    }
    if (fC != 0) {
        fC->f8 = f8;
    }
    if (f14 != 0 && f14->f10 == this) {
        f14->f10 = fC;
    }
    return func_0001E010();
}

void C_00157810::func_00157D40(void *file, int a, int b)
{
    S_00157D40_TypeInfo *ti;
    char line[0x100];
    char num[0x14];
    char name[0x80];
    const char *src;
    char *dst;
    char ch;
    unsigned int w;
    int n;
    S_00157810_Child *c;

    ti = func_001EA038(this);
    char indent[3] = "  ";
    src = ti->func_001E9FA2();
    dst = name;
    do {
        ch = *src++;
        *dst++ = ch;
    } while (ch != 0);
    if (file == 0) {
        return;
    }
    line[0] = 0;
    for (n = b; n > 0; n--) {
        strcat(line, indent);
    }
    if (!f21_b0) {
        if (a & 1) {
            return;
        }
        strcat(line, "(");
        strcat(line, name);
        strcat(line, ")");
    } else {
        strcat(line, name);
    }
    strcat(line, ", 0x");
    func_001ADCC0(num, 0x14, "%X", this);
    strcat(line, num);
    if (a & 2) {
        w = f18;
        if (w == 0xffffffff) {
            strcat(line, " Wants all events");
        } else if (w == 0) {
            strcat(line, " Wants nothing");
        } else {
            if (w & 0x1) strcat(line, ", tick while inactive");
            if (w & 0x2) strcat(line, ", wants tick");
            if (w & 0x4) strcat(line, ", wants RenderPre3D");
            if (w & 0x8) strcat(line, ", wants Render3D");
            if (w & 0x10) strcat(line, ", wants RenderPost3D");
            if (w & 0x20) strcat(line, ", wants pause");
            if (w & 0x40) strcat(line, ", wants lost focus");
            if (w & 0x80) strcat(line, ", wants restore");
            if (w & 0x100) strcat(line, ", wants event handler");
            if (w & 0x200) strcat(line, ", wants keyup");
            if (w & 0x400) strcat(line, ", wants keydown");
            if (w & 0x800) strcat(line, ", wants packet handler");
            if (w & 0x1000) strcat(line, ", wants prepare geom");
        }
    }
    strcat(line, "\r\n");
    func_0014FE80(line, 1, strlen(line), file);
    c = f10;
    if (c != 0) {
        do {
            ((C_00157810 *)c)->func_00157D40(file, a, b + 1);
            c = c->fC;
        } while (c != 0);
    }
}

void C_00157810::func_00158270(char *name, int a, int b)
{
    char path[0x104];
    void *file;
    func_001ADCC0(path, 0x104, D_00287354, D_002DF95C);
    file = func_0014FDF0(path, D_00276274);
    while (file) {
        func_0014FE50(file);
        func_001ADCC0(path, 0x104, D_00287354, ++D_002DF95C);
        file = func_0014FDF0(path, D_00276274);
    }
    file = func_0014FDF0(path, D_002790E0);
    if (file) {
        if (name) func_0014FE90(file, D_00287330, name);
        else func_0014FE90(file, D_00287314);
        func_00157D40(file, a, b);
        func_0014FE50(file);
    }
}

void *C_00158360::func_00158360(int flags)
{
    extern int D_002DF94C;
    extern int D_0028715C;
    D_002DF94C--;
    vtbl = (void *)&D_0028715C;
    func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int func_00158390(float angle, S_00158390_Vec4 axis, S_00158390_Vec4 v, S_00158390_Vec4 *out)
{
    float s;
    float c;
    S_00158390_Vec4 p;
    S_00158390_Vec4 kd;
    S_00158390_Vec4 cr;
    float d;

    if (out == 0) {
        return 0;
    }
    func_0014F6E0(angle, &s, &c);
    d = axis.z * v.z + axis.x * v.x + axis.y * v.y;
    kd.x = axis.x * d;
    kd.y = axis.y * d;
    kd.z = axis.z * d;
    p.x = v.x - kd.x;
    p.y = v.y - kd.y;
    p.z = v.z - kd.z;
    cr.x = p.z * axis.y - p.y * axis.z;
    cr.y = p.x * axis.z - p.z * axis.x;
    cr.z = p.y * axis.x - p.x * axis.y;
    out->x = p.x * c + cr.x * s + kd.x;
    out->y = cr.y * s + p.y * c + kd.y;
    out->z = cr.z * s + p.z * c + kd.z;
    return 1;
}

void func_00158510(S_00158510_Arg0 *a, S_00158510_Arg1 *b)
{
    int v = b->f68;

    if ((v == D_002BA160 || v == D_002B9118 || v == D_002B9108) && v != D_002BA148) {
        S_00158510_Dst *dst = a->f60;
        S_00158510_Src *src = a->f54;

        dst->f7C = *src->f78;
        dst->f8C = src->f20;
        dst->f9C |= 1;
    }
}

C_00158590 *C_00158590::func_00158590(int a0)
{
    extern int D_002873B4;
    int *p;
    func_00157600(a0);
    vtbl = (void *)&D_002873B4;
    p = &u[10]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[14]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[18]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[22]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[26]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    u[0] = 0; u[1] = 0; u[2] = 0; u[4] = 0; u[5] = 0; u[7] = 0;
    u[3] = 0; u[6] = 0; u[8] = 0; u[9] = 0;
    u[10] = D_002A7B80; u[11] = D_002A7B84; u[12] = D_002A7B88; u[13] = D_002A7B8C;
    u[14] = D_002A7B80; u[15] = D_002A7B84; u[16] = D_002A7B88; u[17] = D_002A7B8C;
    u[18] = D_002A7B80; u[19] = D_002A7B84; u[20] = D_002A7B88; u[21] = D_002A7B8C;
    u[22] = D_002A7B80; u[23] = D_002A7B84; u[24] = D_002A7B88; u[25] = D_002A7B8C;
    u[26] = D_002A7B80; u[27] = D_002A7B84; u[28] = D_002A7B88; u[29] = D_002A7B8C;
    f9C &= 0xfc;
    return this;
}

void C_001586F0::func_001586F0(int a)
{
    int v[8];
    int i;
    int w;
    S_001586F0_Obj *o = (S_001586F0_Obj *)func_001E8A44(0xf4);
    f40 = o ? o->func_0014AB30(1) : 0;
    f40->func_00129920(2);
    f40->f60 = this;
    f40->f9C = (void *)func_00158510;
    f40->func_001334E0(1);
    f40->fA7 |= 1;
    f40->func_0014C1C0(1, 0, 0);
    for (i = 0; i < 2; i++) {
        v[i * 4 + 2] = 0;
        v[i * 4 + 1] = 0;
        v[i * 4] = 0;
        v[i * 4 + 3] = 0x3f800000;
    }
    int x = D_002A7B80, y = D_002A7B84, z = D_002A7B88;
    w = D_002A7B8C;
    v[6] = z; v[2] = z;
    v[5] = y; v[1] = y;
    v[4] = x; v[7] = w; v[0] = x; v[3] = w;
    f40->func_0014AC30(v, 0);
    f40->func_001332A0();
    f40->func_00133140(a, 2);
}

