/* 9 functions from 0x000733F0 to 0x00073EF0, found by Ghidra. */
#include "common.h"

struct C_000739D0 {
    void func_000737A0(void);
    void func_00073620(void);
    void func_00157960(void);
    void func_000739D0(void);
};

struct C_001D5AD0 {
    void func_001D5AD0(void);
};

struct C_00073620 {
    char pad0[0x6C];
    int unk6C;
    C_001D5AD0 *unk70;
    C_001D5AD0 *unk74;
    C_001D5AD0 *unk78;
    C_001D5AD0 *unk7C;
    char pad80[0x10];
    C_001D5AD0 *unk90[5];
    C_001D5AD0 *unkA4[5];
    void func_00073620(void);
};

struct C_000683F0 {
    void func_000683F0(void);
};

struct C_000739F0_F64 {
    char pad0[0x190];
    C_000683F0 *unk190;
};

struct C_000739F0 {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void virt4();
    char pad4[0x60];
    C_000739F0_F64 *unk64;
    char pad68[4];
    int unk6C;
    char pad70[0x14];
    float unk84;
    void func_0005EA10(float param_1);
    void func_000739F0(float param_1);
};

struct C_00031610 {
    void func_00031610(int param_1, int param_2);
};

struct C_00073A50 {
    char pad0[0x64];
    C_00031610 *unk64;
    char pad68[4];
    int unk6C;
    char pad70[0x14];
    float unk84;
    char pad88[4];
    int unk8C;
    int func_00157BF0(int *param_1, int param_2);
    int func_00073A50(int *param_1, int param_2);
};

void C_000739D0::func_000739D0(void) {
    func_000737A0();
    func_00073620();
    func_00157960();
}
