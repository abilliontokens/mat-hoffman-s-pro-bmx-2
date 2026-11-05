/* 9 functions from 0x00069340 to 0x0006A1A0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00069FD0 {
    char pad0[0x170];
    int unk170;
    int unk174;
    char pad178[0x4];
    int unk17C;
    void func_00069FD0(int a0);
};

struct V_002EFDB8 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7(int a);
    virtual void vf8();
};
extern V_002EFDB8 *D_002EFDB8;

struct SetterObj_69 {
    void func_001B17D0(int v);
};

struct GObj4_69 {
    char pad0[0x868];
    int f868;
    char pad86C[0x24];
    int f890;
};

struct GObj2E8_69 {
    char pad0[4];
    GObj4_69 *p4;
};

struct GObjRoot_69 {
    char pad0[0x2e8];
    GObj2E8_69 *p2E8;
};

extern GObjRoot_69 *D_002A8490;

struct C_00069BD0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    char pad4[0x1D];
    u8 unk21;
    char pad22[0x1D2];
    int unk1F4;
    void func_00032A40();
    void func_00035720();
};

struct C_00069BD0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18(int a);
    char pad4[0x68];
    SetterObj_69 *unk6C;
    SetterObj_69 *unk70;
    char pad74[0xCC];
    int unk140;
    int unk144;
    char pad148[4];
    C_00069BD0_Obj *unk14C;
    char pad150[4];
    int unk154;
    int unk158;
    int unk15C;
    int unk160;
    int unk164;
    int unk168;
    int unk16C;
    int unk170;
    char pad174[8];
    int unk17C;
    void func_00069BD0();
    void func_00069C40();
};

struct C_00069BB0 {
    void func_00069BB0(void);
};

struct C_00069BA0 {
    void func_00069BA0(void);
};


void C_00069BA0::func_00069BA0(void)
{
  int* in_ECX = (int*)this;
  
  in_ECX[0x50] = 0;
                    
                    
  (**(code **)(*in_ECX + 0x10))();
  return;
}

void C_00069BB0::func_00069BB0(void)
{
  int* in_ECX = (int*)this;
  
  (**(code **)(*in_ECX + 0x18))();
  in_ECX[0x55] = 0;
  in_ECX[0x5f] = 1;
  return;
}

void C_00069BD0::func_00069BD0()
{
    D_002EFDB8->vf7(1);
    unk154 = 0;
    unk158 = 0;
    D_002EFDB8->vf8();
    unk140 = 0;
    unk14C->func_00032A40();
    unk14C->func_00035720();
    v4();
    unk14C->unk1F4 = 0;
    unk170 = -1;
}

void C_00069FD0::func_00069FD0(int a0) {
    unk170 = a0;
    unk17C = 1;
    unk174 = 1;
}

