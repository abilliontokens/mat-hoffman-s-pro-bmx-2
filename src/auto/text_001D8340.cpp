/* 11 functions from 0x001D8340 to 0x001D8BF0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_002F0BB8;
extern int D_0028F7FC;

extern "C" void __stdcall MmFreeContiguousMemory(void *p);
void *__stdcall func_001FF410(void *p, int flags);
void __stdcall func_00201100(void *p);
void __stdcall func_00202A40(void *p);

struct S_001D8AA0_Local {
    char pad0[0xC];
    u32 fC;
    u32 f10;
    char pad14[0x14];
};

/* XboxVideoCard */
struct XboxVideoCard {
    void *vtbl;
    u32 f4;
    char pad8[0x14];
    u32 f1C;
    u32 f20;
    char pad24[0x20];
    u32 f44;
    char pad48[0x104];
    u32 f14C;
    u32 f150;
    int func_001D8140(S_001D8AA0_Local *out, void *a, u32 b);
    int func_001D8970(int a, int b, int c);
    void func_001D8AA0(void *param_1);
    int func_001D8A10(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
};

struct S_001D8AE0_S3 {
    int a;
    int b;
    int c;
};

struct C_001D8AE0 {
    S_001D8AE0_S3 sub;
    u32 fC;
    u32 f10;
    void func_001D8AE0(int p1, int p2, int p3, int p4, int p5);
};

struct PageObjDtor {
    virtual void destroy(int flags);
};

/* XboxWater */
struct XboxWater {
    void *vtbl;
    char pad4[0x2A8];
    u32 f2AC;
    char pad2B0[0x8];
    u32 f2B8;
    char pad2BC[0x8];
    u32 f2C4;
    char pad2C8[0x8];
    u32 f2D0;
    char pad2D4[0x18];
    void *f2EC;
    PageObjDtor *f2F0;
    void func_001D8B70();
    void func_001C8740();
};

extern int D_0028F7FC;
extern int D_0028F774;
extern char D_0028F798[];
extern char D_001D0E90;
extern int D_002F0BB8;

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void func_001E891B(void *ptr);
void func_001FFB70();
int __stdcall func_001FFD90(void *p);
void __stdcall func_001FF4E0(int a, int b, int c, int d, int e, int f);
void __stdcall func_002025D0(int a);

struct S_AdapterIdentifier {
    char Driver[512];
    char Description[512];
    u32 DriverVersionLow;
    u32 DriverVersionHigh;
    u32 VendorId;
    u32 DeviceId;
    u32 SubSysId;
    u32 Revision;
    u32 Data1;
    u16 Data2;
    u16 Data3;
    u8 Data4[8];
    u32 WHQLLevel;
};

void __stdcall func_00201830(int adapter, int flags, S_AdapterIdentifier *ident);

struct C_001C99E0_1D8340 {
    void func_001C99E0(void *param);
};

struct C_001C3E00_1D8340 {
    void func_001C3E00();
};

struct C_001D8B40 {
    void *vtbl;
    char pad4[0x2e4];
    int f2e8;
    int f2ec;
    int f2f0;
    C_001D8B40 *func_001D8B40(void *param);
};

struct C_001D8760 {
    void *vtbl;
    C_001D8760 *func_001D8760(int flags);
};

struct C_001D8970 {
    char pad0[0x44];
    int f44;
    char pad48[0x60 - 0x48];
    int f60;
    char pad64[0x6c - 0x64];
    int f6c;
    char pad70[0x144 - 0x70];
    int f144;
    char pad148[0x150 - 0x148];
    unsigned int f150;
    char pad154[0x170 - 0x154];
    int f170;
    int f174;
    int func_001D8040(int *a1, void *a2, int a3, int a4, int a5, int a6, int a7);
    int func_001D8970(int a1, int a2, int a3);
};

void func_001D86C0(char *buf, int size, int adapter)
{
    S_AdapterIdentifier ident;

    func_00201830(adapter, 0, &ident);
    func_001ADCC0(buf, size, D_0028F798, ident.Data1, ident.Data2, ident.Data3,
                  ident.Data4[0], ident.Data4[1], ident.Data4[2], ident.Data4[3],
                  ident.Data4[4], ident.Data4[5], ident.Data4[6], ident.Data4[7]);
}

C_001D8760 *C_001D8760::func_001D8760(int flags)
{
    vtbl = (void *)&D_0028F774;
    if (D_002F0BB8 != 0) {
        func_001FFB70();
        D_002F0BB8 = 0;
    }
    ((C_001C3E00_1D8340 *)this)->func_001C3E00();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int C_001D8970::func_001D8970(int a1, int a2, int a3)
{
    unsigned int i;
    int r;

    if (D_002F0BB8 == 0) {
        return 0;
    }
    r = func_001D8040(&f44, &D_001D0E90, f44, a1, a2, f60, 0);
    if (r == -1) {
        return 0;
    }
    f6c = r;
    f170 = a3;
    f174 = 1;
    if (func_001FFD90(&f144) != 0) {
        return 0;
    }
    i = 0;
    do {
        func_001FF4E0(0, 0, 0xf3, 0, 0, 0);
        func_002025D0(0);
        i++;
    } while (i <= f150);
    return 1;
}

int XboxVideoCard::func_001D8A10(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    if (D_002F0BB8 == 0)
        return 0;
    switch (a3) {
    case 0x10:
        this->f14C = 5;
        break;
    case 0x20:
        this->f14C = 6;
        break;
    default:
        return 0;
    }
    if (a4 == 0)
        a4 = 2;
    this->f150 = a4;
    if (this->func_001D8970(a1, a2, a5) == 0)
        return 0;
    this->f20 = a2;
    this->f4 = a3;
    this->f1C = a1;
    return 1;
}

void XboxVideoCard::func_001D8AA0(void *param_1)
{
    S_001D8AA0_Local local;
    if (this->func_001D8140(&local, param_1, this->f44) == 0)
        return;
    this->func_001D8970(local.fC, local.f10, 0);
}

void C_001D8AE0::func_001D8AE0(int p1, int p2, int p3, int p4, int p5)
{
    S_001D8AE0_S3 t;
    u32 *q = (u32 *)&sub;
    q[2] = 0;
    q[1] = 0;
    q[0] = 0;
    t.a = p1;
    t.b = p2;
    t.c = p3;
    sub = t;
    fC = p4;
    f10 = p5;
}

C_001D8B40 *C_001D8B40::func_001D8B40(void *param)
{
    ((C_001C99E0_1D8340 *)this)->func_001C99E0(param);
    f2e8 = 0;
    f2f0 = 0;
    f2ec = 0;
    vtbl = (void *)&D_0028F7FC;
    return this;
}

void XboxWater::func_001D8B70()
{
    vtbl = (void *)&D_0028F7FC;
    if (f2F0 != 0)
        f2F0->destroy(1);
    MmFreeContiguousMemory(func_001FF410(&f2AC, 0));
    MmFreeContiguousMemory(func_001FF410(&f2B8, 0));
    MmFreeContiguousMemory(func_001FF410(&f2C4, 0));
    if (f2D0 != 0)
        func_00201100((void *)f2D0);
    if (f2EC != 0)
        func_00202A40(f2EC);
    func_001C8740();
}

