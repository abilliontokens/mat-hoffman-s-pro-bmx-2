/* 3 functions from 0x00101CF0 to 0x00102BB0, found by Ghidra. */
#include "common.h"
#include <string.h>
#include "asm_helpers.h"

static const int &min_(const int &a, const int &b) { return b < a ? b : a; }

extern int D_002826B4;

struct C_001C0110 {
    void func_001C0110(void *a, void *b);
};

extern int D_0028F5E0;
extern float D_00275460;

struct C_001B1980 {
    void func_001B1980(void);
    void func_001B1B30(float a, int b);
    void func_001B1AB0(int a, int b);
};

struct C_00093120 {
    void func_00093120(void);
    int func_00092AC0(void);
    void func_00093A00(float x, float y, int a, int b, int c, int d);
    void func_00093AD0(float x, float y, int a, int b, int c, int d);
    void func_00093C80(float x, float y, int a, int b, int c, int d);
    void func_00093CF0(float x, float y, int a, int b, int c, int d);
    void func_00093890(float x, float y, int a, int b, int c, int d);
    void func_00093970(float x, float y, int a, int b, int c, int d);
    void func_000944C0(float x, float y, int a, int b, int c, int d);
    void func_000943A0(float x, float y, int a, int b, int c, int d);
    void func_00094570(float x, float y, int a, int b, int c, int d);
    void func_000942F0(float x, float y, int a, int b, int c, int d);
    void func_00094410(float x, float y, int a, int b, int c, int d);
    void func_00094690(float x, float y, int a, int b, int c, int d);
    void func_000941A0(int e, float x, float y, int a, int b, int c, int d);
};

/* BmxUIPageMemCard */
struct C_00101CF0 {
    char pad0[0x280];
    int unk280;
    int unk284;
    int pad288;
    int unk28C;
    char pad290[8];
    C_001B1980 *unk298[2];
    char pad2A0[0x10];
    float unk2B0;
    char pad2B4[0x14];
    int unk2C8;
    char pad2CC[0xC];
    int unk2D8;
    char pad2DC[0x10];
    int unk2EC;
    int unk2F0;
    int unk2F4;
    C_00093120 *unk2F8;
    int unk2FC;
    int unk300;
    char pad304[0xC];
    int unk310;
    int unk314;
    int unk318;
    int unk31C;
    int unk320;
    int unk324;
    int unk328;
    int unk32C;
    int unk330;
    int unk334;
    int unk338;
    float unk33C;
    char pad340[0xC];
    int unk34C;
    int unk350;
    int unk354;
    int unk358;
    int pad35C;
    int unk360;
    int unk364;
    int pad368;
    int unk36C;
    int pad370;
    int unk374;
    int unk378;
    int unk37C;
    int unk380;
    char pad384[8];
    int unk38C;
    int unk390;
    int pad394;
    int unk398;
    int unk39C;
    int unk3A0;
    int unk3A4;
    float unk3A8;
    int unk3AC;
    int unk3B0;
    void func_00101CF0(void);
    void func_000CC1B0(void);
    void func_000CC2B0(void);
    void func_000CC370(void);
    void func_000F8010(void);
    void func_000F7F80(void);
    void func_00157960(void);
};

template <class T> inline const T &min_102370(const T &a, const T &b) { return b < a ? b : a; }
extern "C" unsigned int strlen(const char *);
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(strlen, memset)
template <class T> inline const T &min_(const T &a, const T &b) { return b < a ? b : a; }
extern float D_0027DE74, D_00278C48;
extern char D_002790F4[];
extern "C" int func_001ADCC0(char *buf, int n, char *fmt, ...);
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);
extern "C" void *func_001E8A44(unsigned int size);
int func_00011260(int a, int b);
struct Obj102370_Byte { char pad0[0x3B]; unsigned char b3B; };
struct Obj102370_344 {
    int func_00092A10();
    int func_000930D0();
    void func_00093120();
    int func_00092C70();
    char *func_000928E0();
    void func_00094570(float, float, int, int, int, int);
};
struct Obj102370_2CC { int func_001D4590(char *, char *, int, int); };
struct Obj102370_2C0 { int func_0005C1D0(int); };
struct Obj102370_Mgr2 {
    char pad0[4];
    int f4;
    char pad8[0x40];
    int f48;
    char pad4C[0x104];
    char buf150[0x40];
    int f190;
    char pad194[0x1C];
    int f1B0;
    char pad1B4[0x3C];
    int f1F0;
    char buf1F4[0xC];
    char pad200[0xC0];
    Obj102370_2C0 *f2C0;
    int *f2C4;
    int f2C8;
    Obj102370_2CC *f2CC;
    void func_0005B3F0();
};
struct Obj102370_Mgr { char pad0[0x2E0]; Obj102370_Mgr2 *f2E0; };
extern Obj102370_Mgr *D_002A8490;
struct Obj102370_124 {
    char pad0[0x124];
    int f124_124;
    char pad128[0xC];
    int f134;
    int f138;
    char pad13C[0x140];
    int f27C;
    int f280;
    void func_000BC3E0(int);
};
struct Obj102370_7E050 { Obj102370_7E050 *func_0007E050(); };
struct C_00102370 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void func_000EBE90();
    char pad4[0x120];
    Obj102370_124 *f124;
    char pad128[0x178];
    Obj102370_Byte *f2A0;
    char pad2A4[0x3C];
    int arr2E0[10];
    float f308;
    int f30C;
    int f310;
    char pad314[0xC];
    Obj102370_Byte *f320;
    int f324;
    float f328;
    int f32C;
    int f330;
    int f334;
    int f338;
    int f33C;
    float f340;
    Obj102370_344 *f344;
    int f348;
    int f34C;
    int f350;
    int f354;
    int f358;
    int f35C;
    int f360;
    int f364;
    int f368;
    float f36C;
    float f370;
    int f374;
    int f378;
    char pad37C[4];
    int f380;
    int f384;
    int f388;
    float f38C;
    float f390;
    int f394;
    float f398;
    int f39C;
    void func_000EC6F0();
    void func_000ECD90();
    void func_000EC320();
    void func_001BED00(float);
    void func_00102370(float dt);
};

/* BmxUIWidgetOverlayText */
struct C_00102B30 {
    void *vtbl;
    char pad4[0x16C];
    int unk170;
    char pad174[0x38];
    int unk1AC;
    void *unk1B0;
    char pad1B4[0x20C];
    int unk3C0;
    char pad3C4[8];
    int unk3CC;
    int unk3D0;
    int unk3D4;
    int unk3D8;
    int unk3DC;
    int unk3E0;
    char pad3E4[8];
    int unk3EC;
    int unk3F0;
    int unk3F4;
    int unk3F8;
    C_00102B30 *func_00102B30(void *a, void *b);
};

void C_00101CF0::func_00101CF0(void)
{
    int i;
    if (unk280 && unk318 > 5) {
        unk380 = 1;
        unk37C = 0;
        func_000CC1B0();
        unk398 = 0xff;
        unk39C = 0;
        unk3A0 = 0;
        unk3A4 = 0;
        unk3A8 = 0.25f;
        unk280 = 0;
    }
    unk318++;
    if (unk284) {
        if (unk328) {
            unk32C = 0;
            unk330 = 0xb2;
            unk334 = 0xb2;
            unk338 = 0;
            unk33C = 1.0f;
            unk328 = 0;
            unk3AC = 1;
        }
        func_000CC2B0();
        unk398 = 0;
        unk39C = 0xff;
        unk3A0 = 0xff;
        unk3A4 = 0;
        unk3A8 = 0.25f;
        unk284 = 0;
        unk2F8->func_00093120();
    }
    if (unk320) {
        for (i = 0; i < 2; i++) {
            unk298[i]->func_001B1980();
            unk298[i]->func_001B1B30(1.45f, 0);
            unk298[i]->func_001B1AB0(0, 0);
            unk31C = 1;
        }
        unk28C = 0;
        unk2F8->func_00093A00(320.0f, 80.0f, D_0028F5E0, 0, 0, 0);
        if (unk2B0 >= D_00275460) {
            unk2F4 = 9;
            unk28C = 1;
        }
    }
    func_000CC370();
    func_000F8010();
    if (unk28C) {
        switch (unk2F4) {
        case 0:
        case 1:
            unk2F8->func_00093120();
            unk314 = 0;
            if (unk31C) {
                func_000CC1B0();
                unk31C = 0;
            } else {
                func_000F7F80();
            }
            break;
        case 10:
            for (i = 0; i < 2; i++) {
                unk298[i]->func_001B1980();
                unk298[i]->func_001B1B30(1.45f, 0);
                unk298[i]->func_001B1AB0(0, 0);
                unk31C = 1;
            }
            unk2F8->func_00093120();
            unk2F8->func_00093AD0(320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
            break;
        case 5:
            for (i = 0; i < 2; i++) {
                unk298[i]->func_001B1980();
                unk298[i]->func_001B1B30(1.45f, 0);
                unk298[i]->func_001B1AB0(0, 0);
                unk31C = 1;
            }
            unk34C = 0;
            unk2D8 = 0;
            unk38C = 1;
            if (unk2F8->func_00092AC0() == 0)
                unk2F8->func_00093C80(320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
            else
                unk2F8->func_00093CF0(320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
            break;
        case 2:
            unk2F8->func_00093120();
            for (i = 0; i < 2; i++) {
                unk298[i]->func_001B1980();
                unk298[i]->func_001B1B30(1.45f, 0);
                unk298[i]->func_001B1AB0(0, 0);
                unk31C = 1;
            }
            unk2F8->func_00093890(320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
            unk300 = 1;
            break;
        case 3:
            if (unk310 == 0) {
                for (i = 0; i < 2; i++)
                    unk298[i]->func_001B1980();
                unk2F8->func_00093120();
                unk2F8->func_00093970(320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
                unk310 = 1;
                unk358 = 1;
                unk2EC = 0;
                unk2F0 = 0;
                unk2C8 = 0;
            }
            break;
        case 4:
            for (i = 0; i < 2; i++) {
                unk298[i]->func_001B1980();
                unk298[i]->func_001B1B30(1.45f, 0);
                unk298[i]->func_001B1AB0(0, 0);
                unk31C = 1;
            }
            if (unk314 == 0) {
                unk2F8->func_00093120();
                unk378 = 0;
                unk2D8 = 0;
                unk2F8->func_00093A00(320.0f, 80.0f, D_0028F5E0, 0, 0, 0);
                unk314 = 1;
            }
            break;
        case 7:
            unk354 = 1;
            if (unk3B0 == 0) {
                unk2F8->func_00093120();
                if (unk350) {
                    unk2F8->func_000944C0(320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
                } else if (unk2F8->func_00092AC0() == 0) {
                    unk2F8->func_000943A0(320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
                } else {
                    unk2F8->func_00094570(320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
                }
            }
            unk3B0 = 1;
            break;
        case 8:
            unk364 = 1;
            if (unk390 == 0) {
                unk2F8->func_00093120();
                if (unk360)
                    unk2F8->func_000942F0(320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
                else
                    unk2F8->func_00094410(320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
                unk390 = 1;
            }
            break;
        case 9:
            unk320 = 0;
            for (i = 0; i < 2; i++) {
                unk298[i]->func_001B1980();
                unk298[i]->func_001B1B30(1.45f, 0);
                unk298[i]->func_001B1AB0(0, 0);
                unk31C = 1;
            }
            unk2F8->func_00093120();
            unk374 = 1;
            if (unk324)
                unk2F8->func_00094690(320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
            else
                unk2F8->func_000941A0(unk36C, 320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
            break;
        }
        unk2FC++;
    }
    func_00157960();
}

#pragma intrinsic(strlen, memset)
void C_00102370::func_00102370(float dt)
{
    f328 += dt;
    if (f328 > D_00275460) {
        if (f344->func_00092A10() == 1 && f348 == 0) {
            func_000EC6F0();
            f380 = 0;
            f384 = 0xff;
            f388 = f364;
            f38C = 0.0f;
            f390 = 0.25f;
            func_000EBE90();
            f328 = 0.0f;
        } else if (f344->func_00092A10() == 0 && f348 == 1) {
            func_000EC6F0();
            func_000ECD90();
            func_000EBE90();
            f328 = 0.0f;
        }
    }
    if (f380 != f2A0->b3B) {
        if (f38C >= f390)
            f388 = f380;
        else
            f388 = (int)((f380 - f384) * (f38C / f390)) + f384;
        f38C += dt;
    }
    if (f334) {
        f340 += dt;
        if (f340 >= D_00275460) {
            if (f344->func_000930D0()) {
                f35C = 0;
                func_000EC320();
                f34C = 1;
                if (f394) {
                    f344->func_00093120();
                    f394 = 0;
                }
                f378 = 1;
            } else {
                f35C = 1;
                f324 = 0;
                f344->func_00093120();
                f344->func_00094570(320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
            }
            f334 = 0;
            f340 = 0.0f;
            f330 = 0;
        }
    }
    if (f30C || f310) {
        f308 += dt;
        if (f308 >= D_0027DE74) {
            if (f30C) {
                if (f35C) {
                    f344->func_00093120();
                    f378 = 1;
                    f35C = 0;
                    f124->f138 = 7;
                    f124->f134 = 8;
                } else if (f324 <= 0) {
                    f124->f138 = 7;
                    f124->f134 = 8;
                } else {
                    Obj102370_124 *p = f124;
                    int a = p->f27C;
                    int b = p->f280;
                    int r;
                    do {
                        r = func_00011260(0, 0xe);
                    } while (!D_002A8490->f2E0->f2C0->func_0005C1D0(r));
                    char *e = (char *)a + r * 0x1a8;
                    int x = **(int **)(e + 0x120);
                    D_002A8490->f2E0->f1F0 = D_002A8490->f2E0->f190;
                    D_002A8490->f2E0->f190 = r;
                    *(int *)(e + 0x124) = 0;
                    char *s = e + 0x104;
                    {
                        int len = strlen(s);
                        int lim = 7;
                        int n = AsmMinI(lim, len);
                        func_001E8920(D_002A8490->f2E0->buf150, s, n);
                        D_002A8490->f2E0->buf150[n] = 0;
                    }
                    D_002A8490->f2E0->f1B0 = 0;
                    s = (char *)b + x * 0x120 + 0x104;
                    {
                        int len = strlen(s);
                        int lim = 7;
                        int n = AsmMinI(lim, len);
                        func_001E8920(D_002A8490->f2E0->buf1F4, s, n);
                        D_002A8490->f2E0->buf1F4[n] = 0;
                    }
                    f124->func_000BC3E0(0);
                    Obj102370_7E050 *o = (Obj102370_7E050 *)func_001E8A44(0x41a0);
                    D_002A8490->f2E0->f2C4 = (int *)(o ? o->func_0007E050() : 0);
                    memset(D_002A8490->f2E0->f2C4, 0, 0x41a0);
                    if (f344->func_00092C70()) {
                        char buf[0x38];
                        func_001ADCC0(buf, 0x37, D_002790F4, arr2E0[f33C] + 1);
                        D_002A8490->f2E0->f2CC->func_001D4590(f344->func_000928E0(), buf, (int)D_002A8490->f2E0->f2C4, 0x41a0);
                    }
                    switch (*(unsigned char *)(arr2E0[f33C] + D_002A8490->f2E0->f2C8 + 8)) {
                    case 0:
                        D_002A8490->f2E0->f48 = 8;
                        D_002A8490->f2E0->func_0005B3F0();
                        D_002A8490->f2E0->f4 = 0xb;
                        f124->f138 = 8;
                        break;
                    case 1:
                        D_002A8490->f2E0->f48 = 9;
                        D_002A8490->f2E0->func_0005B3F0();
                        D_002A8490->f2E0->f4 = 0xb;
                        f124->f138 = 8;
                        break;
                    case 2:
                        D_002A8490->f2E0->f48 = 0xa;
                        D_002A8490->f2E0->func_0005B3F0();
                        D_002A8490->f2E0->f4 = 0xb;
                        f124->f138 = 8;
                        break;
                    }
                }
                f30C = 0;
            }
            if (f310) {
                f32C = 1;
                f344->func_00093120();
                f124->f138 = 7;
                f124->f134 = 8;
                f310 = 0;
            }
            f308 = 0.0f;
        }
    }
    if (f360 != f320->b3B) {
        if (f36C >= f370)
            f368 = f360;
        else
            f368 = (int)((f360 - f364) * (f36C / f370)) + f364;
        f36C += dt;
    }
    f398 += dt;
    if (f39C && !f358) {
        f398 += dt;
        if (f398 >= D_00278C48) {
            f358 = 1;
            f39C = 0;
        }
    }
    func_001BED00(dt);
}
C_00102B30 *C_00102B30::func_00102B30(void *a, void *b)
{
    ((C_001C0110 *)this)->func_001C0110(a, b);
    unk1B0 = 0;
    unk170 = 0;
    unk3C0 = 0;
    unk3CC = 0;
    unk3D0 = 0;
    unk3D8 = 0;
    unk3D4 = 0;
    unk3DC = 0;
    unk3EC = 0;
    unk3F8 = 0;
    unk3F4 = 0;
    unk3E0 = 0;
    vtbl = (void *)&D_002826B4;
    unk3F0 = 0xff;
    return this;
}
