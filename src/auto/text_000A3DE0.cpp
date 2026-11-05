/* 9 functions from 0x000A3DE0 to 0x000A4D30, found by Ghidra. */
#include "common.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(int size);

extern char D_002A60B0[];
extern char D_002A5EA0[];
extern char D_002A46E8[];
extern char D_002A4C10[];
extern char D_002A5660[];
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


C_000A43E0* C_000A43E0::func_000A43E0(void) {
    unk0 = 0;
    unk4 = 1;
    unk8 = 1;
    unkC = 1;
    return this;
}
