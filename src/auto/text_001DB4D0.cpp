/* 3 functions from 0x001DB4D0 to 0x001DC010, found by Ghidra. */
#include "common.h"
void func_001E891B(void *p);
void __stdcall func_00201100(void *p);
extern int D_0028F8F4;
struct C_00012140 { void func_00012140(void); };
struct C_0014A540 { void func_0014A540(void); };
struct I_Release { virtual void v0(); virtual void v1(); virtual void Release(); };
struct XboxWaterDisplacement {
    void *vtbl;
    char pad04[0x24];
    I_Release *f28;
    char pad2C[0x1C];
    void *f48;
    char pad4C[0x94];
    C_0014A540 *fE0;
    C_0014A540 *fE4;
    C_0014A540 *fE8;
    C_0014A540 *fEC;
    C_00012140 *fF0;
    C_00012140 *fF4;
    C_00012140 *fF8;
    C_00012140 *fFC;
    char pad100[0x108];
    I_Release *f208;
    void *f20C;
    char pad210[0x8];
    void *f218[3];
    void *f224[3];
    void *f230[0x96];
    void *f488[6];
    I_Release *f4A0;
    void func_001DBA40(void);
    void func_001CA1C0(void);
};
