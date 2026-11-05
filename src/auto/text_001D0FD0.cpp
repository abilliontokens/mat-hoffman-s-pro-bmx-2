/* 18 functions from 0x001D0FD0 to 0x001D1BD0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_0028F1F0;
extern int D_0028F154;
void func_001E891B(void *p);
void *func_001E8A44(int size);

struct V_002EFDB8 {
    virtual void v0(int a);
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
    virtual void v12(int a);
    int unk4;
    void func_00182830(int a);
};
extern V_002EFDB8 *D_002EFDB8;

struct S_002F07B8 {
    char pad0[0x6C];
    int unk6C;
    void func_001D8AA0(int a0);
    int func_001D87A0(int a0, int a1, int a2, int a3);
};
extern S_002F07B8 *D_002F07B8;

struct S_001D13D0_Alloc {
    void *func_001D7D50();
};

struct V_XboxGame {
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
    virtual int v34();
};

struct XboxGame {
    void *vtbl;
    char pad4[0x22C];
    u8 unk230;
    char pad231[0x6B];
    int unk29C;
    int unk2A0;
    int func_00201820(int a0);
    int func_001572B0(int a0);
    void func_00156FC0();
    int func_001D0FD0(int a0);
    void *func_001D1390(int flags);
    int func_001D13D0(int a0);
};

struct C_001D1460 {
    void *vtbl;
    void *func_001D1460(int a0);
    void func_0015A910(int a0);
};

struct C_001D15B0 {
    undefined4 func_001D15B0(void);
};

struct C_001D1A40 {
    char pad0[0x10];
    int unk10;
    void func_001D1A40(void);
};

struct C_001D1480 {
    int unk0;
    void func_001D1480(void);
};

extern int D_0028F1F0;
extern int D_0028F204;
extern int D_0026D94C;

struct C_001D1490 {
    void *vtbl;
    void func_0015A940();
    void *func_001D1490(unsigned int flags);
};

struct C_001D14C0 {
    void *vtbl;
    char pad4[4];
    int f8;
    char padC[0xC];
    void *f18;
    char pad1C[0x698];
    u8 f6B4;
    char pad6B5[3];
    void *f6B8;
    u16 f6BC;
    char pad6BE[6];
    float f6C4;
    float f6C8;
    float f6CC;
    float f6D0;
    char pad6D4[4];
    void *f6D8;
    void *f6DC;
    u16 f6E0;
    u16 f6E2;
    void func_0015AD10(int a0);
    C_001D14C0 *func_001D14C0(int a0);
};

struct C_001D1550 {
    char pad0[8];
    int f8;
    char padC[0xC];
    char *f18;
    char pad1C[0x69C];
    void *f6B8;
    char pad6BC[4];
    int f6C0;
    int func_001D1550(int a0);
};

struct C_001D1B70 {
    void *vtbl;
    char pad4[0x6B4];
    void *f6B8;
    void func_0015AE20();
    void *func_001D1B70(unsigned int flags);
};


int XboxGame::func_001D0FD0(int param_1)
{
    int saved = 0;
    if (D_002EFDB8 != 0) {
        saved = D_002EFDB8->unk4;
    }
    if (param_1 != D_002F07B8->unk6C) {
        if (D_002EFDB8 != 0) {
            D_002EFDB8->v0(1);
            D_002EFDB8 = 0;
        }
        D_002F07B8->func_001D8AA0(param_1);
        if (((V_XboxGame *)this)->v34() == 0) {
            return 0;
        }
    }
    if (D_002EFDB8 != 0 && saved != 0) {
        D_002EFDB8->func_00182830(saved);
        D_002EFDB8->v12(saved + 0x1e0);
    }
    return 1;
}

void *XboxGame::func_001D1390(int flags)
{
    vtbl = (void *)&D_0028F154;
    if (unk2A0 != 0) {
        unk2A0 = 0;
        func_00156FC0();
    }
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_001D1460::func_001D1460(int a0)
{
    func_0015A910(a0);
    vtbl = (void *)&D_0028F1F0;
    return this;
}

void C_001D1480::func_001D1480(void) {
    extern int D_0028F1F0;
    int func_0015A940(...);
    unk0 = (int)&D_0028F1F0;
    func_0015A940();
}

void *C_001D1490::func_001D1490(unsigned int flags)
{
    void func_001E891B(void *);

    vtbl = &D_0028F1F0;
    func_0015A940();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_001D14C0 *C_001D14C0::func_001D14C0(int a0)
{
    void *func_001E8AA5(...);

    func_0015AD10(a0);
    vtbl = &D_0028F204;
    f8 = 0x20;
    f6BC = 0;
    f18 = func_001E8AA5(0x180);
    f6CC = 200.0f;
    f6D0 = 200.0f;
    f6B8 = 0;
    f6C4 = 0;
    f6C8 = 0;
    f6D8 = 0;
    f6DC = 0;
    f6E0 = 0;
    f6E2 = 0;
    f6B4 |= 6;
    return this;
}

int C_001D1550::func_001D1550(int a0)
{
    void *__stdcall func_0026EC54(int, int, int, int);
    int i, off;

    f6B8 = func_0026EC54((int)&D_0026D94C, a0, 0, 0);
    f6C0 = 0;
    for (i = 0, off = 0; i < f8; i++, off += 0xc) {
        f18[off] = 1;
        *(int *)(f18 + off + 4) = 0;
        *(short *)(f18 + off + 8) = 0;
    }
    return 1;
}

undefined4 C_001D15B0::func_001D15B0(void)
{
  int __stdcall func_0026ECAA(int);
  int in_ECX = (int)this;
  
  func_0026ECAA((int)(*(undefined4 *)(in_ECX + 0x6b8)));
  *(undefined4 *)(in_ECX + 0x6b8) = 0;
  return 1;
}

int __stdcall func_001D1A30(int a0) {
    return 0;
}

void C_001D1A40::func_001D1A40(void) {
    unk10 = 4;
}

int __stdcall func_001D1A50(int a0, int a1, int a2) {
    return 0;
}

void *C_001D1B70::func_001D1B70(unsigned int flags)
{
    void func_001E891B(void *);
    int __stdcall func_0026ECAA(void *);

    vtbl = &D_0028F204;
    if (f6B8) {
        func_0026ECAA(f6B8);
    }
    f6B8 = 0;
    func_0015AE20();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

