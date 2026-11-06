/* 23 functions from 0x00132DE0 to 0x00133D90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
void func_001E891B(void *p);
int func_001EA426(const char *a, const char *b);
extern float D_00276610;
extern float D_00275544;

struct S_00133A30 {
    char pad0[0x21];
    u8 f21;
    char pad22[6];
    char f28[0x20];
    float f48;
    char pad4c[4];
    int f50;
    char pad54[0x54];
    char fA8[8];
    char fB0[8];
    char fB8[0x78];
    char f130[0x60];
    int f190;
    char pad194[0xc];
    S_00133A30 **f1A0;
    char pad1a4[0xc];
    char f1B0[0x14];
    int f1C4;
    int f1C8;
};

float func_0011FDF0(char *p, float *a, float *b);
int func_00122810(char *a, char *b, float *c, float d, int e, char *f);
int func_00123EF0(float *a, float b, int c, int d, int *e, char *f, char *g);

struct C_0013B210 {
    void func_0013C8A0(int a, void *b, int c, int d);
    int func_0013D310(char *a, char *b, int *c, int *d, int e);
    void func_0013C110(int a);
};
extern "C" char *strcpy(char *, const char *);
extern "C" char *strcat(char *, const char *);
extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strcpy, strlen, strcat)
extern "C" char *strcpy(char *, const char *);
extern "C" char *strcat(char *, const char *);
extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strcpy, strlen, strcat)
void func_00132E90(int h, int *out);
void func_00030F30(char *a, char *b);
void *func_001E8A44(unsigned int size);
char *func_001E8BF0(char *a, char *b, int n);
extern char D_002A4C10[];
extern char D_002A4C0F[];
extern char D_00284644[];
extern char D_0028463C[];
extern char D_00275FB4[];
extern char D_00284638[];
struct C_0017F050 {
    C_0017F050 *func_0017F050(int a);
    void func_0017F0A0(int a);
    void func_00180600(int a, int b);
};
struct C_0019DA80 {
    C_0019DA80 *func_0019DA80(int a);
    void func_00129920(int a);
    void func_0019ECB0(int a, int b);
    void func_0019F780(int a, int b);
};
struct C_0019B700 {
    C_0019B700 *func_0019B700(int a);
    void func_00129920(int a);
    void func_0019C690(int a, int b);
    void func_0019D6C0(int a, int b);
};
extern C_0013B210 *D_002BEAAC;

/* name table: count followed by 0x20-byte name slots */
struct C_00132E20 {
    int count;
    char names[1][0x20];
    int func_00132E20(char *name);
};

struct C_001BC6E0 {
    unsigned char func_001BC6E0(char *name);
};
extern C_001BC6E0 *D_002AAEC8;
extern unsigned char D_002A4330;
extern unsigned char D_002A4331;
extern char D_00282AA8[];
extern char D_00282A9C[];
extern int D_0028464C;

struct V4_00132EB0 {
    float x, y, z, w;
    V4_00132EB0(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};

struct C_00132EB0 {
    void *vtbl;
    char pad4[0x20];
    unsigned short f24;
    unsigned char f26;
    unsigned char f27;
    int f28, f2C, f30;
    int f34, f38, f3C, f40, f44;
    int f48, f4C, f50, f54, f58, f5C, f60, f64, f68;
    char f6C, f6D;
    char pad6E[2];
    int f70, f74, f78, f7C, f80, f84, f88, f8C, f90, f94, f98, f9C, fA0;
    unsigned short fA4;
    unsigned char fA6;
    unsigned char fA7;
    void func_00157600(int a);
    C_00132EB0 *func_00132EB0(int a);
};

struct C_00132DE0 {
    void func_001329F0(void);
    void func_00157660(void);
    void *func_00132DE0(int flags);
};

struct C_00132DE0_Outer {
    char pad0[0x294];
    C_00132DE0 sub294;
};

struct C_00133020 {
    char pad0[0xa7];
    unsigned char fA7;
    void func_001D3F50(void);
    void func_00133020(unsigned int v);
};

struct C_00133700 {
    void func_00133700(void);
};

struct C_00133730 {
    char pad0[0x60];
    int unk60;
    char pad64[0x4];
    int unk68;
    void func_00133730(int a0, int a1);
};

struct C_00133570 {
    char pad0[0x80];
    int unk80;
    void func_00133570(int a0);
};

struct C_001334E0 {
    char pad0[0x74];
    int unk74;
    void func_001334E0(int a0);
};

extern float D_002755E8;

struct S_00133B90_Node {
    char pad0[2];
    u8 f2;
    int func_0014CA60(void);
    S_00133A30 *func_0014CA80(int i);
};

struct S_00133B90_Iter {
    char pad0[0x40];
    void func_001A46F0(void);
    void func_001A4790(int a, int b, float *c, float *d, int e, int f, int g);
    S_00133B90_Node *func_001A4840(void);
    void func_001A4A20(void);
};

struct C_001332E0 {
    char pad0[0x21];
    u8 f21;
    char pad22[0x46];
    int f68;
    char pad6c[4];
    int f70;
    int f74;
    C_001332E0 **f78;
    int f7c;
    int f80;
    C_001332E0 **f84;
    int f88;
    int f8c;
    int *f90;
    int f94;
    char pad98[0xf];
    u8 fA7;
    int func_001332E0(C_001332E0 *o);
};

static __forceinline int ListHas(C_001332E0 **list, int n, C_001332E0 *x)
{
    int i;
    for (i = 0; i < n; i++) {
        if (list[i] == x) {
            return 1;
        }
    }
    return 0;
}

void *func_001E8A44(int size);
void func_001E891B(void *ptr);
int func_00135C70(int a, int b, int c, int d);

struct S_00133140_Cam {
    char pad0[0x28];
    S_00133140_Cam *func_00193490(void);
    void func_00193500(void);
    void func_001938C0(void *a, int b, int c, void *vecA, void *vecB, int d);
    void func_00193950(void *a, void *vecA, void *vecB, int d);
};

struct C_00133070 {
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
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30(void *a, void *b);
    char pad4[0x20];
    int f24;
    char pad28[0x20];
    int f48;
    char pad4c[0x8];
    void *f54;
    char pad58[0x40];
    S_00133140_Cam *f98;
    char pad9c[0x8];
    s16 fA4;
    u8 fA6;
    u8 fA7;
    void func_00157BF0(int a, int b);
    void func_00133070(void);
    void func_00133090(int a, int b);
    void func_00133140(int a, int b);
    void func_00133210(void);
};

struct S_001332A0_Node {
    void func_00193500(void);
    void func_00193870(void *p);
};

struct C_001332A0 {
    char pad0[0x24];
    int f24;
    char pad28[0x50];
    int *f78;
    int f7c;
    char pad80[0x4];
    int *f84;
    int f88;
    char pad8c[0x4];
    int *f90;
    int f94;
    S_001332A0_Node *f98;
    void func_001332A0(void);
    void func_001334F0(int item);
    void func_00133580(int item);
    void func_00133620(int item);
    void func_00133660(int item);
};


void *C_00132DE0::func_00132DE0(int flags)
{
    C_00132DE0_Outer *outer = (C_00132DE0_Outer *)((char *)this - 0x294);
    outer->sub294.func_001329F0();
    outer->sub294.func_00157660();
    if (flags & 1) {
        func_001E891B(outer);
    }
    return outer;
}

int C_00132E20::func_00132E20(char *name)
{
    int i;
    char *p;
    char *src;
    char *dst;
    char c;
    int bit;

    p = names[0];
    for (i = 0; i < count; p += 0x20, i++) {
        if (func_001EA426(name, p) == 0) {
            return 1 << i;
        }
    }
    bit = 1 << count;
    src = name;
    dst = names[count];
    do {
        c = *src++;
        *dst++ = c;
    } while (c != 0);
    count = count + 1;
    return bit;
}

int func_00132E90(int a0, int a1)
{
    D_002BEAAC->func_0013C8A0(a0, (void *)a1, 4, 1);
    return 1;
}

C_00132EB0 *C_00132EB0::func_00132EB0(int a)
{
 f24=0; f26=0xff; f27 &= 0xf8;
 func_00157600(a);
 vtbl=&D_0028464C;
 int *p=&f28;
 p[2]=0; p[1]=0; p[0]=0; p[3]=0x3f800000;
 p=(int*)&f38;
 p[2]=0; p[1]=0; p[0]=0; p[3]=0x3f800000;
 if(D_002A4330==0xff) D_002A4330=D_002AAEC8->func_001BC6E0(D_00282AA8);
 if(D_002A4331==0xff) D_002A4331=D_002AAEC8->func_001BC6E0(D_00282A9C);
 f26=D_002AAEC8->func_001BC6E0(D_00282AA8);
 f74=1; f80=1; f8C=1;
 fA7=(fA7&0x8e)|6;
 f70=-1;
 *(V4_00132EB0*)&f38 = V4_00132EB0(0.0f, -10000.0f, 0.0f, 1.0f);
 f50=0; f54=0; f9C=0; fA0=0; fA4=0; fA6=0;
 f78=0; f84=0; f7C=0; f88=0; f90=0; f94=0;
 f58=0; f5C=0; f60=0; f64=0; f68=0;
 f6C=0; f6D=0; f4C=0; f98=0;
 return this;
}

void C_00133020::func_00133020(unsigned int v)
{
    extern unsigned char D_002BA040;
    fA7 = (((((unsigned char)(v >> 3) & 1) << 1 | ((unsigned char)(v >> 2) & 1)) << 1 | ((unsigned char)(v >> 1) & 1)) << 1) | (fA7 & 0xf1);
    D_002BA040 = 0;
    func_001D3F50();
}

void C_00133070::func_00133070(void)
{
    if (f54 != 0) {
        func_001E891B(f54);
    }
    f54 = 0;
}

void C_00133070::func_00133090(int a, int b)
{
    if (func_00135C70(10, 0, a, 0x80) != 0) {
        fA4--;
    }
    if (func_00135C70(0xb, 0, a, 0x80) != 0) {
        fA4++;
    }
    if (func_00135C70(0x2e, 0, a, 0x80) != 0 && (fA7 & 0x40) != 0) {
        fA6++;
        if (fA6 > 7) {
            fA6 = 0;
        }
    }
    func_00157BF0(a, b);
}

void C_00133070::func_00133140(int a, int b)
{
    float vecB[4];
    float vecA[4];
    S_00133140_Cam local;
    S_00133140_Cam *cam;
    S_00133140_Cam *p;

    local.func_00193490();
    if ((fA7 & 8) != 0) {
        cam = &local;
    } else {
        p = (S_00133140_Cam *)func_001E8A44(0x28);
        cam = f98 = p ? p->func_00193490() : 0;
    }
    vecA[2] = 0.0f;
    vecA[1] = 0.0f;
    vecA[0] = 0.0f;
    vecA[3] = 1.0f;
    vecB[2] = 0.0f;
    vecB[1] = 0.0f;
    vecB[0] = 0.0f;
    vecB[3] = 1.0f;
    v30(vecA, vecB);
    cam->func_001938C0(&f24, a, b, vecA, vecB, 0);
    local.func_00193500();
}

void C_00133070::func_00133210(void)
{
    float vecB[4];
    float vecA[4];

    if (f98 != 0) {
        vecA[2] = 0.0f;
        vecA[1] = 0.0f;
        vecA[0] = 0.0f;
        vecA[3] = 1.0f;
        vecB[2] = 0.0f;
        vecB[1] = 0.0f;
        vecB[0] = 0.0f;
        vecB[3] = 1.0f;
        v30(vecA, vecB);
        f98->func_00193950(&f24, vecA, vecB, f48);
    }
}

void C_001332A0::func_001332A0(void)
{
    int func_001E891B(...);

    if (f98 != 0) {
        f98->func_00193870(&f24);
        S_001332A0_Node *p = f98;
        if (p != 0) {
            p->func_00193500();
            func_001E891B(p);
        }
        f98 = 0;
    }
}

int C_001332E0::func_001332E0(C_001332E0 *o)
{
    int i;
    int found;

    if (o == this) {
        return 0;
    }
    if ((o->fA7 & 4) == 0) {
        return 0;
    }
    if ((o->f21 & 1) == 0) {
        return 0;
    }
    if ((f70 & o->f68) == 0) {
        return 0;
    }
    if (f7c > 0) {
        for (i = 0; i < f7c; i++) {
            if (f78[i] == o) {
                if (f74 == 1) return 0;
                goto b;
            }
        }
        if (f74 == 0) return 0;
    }
b:
    if (o->f7c > 0) {
        for (i = 0; i < o->f7c; i++) {
            if (o->f78[i] == this) {
                if (o->f74 == 1) return 0;
                goto c;
            }
        }
        if (o->f74 == 0) return 0;
    }
c:
    if (f88 > 0) {
        for (i = 0; i < f88; i++) {
            if (f84[i] == o) {
                if (f80 == 1) return 0;
                goto d;
            }
        }
        if (f80 == 0) return 0;
    }
d:
    if (o->f88 > 0) {
        for (i = 0; i < o->f88; i++) {
            if (o->f84[i] == this) {
                if (o->f80 == 1) return 0;
                goto e;
            }
        }
        if (o->f80 == 0) return 0;
    }
e:
    if (f8c == 1) {
        for (i = 0; i < f94; i++) {
            if (f90[i] & o->f68) return 0;
        }
    } else {
        found = 0;
        for (i = 0; i < f94; i++) {
            if (f90[i] & o->f68) found = 1;
        }
        if (!found) return 0;
    }
    if (o->f8c == 1) {
        for (i = 0; i < o->f94; i++) {
            if (o->f90[i] & f68) return 0;
        }
        return 1;
    }
    found = 0;
    for (i = 0; i < o->f94; i++) {
        if (o->f90[i] & f68) found = 1;
    }
    if (!found) return 0;
    return 1;
}

void C_001334E0::func_001334E0(int a0) {
    unk74 = a0;
}

void C_001332A0::func_001334F0(int item)
{
    int func_001E83E8(...);
    int i;

    for (i = 0; i < f7c; i++) {
        if (f78[i] == item) {
            return;
        }
    }
    for (i = 0; i < f7c; i++) {
        if (f78[i] == 0) {
            f78[i] = item;
            return;
        }
    }
    f78 = (int *)func_001E83E8(f78, f7c * 4 + 4);
    f78[f7c] = item;
    f7c++;
}

void C_00133570::func_00133570(int a0) {
    unk80 = a0;
}

void C_001332A0::func_00133580(int item)
{
    int func_001E83E8(...);
    int i;

    for (i = 0; i < f88; i++) {
        if (f84[i] == item) {
            return;
        }
    }
    for (i = 0; i < f88; i++) {
        if (f84[i] == 0) {
            f84[i] = item;
            return;
        }
    }
    f84 = (int *)func_001E83E8(f84, f88 * 4 + 4);
    f84[f88] = item;
    f88++;
}

void C_001332A0::func_00133620(int item)
{
    int n = f88;
    int i = 0;

    if (n > 0) {
        int *list = f84;
        int *p = list;

        do {
            if (*p == item) {
                list[i] = 0;
                return;
            }
            i++;
            p++;
        } while (i < n);
    }
}

void C_001332A0::func_00133660(int item)
{
    int func_001E83E8(...);
    int i;

    for (i = 0; i < f94; i++) {
        if (f90[i] == item) {
            return;
        }
    }
    for (i = 0; i < f94; i++) {
        if (f90[i] == 0) {
            f90[i] = item;
            return;
        }
    }
    f90 = (int *)func_001E83E8(f90, f94 * 4 + 4);
    f90[f94] = item;
    f94++;
}

void C_00133700::func_00133700(void)
{
  int func_001E8390(...);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x90) != 0) {
    func_001E8390(*(int *)(in_ECX + 0x90));
    *(undefined4 *)(in_ECX + 0x90) = 0;
  }
  *(undefined4 *)(in_ECX + 0x94) = 0;
  return;
}

void C_00133730::func_00133730(int a0, int a1) {
    unk60 = a0;
    unk68 = a1;
}

#pragma intrinsic(strcpy, strlen, strcat)
void *func_00133750(int a0, char *path, int a2)
{
    char buf[260];
    int h;
    int ptr;
    int vC;
    int v10;
    int v14;
    void *obj = 0;

    if (D_002A4C10[0] != 0) {
        strcpy(buf, D_002A4C10);
        if (D_002A4C0F[strlen(D_002A4C10)] != '\\')
            func_001E8BF0(buf, D_00284644, 0x7f);
        strcat(buf, path);
    } else {
        strcpy(buf, path);
    }
    func_00030F30(buf, D_0028463C);
    h = -1;
    ptr = 0;
    if (D_002BEAAC->func_0013D310(buf, D_00275FB4, &h, &ptr, 1) == 0)
        return 0;
    if (ptr != 0) {
        v14 = *(int *)(ptr + 4);
    } else {
        int v18;
        D_002BEAAC->func_0013C8A0(h, &v18, 1, 4);
        D_002BEAAC->func_0013C8A0(h, &vC, 4, 1);
        D_002BEAAC->func_0013C8A0(h, &v10, 4, 1);
        if (v18 != 0x4d2 || func_001EA426((char *)&vC, D_00284638) != 0 || v10 != 1) {
            D_002BEAAC->func_0013C110(h);
            return 0;
        }
        func_00132E90(h, &v14);
    }
    switch (v14) {
    case 2: {
        void *m = func_001E8A44(0x110);
        C_0017F050 *o = m ? ((C_0017F050 *)m)->func_0017F050(1) : 0;
        o->func_0017F0A0(a2);
        o->func_00180600(a0, h);
        obj = o;
        break;
    }
    case 1: {
        void *m = func_001E8A44(0x1b0);
        C_0019DA80 *o = m ? ((C_0019DA80 *)m)->func_0019DA80(1) : 0;
        o->func_00129920(a2);
        if (ptr) o->func_0019ECB0(a0, ptr);
        else o->func_0019F780(a0, h);
        obj = o;
        break;
    }
    case 0: {
        void *m = func_001E8A44(0x1e0);
        C_0019B700 *o = m ? ((C_0019B700 *)m)->func_0019B700(1) : 0;
        o->func_00129920(a2);
        if (ptr) o->func_0019C690(a0, ptr);
        else o->func_0019D6C0(a0, h);
        obj = o;
        break;
    }
    }
    D_002BEAAC->func_0013C110(h);
    return obj;
}

float func_00133A30(float *a, float t, int c, S_00133A30 *s)
{
    float d;
    int loc[2];
    int i;

    if ((s->f21 & 1) == 0) {
        return D_00276610;
    }
    d = func_0011FDF0(s->f28, a, a + 4);
    if (d < t + s->f48) {
        switch (s->f50) {
        case 0:
            loc[0] = s->f1C4;
            loc[1] = s->f1C8;
            if (func_00123EF0(a, t, c, 0, loc, s->fB0, s->f1B0) != 0) {
                return D_00275544;
            }
            break;
        case 1:
            if (func_00122810(s->fA8, s->fB8, a, t, c, s->f130) != 0) {
                for (i = 0; i < s->f190; i++) {
                    S_00133A30 *e = s->f1A0[i];
                    int x = e->f1C4;
                    int y = e->f1C8;
                    loc[0] = x;
                    loc[1] = y;
                    if (func_00123EF0(a, t, c, 0, loc, e->fB0, e->f1B0) != 0) {
                        return D_00275544;
                    }
                }
            }
            break;
        }
    }
    return d;
}

int func_00133B90(float *box, float t, int flag, int count, S_00133A30 **list)
{
    int result;
    float tt;
    float vecA[4];
    float vecB[4];
    S_00133B90_Iter iter;
    S_00133B90_Node *node;
    float hx, hy;

    result = 0;
    tt = t * t;
    vecB[3] = 1.0f;
    vecA[3] = 1.0f;
    vecB[1] = 0.0f;
    *(int *)&vecA[1] = 0x7effffff;
    vecB[0] = (box[0] + box[4]) * D_002755E8;
    vecB[2] = (box[6] + box[2]) * D_002755E8;
    hx = (box[0] - box[4]) * D_002755E8;
    hy = (box[2] - box[6]) * D_002755E8;
    if (hx < D_00275544) {
        hx = -hx;
    }
    if (hy < D_00275544) {
        hy = -hy;
    }
    vecA[0] = hx + t;
    vecA[2] = hy + t;
    iter.func_001A46F0();
    iter.func_001A4790(0, 3, vecB, vecA, 0, 0, 1);
    for (node = iter.func_001A4840(); node != 0; node = iter.func_001A4840()) {
        if (node->f2 == D_002A4330) {
            S_00133A30 *obj = (S_00133A30 *)((char *)node - 0x24);
            int found = 0;
            int i;
            for (i = 0; i < count; i++) {
                if (obj == list[i]) {
                    found = 1;
                }
            }
            if (!found) {
                ((u8 *)obj)[0xa7] |= 0x10;
                if (func_00133A30(box, t, *(int *)&tt, obj) == D_00275544) {
                    result = 1;
                }
            }
        } else if (flag == 0 && node->f2 == D_002A4331) {
            int i;
            for (i = 0; i < node->func_0014CA60(); i++) {
                if (func_00133A30(box, t, *(int *)&tt, node->func_0014CA80(i)) == D_00275544) {
                    result = 1;
                }
            }
        }
    }
    iter.func_001A4A20();
    return result;
}

void func_00133D80(int a0) {
    extern int D_002B92EC;
    D_002B92EC = a0;
}

