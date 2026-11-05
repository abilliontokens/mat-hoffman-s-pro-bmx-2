/* 9 functions from 0x000A3DE0 to 0x000A4D30, found by Ghidra. */
#include "common.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(int size);

extern char D_002A60B0[];
extern char D_002A5EA0[];
extern char D_002A46E8[];
extern char D_002A4C10[];
extern char D_002A5660[];
extern char D_002A4A00[];
extern char D_00276F28[];
extern char D_0027B208[];

struct C_000A4150_flags {
    char pad0[0x180];
    u8 unk180;
};

struct C_000A4150_obj {
    void *vtbl;
    C_000A4150_flags *unk4;
    C_000A4150_obj *func_00164440(int a, int b);
    void func_001673B0(char *path, int a, int b, int c, int d);
};

struct C_000A4150 {
    C_000A4150_obj *unk0;
    int func_000A4150(char *a1);
};

struct C_000A43E0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    C_000A43E0* func_000A43E0(void);
};


int C_000A4150::func_000A4150(char *a1) {
    char buf[0x104];
    C_000A4150_obj *obj;

    func_001ADCC0(D_002A60B0, 0x104, D_00276F28, D_002A5660);
    func_001ADCC0(D_002A5EA0, 0x104, D_00276F28, D_002A5660);
    func_001ADCC0(D_002A46E8, 0x104, D_00276F28, D_002A5660);
    func_001ADCC0(D_002A4C10, 0x104, D_00276F28, D_002A5660);
    if (!unk0) {
        obj = (C_000A4150_obj *)func_001E8A44(0x244);
        unk0 = obj ? obj->func_00164440(1, 1) : 0;
        func_001ADCC0(buf, 0x104, D_0027B208, D_002A5660, a1);
        unk0->func_001673B0(buf, 0, 1, 1, 1);
        unk0->unk4->unk180 |= 8;
        unk0->unk4->unk180 |= 0x10;
    }
    return 1;
}

C_000A43E0* C_000A43E0::func_000A43E0(void) {
    unk0 = 0;
    unk4 = 1;
    unk8 = 1;
    unkC = 1;
    return this;
}
