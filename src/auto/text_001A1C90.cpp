/* 23 functions from 0x001A1C90 to 0x001A2C00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern int D_0028B45C;
extern int D_0028B3C4;
extern int D_0028B4F4;

struct S16_1A {
    int a;
    int b;
    int c;
    int d;
};

struct ObjV23 {
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
    virtual int v23(int a0, int a1, S16_1A s, int a2);
};

struct ObjV2 {
    virtual void v0();
    virtual void v1();
    virtual int v2();
};

struct C_001A1F70 {
    void *vtbl;
    char pad4[0x1BC];
    u32 unk1C0;
    u32 unk1C4;
    C_001A1F70 *func_001A1F70(int a0, int a1, int a2, int a3);
    void func_001A1680(int a0, int a1, int a2, int a3);
};

struct C_001A1C90 {
    char pad0[0x1BC];
    ObjV23 *unk1BC;
    int func_001A1C90(int a0, int a1, S16_1A s, int a2);
};

struct Obj198_1A {
    int func_00198330(int a0);
};

struct S36_1A {
    int f[9];
};

struct C_001A1FB0 {
    void *vtbl;
    char pad4[0x1BC];
    int unk1C0;
    int unk1C4;
    C_001A1FB0 *func_001A1FB0(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23);
    void func_001A1860(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21);
    C_001A1FB0 *func_001A1FB0(int a0, int a1, S36_1A s0, S16_1A s1, S16_1A s2, int a19, int a20, int a21, int a22, int a23);
    void func_001A1860(S36_1A s0, S16_1A s1, S16_1A s2, int a19, int a20, int a21, int a22, int a23);
};

struct C_001A1E60 {
    char pad0[0x1BC];
    ObjV2 *unk1BC;
    void func_001A1E60();
};

struct C_001A2500 {
    bool func_001A2500(void);
};

struct C_001A22E0 {
    char pad0[0x1C0];
    int unk1C0;
    void func_001A22E0(int a0);
};

struct C_001A2BD0 {
    void *vtbl;
    void func_00157660();
    void *func_001A2BD0(unsigned int flags);
};

struct C_001A2210 {
    void *vtbl;
    char pad4[0x1BC];
    u32 unk1C0;
    u32 unk1C4;
    C_001A2210 *func_001A2210(int a0, int a1, int a2, int a3);
    void func_001A1680(int a0, int a1, int a2, int a3);
};

struct C_001A2250 {
    void func_001A1860(S36_1A s0, S16_1A s1, S16_1A s2, int a18, int a19, int a20, int a21, int a22);
    void func_001A1D20(int a, int b);
    C_001A2250 *func_001A2250(int a0, S36_1A s0, S16_1A s1, S16_1A s2, int a18, int a19, int a20, int a21, int a22);
};

struct C_001A23F0 {
    void func_001A1860(S36_1A s0, S16_1A s1, S16_1A s2, int a17, int a18, int a19, int a20, int a21);
    C_001A23F0 *func_001A23F0(S36_1A s0, S16_1A s1, S16_1A s2, int a17, int a18, int a19, int a20, int a21);
};

extern int D_0028B58C;
void *func_001E8A44(int size);

struct C_001A2470 {
    char pad0[0x1c0];
    int f1c0;
    int func_001A2470(void);
};

struct Obj_001A2480 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int flags);
    void func_001CB560(Obj_001A2480 *old);
};

struct S_0001CE80 {
    void func_0001CE80(Obj_001A2480 *obj, void *a, void *b, int c, int d);
};

struct Game_001A2480 {
    int f0;
    S_0001CE80 *f4;
};

extern Game_001A2480 *D_002A8490;

struct C_001A2480 {
    char pad0[0x48];
    int f48;
    int f4c;
    char pad50[0x20];
    char f70[0x10];
    char f80[0x10];
    char pad90[0x1bc - 0x90];
    Obj_001A2480 *f1bc;
    char pad1c0[0x1ec - 0x1c0];
    int f1ec;
    void func_001A2480(Obj_001A2480 *obj, int a1, int a2);
};

struct S_001CBEF0 {
    int func_001CBEF0(void);
};

struct S_001A2510_Arg {
    char pad0[0xb4];
    S_001CBEF0 *fb4;
};

struct C_001A2510 {
    S_001A2510_Arg *f0;
    int f4;
    int func_001A14A0(int a);
    int func_001A14F0(int a);
    int func_001A1450(float a);
    int func_001A1410(void);
    int func_001A2510(S_001A2510_Arg *arg, int a1, int a2);
};

struct C_001A2580 {
    void *vtbl;
    char pad4[0x1bc];
    int f1c0;
    int f1c4;
    int f1c8;
    void *f1cc;
    int f1d0;
    int f1d4;
    u8 f1d8;
    char pad1d9[0x2d0 - 0x1d9];
    int f2d0;
    char pad2d4[4];
    int f2d8;
    void func_001A1680(int a0, int a1, int a2, int a3);
    C_001A2580 *func_001A2580(int a0, int a1, int a2, int a3);
};


int C_001A1C90::func_001A1C90(int a0, int a1, S16_1A s, int a2) {
    if (unk1BC == 0) {
        return 0;
    }
    return unk1BC->v23(a0, a1, s, a2);
}

void C_001A1E60::func_001A1E60() {
    ObjV2 *obj = unk1BC;
    ObjV2 *nullp = 0;
    if (obj != nullp) {
        int r = obj->v2();
        unk1BC = nullp;
        if (r != 0) {
            return;
        }
    }
    unk1BC = nullp;
}

C_001A1F70 *C_001A1F70::func_001A1F70(int a0, int a1, int a2, int a3) {
    func_001A1680(a0, a1, a2, a3);
    unk1C0 = 0;
    unk1C4 = 0;
    vtbl = &D_0028B45C;
    return this;
}

C_001A1FB0 *C_001A1FB0::func_001A1FB0(int a0, int a1, S36_1A s0, S16_1A s1, S16_1A s2, int a19, int a20, int a21, int a22, int a23) {
    func_001A1860(s0, s1, s2, a19, a20, a21, a22, a23);
    unk1C4 = a1;
    if (a1 != 0) {
        unk1C0 = ((Obj198_1A *)a1)->func_00198330(a0);
    } else {
        unk1C0 = 0;
    }
    return this;
}

C_001A2210 *C_001A2210::func_001A2210(int a0, int a1, int a2, int a3) {
    func_001A1680(a0, a1, a2, a3);
    unk1C0 = 0;
    unk1C4 = 0;
    vtbl = &D_0028B4F4;
    return this;
}

C_001A2250 *C_001A2250::func_001A2250(int a0, S36_1A s0, S16_1A s1, S16_1A s2, int a18, int a19, int a20, int a21, int a22) {
    func_001A1860(s0, s1, s2, a18, a19, a20, a21, a22);
    func_001A1D20(a0, 0);
    return this;
}

void C_001A22E0::func_001A22E0(int a0) {
    unk1C0 = a0;
}

C_001A23F0 *C_001A23F0::func_001A23F0(S36_1A s0, S16_1A s1, S16_1A s2, int a17, int a18, int a19, int a20, int a21) {
    func_001A1860(s0, s1, s2, a17, a18, a19, a20, a21);
    return this;
}

int C_001A2470::func_001A2470(void)
{
    f1c0 = 1;
    return 1;
}

bool C_001A2500::func_001A2500(void)
{
  int in_ECX = (int)this;
  
  return 0 < *(int *)(in_ECX + 0x1d8);
}

void *C_001A2BD0::func_001A2BD0(unsigned int flags)
{
    void func_001E891B(void *);

    vtbl = (void *)&D_0028B3C4;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

