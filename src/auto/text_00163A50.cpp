/* 15 functions from 0x00163A50 to 0x001648E0, found by Ghidra. */
#include "common.h"
struct C_00164820 {
    char pad0[0x10];
    int unk10;
    char pad14[0x4];
    int unk18;
    char pad1C[0x14];
    int unk30;
    int unk34;
    void func_00164820(int a0);
};

extern int D_00287DBC;
extern float D_00275544;
extern float D_00275460;
extern float D_002755EC;
void *func_001E8AA5(int size);
void func_001ADCC0(char *buf, int size, const char *fmt, int n);

struct C_00199BE0 {
    void func_00199BE0(void *p);
};

struct C_001646B0 {
    char pad0[0x1e8];
    int f1e8;
    int f1ec;
    char pad1f0[8];
    int f1f8;
    void func_001646B0(void);
};

struct C_00163A50 {
    void *func_00163A50(void *a, void *b);
};

extern C_00163A50 *D_002EF7D0;

struct C_001643A0 {
    char pad0[0x14];
    int f14;
    int f18;
    char pad1c[0x1c4];
    int f1e0;
    int f1e4;
    int func_001643A0(void);
};


void C_00164820::func_00164820(int a0) {
    unk10 = 0;
    unk18 = a0;
    unk30 = 0;
    unk34 = 0;
}
