/* 18 functions from 0x001D0FD0 to 0x001D1BD0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_0028F1F0;
extern int D_0028F154;
void func_001E891B(void *p);
void *func_001E8A44(int size);

/* Direct3D render/texture-stage state shadow and its setters */
extern int D_0020C6DC, D_0020C6E4, D_0020C6F0, D_0020C710, D_0020C718, D_0020C720, D_0020C728;
extern int D_0020CA50, D_0020CA64, D_0020CA78, D_0020CA7C;
extern int D_00040300, D_00040304, D_00040310, D_0004033C, D_00040340, D_00040354, D_0004035C, D_0004037C;
void __stdcall func_001FD890(int a);
void __fastcall func_001FD020(void *p, int v);
void __stdcall func_001FD380(int a);
void __stdcall func_001FE810(int a);
void __stdcall func_001FD770(int a);
void __stdcall func_001FE490(int a);
void __stdcall func_00200390(int index, int value);
void __stdcall func_001FEFE0(int a);

struct S_002F07B8;

struct V_002EFDB8 {
    virtual void v0(int a);
    virtual int v1(S_002F07B8 *a);
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

struct S_001D1290_Alloc {
    V_002EFDB8 *func_001D48E0();
};

struct Game {
    void func_00156FC0();
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

struct XboxGame : Game {
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
    int func_001D1060(void);
    void *func_001D1390(int flags);
    int func_001D13D0(int a0);
    V_002EFDB8 *func_001D1290();
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

extern int D_0028F274;

struct C_001D1BB0 {
    void *vtbl;
    char pad4[0x1C];
    int unk20;
    char pad24[4];
    int unk28;
    int unk2C;
    char pad30[0x20];
    void *unk50;
    void func_00160BD0();
    C_001D1BB0 *func_001D1BB0();
};

struct C_001D1B70 {
    void *vtbl;
    char pad4[0x6B4];
    void *f6B8;
    void func_0015AE20();
    void *func_001D1B70(unsigned int flags);
};


struct S_15D0_Btn { int mode; float val; int f8; int fc; int f10; int f14; };
struct S_15D0_Rumble { unsigned short left; unsigned short right; };
struct S_15D0_Pad {
    char pad0[8];
    int f8;
    char padC[0x314];
    int f320;
    S_15D0_Btn btn[32];
    float axis[6];
    char pad63C[0x7C];
    void *f6B8;
    unsigned short f6BC;
    char pad6BE[2];
    int f6C0;
    float f6C4;
    float f6C8;
    float f6CC;
    float f6D0;
    char pad6D4[4];
    int f6D8;
    int f6DC;
    S_15D0_Rumble rumble;
    int f6E4;
    int f6E8;
    char pad6EC[0x3A];
    S_15D0_Rumble rumbleOut;
    void func_0015AFC0(int a0, float a1, float a2);
    int func_001D15D0(float dt);
};
struct S_15D0_Pkt { int id; unsigned short buttons; unsigned char a[8]; short lx, ly, rx, ry; };
struct S_15D0_State { unsigned short buttons; unsigned char a[8]; short lx, ly, rx, ry; };
struct S_15D0_H { void func_00135E90(int a, int b, int c, int d); };
extern char *D_002A8490;
extern "C" int __stdcall func_0026ECB6(void *h, void *p);
extern "C" int __stdcall func_0026ED25(void *h, void *p);
extern float D_002755E4, D_00284758, D_00287B68, D_00278650, D_00278784, D_00275544;
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

int XboxGame::func_001D1060(void)
{
    unsigned int i;

    func_001FD890(0);
    func_001FD020(&D_00040310, 0);
    func_001FD380(0);
    func_001FE810(0);
    D_0020CA50 = 0;
    D_0020C6DC |= 0x2000;
    D_0020CA64 = 0;
    func_001FD770(((int *)D_002EFDB8)[0x18]);
    func_001FE490((unk230 >> 6) & 1);
    func_001FD020(&D_0004035C, (unk230 >> 6) & 1);
    func_001FD020(&D_00040304, 0);
    D_0020C6DC |= 0x800;
    D_0020C710 = 2;
    D_0020C718 = 2;
    D_0020C720 = 2;
    D_0020C728 = 2;
    func_001FD020(&D_0004037C, 0x1d01);
    for (i = 0; i < *(unsigned int *)((char *)D_002F07B8 + 0x108); i++) {
        ((volatile int *)&D_0020C6E4)[i * 0x20 - 1] = 3;
        D_0020C6DC |= 1 << i;
        ((volatile int *)&D_0020C6E4)[i * 0x20] = 3;
        ((volatile int *)&D_0020C6E4)[i * 0x20 + 1] = 3;
        func_00200390(i, 0);
    }
    func_001FD020(&D_00040354, 0x203);
    D_0020C6DC |= 0x3000;
    D_0020CA7C = 0;
    func_001FD020(&D_00040300, 1);
    func_001FD020(&D_00040340, 0);
    func_001FD020(&D_0004033C, 0x204);
    for (i = 0; i < *(unsigned int *)((char *)D_002F07B8 + 0x108); i++) {
        (&D_0020C6F0)[i * 0x20 - 1] = 2;
        (&D_0020C6F0)[i * 0x20] = 2;
        (&D_0020C6F0)[i * 0x20 + 1] = 0;
        D_0020C6DC |= 1 << i;
    }
    for (i = 0; i < *(unsigned int *)((char *)D_002F07B8 + 0x108); i++) {
        D_0020C6DC |= 0x800;
        (&D_0020C720)[i * 0x20 - 4] = 1;
        (&D_0020C720)[i * 0x20] = 1;
    }
    D_0020C6DC |= 0x1200;
    D_0020CA78 = 0;
    func_001FEFE0(1);
    return 1;
}

V_002EFDB8 *XboxGame::func_001D1290()
{
    S_001D1290_Alloc *p;

    p = (S_001D1290_Alloc *)func_001E8A44(0x544);
    if (p != 0) {
        D_002EFDB8 = p->func_001D48E0();
    } else {
        D_002EFDB8 = 0;
    }
    if (D_002EFDB8 == 0) {
        return 0;
    }
    if (D_002EFDB8->v1(D_002F07B8) == 0) {
        return 0;
    }
    ((V_XboxGame *)this)->v7();
    return D_002EFDB8;
}

void __fastcall func_00156FC0(void *p);
void *XboxGame::func_001D1390(int flags)
{
    vtbl = (void *)&D_0028F154;
    if (unk2A0 != 0) {
        unk2A0 = 0;
    }
    func_00156FC0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int XboxGame::func_001D13D0(int param_1)
{
    S_001D13D0_Alloc *p;

    unk2A0 = func_00201820(0);
    if (unk2A0 == 0)
        return 0;
    p = (S_001D13D0_Alloc *)func_001E8A44(0x9e0);
    D_002F07B8 = p ? (S_002F07B8 *)p->func_001D7D50() : 0;
    if (D_002F07B8 == 0)
        return 0;
    if (!D_002F07B8->func_001D87A0(0, unk29C, unk2A0, (unk230 >> 6) & 1))
        return 0;
    return func_001572B0(param_1);
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
    int i;

    f6B8 = func_0026EC54((int)&D_0026D94C, a0, 0, 0);
    f6C0 = 0;
    for (i = 0; i < f8; i++) {
        int off = i * 0xc;
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

int S_15D0_Pad::func_001D15D0(float dt)
{
    S_15D0_Pkt p;
    S_15D0_State st;
    int i;
    unsigned short mask;
    int changedLeft;
    int changedRight;
    float v;

    if (f6B8 && func_0026ECB6(f6B8, &p) < 0)
        return 0;
    if (p.id != f6C0) {
        f6C0 = p.id;
        st = *(S_15D0_State *)&p.buttons;
        for (i = 0; i < 8; i++) {
            unsigned char b = st.a[i];
            if (b != 0) {
                if (b > 0x38) {
                    if (btn[i].mode == 1) {
                        btn[i].fc = (int)((float)(unsigned)btn[i].fc + dt);
                        btn[i].val = b * D_00284758;
                    } else {
                        btn[i].mode = 1;
                        btn[i].val = b * D_00284758;
                        btn[i].f14 = 0;
                        btn[i].fc = 0;
                        ((S_15D0_H *)*(void **)(D_002A8490 + 8))->func_00135E90(i, 2, 1, f320);
                    }
                }
            } else {
                if (btn[i].mode == 0) {
                    btn[i].f8 = (int)((float)(unsigned)btn[i].f8 + dt);
                } else {
                    btn[i].mode = 0;
                    btn[i].val = 0.0f;
                    btn[i].f10 = 0;
                    btn[i].f8 = 0;
                    ((S_15D0_H *)*(void **)(D_002A8490 + 8))->func_00135E90(i, 2, 0, f320);
                }
            }
        }
        if (st.buttons != f6BC) {
            mask = 1;
            for (i = 8; i < f8; i++) {
                if (mask & st.buttons) {
                    if (btn[i].mode == 1) {
                        btn[i].fc = (int)((float)(unsigned)btn[i].fc + dt);
                    } else {
                        btn[i].mode = 1;
                        btn[i].val = 1.0f;
                        btn[i].f14 = 0;
                        btn[i].fc = 0;
                        ((S_15D0_H *)*(void **)(D_002A8490 + 8))->func_00135E90(i, 2, 1, f320);
                    }
                } else {
                    if (btn[i].mode == 0) {
                        btn[i].f8 = (int)((float)(unsigned)btn[i].f8 + dt);
                    } else {
                        btn[i].mode = 0;
                        btn[i].val = 0.0f;
                        btn[i].f10 = 0;
                        btn[i].f8 = 0;
                        ((S_15D0_H *)*(void **)(D_002A8490 + 8))->func_00135E90(i, 2, 0, f320);
                    }
                }
                mask <<= 1;
            }
        }
        axis[0] = st.lx * D_00287B68 + D_00278650;
        f6BC = st.buttons;
        axis[1] = D_00278784 - (st.ly * D_00287B68 + D_00278650);
        axis[2] = st.rx * D_00287B68 + D_00278650;
        axis[5] = D_00278784 - (st.ry * D_00287B68 + D_00278650);
        for (i = 0; i < 6; i++) {
            if (i == 2)
                v = D_00278784 - axis[2];
            else
                v = axis[i];
            func_0015AFC0(i, v, 256.0f);
        }
        changedRight = 0;
        changedLeft = 0;
        if (f6D8 != 0) {
            f6C4 -= dt;
            if (f6C4 <= D_00275544) {
                rumble.left = 0;
                changedLeft = 1;
                f6D8 = 0;
                f6C4 = 0.0f;
            }
        } else if (f6C4 > D_00275544) {
            rumble.left = (unsigned short)(int)((double)f6CC * D_00278784);
            changedLeft = 1;
            f6D8 = 1;
        }
        if (f6DC != 0) {
            f6C8 -= dt;
            if (f6C8 <= D_00275544) {
                rumble.right = 0;
                changedRight = 1;
                f6DC = 0;
                f6C8 = 0.0f;
            }
        } else if (f6C8 > D_00275544) {
            rumble.right = (unsigned short)(int)((double)f6D0 * D_00278784);
            changedRight = 1;
            f6DC = 1;
        }
        if (f6E4 != 0x3e5 && (changedRight != 0 || changedLeft != 0)) {
            rumbleOut = rumble;
            f6E8 = 0;
            func_0026ED25(f6B8, &f6E4);
        }
    }
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

int __stdcall func_001D1A60(int a0, int a1) { return 0; }

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

C_001D1BB0 *C_001D1BB0::func_001D1BB0()
{
    func_00160BD0();
    unk20 = 0;
    unk28 = 0;
    unk2C = 0;
    unk50 = 0;
    vtbl = &D_0028F274;
    return this;
}

