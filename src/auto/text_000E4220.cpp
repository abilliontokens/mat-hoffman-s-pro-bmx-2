/* 6 functions from 0x000E4220 to 0x000E51B0, found by Ghidra. */
#include "common.h"

extern int D_0027FC74;
void func_001E891B(void *p);

/* anything the page owns and frees through its virtual destructor */
struct S_000E4AB0_Obj {
    virtual ~S_000E4AB0_Obj();
};

/* owned object destroyed with an explicit call, then freed */
struct S_000E4AB0_Raw {
    void func_001D6410();
};

/* BmxUIPageRiderOps */
struct C_000E4AB0 {
    void *vtbl;
    char pad4[0x50C];
    S_000E4AB0_Obj *f510;
    S_000E4AB0_Obj *a514[5];
    S_000E4AB0_Obj *a528[5];
    S_000E4AB0_Obj *a53C[5];
    S_000E4AB0_Obj *a550[5];
    S_000E4AB0_Raw *a564[5];
    char pad578[0x6B8 - 0x578];
    S_000E4AB0_Obj *a6B8[6];
    S_000E4AB0_Obj *a6D0[4];
    S_000E4AB0_Obj *a6E0[4];
    void func_000E4AB0();
    void func_001BE3F0();
};

struct C_000E5150_Slots {
    char pad0[0x62C];
    int f62C[3];
    int f638[1];
};

struct C_0005C020 {
    C_000E5150_Slots *func_0005C020(int param);
};

struct C_000E5150_Mgr {
    char pad0[0x2C0];
    C_0005C020 *f2C0;
    char pad2C4[0x14];
    int f2D8;
};

struct C_000E5150_Global {
    char pad0[0x2E0];
    C_000E5150_Mgr *f2E0;
};

extern C_000E5150_Global *D_002A8490;

int __stdcall func_000E5150(int index)
{
    C_000E5150_Mgr *mgr = D_002A8490->f2E0;
    return mgr->f2C0->func_0005C020(mgr->f2D8)->f638[index];
}

int __stdcall func_000E5180(int index)
{
    C_000E5150_Mgr *mgr = D_002A8490->f2E0;
    return mgr->f2C0->func_0005C020(mgr->f2D8)->f62C[index];
}

