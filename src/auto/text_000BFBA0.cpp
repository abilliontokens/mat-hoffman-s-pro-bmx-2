/* 11 functions from 0x000BFBA0 to 0x000C0B30, found by Ghidra. */
#include "common.h"

extern int D_0027E00C;

extern char D_0027958C[];
extern int D_0028F5E0;

struct S_C0010_Text {
    char pad[0x184];
    S_C0010_Text(int a0);
    void func_001B1580(char *a0, char *a1, int a2, int a3);
    void func_001B1A30(float x, float y, int a2);
    void func_001B19A0(int a0);
    void func_001B2270(unsigned int color);
};

struct S_C0010_Sub4 { char pad[0xae8]; int fae8; };
struct S_C0010_2E8 { int f0; S_C0010_Sub4 *f4; };
struct S_C0010_2EC {
    void func_0018C780(int a0, void *a1, int a2);
    void func_0018C160(char *a0);
};
struct S_C0010_Global {
    char pad[0x2e8];
    S_C0010_2E8 *f2e8;
    S_C0010_2EC *f2ec;
};
extern S_C0010_Global *D_002A8490;

struct BmxUIPageDemo {
    void *vtbl;
    char pad4[0x280 - 4];
    int unk280;
    int unk284;
    int unk288;
    int unk28C;
    int unk290;
    char pad294[4];
    int items[20];
    void func_001BE360(int a0);
    BmxUIPageDemo *func_000BFE90(int a0);
    int func_000C0100(int idx);
};

BmxUIPageDemo *BmxUIPageDemo::func_000BFE90(int a0)
{
    int i;

    func_001BE360(a0);
    unk280 = 0;
    unk284 = 1;
    unk288 = 1;
    unk28C = 0;
    unk290 = 0;
    vtbl = &D_0027E00C;
    for (i = 0; i < 20; i++)
        items[i] = -1;
    return this;
}

int BmxUIPageDemo::func_000C0100(int idx)
{
    if (idx >= unk290) {
        return -1;
    }
    return items[idx];
}
