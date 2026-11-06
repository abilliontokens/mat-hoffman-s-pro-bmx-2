/* 9 functions from 0x00069340 to 0x0006A1A0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00069FF0 {
 void *vtbl;
 int unk4;
 int unk8;
 int unkC;
 int unk10;
 int unk14;
 int unk18;
 int unk1C;
 int unk20;
 int unk24;
 int unk28;
 int unk2C;
 int unk30;
 int unk34;
 int unk38;
 int unk3C;
 int unk40;
 int unk44;
 int unk48;
 int unk4C;
 int unk50;
 int unk54;
 int unk58;
 int unk5C;
 int unk60;
 int unk64;
 int unk68;
 int unk6C;
 int unk70;
 int unk74;
 int unk78;
 int unk7C;
 int unk80;
 int unk84;
 int unk88;
 int unk8C;
 int unk90;
 int unk94;
 int unk98[2];
 int unkA0;
 int unkA4;
 int unkA8;
 int unkAC;
 int unkB0;
 int unkB4;
 int unkB8;
 int unkBC;
 int unkC0;
 int unkC4;
 int unkC8;
 int unkCC;
 int unkD0;
 int unkD4;
 int unkD8;
 int unkDC;
 int unkE0;
 int unkE4;
 int unkE8;
 int unkEC;
 int unkF0;
 int unkF4;
 int unkF8;
 int unkFC;
 int unk100;
 int unk104;
 int unk108;
 int unk10C;
 int unk110;
 int unk114;
 int unk118;
 int unk11C;
 int unk120;
 int unk124;
 int unk128;
 int unk12C;
 int unk130;
 int unk134;
 int unk138;
 int unk13C;
 int unk140;
 int unk144;
 int unk148;
 int unk14C;
 int unk150;
 int unk154;
 int unk158;
 int unk15C;
 int unk160;
 int unk164;
 int unk168;
 int unk16C;
 int unk170;
 int unk174;
 int unk178;
 int unk17C;
 int unk180;
 int unk184;
 int unk188;
 int unk18C;
 int unk190;
 int unk194;
 int unk198;
 int unk19C;
 int unk1A0;
 int unk1A4;
 int unk1A8;
 int unk1AC;
 int unk1B0;
 int unk1B4;
 int unk1B8;
 int unk1BC;
 int unk1C0;
 int unk1C4;
 int unk1C8;
 int unk1CC;
 int unk1D0;
 int unk1D4;
 int unk1D8;
 int unk1DC;
 int unk1E0;
 int unk1E4;
 int unk1E8;
 int unk1EC;
 int unk1F0;
 int unk1F4;
 int unk1F8;
 int unk1FC;
 void func_00157600(int a0);
 C_00069FF0 *func_00069FF0(int a0);
};
extern int D_002B9020;
extern int func_001361E0(int, int, int *, unsigned int);
extern int D_0027850C;
extern int D_002788EC;

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
    char pad1F8[0x8C];
    int unk284;
    char pad288[8];
    int unk290;
    void func_00032A40();
    void func_00035720();
    void func_00031610(int, int);
};

/* a drawable the page owns: func_001D5AD0 draws it, f38/b58 are its colour and dirty flag */
struct Sprite_69 {
    char pad0[0x38];
    unsigned int f38;
    char pad3C[0x1C];
    unsigned char b58;
    void func_001D5AD0();
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
    char pad74[0x80 - 0x74];
    Sprite_69 *unk80;
    Sprite_69 *unk84;
    char pad88[0xB8 - 0x88];
    Sprite_69 *unkB8;
    Sprite_69 *unkBC;
    char padC0[0xC8 - 0xC0];
    Sprite_69 *unkC8;
    Sprite_69 *unkCC;
    char padD0[0xD8 - 0xD0];
    Sprite_69 *arrD8[5];
    Sprite_69 *arrEC[5];
    Sprite_69 *arr100[14];
    Sprite_69 *unk138;
    char pad13C[0x140 - 0x13C];
    int unk140;
    int unk144;
    int unk148;
    C_00069BD0_Obj *unk14C;
    int unk150;
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
    int func_00069AB0();
    void func_00069BD0();
    void func_00069C40();
    int func_00069D00(int *a, int b);
    int func_00157BF0(int *a, int b);
};

struct T69Txt {
    void func_001B1980();
    void func_001B17D0(int);
    void func_001B2270(unsigned);
    void func_001B19C0(int, int, int);
    void func_001B1860(float, float, int, float, float, float, float, int, float, float, int, int, int);
};

struct T69Btn {
    void func_0005E840(int);
    void func_001D6600();
};

struct T69Page {
    char pad0[0x64];
    T69Txt *t[7];
    int s88[7];
    char padA4[4];
    T69Btn *bA8;
    T69Btn *bAC;
    char padB0[0x13c - 0xb0];
    T69Btn *b13C;
    char pad140[4];
    int sel;
    int sel2;
    C_00069BD0_Obj *obj;
    char pad150[0x10];
    int f160;
    int f164;
    int f168;
    int f16C;
    void func_00069340();
};

struct C_00069BB0 {
    void func_00069BB0(void);
};

struct C_00069BA0 {
    void func_00069BA0(void);
};


int C_00069BD0::func_00069AB0()
{
    int i;
    Sprite_69 *e;

    unk80->func_001D5AD0();
    unk84->func_001D5AD0();
    for (i = 0; i < 5; i++) {
        arrD8[i]->func_001D5AD0();
        arrEC[i]->func_001D5AD0();
    }
    if (unk160 == 0 && unk168 == 0 && unk164 == 0) {
        for (i = 0; i < 14; i++) {
            if (i == unk144 * 2 || i == unk144 * 2 + 1) {
                e = arr100[i];
                e->f38 = (e->f38 & 0xffbfa35a) | 0xbfa35a;
                e->b58 |= 2;
                arr100[i]->func_001D5AD0();
            }
        }
    }
    if (unk154 != 0) {
        unkC8->func_001D5AD0();
    } else {
        unkB8->func_001D5AD0();
    }
    if (unk158 != 0) {
        unkCC->func_001D5AD0();
    } else {
        unkBC->func_001D5AD0();
    }
    if (unk138 != 0) {
        unk138->func_001D5AD0();
    }
    return 1;
}

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

void C_00069BD0::func_00069C40()
{
    unk144 = 0;
    unk164 = 0;
    unk168 = 0;
    unk160 = 0;
    v6();
    unk14C->v35();
    unk15C = 1;
    v18(0);
    unk14C->unk21 &= 0xfb;
    unk154 = 0;
    unk158 = 0;
    unk14C->unk1F4 = 1;
    unk6C->func_001B17D0(D_002A8490->p2E8->p4->f890);
    unk70->func_001B17D0(D_002A8490->p2E8->p4->f868);
    unk16C = 1;
    unk17C = 1;
}

void C_00069FD0::func_00069FD0(int a0) {
    unk170 = a0;
    unk17C = 1;
    unk174 = 1;
}

C_00069FF0 *C_00069FF0::func_00069FF0(int a0)
{
 int i;
 func_00157600(a0);
 vtbl = &D_0027850C;
 for(i=0;i<8;i++) { (&unk24)[i]=0; (&unk44)[i]=0; }
 vtbl = &D_002788EC;
 unk150=0; unk154=0; unk18=-1;
 for(i=0;i<8;i++) (&unk64)[i]=0;
 for(i=0;i<3;i++) { (&unkAC)[i]=0; (&unkA0)[i]=0; (&unk84)[i]=0; }
 for(i=0;i<2;i++) unk98[i]=0;
 for(i=0;i<2;i++) { (&unk90)[i]=0; (&unkB8)[i]=0; }
unk15C=0;
unk180=0;
unk1AC=0;
unk1B0=0x3f800000;
unk160=0;
unk1B4=0;
unk1BC=0;
unk1B8=0;
unk170=0;
unk164=0;
unk168=0;
unk16C=0;
unk184=0;
unk1C4=0;
unk1C8=0;
unk1CC=0;
unk1D0=0;
unk1D4=0;
unk188=0;
unk1C0=0;
unk1A0=0;
unk1A4=0;
unk174=0;
unk14C=0;
unk178=0;
unk17C=0;
unk1D8=0;
for(i=0;i<5;i++) { (&unkE4)[i]=0; (&unkF8)[i]=0; }
for(i=0;i<16;i++) (&unk10C)[i]=0;
unk1E0=0; unk158=-1; unk1E4=1;
unk1EC=0; unk1F0=0; unk1E8=0; unk1F8=0; unk1F4=0; unk1FC=0;
return this;
}

