/* 16 functions from 0x001D0020 to 0x001D0FD0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001D0DE0 {
    undefined4 func_001D0DE0(byte param_1);
};

extern int D_0028F154;
extern int D_0028F004;
extern int D_0028F100;
extern int D_0026D94C;

void func_001E891B(void *p);
void *func_001E8A44(int size);
unsigned __stdcall func_0026EBC5(void *p);

struct C_00156FC0 {
    void func_00156FC0(void);
};

struct C_00157150 {
    void func_00157150(void);
};

struct XboxGame_001D0E60 {
    void *vtbl;
    char pad4[0x290];
    int f294;
    int f298;
    int f29C;
    int f2A0;
    XboxGame_001D0E60 *func_001D0E30(void);
    void func_001D0E60(void);
};

extern int D_002ABA84;
void __stdcall func_0026EBC0(int count, void *types);
int __stdcall func_0026EBE7(void *type, unsigned *insertions, unsigned *removals);

struct C_00136370 {
    void func_00136370(void);
};

struct C_00135E50 {
    void func_00135E50(void);
};

struct C_001CF2A0 {
    void func_001CF2A0(void);
};

struct C_0001C920 {
    void func_0001C920(void);
};

struct XboxSoundGroup_001D0870 {
    void *vtbl;
    char pad4[0x30];
    void *f34;
    XboxSoundGroup_001D0870 *func_001D0870(unsigned int flags);
};

struct C_00135E00 {
    void func_00135E00(void);
};

struct ControllerPort_001D14C0 {
    virtual void v0();
    virtual void v1(int flags);
    ControllerPort_001D14C0 *func_001D14C0(int port);
    int func_001D1550(int port);
    void func_001D15B0(void);
};

struct XboxControlInterface_001D0C30 {
    void *vtbl;
    int f4;
    char pad8[8];
    ControllerPort_001D14C0 *f10;
    ControllerPort_001D14C0 *f14[4];
    char pad24[0x14];
    int f38;
    char pad3C[0xD04 - 0x3C];
    int fD04;
    int fD08;
    int fD0C[4];
    XboxControlInterface_001D0C30 *func_001D0C30(void);
    int func_001D0C70(int unused);
    void func_001D0D30(void);
    void func_001D0D60(void);
    void func_001D0E00(void);
};


XboxSoundGroup_001D0870 *XboxSoundGroup_001D0870::func_001D0870(unsigned int flags)
{
    vtbl = (void *)&D_0028F004;
    ((C_001CF2A0 *)this)->func_001CF2A0();
    func_001E891B(f34);
    ((C_0001C920 *)this)->func_0001C920();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

XboxControlInterface_001D0C30 *XboxControlInterface_001D0C30::func_001D0C30(void)
{
    ((C_00135E00 *)this)->func_00135E00();
    fD08 = 0;
    fD0C[3] = 0;
    fD0C[2] = 0;
    fD0C[1] = 0;
    fD0C[0] = 0;
    f38 = 0;
    vtbl = (void *)&D_0028F100;
    fD04 = 1;
    return this;
}

int XboxControlInterface_001D0C30::func_001D0C70(int unused)
{
    int i;
    int found = 0;
    unsigned mask;

    fD08 = 0;
    mask = func_0026EBC5((void *)&D_0026D94C);
    for (i = 0; i < 4; i++) {
        if (mask & (1 << i)) {
            f4++;
            if (!found) {
                fD08 = i;
            }
            found = 1;
            fD0C[i] = 1;
        } else {
            fD0C[i] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        ControllerPort_001D14C0 *p = (ControllerPort_001D14C0 *)func_001E8A44(0x72c);
        p = p != 0 ? p->func_001D14C0(i) : 0;
        f14[i] = p;
        if (p == 0 || p->func_001D1550(i) == 0) {
            if (f14[i] != 0) {
                f14[i]->v1(1);
            }
            f14[i] = 0;
        }
    }
    return 1;
}

undefined4 C_001D0DE0::func_001D0DE0(byte param_1)
{
  int func_001D0D30(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001D0D30();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void XboxGame_001D0E60::func_001D0E60(void)
{
    vtbl = (void *)&D_0028F154;
    if (f2A0 != 0) {
        f2A0 = 0;
    }
    ((C_00156FC0 *)this)->func_00156FC0();
}

