/* 23 functions from 0x001BFF40 to 0x001C0F20, found by Ghidra. */
#include "common.h"

extern int D_0028DB04;
extern int D_0028D804;

void func_001E8390(void *p);

struct C_00157600 {
    void func_00157600(int a);
};

struct C_00157660 {
    void func_00157660(void);
};

/* UIWidgetOverlayText */
struct C_001C0110 {
    void *vtbl;
    char pad4[0x20];
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    int unk3C;
    int unk40;
    int unk44[8];
    int unk64;
    void *unk68;
    int unk6C;
    char pad70[0x170 - 0x70];
    int unk170;
    char pad174[0x180 - 0x174];
    int unk180;
    int unk184;
    char pad188[0x190 - 0x188];
    int unk190;
    int unk194;
    int unk198;
    int unk19C;
    int unk1A0;
    int unk1A4;
    int unk1A8;
    int unk1AC;
    C_001C0110 *func_001C0110(int a1, int a2);
    void func_001C01B0(void);
};

/* same object seen through its virtual slots 28 and 29 */
struct C_001C0670 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29();
    char pad4[0x28];
    int unk2C;
    char pad30[0x10];
    int unk40;
    void func_001C0670(void);
};

struct S_001C04D0_Entry {
    int unk0;
    int unk4;
};

struct S_001C04D0_Table {
    int unk0;
    S_001C04D0_Entry *unk4;
};

struct S_001C04D0_Global {
    char pad0[0x2e8];
    S_001C04D0_Table *unk2E8;
};

extern S_001C04D0_Global *D_002A8490;

struct C_001C04D0 {
    char pad0[0x180];
    int unk180;
    void func_001C01E0(int a);
    void func_001C03F0(int a);
    void func_001C04D0(int idx);
};
