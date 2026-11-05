/* 5 functions from 0x000779C0 to 0x00078970, found by Ghidra. */
#include "common.h"
struct Clamp_6A { char pad[0x10]; float f10, f14; };
struct Mid_6A { Clamp_6A *func_0018C070(); };
struct Lookup_6A { int *func_0018C160(int); };
struct Data_782C0 { char pad0[4]; char *p4; };
struct Global_6A { char pad[0x2e8]; Data_782C0 *p2E8; Lookup_6A *p2EC; };
extern Global_6A *D_002A8490;
extern float D_00275AEC;
extern int D_002786A0, D_00278690, D_00278678;
struct W_78050 { Clamp_6A *func_001D5AA0(); };
struct C_00078050 {
    char pad0[0x64];
    W_78050 *unk64[17];
    W_78050 *unkA8[3];
    void func_001578D0();
    void func_00078050();
};

extern float D_002A1FEC;

struct Sprite_78620 {
    char pad0[4];
    float f4, f8;
    char padC[0x58 - 0xC];
    unsigned char b58;
    /* move the sprite, marking it dirty only when something changed */
    __forceinline void SetPos(float x, float y)
    {
        if (f4 != x || f8 != y) {
            f4 = x;
            f8 = y;
            b58 |= 1;
        }
    }
    void func_001D5AD0();
};

struct C_00078620 {
    char pad0[0x64];
    Sprite_78620 *unk64;
    Sprite_78620 *unk68;
    Sprite_78620 *arr6C[5];
    Sprite_78620 *arr80[5];
    Sprite_78620 *unk94;
    char pad98[0xA0 - 0x98];
    int unkA0;
    int unkA4;
    Sprite_78620 *unkA8;
    Sprite_78620 *unkAC;
    Sprite_78620 *unkB0;
    Sprite_78620 *unkB4;
    char padB8[0xD4 - 0xB8];
    int unkD4;
    char padD8[0xE4 - 0xD8];
    int unkE4;
    int unkE8;
    int unkEC;
    int unkF0;
    int func_00078620();
};

struct C_000788D0_Obj {
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
};

struct C_000788D0_Sub {
    int func_00092A50(int *out);
};

struct C_000788D0 {
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
    char pad4[0x9C];
    int unkA0;
    int unkA4;
    char padA8[0x10];
    int unkB8;
    char padBC[0xC];
    C_000788D0_Sub *unkC8;
    int unkCC;
    char padD0[4];
    int unkD4;
    C_000788D0_Obj *unkD8;
    int unkDC;
    char padE0[4];
    int unkE4;
    int unkE8;
    int unkEC;
    char padF0[4];
    int unkF4;
    void func_000788D0();
};

void C_00078050::func_00078050() {
int ids[3]; int i; int *r; Clamp_6A *o; W_78050 **e; Lookup_6A *lk;
ids[0]=(int)&D_002786A0; ids[1]=(int)&D_00278690; ids[2]=(int)&D_00278678;
for(i=0;i<3;i++) { lk=D_002A8490->p2EC; r=lk->func_0018C160(ids[i]); if(r && *r) { o=((Mid_6A *)*r)->func_0018C070(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } }
e=unk64; i=2; do { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; e++; i--; }while(i);
e=unkA8; i=2; do { if(e[2]) { o=e[2]->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } if(*e) { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } e++; i--; }while(i);
if(unk64[12]) { o=unk64[12]->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; }
e=&unk64[7]; i=5; do { if(e[-5]) { o=e[-5]->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } if(*e) { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } e++; i--; }while(i);
func_001578D0();
}

int C_00078620::func_00078620()
{
    Sprite_78620 **e;
    int i;
    unk64->func_001D5AD0();
    unk68->func_001D5AD0();
    e = arr80;
    i = 5;
    do {
        e[-5]->func_001D5AD0();
        (*e)->func_001D5AD0();
        e++;
        i--;
    } while (i);
    if (unk94)
        unk94->func_001D5AD0();
    unkB4->SetPos(491.0f, 388.0f);
    unkAC->SetPos(491.0f, 388.0f);
    unkB0->SetPos(365.0f, 388.0f);
    unkA8->SetPos(365.0f, 388.0f);
    if (unkE4)
        return 1;
    if (unkD4) {
        unkA8->SetPos(300.0f, 388.0f);
        unkB0->SetPos(300.0f, 388.0f);
        if (unkF0) {
            unkB4->SetPos(D_002A1FEC, 388.0f);
            unkAC->SetPos(D_002A1FEC, 388.0f);
            unkB0->SetPos(491.0f, 388.0f);
            unkA8->SetPos(491.0f, 388.0f);
        }
    } else {
        unkA8->SetPos(491.0f, 388.0f);
        unkB0->SetPos(491.0f, 388.0f);
    }
    if (unkA0)
        unkA8->func_001D5AD0();
    else
        unkB0->func_001D5AD0();
    if (unkE8 == 0 && unkEC == 0) {
        if (unkD4 && !unkF0) {
            unkAC->SetPos(40.0f, 388.0f);
            unkB4->SetPos(40.0f, 388.0f);
        } else {
            unkAC->SetPos(379.0f, 388.0f);
            unkB4->SetPos(379.0f, 388.0f);
        }
        if (unkA4)
            unkAC->func_001D5AD0();
        else
            unkB4->func_001D5AD0();
    }
    return 1;
}

void C_000788D0::func_000788D0()
{
    unkF4 = 1;
    v6();
    unkD8->v35();
    v18(0);
    unkD8->v35();
    unkD8->unk21 &= 0xfb;
    unkD8->unk1F4 = 1;
    unkB8 = 1;
    unkA4 = 0;
    unkA0 = 0;
    unkD4 = 0;
    unkDC = 0;
    unkE4 = 0;
    unkE8 = 0;
    unkEC = 0;
    unkC8->func_00092A50(&unkCC);
}

