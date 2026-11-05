/* 20 functions from 0x0001D280 to 0x0001E260, found by Ghidra. */
#include "common.h"
struct C_0001DFF0 {
    int unk0;
    void func_0001DFF0(void);
};

struct C_0001E030 {
    int unk0;
    void *func_0001E030(int flags);
};

struct C_0001D280_B4 {
    virtual void dummy0();
    virtual int virt1(int param_1, int param_2);
    virtual int virt2();
    C_0001D280_B4 *func_001CBD40(void);
};

struct C_0001D0B0 {
    char pad0[0x14];
    int func_0001D0B0(int param_1, int param_2);
};

struct C_0001D280 {
    virtual void dummy0();
    virtual void dummy1();
    virtual int virt2();
    char pad4[0x44];
    int unk48;
    int unk4C;
    char pad50[0x20];
    C_0001D0B0 unk70;
    C_0001D0B0 unk84;
    C_0001D0B0 unk98;
    char padAC[8];
    C_0001D280_B4 *unkB4;
    int func_001D3F50(void);
    C_0001D280 *func_0001D280(int param_1, int param_2, int param_3);
};

struct C_0001D330_Item {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual void dummy12();
    virtual void dummy13();
    virtual void dummy14();
    virtual void dummy15();
    virtual void dummy16();
    virtual void dummy17();
    virtual void dummy18();
    virtual void dummy19();
    virtual void dummy20();
    virtual void dummy21();
    virtual void dummy22();
    virtual void dummy23();
    virtual void dummy24();
    virtual void dummy25();
    virtual void dummy26();
    virtual void dummy27();
    virtual void dummy28();
    virtual void dummy29();
    virtual void dummy30();
    virtual void dummy31();
    virtual void dummy32();
    virtual void virt33();
};

struct C_0001D330 {
    char pad0[0x70];
    int unk70;
    C_0001D330_Item **unk74;
    void func_0001D330(void);
};

struct C_0001D370_Item {
    virtual void dummy0();
    virtual void dummy1();
    virtual int virt2();
    void func_00157810(void);
};

struct C_0001D370 {
    char pad0[0x30];
    int unk30;
    C_0001D370_Item **unk34;
    char pad38[0x38];
    int unk70;
    C_0001D370_Item **unk74;
    int func_0001D370(void);
};


void C_0001DFF0::func_0001DFF0(void) {
    extern int D_00275F18;
    unk0 = (int)&D_00275F18;
}

void *C_0001E030::func_0001E030(int flags) {
    extern int D_00275F18;
    void func_001E891B(void *);
    unk0 = (int)&D_00275F18;
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

