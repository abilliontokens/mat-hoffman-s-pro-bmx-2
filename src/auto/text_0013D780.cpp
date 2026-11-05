/* 14 functions from 0x0013D780 to 0x0013E6F0, found by Ghidra. */
#include "common.h"
#include <stdarg.h>

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);
void func_001E891B(void *p);
int func_001EA426(void *p, int a);

extern "C" int strcmp(const char *s1, const char *s2);
char *func_001E8920(char *dst, const char *src, int n);
int func_001ADD20(char *buf, int count, int a3, void *a4);

struct C_0013E170 {
    void func_0013E170(int index, char *name, int value);
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
};

struct C_001D5600 {
    int f0;
    DXCamera *f4;
    void func_001D5600(void);
};

struct C_00156E80 {
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
        char *base = (char *)this + index * 0x5c;
        char *buf = base + 0x230;
        if (strcmp(buf, name) != 0) {
            func_001E8920(buf, name, 0x4f);
            *(unsigned char *)(base + 0x27f) = 0;
            *(int *)(base + 0x280) = value;
        }
    }
}

void func_0013E1F0(int obj, int id, int fmt, ...)
{
    va_list ap;

    if ((*(unsigned char *)(obj + 0x21) & 1) != 0 && id == *(int *)(obj + 0x1938) &&
        *(int *)(obj + 0x224) + 1 < *(int *)(obj + 0x193c)) {
        char *buf = (char *)(obj + 0x24);
        va_start(ap, fmt);
        func_001ADD20(buf, 0x200, fmt, ap);
        va_end(ap);
        int n = *(int *)(obj + 0x224) + 1;
        *(int *)(obj + 0x224) = n;
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
        int n = *(int *)(obj + 0x224) + 1;
        *(int *)(obj + 0x224) = n;
        ((C_0013E170 *)obj)->func_0013E170(n, buf, 1);
    }
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

    func_0012AEC0();
    func_000263B0(&f250, &f290 - 0 + 0, 0);
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

