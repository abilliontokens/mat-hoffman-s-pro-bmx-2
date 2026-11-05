/* 17 functions from 0x00142180 to 0x00142F30, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00142BF0 {
    undefined4 func_00142BF0(byte param_1);
};

struct C_00142C70 {
    undefined4 func_00142C70(void);
};

struct C_00142CF0 {
    int unk0;
    C_00142CF0* func_00142CF0(void);
};

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

struct C_0013B210 {
    int func_0013C9F0(int param_1, int *param_2);
    void func_0013C8A0(int param_1, void *param_2, int param_3, int param_4);
    void func_0013C110(int param_1);
};

struct C_00142C80 {
    int func_00142C80(int param_1, int param_2);
};

struct C_00142D90_Elem {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
};

struct C_00012140 {
    void func_00012140(void);
};

struct C_00142D90 {
    char pad_0[0x14];
    C_00142D90_Elem *unk14;
    void func_00142D90(int param_1);
    void func_001AC790(int param_1);
};

struct C_00142560_Elem {
    int unk0;
    char pad_4[0x10];
    float unk14;
    char pad_18[0x34 - 0x18];
};

struct C_00142560 {
    char pad_0[0x14];
    C_00142560_Elem *unk14;
    int unk18;
    int unk1C;
    int unk20;
    char pad_24[0xa8 - 0x24];
    int unkA8;
    void func_00142560(void);
};

struct C_00142C10 {
    char pad_0[0x20];
    int unk20;
    int unk24;
    char pad_28[0xa8 - 0x28];
    int unkA8;
    int unkAC;
    int unkB0;
    char pad_B4[0xd4 - 0xb4];
    int unkD4;
    int unkD8;
    int unkDC;
    int unkE0;
    char pad_E4[0xec - 0xe4];
    int unkEC;
};

void func_00142C10(C_00142C10 *param_1);


void C_00142560::func_00142560(void)
{
    int i;
    if (unkA8 != 0) {
        for (i = 0; i < unk20; i++) {
            unk14[i].unk0 = 0;
            unk14[i].unk14 = 100000.0f;
        }
    }
}

undefined4 C_00142BF0::func_00142BF0(byte param_1)
{
  int func_00142720(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00142720();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void func_00142C10(C_00142C10 *param_1)
{
    extern int D_00011101;
    memset(param_1, 0, 0xf0);
    param_1->unkD4 = (int)&D_00011101;
    param_1->unkE0 = 0;
    param_1->unkD8 = 0;
    param_1->unkA8 = 0;
    param_1->unkDC = 0;
    param_1->unkEC = 0x10;
    param_1->unkAC = 0;
    param_1->unkB0 = 0;
    param_1->unk20 = 0x20;
    param_1->unk24 = 0x3000;
}

undefined4 C_00142C70::func_00142C70(void)
{
  int func_00142C10(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00142C10(in_ECX);
  return in_ECX;
}

int C_00142C80::func_00142C80(int param_1, int param_2)
{
    extern C_0013B210 *D_002BEAAC;
    extern int D_00275FB4;
    int id;
    id = D_002BEAAC->func_0013C9F0(param_1, &D_00275FB4);
    if (id == -1) {
        return 0;
    }
    D_002BEAAC->func_0013C8A0(id, &param_1, 4, 1);
    D_002BEAAC->func_0013C8A0(id, this, 0xf0, 1);
    D_002BEAAC->func_0013C110(id);
    return 1;
}

C_00142CF0* C_00142CF0::func_00142CF0(void) {
    unk0 = 0;
    return this;
}

void *func_001E8A44(int size);
void __stdcall func_00201350(void *p);
extern int D_002859C4;

struct C_00142DE0 {
    char pad0[0x8];
    int unk8;
    char padC[0x8];
    C_00142D90_Elem *unk14;
    void func_00142DE0();
};

struct C_00142D00 {
    int unk0;
    void func_00142D00(int a0);
};

struct C_00142D20 {
    char pad0[0x8];
    int unk8;
    char padC[0x8];
    C_00142D90_Elem *unk14;
    void func_00142D20();
};

struct C_00142E90 {
    void *vtbl;
    int unk4;
    char pad8[0x148];
    int unk150;
    int unk154;
    int unk158;
    f32 unk15C;
    int unk160;
    int unk164;
    int unk168;
    f32 unk16C;
    int unk170;
    int unk174;
    int unk178;
    f32 unk17C;
    int unk180;
    int unk184;
    int unk188;
    f32 unk18C;
    void func_00142E90(int a0);
};

void C_00142D90::func_00142D90(int param_1)
{
    void func_001E891B(int);
    int value;
    func_001AC790(param_1);
    if (unk14[param_1].unkC == 0) {
        value = unk14[param_1].unk4;
        if (value != 0) {
            ((C_00012140 *)value)->func_00012140();
            func_001E891B(value);
            unk14[param_1].unk4 = 0;
        }
    }
}

void C_00142D00::func_00142D00(int a0) {
    if (a0 != unk0) {
        func_00201350((void *)a0);
        unk0 = a0;
    }
}

void C_00142D20::func_00142D20() {
    int i = 0;
    if (i < unk8) {
        do {
            C_00142D90_Elem *e = &unk14[i];
            if (e->unkC > 0 && e->unk4 == 0) {
                C_00142C70 *p = (C_00142C70 *)func_001E8A44(0xf0);
                int obj = p ? p->func_00142C70() : 0;
                ((C_00142C80 *)obj)->func_00142C80(unk14[i].unk0, i);
                unk14[i].unk4 = obj;
            }
            i++;
        } while (i < unk8);
    }
}

void C_00142DE0::func_00142DE0() {
    void func_001E8390(void *);
    void func_001E891B(void *);
    int i = 0;
    if (i < unk8) {
        do {
            int v = unk14[i].unk4;
            if (v != 0) {
                ((C_00012140 *)v)->func_00012140();
                func_001E891B((void *)v);
                unk14[i].unk4 = 0;
            }
            int w = unk14[i].unk0;
            if (w != 0) {
                func_001E8390((void *)w);
                unk14[i].unk0 = 0;
            }
            unk14[i].unkC = 0;
            i++;
        } while (i < unk8);
    }
    unk8 = 0;
}

void C_00142E90::func_00142E90(int a0) {
    vtbl = &D_002859C4;
    unk150 = unk154 = unk158 = 0;
    unk15C = 1.0f;
    unk160 = unk164 = unk168 = 0;
    unk16C = 1.0f;
    unk170 = unk174 = unk178 = 0;
    unk17C = 1.0f;
    unk180 = unk184 = unk188 = 0;
    unk18C = 1.0f;
    unk4 = a0;
    unk160 = 1.0f;
    unk164 = 1.0f;
    unk168 = 1.0f;
    unk16C = 1.0f;
}

