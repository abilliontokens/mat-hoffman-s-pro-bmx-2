/* 9 functions from 0x00155890 to 0x00156880, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001567E0 {
    undefined4 func_001567E0(byte param_1);
};

extern int D_00286F6C;
extern int D_00286DD4;
extern int D_002754B8;
extern int D_00150D30;

extern "C" void __stdcall func_001C6DA0(int param_1, int param_2);
void func_001E891B(void *ptr);

struct C_001B59E0 {
    void func_001B59E0(void);
};

struct C_00156800 {
    void *vtbl;
    C_00156800 *func_00156800(void);
};

struct S_00156030_A {
    char pad_0[0x108];
    int unk108;
};

struct S_00156030_B {
    char pad_0[0x10];
    int unk10;
};

struct S_00156030_C {
    void func_0008AB90(int param_1);
};

struct S_00156030_Player {
    char pad_0[0x3c];
    S_00156030_B *unk3C;
    char pad_40[0xc4 - 0x40];
    int unkC4;
    char pad_C8[0x384 - 0xc8];
    S_00156030_C *unk384;
    int unk388;
    char pad_38C[0x39c - 0x38c];
    S_00156030_A *unk39C;
    char pad_3A0[0x3bc - 0x3a0];
    int unk3BC;
    int unk3C0;
    char pad_3C4[0x3d4 - 0x3c4];
    int unk3D4;
    int unk3D8;
    void Flinch(void)
    {
        if (unk39C->unk108 != 0) {
            func_001C6DA0(unk3D8, 1);
        } else {
            func_001C6DA0(unk3D4, 1);
        }
    }
};

struct TikiPlayerFlinchState {
    char pad_0[8];
    S_00156030_Player *unk8;
    void func_001560A0(void);
};

struct TikiPlayerAirborneState {
    char pad_0[8];
    S_00156030_Player *unk8;
    int func_00156030(int param_1);
};

struct C_002754B8 {
    void *vtbl;
    ~C_002754B8() { vtbl = (void *)&D_002754B8; }
    static void operator delete(void *ptr) { func_001E891B(ptr); }
};

struct S_00156740_Sub {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
};

struct C_00156740 {
    void *vtbl;
    char pad_4[0x384 - 4];
    S_00156740_Sub *unk384;
    void *unk388;
    void *unk38C;
    void *unk390;
    void *unk394;
    void *unk398;
    void func_00156740(void);
    void func_001C75A0(void);
};

struct S_00156820_Base {
    void func_001BBAA0(void *param_1, int *param_2);
};

struct C_00156840 {
    void *vtbl;
    char pad4[4];
    void *unk8;
    int func_00156840(void);
};

struct C_001D0C30 {
    virtual void dummy0();
    virtual int dummy1();
    C_001D0C30 *func_001D0C30(void);
};

void *func_001E8A44(int size);

struct C_00156820 {
    int func_00156820(int param_1, void *param_2);
};


int TikiPlayerAirborneState::func_00156030(int param_1)
{
    S_00156030_Player *p = unk8;
    if (p->unk39C->unk108 != 0) {
        if (p->unk3C->unk10 != 0) {
            p->unk384->func_0008AB90(p->unk388);
        } else if (p->unkC4 != p->unk3C0) {
            func_001C6DA0(p->unk3C0, 1);
        }
    }
    p = unk8;
    if (p->unk3C->unk10 != 0) {
        func_001C6DA0(p->unk3BC, 1);
    }
    return 1;
}

void TikiPlayerFlinchState::func_001560A0(void)
{
    if (unk8->unk39C->unk108 != 0) {
        func_001C6DA0(unk8->unk3D8, 1);
    } else {
        func_001C6DA0(unk8->unk3D4, 1);
    }
}

void C_00156740::func_00156740(void)
{
    vtbl = (void *)&D_00286DD4;
    if (unk384 != 0) {
        unk384->dummy2();
    }
    if (unk388 != 0) {
        delete (C_002754B8 *)unk388;
    }
    if (unk38C != 0) {
        delete (C_002754B8 *)unk38C;
    }
    if (unk390 != 0) {
        delete (C_002754B8 *)unk390;
    }
    if (unk394 != 0) {
        delete (C_002754B8 *)unk394;
    }
    if (unk398 != 0) {
        delete (C_002754B8 *)unk398;
    }
    func_001C75A0();
}

undefined4 C_001567E0::func_001567E0(byte param_1)
{
  int func_00156740(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00156740();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_00156800 *C_00156800::func_00156800(void)
{
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_00286F6C;
    return this;
}

int C_00156820::func_00156820(int param_1, void *param_2)
{
    ((S_00156820_Base *)param_2)->func_001BBAA0((char *)this + 0x10c, &D_00150D30);
    return 1;
}

int C_00156840::func_00156840(void)
{
    if (unk8 == 0) {
        C_001D0C30 *p = (C_001D0C30 *)func_001E8A44(0xd1c);
        p = p != 0 ? p->func_001D0C30() : 0;
        unk8 = p;
        if (p->dummy1() == 0) {
            return 0;
        }
    }
    return 1;
}

