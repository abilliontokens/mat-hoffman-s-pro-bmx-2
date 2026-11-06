/* 14 functions from 0x0013D780 to 0x0013E6F0, found by Ghidra. */
#include "common.h"
#include <stdarg.h>

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);
void func_001E891B(void *p);
int func_001EA426(void *p, int a);

extern "C" int strcmp(const char *s1, const char *s2);
char *func_001E8920(char *dst, const char *src, int n);
int func_001ADD20(char *buf, int count, int a3, void *a4);

struct S_0013D780_Ent { int f0; void *name; int f8; unsigned char flagsC; char padD[0x1B]; };
struct S_0013D780_Slot { int id; int f88; int f8C; };
struct C_0013D780 {
    char pad0[8]; int cur; S_0013D780_Ent *ents; int count;
    char pad14[0x70]; S_0013D780_Slot slots[8]; int active;
    int func_0013D780(char *name, int a2, int a3, int *a4, void *a5, int a6, int *a7, int a8);
    void func_0013C5D0(S_0013D780_Ent *e, int a);
};

struct C_0013E170 {
    void func_0013E170(int index, char *name, int value);
};

struct S_0013E170_Entry {
    char pad0[0x230];
    char name[0x50];
    int value;
};

extern int D_00284C58;
extern int D_00100000;

#include <xmmintrin.h>

extern int D_00284DEC;
extern int D_00284D5C;
extern float D_00284DD8;

void __stdcall func_00201100(void *p);
void func_000263B0(void *a, void *b, void *c);
void func_0013E4A0(void *dst, void *src);
int __stdcall func_001FFA20(int a, void *b);

struct CubeSlot_0013E6A0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct DXCubeTextureMap {
    void *vtbl;
    char pad4[0x10C];
    void *f110;
    CubeSlot_0013E6A0 *f114[6];
    void *f12C[6];
    void func_0013E6A0(void);
    void func_001D6B00(void);
};

struct Mat4_0013E4F0 {
    float m[16];
    void Zero() {
        memset(m, 0, sizeof(m));
    }
    void Identity() {
        Zero();
        m[0] = 1.0f;
        m[5] = 1.0f;
        m[10] = 1.0f;
        m[15] = 1.0f;
    }
    void Scale(float s) {
        Zero();
        m[0] = s;
        m[5] = s;
        m[10] = s;
        m[15] = s;
    }
};

struct DXCamera {
    void *vtbl;
    char pad4[0x1FC];
    float f200;
    char pad204[0x4C];
    Mat4_0013E4F0 f250;
    Mat4_0013E4F0 f290;
    DXCamera *func_0013E4F0(int a);
    void func_0012A3F0(int a);
    void func_0012AEC0(void);
    int func_0012B470(void);
    void func_0013E580(void);
    int func_0013E610(void);
    void func_0012B1D0(int *rect);
    void func_0012B190(int x, int y, int w, int h);
};

struct C_001D5600 {
    int f0;
    DXCamera *f4;
    void func_001D5600(void);
};

struct C_00156E80 {
    char pad0[0x264];
    int f264;
    void func_00156E80(void);
};

extern C_001D5600 *D_002EFDB8;
extern C_00156E80 *D_002A8490;

struct C_0013E080_elem {
    int x;
    int y;
    int z;
};

struct C_0013E080 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    int f28;
    int f2C[8];
    char pad4C[0x20];
    int f6C;
    int f70;
    int f74;
    int f78;
    int f7C;
    C_0013E080_elem f80[8];
    int fE0;
    int fE4;
    int fE8;
    int fEC;
    int fF0;
    int fF4;
    int fF8;
    int fFC;
    C_0013E080 *func_0013E080(void);
    void *func_0013E140(unsigned int flags);
    void func_0001DFE0(void);
    void func_0013D400(void);
    void func_0001DFF0(void);
    void func_0013D550(int a, int b, void *c);
};

struct C_0013DFF0_elem {
    int f0;
    void *f4;
    char pad8[0x20];
};

struct C_0013DFF0 {
    char pad0[0xC];
    C_0013DFF0_elem *unkC;
    int unk10;
    int func_0013DFF0(int a1, int a2);
    int func_0013C5D0(C_0013DFF0_elem *e, int a2);
};

int C_0013DFF0::func_0013DFF0(int a1, int a2) {
    C_0013DFF0_elem *p = unkC;
    C_0013DFF0_elem *end;
    int count;

    if (!p)
        return 0;
    count = unk10;
    end = p + count - 1;
    if (count > 1) {
        do {
            if (p->f4 && func_001EA426(p->f4, a1) == 0)
                return func_0013C5D0(p, a2);
            p++;
        } while (p != end);
    }
    if (p->f4 && func_001EA426(p->f4, a1) == 0)
        return func_0013C5D0(p, a2);
    return 0;
}

C_0013E080 *C_0013E080::func_0013E080(void) {
    int i;

    func_0001DFE0();
    f24 = (int)((char *)this + 0x14);
    f28 = (int)((char *)this + 0x20);
    vtbl = &D_00284C58;
    fF0 = 0;
    f8 = -1;
    f10 = 0;
    fC = 0;
    fE4 = -1;
    fEC = 0;
    fE8 = 0;
    fF4 = -1;
    fF8 = -1;
    fE0 = -1;
    fFC = 1;
    for (i = 0; i < 8; i++)
        f2C[i] = 0;
    f70 = 0;
    f6C = -1;
    f74 = -1;
    f78 = -1;
    f7C = 0;
    for (i = 0; i < 8; i++) {
        f80[i].x = 0;
        f80[i].y = -2;
        f80[i].z = -0x6000;
    }
    func_0013D550(1, 10, &D_00100000);
    return this;
}

void *C_0013E080::func_0013E140(unsigned int flags) {
    vtbl = &D_00284C58;
    func_0013D400();
    func_0001DFF0();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

void C_0013E170::func_0013E170(int index, char *name, int value)
{
    if (index < *(int *)((int)this + 0x193c)) {
        S_0013E170_Entry *e = (S_0013E170_Entry *)((char *)this + index * 0x5c);
        if (strcmp(e->name, name) != 0) {
            func_001E8920(e->name, name, 0x4f);
            e->name[0x4f] = 0;
            e->value = value;
        }
    }
}

struct S_0013E2D0_Line {
    float x;
    float y;
    char name[0x50];
    int value;
};

struct S_0013E2D0_Elem {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x44 - 0xC];
    int f44;
    unsigned int f48;
    char pad4C[2];
    unsigned char f4E;
    char pad4F[0x60 - 0x4F];
    void func_0005E840(const char *name);
    void func_001D6600(void);
    void SetPos(float x, float y) {
        if (f4 != x || f8 != y) {
            f4 = x;
            f8 = y;
            f4E |= 6;
        }
    }
};

struct S_0013E2D0_Rect {
    int left;
    int top;
    int right;
    int bottom;
};

struct C_001617F0 {
    void func_001617F0(void *p, int flag);
};

struct C_0013E2D0 {
    char pad0[0x224];
    int f224;
    S_0013E2D0_Line lines[64];
    char pad1928[0x10];
    int f1938;
    int f193C;
    char pad1940[4];
    S_0013E2D0_Elem *f1944;
    int f1948;
    int func_0013E2D0(void);
};

extern int D_002A6A18;
extern int D_002BEAF4;
extern int D_0028F5DC;
extern int D_00284D30;
extern C_001617F0 *D_002A829C;

void func_0013E1F0(int obj, int id, int fmt, ...)
{
    va_list ap;

    if ((*(unsigned char *)(obj + 0x21) & 1) != 0 && id == *(int *)(obj + 0x1938) &&
        *(int *)(obj + 0x224) + 1 < *(int *)(obj + 0x193c)) {
        char *buf = (char *)(obj + 0x24);
        va_start(ap, fmt);
        func_001ADD20(buf, 0x200, fmt, ap);
        va_end(ap);
        int n = ++*(int *)(obj + 0x224);
        ((C_0013E170 *)obj)->func_0013E170(n, buf, 0);
    }
}

void func_0013E260(int obj, int id, int fmt, ...)
{
    va_list ap;

    if ((*(unsigned char *)(obj + 0x21) & 1) != 0 && id == *(int *)(obj + 0x1938) &&
        *(int *)(obj + 0x224) + 1 < *(int *)(obj + 0x193c)) {
        char *buf = (char *)(obj + 0x24);
        va_start(ap, fmt);
        func_001ADD20(buf, 0x200, fmt, ap);
        va_end(ap);
        int n = ++*(int *)(obj + 0x224);
        ((C_0013E170 *)obj)->func_0013E170(n, buf, 1);
    }
}

int C_0013E2D0::func_0013E2D0(void)
{
    S_0013E2D0_Rect rect;
    int i;

    if (f224 != -1 && f1948 != 0 && f1938 != -1) {
        D_002BEAF4 = D_002A6A18;
        if (D_002A8490->f264 != 0) {
            D_002EFDB8->f4->func_0012B1D0((int *)&rect);
            D_002EFDB8->f4->func_0012B190(0, 0, 0x280, 0x1c0);
        }
        D_002A829C->func_001617F0(&D_00284D30, 1);
        for (i = 0; i <= f224; i++) {
            S_0013E2D0_Line *line = &lines[i];
            f1944[i].func_0005E840(line->name);
            f1944[i].SetPos(line->x, line->y);
            if (line->value == 1) {
                S_0013E2D0_Elem *e = &f1944[i];
                unsigned int c = e->f48;
                if (c != 0xffff0000) {
                    e->f4E |= 8;
                    e->f48 = (c & 0xffff0000) | 0xff0000;
                }
            } else {
                S_0013E2D0_Elem *e = &f1944[i];
                unsigned int c = e->f48;
                if (c != 0xffffffff) {
                    e->f4E |= 8;
                    e->f48 = c | 0xffffff;
                }
            }
            S_0013E2D0_Elem *e = &f1944[i];
            if (e->f44 != D_0028F5DC) {
                e->f44 = D_0028F5DC;
                e->f4E |= 6;
            }
            f1944[i].func_001D6600();
        }
        f224 = -1;
        if (D_002A8490->f264 != 0) {
            D_002EFDB8->f4->func_0012B190(rect.left, rect.top, rect.right - rect.left, rect.bottom - rect.top);
        }
    }
    return 1;
}

void func_0013E4A0(void *dst, void *src)
{
    float *d = (float *)dst;
    float *s = (float *)src;
    __m128 r0 = _mm_loadh_pi(_mm_loadl_pi(_mm_setzero_ps(), (__m64 *)&s[0]), (__m64 *)&s[4]);
    __m128 r1 = _mm_loadh_pi(_mm_loadl_pi(_mm_setzero_ps(), (__m64 *)&s[2]), (__m64 *)&s[6]);
    __m128 r2 = _mm_loadh_pi(_mm_loadl_pi(_mm_setzero_ps(), (__m64 *)&s[8]), (__m64 *)&s[12]);
    __m128 r3 = _mm_loadh_pi(_mm_loadl_pi(_mm_setzero_ps(), (__m64 *)&s[10]), (__m64 *)&s[14]);

    *(__m128 *)&d[0] = _mm_shuffle_ps(r0, r2, 0x88);
    *(__m128 *)&d[4] = _mm_shuffle_ps(r0, r2, 0xdd);
    *(__m128 *)&d[8] = _mm_shuffle_ps(r1, r3, 0x88);
    *(__m128 *)&d[12] = _mm_shuffle_ps(r1, r3, 0xdd);
}

DXCamera *DXCamera::func_0013E4F0(int a)
{
    func_0012A3F0(a);
    vtbl = &D_00284D5C;
    f250.Identity();
    f290.Identity();
    return this;
}

void DXCamera::func_0013E580(void)
{
    __declspec(align(16)) Mat4_0013E4F0 m;
    float s;

    func_0012AEC0();
    func_000263B0(&f250, (char *)this + 0xb0, (char *)this + 0x70);
    memset(&m, 0, sizeof(m));
    s = D_00284DD8 / f200;
    m.m[15] = s;
    m.m[0] = s;
    m.m[5] = s;
    m.m[10] = s;
    func_000263B0(&f290, &f250, &m);
}

int DXCamera::func_0013E610(void)
{
    __declspec(align(16)) Mat4_0013E4F0 m;

    if (!func_0012B470())
        return 0;
    if (D_002EFDB8->f4 == this) {
        func_0013E4A0(&m, (char *)this + 0xb0);
        func_001FFA20(0, &m);
        func_0013E4A0(&m, (char *)this + 0x70);
        func_001FFA20(1, &m);
    }
    return 1;
}

void func_0013E680(void) {
    D_002EFDB8->func_001D5600();
    D_002A8490->func_00156E80();
}

void DXCubeTextureMap::func_0013E6A0(void)
{
    int i;

    vtbl = &D_00284DEC;
    if (f110 != 0)
        func_00201100(f110);
    for (i = 0; i < 6; i++) {
        if (f114[i] != 0)
            f114[i]->v2();
        if (f12C[i] != 0)
            func_00201100(f12C[i]);
    }
    func_001D6B00();
}

