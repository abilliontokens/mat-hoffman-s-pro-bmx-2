/* 8 functions from 0x000D1AE0 to 0x000D28D0, found by Ghidra. */
#include "common.h"

struct C_001B17D0 {
    void func_001B17D0(char *s);
};

struct C_5C020Ret_D1 {
    char pad0[4];
    int f4;
};

struct C_0005C020 {
    C_5C020Ret_D1 *func_0005C020(int param);
};

struct C_Mgr_D1 {
    char pad0[0x2C0];
    C_0005C020 *f2C0;
    char pad2C4[0x14];
    int f2D8;
    int f2DC[8];
};

struct C_000D2300 {
    char pad0[0x3E8];
    int f3E8[12];
    int f418;
    char pad41C[0x470 - 0x41C];
    int f470;
    char pad474[0x202C - 0x474];
    C_001B17D0 *f202C;
    int Value(int i);
    void func_000D2300(void);
};

struct C_Root_D1 {
    char pad0[0x2E0];
    C_Mgr_D1 *f2E0;
};

struct C_000D25A0 {
    char pad0[0x2038];
    C_001B17D0 *f2038;
    void func_000D25A0(void);
};

struct C_Inner_D1 {
    char pad0[0x34];
    int f34;
    int f38;
    void func_000BC590(void);
    void func_000BC4C0(float a, float b);
    void func_000BC4A0(float a, float b);
};

struct C_Obj_D1 {
    char pad0[0x270];
    C_Inner_D1 *f270;
};

struct C_000D2860 {
    char pad0[0x124];
    C_Obj_D1 *f124;
    void func_000D2860(void);
};

extern C_Root_D1 *D_002A8490;
extern int D_00277038;
extern int D_0027A2A8;
extern float D_0027DE70;
extern float D_0027ED00;
void func_001ADCC0(char *buf, int size, char *fmt, int val);

inline int C_000D2300::Value(int i)
{
    if (f3E8[i] != 0) {
        return 0;
    }
    return D_002A8490->f2E0->f2DC[i];
}

void C_000D2300::func_000D2300(void)
{
    char buf[0x14];
    int idx = f418;
    int v;

    if (idx == 7 && f3E8[7] == 0) {
        if (f470 == 0) {
            f202C->func_001B17D0((char *)&D_0027A2A8);
            return;
        }
        if (f3E8[7] != 0) {
            v = 0;
        } else {
            v = D_002A8490->f2E0->f2DC[7];
        }
        func_001ADCC0(buf, 0x14, (char *)&D_00277038, v);
        f202C->func_001B17D0(buf);
        return;
    }
    if (f3E8[idx] != 0) {
        v = 0;
    } else {
        v = D_002A8490->f2E0->f2DC[idx];
    }
    func_001ADCC0(buf, 0x14, (char *)&D_00277038, v);
    f202C->func_001B17D0(buf);
}

void C_000D25A0::func_000D25A0(void)
{
    char buf[0x40];
    C_Mgr_D1 *mgr = D_002A8490->f2E0;

    func_001ADCC0(buf, 0x40, (char *)&D_00277038,
                  mgr->f2C0->func_0005C020(mgr->f2D8)->f4);
    f2038->func_001B17D0(buf);
}

void C_000D2860::func_000D2860(void)
{
    C_Obj_D1 *obj = f124;

    obj->f270->func_000BC590();
    obj->f270->func_000BC4C0(32.0f, D_0027ED00 + D_0027DE70);
    obj->f270->func_000BC4A0(1.07f, 0.95f);
    obj->f270->f38 = 1;
    obj->f270->f34 = 0;
}

