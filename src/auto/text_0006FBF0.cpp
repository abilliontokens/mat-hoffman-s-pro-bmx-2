/* 7 functions from 0x0006FBF0 to 0x000707D0, found by Ghidra. */
#include "common.h"
#include <string.h>

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern char D_00277038[];

struct C_001D5AD0 { void func_001D5AD0(void); void func_001D6600(void); void func_0005E840(int a0); void func_0005E7C0(float x, float y); };
struct S_00070450_Data {
    char pad0[0x7b8];
    int f7b8;
    char pad7bc[4];
    int f7c0;
    char pad7c4[0xec0 - 0x7c4];
    int fec0;
    char pad_ec4[0xee8 - 0xec4];
    int fee8;
};
struct S_00070450_Mgr {
    char pad0[4];
    S_00070450_Data *f4;
};
struct ClampObj_6FB {
    char pad0[0x10];
    float f10;
    float f14;
};
struct MidObj_6FB { ClampObj_6FB *func_0018C070(); };
struct SubElem_6FB { ClampObj_6FB *func_001D5AA0(); };
struct LookupObj_6FB { int *func_0018C160(int a); };
extern float D_00275AEC;
extern int D_00278690;
extern int D_00278678;
struct S_00070450_Global {
    char pad0[0x270];
    int f270;
    int f274;
    char pad278[0x70];
    S_00070450_Mgr *f2e8;
    LookupObj_6FB *f2ec;
};
struct C_0006FBF0 {
    char pad0[0xd8];
    SubElem_6FB *unkD8;
    char padDC[0x128 - 0xdc];
    SubElem_6FB *a128[2];
    char pad130[0x10];
    SubElem_6FB *a140[4];
    SubElem_6FB *a150[2];
    SubElem_6FB *a158[5];
    SubElem_6FB *a16C[5];
    void func_0006FBF0(void);
    void func_001578D0(void);
};
extern S_00070450_Global *D_002A8490;

struct S_00070570_V4 { float x, y, z, w; };
struct S_00070570_Rect24 { int x, y, w, h, zmin, zmax; };
struct S_00070570_Text {
    char *func_001B17F0(void);
    int func_001B1800(void);
    void func_001B1810(S_00070570_V4 *out);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, int a11, int a12, int a13);
    void func_001B1980(void);
    void func_001B1A30(float x, float y, float z);
    void func_001B19A0(int color);
    void func_001B15F0(void);
};
struct S_00070570_Viewport {
    char pad0[0x1e0];
    S_00070570_Rect24 rect;
    void func_0012B2B0(void *a, void *b);
};
struct S_00070570_Device {
    void *vtbl;
    S_00070570_Viewport *f4;
};
extern S_00070570_Device *D_002EFDB8;
extern int D_0028F5DC;
extern double D_00278C40;

struct S_0006FF80_Stats {
    char pad0[0xa40]; int fa40; char pad_a44[8]; int fa4c; char pad_a50[4]; int fa54, fa58, fa5c;
    char pad_a60[0x1058 - 0xa60]; int f1058;
};
struct S_0006FF80_Mid { char pad0[0x1a8]; S_0006FF80_Stats *f1a8; };
struct S_0006FF80_Top { char pad0[0x4e0]; S_0006FF80_Mid *f4e0; };
struct S_0006FF80_Chk { int func_0005B960(int idx, float v); int func_0005B960(int idx, int v); };
struct S_0006FF80_Own { char pad0[0x64]; S_0006FF80_Top *f64; S_0006FF80_Chk *f68; };
struct S_0006FF80_Buf { int a, b, c; short d; char e; };
struct S_6FF80_Data {
    char pad0[0x18]; int f18;
    char pad1c[4]; int f20;
    char pad24[0x120 - 0x24]; int f120;
    int f128;
    char pad12c[0x188 - 0x12c]; int f188;
    char pad18c[0x1198 - 0x18c]; int f1198;
};
struct S_6FF80_Text { void func_0005E840(char *s); };
struct C_0006FF80 {
    char pad0[0xEC];
    S_0006FF80_Own *fEC;
    char padF0[0x180 - 0xF0];
    S_6FF80_Text *f180[8];
    int func_0006FF80(void);
};
extern char D_00278C38[], D_00278C28[];
struct S_0006FF80_Str { char pad0[0x18]; int f18; char pad1c[4]; int f20; char pad24[0x100]; int f124_; int f128; char pad12c[0x5c]; int f188; char pad18c[0xfc4 - 0x18c]; int f1198_dummy; };

struct C_00070360 {
    char pad0[0x6C];
    int unk6C;
    char pad70[0x50];
    int unkC0, unkC4;
    C_001D5AD0 *unkC8, *unkCC;
    S_00070570_Text *unkD0, *unkD4;
    C_001D5AD0 *unkD8;
    char padDC[4];
    C_001D5AD0 *unkE0;
    char padE4[4];
    float unkE8;
    char padEC[4];
    C_001D5AD0 *unkF0;
    char padF4[4];
    C_001D5AD0 *unkF8;
    char padFC[4];
    C_001D5AD0 *unk100;
    int unk104;
    char pad108[8];
    float unk110;
    char pad114[0x14];
    C_001D5AD0 *unk128, *unk12C;
    C_001D5AD0 *unk130[3];
    C_001D5AD0 *unk13C;
    C_001D5AD0 *unk140, *unk144, *unk148, *unk14C;
    C_001D5AD0 *unk150[2];
    C_001D5AD0 *unk158[5];
    C_001D5AD0 *unk16C[5];
    C_001D5AD0 *unk180[1];
    int func_0006FF80(void);
    void func_00070360(void);
    void func_00070450(void);
    int func_00070570(void);
    void func_00157960(void);
};
struct C_000707C0 {
    char pad0[0xFC];
    int unkFC;
    void func_000707C0(int a0);
};


void C_0006FBF0::func_0006FBF0(void)
{
    int ids[2];
    int i;
    int *r;
    ClampObj_6FB *o;
    SubElem_6FB **e;
    LookupObj_6FB *lk;

    ids[0] = (int)&D_00278690;
    ids[1] = (int)&D_00278678;
    for (i = 0; i < 2; i++) {
        lk = D_002A8490->f2ec;
        r = lk->func_0018C160(ids[i]);
        if (r != 0 && *r != 0) {
            o = ((MidObj_6FB *)*r)->func_0018C070();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
    }
    e = a140;
    i = 4;
    do {
        if (*e != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
    e = a128;
    i = 2;
    do {
        if (*e != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
    if (unkD8 != 0) {
        o = unkD8->func_001D5AA0();
        if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
    }
    e = a150;
    i = 2;
    do {
        if (*e != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
    e = a16C;
    i = 5;
    do {
        if (e[-5] != 0) {
            o = e[-5]->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        if (*e != 0) {
            o = (*e)->func_001D5AA0();
            if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
            if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        }
        e++;
        i--;
    } while (i != 0);
    func_001578D0();
}

char *__stdcall func_0006FE60(int value, char *out)
{
    char buf[64];
    int i;
    int j;
    int c;
    int rem;
    int n;

    memset(buf, 0, 64);
    func_001ADCC0(buf, 0x104, D_00277038, value);
    rem = strlen(buf) % 3;
    j = 0;
    n = strlen(buf);
    c = -rem;
    for (i = 0; i < n; i++) {
        if (buf[i] == ' ') {
            strcat(out, &buf[i]);
            break;
        }
        if (i > rem - 1 && i != 0 && (c == 0 || c % 3 == 0)) {
            out[j++] = ',';
        }
        out[j++] = buf[i];
        c++;
    }
    out[j] = 0;
    return out;
}

void C_00070360::func_00070360(void) {
    int i;
    unkC8->func_001D5AD0();
    unkCC->func_001D5AD0();
    for (i = 0; i < 5; i++) {
        unk158[i]->func_001D5AD0();
        unk16C[i]->func_001D5AD0();
    }
    if (!unk104) {
        for (i = 0; i < 2; i++) unk150[i]->func_001D5AD0();
    }
    if (unkC0) unk128->func_001D5AD0();
    else unk140->func_001D5AD0();
    if (unk104) {
        if (unkC4) unk12C->func_001D5AD0();
        else unk14C->func_001D5AD0();
    } else {
        unk144->func_001D5AD0();
        unk148->func_001D5AD0();
    }
    if (unk6C && !unk104) unkD8->func_001D5AD0();
    if (unkF0) unkF0->func_001D5AD0();
}

void C_00070360::func_00070450(void) {
    int i;
    int n;

    if (unk104) {
        unk130[0]->func_0005E840(D_002A8490->f2e8->f4->f7b8);
        unk130[0]->func_001D6600();
        unk13C->func_0005E840(D_002A8490->f2e8->f4->f7c0);
        unk13C->func_001D6600();
    } else {
        for (i = 0; i < 3; i++) {
            unk130[i]->func_001D6600();
        }
    }
    if (unk104) {
        unkE0->func_0005E840(D_002A8490->f2e8->f4->fec0);
    } else {
        unkE0->func_0005E840(D_002A8490->f2e8->f4->fee8);
    }
    unkE0->func_001D6600();
    if (unk104) {
        unk100->func_001D6600();
    } else {
        n = func_0006FF80();
        for (i = 0; i < n; i++) {
            unk180[i]->func_001D6600();
        }
        unkF8->func_001D6600();
    }
}

int C_00070360::func_00070570(void)
{
    int w;
    int n;
    struct Locals {
        S_00070570_Viewport *dev;
        S_00070570_V4 size;
    } l;
    S_00070570_Rect24 vp;
    S_00070570_Rect24 old;

    n = D_002A8490->f270;
    if (D_002A8490->f274 >= n - 1) {
        l.dev = D_002EFDB8->f4;
        if (n > 1) {
            vp = l.dev->rect;
            vp.x = 0;
            vp.y = 0;
            vp.w = 0x280;
            vp.h = 0x1c0;
            l.dev->func_0012B2B0(&vp, &old);
        }
        if (unk104 == 0) {
            if (unk6C != 0) {
                if ((int)strlen(unkD0->func_001B17F0()) < 0xf) {
                    w = unkD0->func_001B1800();
                    unkD0->func_001B19A0(D_0028F5DC);
                    unkD0->func_001B15F0();
                    unkD0->func_001B1810(&l.size);
                    unkD4->func_001B1A30((float)w + l.size.x, l.size.y, 0.0f);
                    unkD4->func_001B15F0();
                    unkE8 = (float)w + l.size.x - D_00275AEC;
                    unkD8->func_0005E7C0(unkE8, 182.0f);
                }
            }
            unkD4->func_001B1980();
            unkD0->func_001B1980();
            unkD0->func_001B19A0(D_0028F5DC);
            if (unk110 >= D_00278C40) {
                unkD0->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
                unkD4->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
            }
        } else {
            unkD0->func_001B1980();
            unkD4->func_001B1980();
        }
        func_00070450();
        func_00070360();
        func_00157960();
        if (D_002A8490->f270 > 1) {
            l.dev->func_0012B2B0(&old, 0);
        }
    }
    return 1;
}

void C_000707C0::func_000707C0(int a0) {
    unkFC = a0;
}
