/* 33 functions from 0x001CB440 to 0x001CC3C0, found by Ghidra. */
#include "common.h"

extern int D_0028ED78;
extern float D_00276098;
extern float D_002755E0;

extern "C" void (__stdcall *__imp__RtlEnterCriticalSection)(void *cs);
extern "C" void (__stdcall *__imp__RtlLeaveCriticalSection)(void *cs);

struct S_001CB440_Global {
    char pad0[0x138];
    int f138;
};

extern S_001CB440_Global *D_002F08EC;

void func_001E891B(void *p);

struct C_001CC110 {
    int unk0;
    void func_0001DFF0(void);
    void *func_001CC110(int flags);
};

struct C_001CB440 {
    char pad0[0x208];
    unsigned char f208;
    int func_001CB440(void);
};

struct C_001CB490 {
    char pad0[0x128];
    int f128;
    float f12c;
    float f130;
    float f134;
    char pad138[0x1a8 - 0x138];
    int f1a8;
    int func_001CB490(int param_1, int param_2, int param_3);
};

struct S_001CB510_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_001CB510 {
    char pad0[0x13c];
    int f13c;
    char pad140[4];
    S_001CB510_Obj *f144;
    char pad148[8];
    int f150;
    void func_001CB510(void);
};

extern float D_00275544;
extern "C" void __stdcall D_00220AE0(void *obj, int arg);
char *func_001E8920(char *dst, const char *src, int n);

/* XboxSoundGroup: virtual slot 31 is called after the GameObject-style tree update */
struct C_001576C0 {
    void func_001576C0(void);
};

struct C_001CB940 {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v0A(); virtual void v0B();
    virtual void v0C(); virtual void v0D(); virtual void v0E(); virtual void v0F();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v1A(); virtual void v1B();
    virtual void v1C(); virtual void v1D(); virtual void v1E();
    virtual void v1F(int a, int b);
    void func_001CB940(void);
};

/* a sound object that can be handed focus by another one of the same kind */
struct C_001CB560 {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(int a);
    char pad4[0x108];
    unsigned int f10C;
    char pad110[0x2c];
    int f13c;
    char pad140[0x14];
    C_001CB560 *f154;
    char pad158[0xb0];
    unsigned char f208;
    int func_001CB560(C_001CB560 *other);
};

struct S_001CB610_Entry {
    char pad0[0x20];
    char name[0x1f];
    char term;
    char pad40[4];
};

struct C_001CB610 {
    char pad0[0x34];
    S_001CB610_Entry *f34;
    char pad38[0x70];
    int fa8;
    void func_001CB610(int idx, const char *name);
};

/* XboxMusic (see text_001CE140.cpp), the part func_001CB650 touches */
struct C_001CB650 {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v0A(); virtual void v0B();
    virtual void v0C(); virtual void v0D(); virtual void v0E(); virtual void v0F();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v1A(); virtual void v1B();
    virtual void v1C(); virtual void v1D(); virtual void v1E(); virtual void v1F();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(int a, float b, int c);
    char pad4[0x9c];
    unsigned char fa0;
    char pada1[0x17];
    void *fb8;
    void *fbc;
    char padc0[8];
    int fc8;
    int fcc;
    int func_001CB650(float a);
};

void __stdcall func_002223E1(int a, int b, int c);
int __stdcall func_0021FB83(int a);

int C_001CB440::func_001CB440(void)
{
    int v;

    __imp__RtlEnterCriticalSection((void *)(D_002F08EC->f138 + 0x50));
    v = (f208 >> 4) & 1;
    __imp__RtlLeaveCriticalSection((void *)(D_002F08EC->f138 + 0x50));
    return v;
}

int C_001CB490::func_001CB490(int param_1, int param_2, int param_3)
{
    float f = (float)param_2 * D_00276098;
    f130 = 0;
    int n = f1a8;

    f128 = n;
    f12c = f;
    if (param_3 != 0) {
        f134 = (((float)param_1 * D_002755E0) * (float)n - (float)n) / f;
        return 1;
    }
    f134 = (float)(param_1 - n) / f;
    return 1;
}

void C_001CB510::func_001CB510(void)
{
    if (f13c != 0 && f150 == 0) {
        func_002223E1(f13c, 0, 0);
        if (f13c != 0) {
            if (func_0021FB83(f13c) == 0) {
                f13c = 0;
            }
        }
    }
    if (f144 != 0) {
        f144->v2();
    }
}

int C_001CB560::func_001CB560(C_001CB560 *other)
{
    if (f208 & 4) {
        return 1;
    }
    if (other != this) {
        if (other == 0) {
            if ((f10C & 0x100) && f13c != 0) {
                f154 = (C_001CB560 *)-1;
            }
        } else if (((f10C & 0x100) || (other->f10C & 0x100)) && other->f13c != 0) {
            other->v6(0);
            if ((f208 & 8) && other->f13c == f13c) {
                f154 = other;
                return 1;
            }
            return 0;
        }
    }
    return 1;
}

void C_001CB610::func_001CB610(int idx, const char *name)
{
    if (idx <= fa8 && idx >= 0) {
        func_001E8920(f34[idx].name, name, 0x1f);
        f34[idx].term = 0;
    }
}

void C_001CB940::func_001CB940(void)
{
    ((C_001576C0 *)this)->func_001576C0();
    v1F(1, 0);
}

int __stdcall func_001CBEE0(int a0, int a1, int a2, int a3, int a4) {
    return -2147467259;
}

void *C_001CC110::func_001CC110(int flags) {
    unk0 = (int)&D_0028ED78;
    func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

