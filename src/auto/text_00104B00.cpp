/* 15 functions from 0x00104B00 to 0x00105AA0, found by Ghidra. */
#include "common.h"

struct S_00104DF0_Tex {
    S_00104DF0_Tex *func_001B3C10(int a0);
    void func_001B3DC0(int a0, int a1, float a2, int a3);
};

struct S_00104DF0_Info {
    char pad0[0x190];
    int f190[25];
    char f1f4[1][8];
};

struct S_00104DF0_G {
    char pad0[0x2e0];
    S_00104DF0_Info *f2e0;
};

extern "C" void func_001ADCC0(char *dst, int n, const char *fmt, const char *a, const char *b);
extern "C" int func_001EA426(const char *a, const char *b);
extern "C" void *func_001E8A44(unsigned int n);
extern char D_002A5FA8[];
extern char D_002A5348[];
extern char D_00275678[];
extern char D_002A60B0[];
extern char D_002A5D98[];
extern char D_002A5EA0[];
extern char D_002829A0[];
extern char D_0010103F[];
extern char D_00282A50[], D_00282A48[], D_00282A40[], D_00282A38[], D_00282A30[], D_00282A28[];
extern char D_00282A20[], D_00282A18[], D_00282A10[], D_00282A08[], D_00282A00[], D_002829F8[];
extern char D_002829F0[], D_002829E8[], D_002829E0[], D_002829D8[], D_002829D0[], D_002829C8[];
extern char D_002829C0[], D_002829B8[], D_002829B0[], D_002829A8[];

struct V4_00104B00 {
    float x, y, z, w;
};

struct S_00104B00_Tbl {
    char pad0[0x24];
    V4_00104B00 a24[8];
    V4_00104B00 aA4[8];
};

struct S_00104B00_Weights {
    char pad0[0x77e8];
    float f77e8[88];
    float f7948[88];
};

struct S_00104B00_Owner {
    char pad0[0x4dc];
    S_00104B00_Tbl *f4dc;
    char pad4e0[0x52c - 0x4e0];
    S_00104B00_Weights *f52c;
};

struct S_00104B00_Fx {
    void func_001648E0(int a0, float a1, int a2, int a3, int a4);
    void func_00164820(int a0);
    void func_00165980(int *a0, int a1);
    void func_001659D0(int a0, char *a1, int a2);
};

struct S_00104B00_Cam {
    void func_0001EDD0(float a0);
};

struct S_00104B00_Pos {
    char pad0[0x64];
    float f64;
    float f68;
};

struct S_00104B00_Obj {
    char pad0[0xe4];
    int fe4;
    int func_000831C0(void);
    void func_001BB4D0(int a0);
};

struct S_001058F0_Obj {
    void func_00086C20(int a0);
    void func_00133700(void);
    void func_00133660(int a0);
    void func_00133ED0(void);
    float func_00133F10(int a0);
};

extern int D_002BA154;
extern int D_002B911C;

struct S_00104B00_Plr {
    char pad0[0x568];
    int f568;
    S_00104B00_Obj **f56c;
};

struct S_00104B00_Mgr {
    char pad0[0x64];
    S_00104B00_Plr *f64;
    char pad68[0x170 - 0x68];
    S_00104B00_Obj *f170[1];
};

/* binding the device list entries are handed (see JoystickDevice::func_0015B060) */
struct C_00135D70 {
    char pad0[4];
    int f4;
};

struct JoystickDevice {
    virtual void v0(int a);
    int func_0015B060(C_00135D70 *p, int a, int b);
};

struct S_00104C80_Devices {
    char pad0[0x14];
    JoystickDevice *a14[8];
};

struct S_00104B00_Global {
    char pad0[8];
    S_00104C80_Devices *f8;
    char padC[0x2a4 - 0xc];
    S_00104B00_Mgr *f2a4;
};

extern S_00104B00_Global *D_002A8490;

struct C_00104B00 {
    char pad0[0x24];
    S_00104B00_Owner *f24;
    char pad28[0x208 - 0x28];
    S_00104B00_Pos *f208;
    char pad20c[0x480 - 0x20c];
    int f480;
    char pad484[0x528 - 0x484];
    float f528;
    char pad52c[0x5ec - 0x52c];
    S_00104B00_Cam *f5ec;
    S_00104B00_Cam *f5f0;
    char pad5f4[0x79c - 0x5f4];
    float f79c;
    float f7a0;
    float f7a4;
    float f7a8;
    float f7ac;
    float f7b0;
    float f7b4;
    float f7b8;
    float f7bc;
    float f7c0;
    float f7c4;
    float f7c8;
    int f7cc;
    char pad7d0[0x7f4 - 0x7d0];
    V4_00104B00 f7f4;
    V4_00104B00 f804;
    V4_00104B00 f814;
    char pad824[0x8a0 - 0x824];
    float f8a0;
    char pad8a4[0x970 - 0x8a4];
    int f970;
    char pad974[0x9e8 - 0x974];
    C_00135D70 *f9e8;
    C_00135D70 *f9ec;
    C_00135D70 *f9f0;
    C_00135D70 *f9f4;
    char pad9f8[0xa00 - 0x9f8];
    S_00104B00_Fx *fa00;
    S_00104B00_Fx *fa04;
    char pada08[0xa28 - 0xa08];
    int fa28;
    int fa2c;
    char pada30[0x1110 - 0xa30];
    int f1110;
    char pad1114[0x11b0 - 0x1114];
    S_001058F0_Obj *f11b0;
    char pad11b4[0x11f4 - 0x11b4];
    int f11f4;
    char pad11f8[0x1230 - 0x11f8];
    S_00104DF0_Tex *f1230;
    S_00104DF0_Tex *f1234;
    S_00104DF0_Tex *f1238;
    S_00104DF0_Tex *f123c;
    S_00104DF0_Tex *f1240;
    char pad1244[0x15b4 - 0x1244];
    int f15b4;
    int f15b8;
    int f15bc;
    int f15c0;
    int f15c4;
    int f15c8;
    int f15cc;
    int f15d0;
    char pad15d4[4];
    int f15d8;
    int f15dc;
    char pad15e0[4];
    int f15e4;
    char pad15e8[4];
    int f15ec;
    float f15f0;
    float f15f4;
    char pad15f8[0x1600 - 0x15f8];
    int f1600;
    char pad1604[4];
    int f1608;
    int f160c;
    int f1610;
    char pad1614[0x1664 - 0x1614];
    int f1664;
    char pad1668[0x1800 - 0x1668];
    int f1800;
    float func_00104BB0(int i);
    void func_00104BE0(void);
    int func_001056E0(void);
    void func_001057A0(void);
    void func_00105800(void);
    void func_00105890(void);
    void func_001058F0(void);
    void func_00105970(void);
    void func_001059E0(void);
    void func_00105A40(void);
    void func_00105050(void);
    void func_00104DF0(int a0);
    void func_00104F10(int a0);
    int func_00104C80(int idx);
    void func_001577A0(S_00104DF0_Tex *t, int a1);
};

extern V4_00104B00 D_002A3A5C;

V4_00104B00 func_00104B00(V4_00104B00 *a, V4_00104B00 *b)
{
    V4_00104B00 r;

    r.x = a->x * b->x - b->y * a->y - b->z * a->z - b->w * a->w;
    r.y = a->y * b->x + b->w * a->z + b->y * a->x - b->z * a->w;
    r.z = a->z * b->x + b->y * a->w + b->z * a->x - b->w * a->y;
    r.w = a->w * b->x + b->z * a->y + b->w * a->x - b->y * a->z;
    return r;
}

float C_00104B00::func_00104BB0(int i)
{
    if (f480 == 0) {
        return f24->f52c->f7948[i];
    }
    return f24->f52c->f77e8[i];
}

void C_00104B00::func_00104BE0(void)
{
    if (f24 != 0) {
        f7f4 = f24->f4dc->a24[fa2c];
        f804 = f24->f4dc->aA4[fa2c];
        f814 = D_002A3A5C;
    }
}

int C_00104B00::func_00104C80(int idx)
{
    if (idx >= 0 && idx < 8) {
        if (D_002A8490->f8->a14[f970] != 0) {
            D_002A8490->f8->a14[f970]->v0(f9e8->f4);
            D_002A8490->f8->a14[f970]->v0(f9ec->f4);
            D_002A8490->f8->a14[f970]->v0(f9f0->f4);
            D_002A8490->f8->a14[f970]->v0(f9f4->f4);
        }
        if (D_002A8490->f8->a14[idx] != 0) {
            f970 = idx;
            D_002A8490->f8->a14[idx]->func_0015B060(f9e8, 0x3c23d70a, 0x3c23d70a);
            D_002A8490->f8->a14[f970]->func_0015B060(f9ec, 0x3c23d70a, 0x3c23d70a);
            D_002A8490->f8->a14[f970]->func_0015B060(f9f0, 0x3c23d70a, 0x3c23d70a);
            D_002A8490->f8->a14[f970]->func_0015B060(f9f4, 0x3c23d70a, 0x3c23d70a);
            return 1;
        }
    }
    return 0;
}

void C_00104B00::func_00104DF0(int a0)
{
    int color;
    S_00104DF0_Tex *t;

    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5348, D_002A5FA8);
    func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5348, D_002A5D98);
    color = 0;
    if (((S_00104DF0_G *)D_002A8490)->f2e0->f190[fa28] == 3) {
        color = 0x808080;
    } else if (func_001EA426(((S_00104DF0_G *)D_002A8490)->f2e0->f1f4[fa28], D_002829A0) == 0) {
        color = (int)D_0010103F;
    }
    t = (S_00104DF0_Tex *)func_001E8A44(0xac);
    f1234 = t ? t->func_001B3C10(1) : 0;
    f1234->func_001B3DC0(a0, 4, 0.02f, color);
    func_001577A0(f1234, 8);
    t = (S_00104DF0_Tex *)func_001E8A44(0xac);
    f1230 = t ? t->func_001B3C10(1) : 0;
    f1230->func_001B3DC0(a0, 0x20, 0.02f, color);
    func_001577A0(f1230, 8);
}

void C_00104B00::func_00104F10(int a0)
{
    int color;
    S_00104DF0_Tex *t;

    func_001ADCC0(D_002A60B0, 0x104, D_00275678, D_002A5348, D_002A5FA8);
    func_001ADCC0(D_002A5EA0, 0x104, D_00275678, D_002A5348, D_002A5D98);
    color = 0x808080;
    if (((S_00104DF0_G *)D_002A8490)->f2e0->f190[fa28] == 8) {
        color = 0;
    }
    t = (S_00104DF0_Tex *)func_001E8A44(0xac);
    f1238 = t ? t->func_001B3C10(1) : 0;
    f1238->func_001B3DC0(a0, 8, 0.02f, color);
    func_001577A0(f1238, 8);
    t = (S_00104DF0_Tex *)func_001E8A44(0xac);
    f123c = t ? t->func_001B3C10(1) : 0;
    f123c->func_001B3DC0(a0, 8, 0.02f, color);
    func_001577A0(f123c, 8);
    t = (S_00104DF0_Tex *)func_001E8A44(0xac);
    f1240 = t ? t->func_001B3C10(1) : 0;
    f1240->func_001B3DC0(a0, 8, 0.02f, color);
    func_001577A0(f1240, 8);
}

void C_00104B00::func_00105050(void)
{
    fa00->func_00165980(&f15b4, 1);
    fa00->func_00165980(&f15b8, 1);
    fa00->func_00165980(&f15bc, 1);
    fa00->func_00165980(&f15c0, 1);
    fa00->func_00165980(&f15c4, 1);
    fa00->func_00165980(&f15c8, 1);
    fa00->func_00165980(&f15cc, 1);
    fa00->func_00165980(&f15d0, 1);
    fa00->func_001659D0(f15b4, D_00282A50, 0);
    fa00->func_001659D0(f15b4, D_00282A48, 0);
    fa00->func_001659D0(f15b4, D_00282A40, 0);
    fa00->func_001659D0(f15b4, D_00282A38, 0);
    fa00->func_001659D0(f15b4, D_00282A30, 0);
    fa00->func_001659D0(f15b4, D_00282A28, 0);
    fa00->func_001659D0(f15b4, D_00282A20, 0);
    fa00->func_001659D0(f15b4, D_00282A18, 0);
    fa00->func_001659D0(f15b8, D_00282A10, 0);
    fa00->func_001659D0(f15b8, D_00282A08, 0);
    fa00->func_001659D0(f15b8, D_00282A00, 0);
    fa00->func_001659D0(f15b8, D_002829F8, 0);
    fa00->func_001659D0(f15b8, D_002829F0, 0);
    fa00->func_001659D0(f15b8, D_002829E8, 0);
    fa00->func_001659D0(f15b8, D_002829E0, 0);
    fa00->func_001659D0(f15b8, D_002829D8, 0);
    fa00->func_001659D0(f15bc, D_00282A50, 0);
    fa00->func_001659D0(f15bc, D_00282A48, 0);
    fa00->func_001659D0(f15bc, D_00282A40, 0);
    fa00->func_001659D0(f15bc, D_00282A38, 0);
    fa00->func_001659D0(f15bc, D_00282A30, 0);
    fa00->func_001659D0(f15bc, D_00282A28, 0);
    fa00->func_001659D0(f15bc, D_00282A20, 0);
    fa00->func_001659D0(f15bc, D_00282A18, 0);
    fa00->func_001659D0(f15bc, D_00282A10, 0);
    fa00->func_001659D0(f15bc, D_00282A08, 0);
    fa00->func_001659D0(f15bc, D_00282A00, 0);
    fa00->func_001659D0(f15bc, D_002829F8, 0);
    fa00->func_001659D0(f15bc, D_002829F0, 0);
    fa00->func_001659D0(f15bc, D_002829E8, 0);
    fa00->func_001659D0(f15bc, D_002829E0, 0);
    fa00->func_001659D0(f15bc, D_002829D8, 0);
    fa00->func_001659D0(f15c0, D_002829D0, 0);
    fa00->func_001659D0(f15c0, D_002829C8, 0);
    fa00->func_001659D0(f15c0, D_002829C0, 0);
    fa00->func_001659D0(f15c4, D_002829B8, 0);
    fa00->func_001659D0(f15c4, D_002829B0, 0);
    fa00->func_001659D0(f15c4, D_002829A8, 0);
    fa00->func_001659D0(f15c8, D_002829B8, 0);
    fa00->func_001659D0(f15c8, D_002829B0, 0);
    fa00->func_001659D0(f15c8, D_002829A8, 0);
    fa00->func_001659D0(f15c8, D_002829D0, 0);
    fa00->func_001659D0(f15c8, D_002829C8, 0);
    fa00->func_001659D0(f15c8, D_002829C0, 0);
    fa00->func_001659D0(f15cc, D_00282A50, 0);
    fa00->func_001659D0(f15cc, D_00282A48, 0);
    fa00->func_001659D0(f15cc, D_00282A40, 0);
    fa00->func_001659D0(f15cc, D_00282A38, 0);
    fa00->func_001659D0(f15cc, D_00282A30, 0);
    fa00->func_001659D0(f15cc, D_00282A28, 0);
    fa00->func_001659D0(f15cc, D_00282A20, 0);
    fa00->func_001659D0(f15cc, D_00282A18, 0);
    fa00->func_001659D0(f15cc, D_002829D0, 0);
    fa00->func_001659D0(f15cc, D_002829C8, 0);
    fa00->func_001659D0(f15cc, D_002829C0, 0);
    fa00->func_001659D0(f15d0, D_00282A10, 0);
    fa00->func_001659D0(f15d0, D_00282A08, 0);
    fa00->func_001659D0(f15d0, D_00282A00, 0);
    fa00->func_001659D0(f15d0, D_002829F8, 0);
    fa00->func_001659D0(f15d0, D_002829F0, 0);
    fa00->func_001659D0(f15d0, D_002829E8, 0);
    fa00->func_001659D0(f15d0, D_002829E0, 0);
    fa00->func_001659D0(f15d0, D_002829D8, 0);
    fa00->func_001659D0(f15d0, D_002829B8, 0);
    fa00->func_001659D0(f15d0, D_002829B0, 0);
    fa00->func_001659D0(f15d0, D_002829A8, 0);
}

int C_00104B00::func_001056E0(void)
{
    if (fa00 != 0) {
        fa00->func_001648E0(f1664, 1.0f, 0, 0, 0);
        fa00->func_00164820(f1664);
    }
    if (fa04 != 0) {
        fa04->func_001648E0(f1800, 1.0f, 0, 0, 0);
        fa04->func_00164820(f1800);
    }
    f11f4 = 0;
    f15d8 = 1;
    f15dc = 1;
    f15e4 = 0;
    f1608 = 0;
    f160c = 0;
    f1610 = 0;
    f1600 = 0;
    f15ec = 0;
    f1110 = 0;
    f15f4 = 1.0f;
    f15f0 = 1.0f;
    return 1;
}

void C_00104B00::func_001057A0(void)
{
    f5ec->func_0001EDD0(f79c);
    f5f0->func_0001EDD0(f7a0);
    f208->f64 = f7a4;
    f208->f68 = f7a8;
    f8a0 = f7ac;
    f528 = f7b0;
}

void C_00104B00::func_00105800(void)
{
    f5ec->func_0001EDD0(f7b4 + f79c);
    f5f0->func_0001EDD0(f7b8 + f7a0);
    f208->f64 = f7bc + f7a4;
    f208->f68 = f7c0 + f7a8;
    f8a0 = f7c4 + f7ac;
    f528 = f7c8 + f7b0;
}

void C_00104B00::func_00105890(void)
{
    S_00104B00_Obj *o = D_002A8490->f2a4->f170[fa2c];
    if (o != 0) {
        int r = o->func_000831C0();
        if (f7cc == 0 && r != 0) {
            f7cc = 1;
            func_00105800();
        } else if (f7cc != 0 && r == 0) {
            f7cc = 0;
            func_001057A0();
        }
    }
}

void C_00104B00::func_001058F0(void)
{
    f11b0->func_00086C20(0);
    f11b0->func_00133700();
    f11b0->func_00133660(D_002BA154);
    f11b0->func_00133ED0();
    f11b0->func_00133F10(0);
    f11b0->func_00086C20(1);
    f11b0->func_00133700();
    f11b0->func_00133660(D_002B911C);
}

void C_00104B00::func_00105970(void)
{
    int i;

    if (D_002A8490->f2a4 != 0) {
        for (i = 0; i < D_002A8490->f2a4->f64->f568; i++) {
            S_00104B00_Obj *o = D_002A8490->f2a4->f64->f56c[i];
            if (o != 0 && o->fe4 == 0) {
                o->func_001BB4D0(fa28);
            }
        }
    }
}

void C_00104B00::func_001059E0(void)
{
    int i;

    if (D_002A8490->f2a4 != 0) {
        for (i = 0; i < D_002A8490->f2a4->f64->f568; i++) {
            S_00104B00_Obj *o = D_002A8490->f2a4->f64->f56c[i];
            if (o != 0 && o->fe4 == 1) {
                o->func_001BB4D0(fa28);
            }
        }
    }
}

void C_00104B00::func_00105A40(void)
{
    int i;

    if (D_002A8490->f2a4 != 0) {
        for (i = 0; i < D_002A8490->f2a4->f64->f568; i++) {
            S_00104B00_Obj *o = D_002A8490->f2a4->f64->f56c[i];
            if (o != 0) {
                o->func_001BB4D0(fa28);
            }
        }
    }
}

