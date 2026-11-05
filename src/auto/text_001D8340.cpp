/* 11 functions from 0x001D8340 to 0x001D8BF0, found by Ghidra. */
#include "common.h"

extern int D_0028F7FC;
extern int D_0028F774;
extern char D_0028F798[];
extern char D_001D0E90;
extern int D_002F0BB8;

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void func_001E891B(void *ptr);
void func_001FFB70();
void __stdcall func_001FFD90(void *p);
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
