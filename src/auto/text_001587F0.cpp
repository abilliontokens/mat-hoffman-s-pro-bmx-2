/* 8 functions from 0x001587F0 to 0x001596C0, found by Ghidra. */
#include "common.h"

struct S_Inner { char pad[0x538]; int f538; int f53c; int f540; int f544; };
struct S_Arg2 { char pad[0x388]; S_Inner *p388; };
struct S_B { virtual void v0(); virtual void v1(); virtual void v2(); S_B *func_0017D5A0(int, int, int, int, int, int, int); };
struct S_A {
    S_A *func_00192900(int);
    void func_00192A90(S_B *);
    void func_00192AC0(S_B *);
};
struct S_C { S_C *func_00193490(void); void *vtbl; int unk4; S_B *unk8; };
struct C_001595A0 {
    char pad0[0x24];
    int unk24;
    char pad28[0xc];
    int *unk34;
    S_A *unk38;
    S_C *unk3c;
    void func_001577A0(S_A *, int);
    C_001595A0 *func_001595A0(int n, S_Arg2 *arg2);
};
extern "C" void *func_001E8AA5(int);
extern "C" void *func_001E8A44(int);
extern int D_00287520;

struct S_P {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31();
    S_P *func_0016CE80(int);
    S_P *func_0016CF10(int, void *, int, int);
};
struct S_Q : S_P {
    S_Q *func_0016D620(int);
    S_Q *func_0016D6A0(int, void *, int, int);
};
struct C_00158A60 {
    char pad0[0x24];
    S_P *unk24;
    S_P *unk28[2];
    S_P *unk30;
    S_P *unk34;
    S_Q *unk38;
    void func_001577A0(void *, int);
    void func_00158A60(int a);
};
extern char D_0028745C, D_00287448, D_00287438, D_00287424, D_0027592C;

struct C_00158BE0 {
    int unk0;
    void *func_00158BE0(int flags);
};

struct C_001594F0 {
    short unk0;
    char unk2;
    unsigned char unk3;
    int unk4;
    char pad8[0x14 - 8];
    int unk14;
    int unk18;
    int unk1c;
    int unk20;
    int unk24;
    int unk28;
    int unk2c;
    int unk30;
    int unk34;
    int unk38;
    int unk3c;
    int unk40;
    int unk44;
    int unk48;
    int unk4c;
    char pad50[0x58 - 0x50];
    int unk58;
    int unk5c;
    int unk60;
    int unk64;
    int unk68;
    int unk6c;
    int unk70;
    int unk74;
    int unk78;
    C_001594F0 *func_001594F0(void);
};

struct C_00159560_Sub {
    void func_001A46F0(void);
};

struct C_00159560 {
    int unk0;
    char pad4[0x20];
    int unk24;
    int unk28;
    int unk2c;
    int unk30;
    int unk34;
    int unk38;
    int unk3c;
    C_00159560_Sub sub40;
    C_00159560 *func_00159560(int param_1);
};

void C_00158A60::func_00158A60(int a) {
    S_P *p = (S_P *)func_001E8A44(0x218);
    unk24 = p ? p->func_0016CE80(1) : 0;
    unk24->func_0016CF10(a, &D_0028745C, 0, 0);
    unk24->v31();
    func_001577A0(unk24, -1);
    for (int i = 0; i < 2; i++) {
        p = (S_P *)func_001E8A44(0x218);
        unk28[i] = p ? p->func_0016CE80(1) : 0;
        unk28[i]->func_0016CF10(a, &D_00287448, 0, 0);
        unk28[i]->v31();
        func_001577A0(unk28[i], -1);
    }
    p = (S_P *)func_001E8A44(0x218);
    unk34 = p ? p->func_0016CE80(1) : 0;
    unk34->func_0016CF10(a, &D_00287438, 0, 0);
    unk34->v31();
    func_001577A0(unk34, -1);
    S_Q *q = (S_Q *)func_001E8A44(0x230);
    unk38 = q ? q->func_0016D620(1) : 0;
    unk38->func_0016D6A0(a, &D_00287424, 0, 0);
    unk38->v31();
    func_001577A0(unk38, -1);
    p = (S_P *)func_001E8A44(0x218);
    unk30 = p ? p->func_0016CE80(1) : 0;
    unk30->func_0016CF10(a, &D_0027592C, 0, 0);
    func_001577A0(unk30, 2);
}

void *C_00158BE0::func_00158BE0(int flags) {
    extern int D_002873B4;
    int func_00157660(...);
    void func_001E891B(void *);
    unk0 = (int)&D_002873B4;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_001594F0 *C_001594F0::func_001594F0(void)
{
    unk3 &= 0xf8;
    unk0 = 0;
    unk2 = (char)0xff;
    unk28 = 0;
    unk24 = 0;
    unk20 = 0;
    unk2c = 0x3f800000;
    unk38 = 0;
    unk34 = 0;
    unk30 = 0;
    unk3c = 0x3f800000;
    unk48 = 0;
    unk44 = 0;
    unk40 = 0;
    unk4c = 0x3f800000;
    unk60 = 0;
    unk5c = 0;
    unk58 = 0;
    unk64 = 0x3f800000;
    unk70 = 0;
    unk6c = 0;
    unk68 = 0;
    unk74 = 0x3f800000;
    unk14 = 0;
    unk18 = 0;
    unk1c = 0;
    unk4 = 0;
    unk78 = 0;
    return this;
}

C_00159560 *C_00159560::func_00159560(int param_1) {
    extern int D_002874B4;
    void __stdcall func_00157600(int);
    func_00157600(param_1);
    unk0 = (int)&D_002874B4;
    sub40.func_001A46F0();
    unk24 = 0;
    unk28 = 0;
    unk2c = 0;
    unk30 = 0;
    unk34 = 0;
    unk38 = 0;
    unk3c = 0;
    return this;
}

C_001595A0 *C_001595A0::func_001595A0(int n, S_Arg2 *arg2) {
    if (n < 1000) {
        unk24 = 1000;
    } else {
        unk24 = n;
    }
    if (unk24 == 0) {
        return (C_001595A0 *)unk24;
    }
    unk34 = (int *)func_001E8AA5(unk24 * 4);
    for (int i = 0; i < unk24; i++) {
        unk34[i] = 0;
    }
    S_A *m = (S_A *)func_001E8A44(0xa0);
    S_A *a = m ? m->func_00192900(1) : 0;
    unk38 = a;
    func_001577A0(a, 0);
    S_B *mb = (S_B *)func_001E8A44(0x8b4);
    S_B *b = mb ? mb->func_0017D5A0(arg2->p388->f538, 0xff7fffff, arg2->p388->f540, arg2->p388->f53c, 0x7f7fffff, arg2->p388->f544, D_00287520) : 0;
    unk38->func_00192A90(b);
    unk38->func_00192AC0(b);
    S_C *mc = (S_C *)func_001E8A44(0x28);
    S_C *c = mc ? mc->func_00193490() : 0;
    unk3c = c;
    c->unk4 = (int)unk38;
    unk3c->unk8 = b;
    b->v2();
    return this;
}

