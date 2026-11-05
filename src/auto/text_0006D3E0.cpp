/* 11 functions from 0x0006D3E0 to 0x0006E330, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0006DF20 {
    void func_0006DF20(int param_1);
};

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

extern int D_0027850C;
extern int D_00278A7C;
extern int D_00278AF0;
extern float D_00278500;
extern int D_002B902C;
extern int D_002B9030;

struct C_001D5AD0 {
    void func_001D5AD0(void);
};

struct C_000601D0 {
    void func_000601D0(void);
};

struct C_0006E250_E8 {
    char pad0[0x160];
    C_000601D0 *f160;
};

struct CreatorObj {
    int func_00026500(int a, int b);
};
extern CreatorObj *D_002A7CB8;

struct C_002A8490 {
    char pad0[0x270];
    int f270;
    int f274;
};
extern C_002A8490 *D_002A8490;

struct C_0006D590_V {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};

/* LevelObjectivesMenu */
struct C_0006D590 {
    void *vtbl;
    char pad4[0x20];
    u32 unk24[8];
    u32 unk44[8];
    int unk64;
    u32 unk68[15];
    C_001D5AD0 *unkA4;
    C_001D5AD0 *unkA8;
    C_001D5AD0 *unkAC;
    C_001D5AD0 *unkB0[5];
    C_001D5AD0 *unkC4[5];
    C_001D5AD0 *unkD8;
    C_001D5AD0 *unkDC;
    int unkE0;
    int unkE4;
    C_0006E250_E8 *unkE8;
    float unkEC;
    C_001D5AD0 *unkF0;
    int unkF4;
    int unkF8;
    void func_00157600(int a0);
    int func_00157960();
    void func_0006DFC0();
    C_0006D590 *func_0006D590(int a0);
    void func_0006DF50();
    int func_0006E1E0();
    int func_0006E250(float dt);
};

struct C_00031610 {
    void func_00031610(int param_1, int param_2);
};

int func_001361E0(int, int, int *, int);

struct C_0006E2C0 {
    char pad0[0x64];
    int unk64;
    char pad68[0x80];
    C_00031610 *unkE8;
    int unkEC;
    char padF0[8];
    int unkF8;
    int func_0006E2C0(int *param_1, int param_2);
};


C_0006D590 *C_0006D590::func_0006D590(int a0)
{
    u32 *p;
    C_001D5AD0 **q;
    int n;

    func_00157600(a0);
    vtbl = &D_0027850C;
    p = unk44;
    n = 8;
    do {
        p[-8] = 0;
        p[0] = 0;
        p++;
    } while (--n != 0);
    vtbl = &D_00278A7C;
    unk64 = 0;
    unkEC = 0;
    memset(unk68, 0, sizeof(unk68));
    unkA4 = 0;
    unkA8 = 0;
    unkAC = 0;
    unkD8 = 0;
    unkDC = 0;
    unkE0 = 0;
    unkE4 = 0;
    unkE8 = 0;
    unkF0 = 0;
    unkF4 = 0;
    q = unkC4;
    n = 5;
    do {
        q[-5] = 0;
        q[0] = 0;
        q++;
    } while (--n != 0);
    unkF8 = -1;
    return this;
}

void C_0006DF20::func_0006DF20(int param_1)
{
  int* in_ECX = (int*)this;
  
  in_ECX[0x39] = 1;
  in_ECX[0x19] = 0;
  (**(code **)(*in_ECX + 0x18))();
  in_ECX[0x3e] = param_1;
  return;
}

void C_0006D590::func_0006DF50()
{
    unkA4->func_001D5AD0();
    unkA8->func_001D5AD0();
    C_001D5AD0 **ptr = &unkC4[0];
    int count = 5;
    do {
        (*(ptr - 5))->func_001D5AD0();
        (*ptr)->func_001D5AD0();
        ptr++;
        count--;
    } while (count != 0);
    if (unk64 != 0) {
        unkDC->func_001D5AD0();
    } else {
        unkD8->func_001D5AD0();
    }
    if (unkF0 != 0) {
        unkF0->func_001D5AD0();
    }
}

int C_0006D590::func_0006E250(float dt)
{
    if (unk64 != 0) {
        unkEC += dt;
        if (unkEC >= D_00278500) {
            unkE4 = 0;
            ((C_0006D590_V *)this)->v4();
            unkE8->f160->func_000601D0();
            unk64 = 0;
            unkEC = 0;
        }
    }
    return 1;
}

int C_0006E2C0::func_0006E2C0(int *param_1, int param_2)
{
    if (param_1[2] == unkF8 && unk64 == 0) {
        if (func_001361E0(5, 2, param_1, -2147483648) == 0 &&
            func_001361E0(24, 2, param_1, -2147483648) == 0) {
            return 0;
        }
        unkE8->func_00031610(4, 1);
        unk64 = 1;
        unkEC = 0;
    }
    return 0;
}

