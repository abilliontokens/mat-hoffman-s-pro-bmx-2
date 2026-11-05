/* 11 functions from 0x000EBB70 to 0x000EC850, found by Ghidra. */
#include "common.h"

extern int D_00281BF4;

struct DelObjC_000EB {
    virtual void Destroy(int a0);
};

struct C_001D6600 {
    void func_001D6600();
};

struct S_002B91AC {
    char pad0[0x34];
    C_001D6600 *unk34;
    C_001D6600 *unk38;
    C_001D6600 *unk3C;
};
extern S_002B91AC *D_002B91AC;

struct C_000EB_Widget {
    void func_001B1980();
    void func_001B2270(unsigned int color);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, float a12, int a13);
};

struct S_000EB_unk124 {
    char pad0[0x138];
    int unk138;
};

/* BmxUIPageMedia */
struct C_000EBCD0 {
    void func_000C5E40();
    void func_000EBB70();
    void func_00157960();
    void func_000EBCD0();
};

/* BmxUIPageExistingEditorLevels */
struct C_000EBE30 {
    void *vtbl;
    char pad4[0x120];
    S_000EB_unk124 *unk124;
    char pad128[0x178];
    DelObjC_000EB *arr2A0[16];
    char pad2E0[0x40];
    DelObjC_000EB *unk320;
    int unk324;
    char pad328[8];
    int unk330;
    char pad334[4];
    C_000EB_Widget *unk338;
    char pad33C[0x20];
    int unk35C;
    void func_001BE3F0();
    void func_000EBE30();
    void func_000EC580();
    void func_000EC7E0();
};
