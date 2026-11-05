/* 10 functions from 0x0005F3C0 to 0x00060370, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00060350 {
    char pad0[0x11C];
    int unk11C;
    char pad120[0x8];
    int unk128;
    int unk12C;
    void func_00060350(int a0);
};

struct C_000601B0 {
    void func_000601B0(void);
};

extern float D_00275AEC;

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

struct S_0005FBD0_Obj {
    char pad0[0x10];
    float f10;
    float f14;
};

struct C_001D5AA0 {
    S_0005FBD0_Obj *func_001D5AA0(void);
};

struct C_001D5AD0 {
    void func_001D5AD0(void);
};

struct C_001C4D50 {
    void func_001C4D50(int a);
};

struct BmxInGameMenuSub {
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
    char pad4[0x154];
    C_001C4D50 *unk158;
    char pad15C[0x98];
    int unk1F4;
    void func_00032A40();
};

struct BmxInGameMenu {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7();
    virtual void vf8();
    virtual void vf9();
    virtual void vf10();
    virtual void vf11();
    virtual void vf12();
    virtual void vf13();
    virtual void vf14();
    virtual void vf15();
    virtual void vf16();
    virtual void vf17();
    virtual void vf18();
    virtual void vf19();
    virtual void vf20();
    virtual void vf21();
    virtual void vf22();
    virtual void vf23();
    virtual void vf24();
    virtual void vf25();
    virtual void vf26();
    virtual void vf27();
    virtual void vf28();
    virtual void vf29();
    virtual void vf30();
    virtual void vf31();
    char pad4[0x60];
    C_001D5AA0 *unk64[8];
    char pad84[0x10];
    C_001D5AD0 *unk94;
    C_001D5AD0 *unk98;
    char pad9C[0x10];
    C_001D5AD0 *unkAC[5];
    C_001D5AD0 *unkC0[5];
    C_001D5AD0 *unkD4;
    C_001D5AD0 *unkD8;
    C_001D5AD0 *unkDC;
    C_001D5AD0 *unkE0;
    char padE4[0x10];
    int unkF4;
    int unkF8;
    int unkFC;
    int pad100;
    BmxInGameMenuSub *unk104;
    int unk108;
    C_001D5AD0 *unk10C;
    int pad110;
    int unk114;
    int unk118;
    int unk11C;
    int unk120;
    int pad124;
    int unk128;
    int pad12C;
    int unk130;
    void func_0005FBD0(void);
    int func_00060110(void);
    void func_000601D0(void);
    void func_00060220(void);
};


void BmxInGameMenu::func_0005FBD0(void)
{
    int i;
    for (i = 0; i < 8; i++) {
        if (unk64[i] != 0) {
            S_0005FBD0_Obj *p = unk64[i]->func_001D5AA0();
            if (D_00275AEC > p->f10) {
                p->f10 = 10.0f;
            }
            if (D_00275AEC < p->f14 || p->f14 > p->f10) {
                p->f14 = 10.0f;
            }
        }
    }
}

void C_000601B0::func_000601B0(void)
{
  int* in_ECX = (int*)this;
  
  in_ECX[0x3f] = 0;
  in_ECX[0x4c] = 1;
                    
                    
  (**(code **)(*in_ECX + 0x10))();
  return;
}

void BmxInGameMenu::func_000601D0(void)
{
    vf6();
    unkF4 = 0;
    unkF8 = 0;
    unk120 = 0;
    unk108 = 1;
    unk114 = -1;
    unk118 = 0;
    unk128 = 1;
    unk130 = 0;
}

void C_00060350::func_00060350(int a0) {
    unk11C = a0;
    unk128 = 1;
    unk12C = 1;
}

