/* 6 functions from 0x00061300 to 0x00062070, found by Ghidra. */
#include "common.h"

extern const char D_0027877C[];

struct C_002A8490 {
    char pad0[0x124];
    int f124;
};
extern C_002A8490 *D_002A8490;

struct C_00061B20_74 {
    int func_00030020(const char *name);
    int func_000300C0(const char *name);
    void func_00030160();
};

struct C_00061B20_44 {
    char pad0[0x74];
    C_00061B20_74 *unk74;
};

struct C_00061B20_1D0 {
    char pad0[0x44];
    C_00061B20_44 *unk44;
    void func_00032A40();
};

struct C_000619B0 {
    char pad0[0x64];
    int unk64;
    char pad68[0x168];
    C_00061B20_1D0 *unk1D0;
    char pad1D4[0x44];
    int unk218;
    void func_000619B0(int mode);
    void func_00061B20();
};

void C_000619B0::func_000619B0(int mode)
{
    unk64 = mode;
    if (mode == 2 || mode == 6 || mode == 4 || mode == 5) {
        D_002A8490->f124 = 1;
    } else {
        D_002A8490->f124 = 0;
    }
}
