/* 9 functions from 0x00089290 to 0x0008A190, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0008A000 {
    undefined4 func_0008A000(int param_1);
};

struct C_0005E840 {
    void func_0005E840(int param_1);
};

struct C_001D6600 {
    void func_001D6600(void);
};

struct C_00089FA0 {
    char pad0[0x24];
    C_001D6600 *unk24;
    C_001D6600 *unk28;
    C_001D6600 *unk2C;
    C_001D6600 *unk30;
    char pad34[0xf4];
    int unk128;
    int unk12C;
    void func_00089FA0(void);
};

struct C_0008A020 {
    char pad0[0x24];
    C_0005E840 *unk24;
    C_0005E840 *unk28;
    void func_0008A020(int param_1);
};

struct C_0008A040 {
    char pad0[0x2c];
    C_0005E840 *unk2C;
    C_0005E840 *unk30;
    void func_0008A040(int param_1);
};

struct C_0008A080 {
    char pad0[0x128];
    int unk128;
    int unk12C;
    void func_0008A080(void);
};

struct C_0008A060 {
    char pad0[0x128];
    int unk128;
    int unk12C;
    void func_0008A060(void);
};

struct C_0008A0A0 {
    char pad0[0x128];
    int unk128;
    int unk12C;
    void func_0008A0A0(void);
};

extern float D_00275AEC;
extern int D_002786A0;
extern int D_0027958C;

/* a clamped range: both limits are reset to 10.0f when they leave it */
struct S_0008A0B0_Clamp {
    char pad0[0x10];
    float f10;
    float f14;
};

struct S_0008A0B0_Elem {
    S_0008A0B0_Clamp *func_001D5AA0(void);
};

struct S_0008A0B0_Mid {
    S_0008A0B0_Clamp *func_0018C070(void);
};

struct S_0008A0B0_Lookup {
    int *func_0018C160(int name);
};

struct S_0008A0B0_Root {
    char pad0[0x2ec];
    S_0008A0B0_Lookup *lookup;
};

extern S_0008A0B0_Root *D_002A8490;

/* EditorMenuOverlay */
struct C_0008A0B0 {
    char pad0[0x34];
    S_0008A0B0_Elem *elems[26];
    void func_0008A0B0(void);
    void func_001578D0(void);
};


void C_00089FA0::func_00089FA0(void)
{
    if (unk128 == 0 && unk12C != 0) {
        unk24->func_001D6600();
        unk30->func_001D6600();
    } else if (unk128 != 0 && unk12C == 0) {
        unk28->func_001D6600();
        unk2C->func_001D6600();
    } else {
        unk24->func_001D6600();
        unk2C->func_001D6600();
    }
}

undefined4 C_0008A000::func_0008A000(int param_1)
{
  int in_ECX = (int)this;
  
  if (param_1 == 0) {
    return 0;
  }
  *(int *)(in_ECX + 0x120) = param_1;
  return 1;
}

void C_0008A020::func_0008A020(int param_1)
{
    unk24->func_0005E840(param_1);
    unk28->func_0005E840(param_1);
}

void C_0008A040::func_0008A040(int param_1)
{
    unk2C->func_0005E840(param_1);
    unk30->func_0005E840(param_1);
}

void C_0008A060::func_0008A060(void) {
    unk128 = 1;
    unk12C = 0;
}

void C_0008A080::func_0008A080(void) {
    unk128 = 0;
    unk12C = 1;
}

void C_0008A0A0::func_0008A0A0(void) {
    unk128 = 0;
    unk12C = 0;
}

void C_0008A0B0::func_0008A0B0(void)
{
    int names[2] = { (int)&D_002786A0, (int)&D_0027958C };
    S_0008A0B0_Elem **e = elems;
    int n = 26;
    int i;
    int *r;
    S_0008A0B0_Lookup *lk;
    S_0008A0B0_Clamp *o;

    do {
        o = (*e)->func_001D5AA0();
        if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        e++;
        n--;
    } while (n != 0);
    for (i = 0; i < 2; i++) {
        lk = D_002A8490->lookup;
        r = lk->func_0018C160(names[i]);
        if (r != 0 && *r != 0) {
            o = ((S_0008A0B0_Mid *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
    }
    func_001578D0();
}

