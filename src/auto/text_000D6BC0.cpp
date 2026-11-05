/* 9 functions from 0x000D6BC0 to 0x000D7B70, found by Ghidra. */
#include "common.h"

struct C_000D6D50_Item {
    virtual void Destroy(int flag);
};

struct C_001D6600 {
    void func_001D6600(void);
};

struct C_000D6BC0_Global {
    char pad0[0x34];
    C_001D6600 *unk34;
    char pad38[4];
    C_001D6600 *unk3c;
};

extern C_000D6BC0_Global *D_002B91AC;

struct BmxUIPageHOF2 {
    int vtbl;
    char pad0[0x298];
    int unk29c;
    int unk2a0;
    char pad2a4[4];
    int unk2a8;
    int unk2ac;
    int unk2b0;
    int unk2b4;
    int unk2b8;
    int unk2bc;
    float unk2c0;
    void func_000D6BC0(void);
    void func_000D6860(void);
    void func_001BEE30(int a, int b);
    void func_000D6A60(void);
    void func_000D6710(void);
    void func_00157960(void);
};

struct BmxUIPageHOF3 {
    int vtbl;
    char pad0[0x27c];
    int unk280;
    int unk284;
    int unk288;
    int unk28c;
    int unk290;
    int unk294;
    int unk298;
    int unk29c;
    int unk2a0;
    int unk2a4;
    int unk2a8;
    int unk2ac;
    int unk2b0;
    int unk2b4;
    int unk2b8;
    int unk2bc;
    int unk2c0;
    C_000D6D50_Item *unk2c4[2];
    C_000D6D50_Item *unk2cc[2];
    int unk2d4[5];
    int unk2e8[5];
    C_000D6D50_Item *unk2fc[2];
    int unk304[5];
    BmxUIPageHOF3 *func_000D6C90(int param);
    void func_000D6D50(void);
    void func_001BE360(int param);
    void func_001BE3F0(void);
};

struct BmxUIPageHOF4 {
    int vtbl;
    char pad0[0x27c];
    int unk280;
    int unk284;
    int unk288;
    int unk28c;
    int unk290;
    char pad294[8];
    int unk29c;
    int unk2a0;
    char pad2a4[8];
    int unk2ac;
    int unk2b0;
    int unk2b4;
    int unk2b8;
    int unk2bc;
    int unk2c0;
    int unk2c4;
    int unk2c8;
    C_000D6D50_Item *unk2cc[5];
    int unk2e0[5];
    C_000D6D50_Item *unk2f4[2];
    C_000D6D50_Item *unk2fc[2];
    int unk304;
    int unk308;
    int unk30c[5];
    BmxUIPageHOF4 *func_000D7AB0(int param);
    void func_001BE360(int param);
};

void BmxUIPageHOF2::func_000D6BC0(void)
{
    if (unk29c != 0) {
        unk2b0 = 0xff;
        unk2b4 = 0;
        unk2b8 = 0;
        unk2bc = 0;
        unk2c0 = 0.25f;
        func_000D6860();
        func_001BEE30(0, 1);
        unk2ac = 1;
        unk2a8 = 0;
        unk29c = 0;
    }
    if (unk2a0 != 0) {
        unk2b0 = 0xff;
        unk2b4 = 0;
        unk2b8 = 0;
        unk2bc = 0;
        unk2c0 = 0.25f;
        func_000D6A60();
        unk2a0 = 0;
    }
    D_002B91AC->unk34->func_001D6600();
    D_002B91AC->unk3c->func_001D6600();
    func_000D6710();
    func_00157960();
}

BmxUIPageHOF3 *BmxUIPageHOF3::func_000D6C90(int param) {
    extern int D_0027F36C;
    func_001BE360(param);
    vtbl = (int)&D_0027F36C;
    for (int i = 0; i < 5; i++) {
        unk2d4[i] = 0;
        unk2e8[i] = 0;
        unk304[i] = 0;
    }
    unk288 = 0;
    unk28c = 0;
    unk280 = 0;
    unk290 = 0;
    unk284 = 0;
    for (int i = 0; i < 2; i++) {
        unk2c4[i] = 0;
        unk2cc[i] = 0;
    }
    unk294 = 0;
    unk298 = 0;
    unk2a4 = 0;
    unk2a8 = 0;
    unk2ac = 0;
    unk2a0 = 0;
    unk29c = 0;
    unk2fc[0] = 0;
    unk2fc[1] = 0;
    unk2b0 = 0;
    unk2b4 = 0;
    unk2b8 = 0;
    unk2bc = 0;
    unk2c0 = 0;
    return this;
}

void BmxUIPageHOF3::func_000D6D50(void)
{
    extern int D_0027F36C;
    vtbl = (int)&D_0027F36C;
    for (int i = 0; i < 2; i++) {
        if (unk2c4[i] != 0) {
            unk2c4[i]->Destroy(1);
            unk2c4[i] = 0;
        }
        if (unk2cc[i] != 0) {
            unk2cc[i]->Destroy(1);
            unk2cc[i] = 0;
        }
    }
    for (int i = 0; i < 2; i++) {
        if (unk2fc[i] != 0) {
            unk2fc[i]->Destroy(1);
            unk2fc[i] = 0;
        }
    }
    func_001BE3F0();
}

BmxUIPageHOF4 *BmxUIPageHOF4::func_000D7AB0(int param) {
    extern int D_0027F404;
    func_001BE360(param);
    vtbl = (int)&D_0027F404;
    for (int i = 0; i < 5; i++) {
        unk2cc[i] = 0;
        unk2e0[i] = 0;
        unk30c[i] = 0;
    }
    unk280 = 0;
    unk290 = 0;
    unk284 = 0;
    unk288 = 0;
    unk28c = 0;
    for (int i = 0; i < 2; i++) {
        unk2f4[i] = 0;
        unk2fc[i] = 0;
    }
    unk2ac = 0;
    unk2b0 = 0;
    unk2b4 = 0;
    unk2a0 = 0;
    unk29c = 0;
    unk304 = 0;
    unk308 = 0;
    unk2b8 = 0;
    unk2bc = 0;
    unk2c0 = 0;
    unk2c4 = 0;
    unk2c8 = 0;
    return this;
}

