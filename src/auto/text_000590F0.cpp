/* 13 functions from 0x000590F0 to 0x0005A0E0, found by Ghidra. */
#include "common.h"

extern int D_00277FD4;
extern float D_002755E8, D_002756D0, D_002756B8, D_002756E8, D_00277FBC, D_00275544, D_002756DC, D_00277FB8, D_00277FB4, D_00277FB0, D_00277D04;
struct C_00059290 {
    char pad0[0x58];
    int f58;
    char pad5c[0x190 - 0x5c];
    float f190;
    char pad194[0x1dc - 0x194];
    int f1dc, f1e0;
    void func_00059290(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, float a8, float a9, float a10);
};

void func_001E891B(void *p);

struct Rect16_000597B0 {
    int a, b, c, d;
};
extern Rect16_000597B0 D_002A1A64;
extern char D_002A5348[];
extern char D_00275678[];
extern char D_002A60B0[];
extern char D_002A5FA8[];
extern char D_00278084[];
extern char D_00278070[];
void *func_001E8A44(unsigned int size);
int func_001ADCC0(char *buf, int size, char *fmt, ...);

struct Fader_000597B0 {
    float value;
    float rate;
    float scale;
    float max;
    float min;
    Fader_000597B0(float r) {
        value = 0.0f;
        rate = r;
        max = 3.402823466e+38f;
        min = -3.402823466e+38f;
        scale = 1.0f;
    }
};

template <class T> inline const T &Min_000590F0(const T &a, const T &b) { return b < a ? b : a; }
static __forceinline int Clamp_000590F0(int v, int hi) { return v > hi ? hi : v; }

struct File_000590F0 {
    char data[0x4C8];
    void func_00168280(void);
    int func_00169490(char *name, int mode);
    void func_001691E0(void);
    void func_00169710(char *s);
};
extern char D_00277FA0[];
extern char D_00277F8C[];
extern char D_00277F78[];
extern char D_00277F64[];
extern char D_00277F50[];
extern "C" char *func_001E8920(char *d, const char *s, int n);

static __forceinline void CopyName_000590F0(char *buf, const char *src, int lim)
{
    struct { volatile int a; volatile int r; } t;
    int va, n;
    t.a = 0x103;
    va = t.a;
    t.r = va > lim ? lim : va;
    n = t.r;
    func_001E8920(buf, src, n);
    buf[n] = 0;
}

struct Screen_000597B0 {
    char pad0[0x40];
    int f40;
    char pad44[8];
    char *f4C;
    int f50;
    char pad54[0xCC - 0x54];
    Rect16_000597B0 fCC;
    char padDC[0x130 - 0xDC];
    Fader_000597B0 *f130;
    Fader_000597B0 *f134;
    int func_000590F0(int a);
    void func_00055D10(File_000590F0 *f);
    void func_00056100(Rect16_000597B0 r, int a);
    int func_000597B0(Rect16_000597B0 r, int a4, int name, int a6, int a7);
};

struct C_0018C640 {
    void func_0018C640(void);
    void func_0018C120(void);
};

struct S_00059F50_Ctl {
    void func_00094960(int a);
    void func_000947F0(int a);
    int func_00094EE0(void);
    void func_00094D90(int a);
    void func_00095200(int a);
    void func_00094C00(void);
};

struct S_00059F50_E0 {
    char pad0[4];
    int f4;
    char pad8[0x2BC];
    void *f2C4;
    char pad2C8[0x2FC-0x2C8];
    S_00059F50_Ctl *f2FC;
};

struct S_00059F50_Fb4 {
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
};

struct S_00059F50_F4 {
    int func_0001D330();
    char pad0[0xB4];
    S_00059F50_Fb4 *fB4;
};

struct S_00059F50_Obj {
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
    virtual int v10();
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
    virtual void v27(int a, int b, int c);
    virtual void v28(int a, int b);
    virtual void v29();
    void func_00157810(void);
};

struct C_000B9A60 {
    S_00059F50_Obj *func_000B9A60(int a);
};

struct S_00059F50_Mgr {
    void func_0013CA50(void);
};
extern S_00059F50_Mgr *D_002BEAAC;

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
    int func_001577A0(int a, int b);
};

/* constructors (thiscall, flag argument) of the objects BmxGame::func_00059AC0 creates, each returns this */
struct S_00059AC0_Ctors {
    S_00059F50_Obj *func_000511A0(int a);
    S_00059F50_Obj *func_0004BAB0(int a);
    S_00059F50_Obj *func_000536A0(int a);
    S_00059F50_Obj *func_0004C610(int a);
    S_00059F50_Obj *func_0004D930(int a);
    S_00059F50_Obj *func_00053D20(int a);
    S_00059F50_Obj *func_0004ECC0(int a);
    S_00059F50_Obj *func_00050A10(int a);
    S_00059F50_Obj *func_00049C00(int a);
    S_00059F50_Obj *func_0004F220(int a);
    S_00059F50_Obj *func_000378D0(int a);
};

struct Level_00059CC0 {
 char pad0[0x4C0];
 S_00059F50_Fb4 *f4C0;
 char pad4C4[0x594-0x4C4];
 int f594;
};
struct Obj_00059CC0 {
 char pad0[0x64];
 Level_00059CC0 *f64;
};
struct C_001C4B60 {
    void func_001C4B60(int a, int b);
};

/* text console: prints the two strings, then the reset sequence */
struct S_00059E10_Console {
    void func_00030020(const char *s);
    void func_000300C0(const char *s);
    void func_00030210(void);
    void func_000301A0(void);
};

struct S_00059E10_Screen {
    char pad0[0x74];
    S_00059E10_Console *f74;
};

struct S_00059E10_View {
    char pad0[0x25C];
    S_00059E10_Screen *f25C;
    char pad260[8];
    C_001C4B60 *f268;
};

struct S_00059E10_Scene {
    char pad0[0x24];
    S_00059E10_View *f24;
};

struct S_002A8490 {
    char pad0[4];
    S_00059F50_F4 *f4;
    InputDevice *f8;
    char padC[8];
    C_001577A0 *f14;
    char pad18[0x2A4 - 0x18];
    Obj_00059CC0 *f2A4;
    char pad2A8[4];
    S_00059E10_Scene *f2AC;
    char pad2B0[0x2E0 - 0x2B0];
    S_00059F50_E0 *f2E0;
    char pad2E4[0xC];
    int f2F0;
};
extern S_002A8490 *D_002A8490;

struct Rect_0005A020 {
    int x, y, w, h;
    float minZ, maxZ;
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

struct C_001A5BC0 {
    void func_001A5BC0(void);
};

struct BmxGame {
    void *vtbl;
    char pad4[0x10];
    C_001577A0 *f14;
    char pad18[0x10C];
    int f124;
    int f128;
    char pad12C[0x104];
    u8 f230;
    char pad231[0x73];
    BmxGameObj2A4 *f2A4;
    char pad2A8[4];
    S_00059F50_Obj *f2AC;
    int f2B0;
    int f2B4;
    u8 f2B8;
    char pad2B9[0xE];
    u8 f2C7;
    char pad2C8[0x10];
    int f2D8;
    int f2DC;
    S_00059F50_E0 *f2E0;
    int f2E4;
    char pad2E8[4];
    C_0018C640 *f2EC;
    C_001A5BC0 *f2F0;
    int f2F4;
    int f2F8;
    int f2FC;
    BmxGame *func_000598E0(void);
    int func_00059AC0(void);
    BmxGameObj2A4 *Register(S_00059F50_Obj *o)
    {
        return (BmxGameObj2A4 *)f14->func_001577A0(o->v10(), -1);
    }
    int func_00059E10(int a, int b);
    int func_00059950(GameEvent *e, int b);
    int func_00059A00(void);
    void func_00059F50(void);
    void func_0005A0B0(void);
    int func_00059CC0(void);
    void func_00157420(void);
    void func_0005A020(void);
};

void __stdcall func_000597A0(int a0, int a1) {
    int func_000560A0(...);
    func_000560A0();
}

int Screen_000597B0::func_000597B0(Rect16_000597B0 r, int a4, int name, int a6, int a7)
{
    f50 = a7;
    f130 = new Fader_000597B0(0.02f);
    f134 = new Fader_000597B0(0.2f);
    if (f4C == 0) {
        f4C = (char *)func_001E8A44(0x104);
    }
    func_001ADCC0(f4C, 0x104, D_00275678, D_002A5348, name);
    if (!func_000590F0(a7)) {
        return 0;
    }
    if (a6) {
        func_00056100(r, a4);
    }
    fCC = D_002A1A64;
    f40 = 1;
    return 1;
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

int BmxGame::func_00059AC0(void)
{
    S_00059F50_Obj *obj;
    void *m;

    D_002A8490->f4->fB4->v9();
    if (f2E4 != 0) {
        switch (f2E0->f4) {
        case 1:
            m = func_001E8A44(0x2a4);
            obj = m ? ((S_00059AC0_Ctors *)m)->func_0004BAB0(1) : 0;
            break;
        case 0:
            m = func_001E8A44(0x360);
            obj = m ? ((S_00059AC0_Ctors *)m)->func_000511A0(1) : 0;
            break;
        case 2:
            m = func_001E8A44(0x28c);
            obj = m ? ((S_00059AC0_Ctors *)m)->func_000536A0(1) : 0;
            break;
        case 3:
            m = func_001E8A44(0x1254);
            obj = m ? ((S_00059AC0_Ctors *)m)->func_0004C610(1) : 0;
            break;
        case 4:
            m = func_001E8A44(0x788);
            obj = m ? ((S_00059AC0_Ctors *)m)->func_0004D930(1) : 0;
            break;
        case 5:
            m = func_001E8A44(0x2ec);
            obj = m ? ((S_00059AC0_Ctors *)m)->func_00053D20(1) : 0;
            break;
        case 6:
            m = func_001E8A44(0xd78);
            obj = m ? ((S_00059AC0_Ctors *)m)->func_0004ECC0(1) : 0;
            break;
        case 7:
            m = func_001E8A44(0x29c);
            obj = m ? ((S_00059AC0_Ctors *)m)->func_00050A10(1) : 0;
            break;
        case 10:
            m = func_001E8A44(0x2ec);
            obj = m ? ((S_00059AC0_Ctors *)m)->func_00049C00(1) : 0;
            break;
        case 8:
        case 9:
            m = func_001E8A44(0x2e4);
            obj = m ? ((S_00059AC0_Ctors *)m)->func_0004F220(1) : 0;
            break;
        case 11:
            m = func_001E8A44(0x94c);
            obj = m ? ((S_00059AC0_Ctors *)m)->func_000378D0(1) : 0;
            break;
        default:
            goto done;
        }
        f2A4 = (BmxGameObj2A4 *)f14->func_001577A0(obj->v10(), -1);
    }
done:
    if (f2F0 != 0) {
        f2F0->func_001A5BC0();
    }
    return 1;
}

int __fastcall func_00059CC0(BmxGame *self)
{
    D_002EFDB8->v9();
    if (self->f2A4) {
        D_002A8490->f2E0->f2FC->func_00094960(0);
        D_002A8490->f2E0->f2FC->func_000947F0(0);
        if (*(int *)(*(char **)(*(char **)((char *)D_002A8490 + 0x2a4) + 0x64) + 0x594))
            D_002A8490->f2E0->f2FC->func_00094D90(250);
        D_002A8490->f2E0->f2FC->func_00094C00();
        (*(S_00059F50_F4 **)((char *)self + 4))->func_0001D330();
        (*(S_00059F50_Fb4 **)(*(char **)(*(char **)((char *)D_002A8490 + 0x2a4) + 0x64) + 0x4c0))->v28();
        (*(S_00059F50_F4 **)((char *)self + 4))->fB4->v14();
        self->f2EC->func_0018C120();
        D_002A8490->f4->fB4->v9();
        if (*(void **)((char *)D_002A8490->f2E0 + 0x2c4)) {
            func_001E891B(*(void **)((char *)D_002A8490->f2E0 + 0x2c4));
            *(void **)((char *)D_002A8490->f2E0 + 0x2c4) = 0;
        }
        ((S_00059F50_Obj *)self->f2A4)->func_00157810();
        ((S_00059F50_Obj *)self->f2A4)->v2();
        self->f2A4 = 0;
        D_002BEAAC->func_0013CA50();
    }
    return 1;
}

int BmxGame::func_00059E10(int a, int b)
{
    S_00059E10_View *view;

    f124 = 0;
    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5348, D_002A5FA8);
    if (f2AC != 0) {
        f2AC->v29();
        D_002A8490->f4->fB4->v9();
        f2AC->v28(a, b);
    } else {
        void *m = func_001E8A44(0x34);
        f2AC = m ? ((C_000B9A60 *)m)->func_000B9A60(1) : 0;
        f2AC->v27(a, b, -1);
        f14->func_001577A0((int)f2AC, -1);
    }
    view = D_002A8490->f2AC->f24;
    if (D_002A8490->f2E0->f4 == 0xb) {
        view->f25C->f74->func_00030020(D_00278084);
        view->f25C->f74->func_000300C0(D_00278070);
        view->f25C->f74->func_00030210();
        view->f25C->f74->func_000301A0();
    }
    view->f268->func_001C4B60(500, 0);
    if (f2F0 != 0) {
        f2F0->func_001A5BC0();
    }
    return 1;
}

void BmxGame::func_00059F50(void)
{
    D_002EFDB8->v9();
    if (f2AC != 0) {
        f2EC->func_0018C120();
        if (D_002A8490->f2E0->f2FC->func_00094EE0() != 0) {
            D_002A8490->f2E0->f2FC->func_00094D90(0);
        }
        D_002A8490->f2E0->f2FC->func_00095200(0x13);
        D_002A8490->f4->fB4->v14();
        D_002A8490->f2E0->f2FC->func_00094C00();
        f2AC->func_00157810();
        f2AC->v2();
        f2AC = 0;
        D_002BEAAC->func_0013CA50();
    }
}

void BmxGame::func_0005A020(void)
{
    if (f2A4 != 0 && f2A4->f154 != 0) {
        Rect_0005A020 r;
        D_002EFDB8->v7(1);
        D_002EFDB8->v8();
        r.x = 0;
        r.y = 0;
        r.w = 640;
        r.h = 448;
        D_002EFDB8->v12(&r);
    }
    func_00059CC0();
    D_002A8490->f14->func_001577A0(D_002A8490->f2F0, -1);
    func_00157420();
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

