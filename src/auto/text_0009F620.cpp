/* 12 functions from 0x0009F620 to 0x000A0260, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern const float D_00277D04;

extern int D_0027AD64;
void func_001E891B(void *p);
inline void operator delete(void *p) { func_001E891B(p); }

/* base class: CameraBehavior */
struct C_0012B540 {
    int unk0;
    void func_0012B540(void);
};

struct S_0009F9F0_Part {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

/* BmxPhotoCamera */
struct C_0009F9F0 : C_0012B540 {
    char pad4[0x8];
    S_0009F9F0_Part *unkC;
    S_0009F9F0_Part *unk10;
    S_0009F9F0_Part *unk14;
    char pad18[0x8C];
    S_0009F9F0_Part *unkA4;
    S_0009F9F0_Part *unkA8;
    S_0009F9F0_Part *unkAC;
    S_0009F9F0_Part *unkB0;
    char padB4[0x28];
    char *unkDC;
    char *unkE0;
    void func_0009F9F0(void);
};

struct C_0009FE40 {
    void func_0009FE40(undefined4 *param_1, undefined4 *param_2, undefined4 *param_3, undefined4 *param_4);
};

struct C_000A0090 {
    char pad0[0x38];
    int unk38;
    void func_000A0090(int a0, int a1);
};

struct C_0009FE70 {
    char pad0[0x40];
    int unk40;
    void func_0009FE70(int a0);
};

struct C_0009FAC0 {
    char pad0[0x4];
    int unk4;
    void func_0009FAC0(int a0);
};

struct C_0009FAD0 {
    char pad0[8];
    int unk8;
    int unkC;
    char pad10[0x40];
    float unk50;
    int unk54;
    void func_0009FAD0(int a0, int a1, float a2);
};


void C_0009FAC0::func_0009FAC0(int a0) {
    unk4 = a0;
}

void C_0009FAD0::func_0009FAD0(int a0, int a1, float a2)
{
    unk8 = a0;
    unkC = 0;
    unk50 = a2 * 1.46666f;
    unk54 = a1;
}

void C_0009FE40::func_0009FE40(undefined4 *param_1, undefined4 *param_2, undefined4 *param_3, undefined4 *param_4)
{
  int in_ECX = (int)this;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x8c);
  *param_2 = *(undefined4 *)(in_ECX + 0x90);
  *param_3 = *(undefined4 *)(in_ECX + 0x4c);
  *param_4 = *(undefined4 *)(in_ECX + 0x3c);
  return;
}

void C_0009FE70::func_0009FE70(int a0) {
    unk40 = a0;
}

void C_000A0090::func_000A0090(int a0, int a1) {
    unk38 = 1;
}

