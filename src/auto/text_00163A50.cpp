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

int func_001EA426(const char *a, const char *b);

struct V4_00164650 {
    float x, y, z, w;
};

struct M16_00164650 {
    float m[16];
};

struct S_00164650_Scale {
    char pad0[0x38];
    float f38;
};

struct S_00164650_Obj {
    void func_00197EA0(void *p);
    void func_00197B90(void *p);
    void func_00197E70(void *p);
};

/* 0x40-byte entry; the name is at +0 */
struct S_00164650_Item {
    char name[0x34];
    S_00164650_Obj *f34;
    char pad38[8];
};

struct C_00164650 {
    char pad0[0x10];
    int f10;
    char pad14[4];
    S_00164650_Scale *f18;
    S_00164650_Scale *f1c;
    char pad20[0x10];
    int f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    char pad48[0x1e8 - 0x48];
    int f1e8;
    S_00164650_Item *f1ec;
    char pad1f0[8];
    M16_00164650 *f1f8;
    char pad1fc[4];
    V4_00164650 *f200;
    V4_00164650 *f204;
    unsigned char func_00164650(const char *name);
    void func_00164700(void);
    void func_00164770(void);
    void func_00164840(S_00164650_Scale *scale, float time, float a2);
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


void C_001646B0::func_001646B0(void)
{
    int i;
    for (i = 0; i < f1e8; i++) {
        C_00199BE0 *p = *(C_00199BE0 **)(f1ec + i * 0x40 + 0x34);
        p->func_00199BE0((void *)(f1f8 + i * 0x40));
    }
}

void C_00164820::func_00164820(int a0) {
    unk10 = 0;
    unk18 = a0;
    unk30 = 0;
    unk34 = 0;
}
