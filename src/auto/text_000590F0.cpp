/* 13 functions from 0x000590F0 to 0x0005A0E0, found by Ghidra. */
#include "common.h"

extern int D_00277FD4;

void func_001E891B(void *p);

struct C_0018C640 {
    void func_0018C640(void);
};

struct C_001D0E30 {
    void func_001D0E30(void);
};

struct C_001D0E60 {
    void func_001D0E60(void);
};

struct C_001D0EC0 {
    int func_001D0EC0(void);
};

struct GameEvent {
    int f0;
    int f4;
};

struct C_001D0F70 {
    int func_001D0F70(GameEvent *e, int b);
};

struct InputDevice {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5(int a, int b, int c, int d);
};

struct C_001577A0 {
    void func_001577A0(int a, int b);
};

struct S_002A8490 {
    char pad0[8];
    InputDevice *f8;
    char padC[8];
    C_001577A0 *f14;
    char pad18[0x2F0 - 0x18];
    int f2F0;
};
extern S_002A8490 *D_002A8490;

struct Rect_0005A020 {
    int x, y, w, h;
};

struct Renderer_002EFDB8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(int a);
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12(Rect_0005A020 *r);
};
extern Renderer_002EFDB8 *D_002EFDB8;

struct BmxGameObj2A4 {
    char pad0[0x21];
    u8 f21;
    char pad22[0x154 - 0x22];
    void *f154;
};

struct BmxGame {
    void *vtbl;
    char pad4[0x120];
    int f124;
    int f128;
    char pad12C[0x104];
    u8 f230;
    char pad231[0x73];
    BmxGameObj2A4 *f2A4;
    char pad2A8[8];
    int f2B0;
    int f2B4;
    u8 f2B8;
    char pad2B9[0xE];
    u8 f2C7;
    char pad2C8[0x10];
    int f2D8;
    int f2DC;
    int f2E0;
    int f2E4;
    char pad2E8[4];
    C_0018C640 *f2EC;
    int f2F0;
    int f2F4;
    int f2F8;
    int f2FC;
    BmxGame *func_000598E0(void);
    int func_00059950(GameEvent *e, int b);
    int func_00059A00(void);
    void func_0005A0B0(void);
    void func_00059CC0(void);
    void func_00157420(void);
    void func_0005A020(void);
};

void __stdcall func_000597A0(int a0, int a1) {
    int func_000560A0(...);
    func_000560A0();
}

BmxGame *BmxGame::func_000598E0(void)
{
    ((C_001D0E30 *)this)->func_001D0E30();
    vtbl = (void *)&D_00277FD4;
    f2A4 = 0;
    f2B0 = 0;
    f2B4 = 0;
    f2B8 = 0;
    f2C7 = 0;
    f2D8 = 1;
    f2DC = 0;
    f2E0 = 0;
    f2E4 = 1;
    f2EC = 0;
    f2F0 = 0;
    f2F4 = 1;
    f2F8 = 0;
    f2FC = 0;
    return this;
}

int BmxGame::func_00059950(GameEvent *e, int b)
{
    if ((f230 & 1) && f2A4 != 0 && (f2A4->f21 & 1) && e->f4 == 0) {
        if (D_002A8490->f8->v5(0x21, 0, 0xC, 0)) {
            f124 = 1 - f124;
        } else if (D_002A8490->f8->v5(0x12, 0, 0x3F, 0)) {
            if (f124 != 0) {
                f128 = 1;
                f124 = 0;
            }
        }
    }
    f2F8 = 1;
    return ((C_001D0F70 *)this)->func_001D0F70(e, b);
}

int BmxGame::func_00059A00(void)
{
    return ((C_001D0EC0 *)this)->func_001D0EC0();
}

void BmxGame::func_0005A0B0(void)
{
    C_0018C640 *p = f2EC;
    vtbl = (void *)&D_00277FD4;
    if (p != 0) {
        p->func_0018C640();
        func_001E891B(p);
    }
    ((C_001D0E60 *)this)->func_001D0E60();
}

