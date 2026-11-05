/* 10 functions from 0x000C38B0 to 0x000C4640, found by Ghidra. */
#include "common.h"

extern int D_0027E0A4;
void func_001E891B(void *p);

struct C_001D6410 {
    void func_001D6410(void);
};

struct C_001B1980 {
    void func_001B1980(void);
    void func_001B1860(int, float, int, float, int, int, float, int, float, int, int, int, int);
};

struct DelObjC_000C4 {
    virtual void Destroy(int a0);
};

/* BmxUIPageDemo */
struct C_000C4460 {
    char pad0[0x280];
    C_001B1980 *unk280;
    char pad284[0x4];
    int unk288;
    void func_00157960(void);
    void func_000C4460(void);
};

/* BmxUIPageMain */
struct C_000C45E0 {
    void *vtbl;
    char pad4[0x2C0];
    C_001D6410 *unk2C4;
    char pad2C8[0x2F8 - 0x2C8];
    DelObjC_000C4 *unk2F8[10];
    void func_001BE3F0(void);
    void func_000C45E0(void);
};

void C_000C4460::func_000C4460(void)
{
    if (unk288 != 0) {
        unk280->func_001B1860(0, -1.0f, 0xff, 1.0f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    } else {
        unk280->func_001B1980();
    }
    func_00157960();
}
