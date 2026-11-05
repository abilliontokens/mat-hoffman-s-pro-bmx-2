/* 7 functions from 0x00027860 to 0x00028130, found by Ghidra. */
#include "common.h"
struct C_00027C30 {
    char pad0[0x4F4];
    int unk4F4;
    int unk4F8;
    char pad4FC[0x3C];
    int unk538;
    char pad53C[0x15C];
    int unk698;
    void func_00027C30(void);
};

struct C_00027D40 {
    char pad0[0x56C];
    int unk56C;
    char pad570[0x10];
    int unk580;
    char pad584[0x4];
    int unk588;
    void func_00027D40(void);
};


struct S_28070_Sound {
    char pad0[0x7C];
    void (*unk7C)(int, S_28070_Sound *, int, int);
    int unk80;
};

struct S_28070_Source {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual S_28070_Sound *v27();
};

struct S_28070_Owner {
    char pad0[0x2C];
    int unk2C;
};

struct S_28070_Voice {
    char pad0[0x30];
    int unk30;
    int unk34;
};

struct C_00028070 {
    char pad0[0x1F4];
    S_28070_Owner *unk1F4;
    char pad1F8[0x18];
    S_28070_Voice *unk210;
    S_28070_Source *unk214;
    S_28070_Source *unk218;
    char pad21C[0x24C];
    int unk468;
    char pad46C[0x4];
    int unk470;
    char pad474[0xC];
    int unk480;
    int unk484;
    int unk488;
    char pad48C[0x160];
    int unk5EC;
    char pad5F0[0x130];
    S_28070_Sound *unk720;
    char pad724[0x18];
    int unk73C;
    int unk740;
    void func_00028070(void);
};


void C_00027C30::func_00027C30(void) {
    unk4F4 = 0;
    unk4F8 = 0;
    unk538 = 0;
    unk698 = 0;
}

void C_00027D40::func_00027D40(void) {
    unk56C = 0;
    unk588 = 0;
    unk580 = 0;
}
