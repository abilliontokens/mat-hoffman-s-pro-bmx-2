/* 3 functions from 0x000C9940 to 0x000CA940, found by Ghidra. */
#include "common.h"

struct SetterObj_C9 {
    void func_001B1980(void);
    void func_001B17D0(int v);
};

struct GObj4_C9 {
    char pad0[0xf78];
    int f78;
    char padf7c[4];
    int f80;
};

struct GObj2E8_C9 {
    char pad0[4];
    GObj4_C9 *p4;
};

struct LookupObj_C9 {
    int *func_0018C160(int a);
};

struct GObjRoot_C9 {
    char pad0[0x2e8];
    GObj2E8_C9 *p2E8;
    LookupObj_C9 *p2EC;
};

extern GObjRoot_C9 *D_002A8490;

extern float D_00275AEC;
extern int D_00278690;
extern int D_00278678;
extern int D_0027E488;

struct ClampObj_C9 {
    char pad0[0x10];
    float f10;
    float f14;
};

struct MidObj_C9 {
    ClampObj_C9 *func_0018C070();
};

struct SubElem_C9 {
    ClampObj_C9 *func_001D5AA0();
};

/* BmxUIPageGameOptions */
struct C_000CA7D0 {
    char pad0[0x334];
    SubElem_C9 *ptrs[12];
    void func_000CA7D0(void);
    void func_001578D0(void);
};

struct C_000CA8D0 {
    char pad0[0x2e0];
    SetterObj_C9 *unk2E0;
    char pad2e4[4];
    int unk2E8;
    void func_000CA8D0(void);
};

void C_000CA8D0::func_000CA8D0(void)
{
    unk2E0->func_001B1980();
    switch (unk2E8) {
    case 0:
        unk2E0->func_001B17D0(D_002A8490->p2E8->p4->f78);
        break;
    case 1:
        unk2E0->func_001B17D0(D_002A8490->p2E8->p4->f80);
        break;
    }
}
