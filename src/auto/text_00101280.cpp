/* 8 functions from 0x00101280 to 0x00101CF0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
extern float D_002B91CC;
extern float D_002B91C8;
extern float D_002755E8;
extern float D_00275460;
struct E_00101280 { char pad0[0x3B]; u8 b3B; };
struct Cur_00101280 { int func_00092A10(); int func_000930D0(); void func_00093A00(int a, int b, int c, int d, int e, int f); int func_00092C70(); char *func_000928E0(); void func_00093120(); };
struct Mgr2CC_00101280 { int func_001D4590(char *out, const char *title, int a, int size); };
struct Mgr_00101280 { char pad0[0x48]; int f48; char pad4C[0x2C4 - 0x4C]; void *f2C4; void *f2C8; Mgr2CC_00101280 *f2CC; void func_0005B3F0(); };
struct Root_00101280 { char pad0[0x2E0]; Mgr_00101280 *f2E0; };
extern Root_00101280 *D_002A8490;
struct FMgr_00101280 { int func_0013C9F0(char *name, int *mode); int func_0013C960(int h, void *buf, int size); void func_0013C110(int h); };
extern FMgr_00101280 *D_002BEAAC;
extern int D_00276274;
extern float D_00276288;
extern float D_0027DE74;
extern float D_00278C48;
extern char D_00282678[];
extern char D_00282688[];
extern char D_00282698[];
extern char D_002A5348[];
extern char D_00275678[];
extern char D_002790F4[];
void *func_001E8A44(int size);
struct Alloc_00101280 { void *func_0007E050(); };
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
struct Mgr124_00101280 { char pad0[0x134]; int f134; int f138; };
struct C_00101280 {
    char pad0[0x124];
    Mgr124_00101280 *f124;
    char pad128[0x280 - 0x128];
    int f280;
    char pad284[4];
    E_00101280 *f288;
    int f28C;
    char pad290[0x2A0 - 0x290];
    int f2A0;
    int f2A4;
    float f2A8;
    char pad2AC[0x3B4 - 0x2AC];
    float f3B4;
    Cur_00101280 *f3B8;
    int f3BC;
    char pad3C0[4];
    int f3C4;
    int f3C8;
    int f3CC;
    int f3D0;
    char pad3D4[4];
    int f3D8;
    float f3DC;
    char pad3E0[0x410 - 0x3E0];
    float f410;
    int f414;
    int f418;
    int f41C;
    int f420;
    float f424;
    float f428;
    int f42C;
    int f430;
    int f434;
    float f438;
    float f43C;
    char pad440[0x450 - 0x440];
    int f450;
    char pad454[0x45C - 0x454];
    int f45C;
    char pad460[0x4B8 - 0x460];
    E_00101280 *f4B8;
    char pad4BC[0x4D0 - 0x4BC];
    E_00101280 *f4D0[16];
    void func_000EDF70();
    void func_000EE060();
    int func_001BED00(float dt);
    int func_00101280(float dt);
};

struct C_00101A30_Widget {
    void func_001B1980();
};

struct C_00101A30 {
    char pad0[0x2A0];
    int f2A0;
    int f2A4;
    char pad2A8[4];
    int f2AC;
    int f2B0;
    char pad2B4[0x3EC - 0x2B4];
    int f3EC;
    char pad3F0[0x3FC - 0x3F0];
    int f3FC;
    int f400;
    int f404;
    int f408;
    float f40C;
    int f410;
    int f414;
    char pad418[0x638 - 0x418];
    C_00101A30_Widget *f638[9];
    void func_000F0910();
    void func_000F0A00();
    void func_000F0400();
    void func_000F0AE0();
    void func_00157960();
    void func_00101A30();
};

/* BmxUIPageEditorLevelSelection */
struct S_001018F0_Input {
    int func_000301D0();
};

struct S_001018F0_Pad {
    char pad0[0x74];
    S_001018F0_Input *f74;
};

struct S_001018F0_Owner {
    char pad0[0x25C];
    S_001018F0_Pad *f25C;
};

struct S_001018F0_Entry {
    char pad0[0x38];
    u32 f38;
    char pad3C[0x1C];
    u8 b58;
    void func_001D5AD0();
};

struct S_001018F0_Cursor {
    void func_00093A00(int a1, int a2, int a3, int a4, int a5, int a6);
};

extern int D_0028F5E0;

struct C_001018F0 {
    char pad0[0x124];
    S_001018F0_Owner *f124;
    char pad128[0x288 - 0x128];
    S_001018F0_Entry *f288;
    int f28C;
    char pad290[0x3B8 - 0x290];
    S_001018F0_Cursor *f3B8;
    int f3BC;
    char pad3C0[0x3CC - 0x3C0];
    int f3CC;
    char pad3D0[0x3D8 - 0x3D0];
    int f3D8;
    char pad3DC[0x42C - 0x3DC];
    int f42C;
    int f430;
    int f434;
    int f438;
    float f43C;
    int f440;
    void func_000EE1F0();
    void func_000EE140();
    void func_000EDF00();
    void func_00157960();
    void func_001018F0();
};

/* BmxUIPageOtherVideos */
struct S_00101B40_Item {
    void func_00103260(int a);
    void func_00103350();
};

struct S_00101B40_Owner {
    S_00101B40_Item *func_000BA9B0(int id);
};

struct C_00101B40 {
    char pad0[0x124];
    S_00101B40_Owner *f124;
    char pad128[0x29C - 0x128];
    int f29C;
    int f2A0;
    char pad2A4[4];
    int f2A8;
    int f2AC;
    char pad2B0[0x3BC - 0x2B0];
    int f3BC;
    int f3C0;
    int f3C4;
    int f3C8;
    int f3CC;
    int f3D0;
    float f3D4;
    void func_001BEE50(int a, int b, int c);
    void func_000F1B60();
    void func_000F1BA0();
    void func_00157960();
    void func_00101B40();
};

struct C_00101A10 {
    undefined4 func_00101A10(byte param_1);
};

struct C_00101B20 {
    undefined4 func_00101B20(byte param_1);
};

struct C_00101CB0 {
    undefined4 func_00101CB0(byte param_1);
};

struct C_00101CD0 {
    undefined4 func_00101CD0(byte param_1);
};


int C_00101280::func_00101280(float dt)
{
    char buf[0x104];
    char buf2[0x38];
    D_002B91CC += dt;
    if (f450) {
        D_002B91CC = 0;
        if (f45C && D_002B91CC >= D_002755E8) f45C = 0;
    }
    if (f418 != (int)f4B8->b3B) {
        if (f424 >= f428) {
            f420 = f418;
        } else {
            f420 = f41C + (int)((f418 - f41C) * (f424 / f428));
            f424 += dt;
        }
    }
    if (f42C != (int)f288->b3B) {
        if (f438 >= f43C) {
            f434 = f42C;
        } else {
            f434 = f430 + (int)((f42C - f430) * (f438 / f43C));
            f438 += dt;
        }
    }
    f3B4 += dt;
    if (f3B4 >= D_00275460 && f2A4 == 0) {
        f3B8->func_00092A10();
        f3B4 = 0;
    }
    f3DC += dt;
    if (f3BC) {
        if (f3DC >= D_00276288) {
            f3B8->func_000930D0();
            f3BC = 0;
            f28C = 0;
            f3C4 = 1;
            if (f3D8) {
                f3B8->func_00093A00(0x43a00000, 0x42f00000, D_0028F5E0, 0, 1, 0x3e800000);
                f3D8 = 0;
            }
        }
    }
    if (f2A0 != 0 || f2A4 != 0) {
        f2A8 += dt;
        if (f2A8 >= D_0027DE74) {
            if (f2A0 == 0) goto L507;
            f3C8 = 1;
            {
                void *pa = func_001E8A44(0x41a0);
                D_002A8490->f2E0->f2C4 = pa ? ((Alloc_00101280 *)pa)->func_0007E050() : 0;
            }
            memset(D_002A8490->f2E0->f2C4, 0, 0x41a0);
            if (f280 < 3) {
                switch (f280) {
                case 0: func_001ADCC0(buf, 0x104, D_00275678, D_002A5348, D_00282678); break;
                case 1: func_001ADCC0(buf, 0x104, D_00275678, D_002A5348, D_00282688); break;
                case 2: func_001ADCC0(buf, 0x104, D_00275678, D_002A5348, D_00282698); break;
                }
                {
                    int h = D_002BEAAC->func_0013C9F0(buf, &D_00276274);
                    if (h == -1) return 0;
                    D_002BEAAC->func_0013C960(h, D_002A8490->f2E0->f2C4, 0x41a0);
                    D_002BEAAC->func_0013C110(h);
                }
                if (f280 == 0) {
                    D_002A8490->f2E0->f48 = 8;
                    D_002A8490->f2E0->func_0005B3F0();
                    f124->f138 = 8;
                    f2A0 = 0;
                } else if (f280 == 1) {
                    D_002A8490->f2E0->f48 = 9;
                    D_002A8490->f2E0->func_0005B3F0();
                    f124->f138 = 8;
                    f2A0 = 0;
                } else {
                    D_002A8490->f2E0->f48 = 10;
                    D_002A8490->f2E0->func_0005B3F0();
                    f124->f138 = 8;
                    f2A0 = 0;
                }
                goto L53d;
            } else {
                if (f3B8->func_00092C70()) {
                    func_001ADCC0(buf2, 0x37, D_002790F4, (char *)f4D0[f280] + 1);
                    D_002A8490->f2E0->f2CC->func_001D4590(f3B8->func_000928E0(), buf2, (int)D_002A8490->f2E0->f2C4, 0x41a0);
                    switch ((u8)((char *)f4D0[f280] + (int)D_002A8490->f2E0->f2C8)[8]) {
                    case 2:
                        D_002A8490->f2E0->f48 = 10;
                        D_002A8490->f2E0->func_0005B3F0();
                        f124->f138 = 8;
                        f2A0 = 0;
                        break;
                    case 1:
                        D_002A8490->f2E0->f48 = 9;
                        goto Lset8;
                    case 0:
                        D_002A8490->f2E0->f48 = 8;
                    Lset8:
                        D_002A8490->f2E0->func_0005B3F0();
                        f124->f138 = 8;
                        f2A0 = 0;
                        break;
                    }
                }
                goto L507;
            }
        }
    }
    goto L53d;
L507:
    if (f2A4) {
        f124->f138 = 7;
        f124->f134 = 2;
        f2A4 = 0;
    }
L53d:
    if (f414 && f3D0 == 0) {
        f410 += dt;
        if (f410 >= D_00278C48) {
            f3D0 = 1;
            f414 = 0;
        }
    }
    D_002B91C8 = D_002B91C8 + dt;
    if (f3C4 && f28C == 0 && D_002B91C8 >= D_00275460) {
        f414 = 1;
        f410 = 0;
        f3B8->func_00093120();
        func_000EDF70();
        f418 = 0xff;
        f41C = 0;
        f420 = 0;
        f424 = 0;
        f428 = 0.25f;
        f3C4 = 0;
        if (f3C8) {
            func_000EE060();
            f418 = 0;
            f41C = 0xff;
            f420 = 0xff;
            f424 = 0;
            f428 = 0.25f;
            f3C8 = 0;
        }
        D_002B91C8 = 0;
    }
    D_002B91C8 += D_00275460;
    return func_001BED00(dt);
}

void C_001018F0::func_001018F0()
{
    S_001018F0_Owner *owner = f124;

    if (f28C != 0 && owner->f25C->f74->func_000301D0() == 0) {
        if (f440 == 0) {
            func_000EE1F0();
        } else {
            S_001018F0_Entry *e = f288;

            e->f38 = ((s16)f434 << 24) | (e->f38 & 0xffffff);
            e->b58 |= 2;
            f288->func_001D5AD0();
        }
        if (f3D8 == 0) {
            f3B8->func_00093A00(0x43a00000, 0x42f00000, D_0028F5E0, 1, 0, 0x3e800000);
            f3D8 = 1;
        }
        f3BC = 1;
    } else {
        if (owner->f25C->f74->func_000301D0() == 0 && f3CC != 0) {
            f3CC = 0;
        }
    }
    if (f28C == 0 && f440 != 0) {
        f42C = 0;
        f430 = 0xb2;
        f434 = 0xb2;
        f438 = 0;
        f43C = 1.0f;
        f440 = 0;
    }
    func_000EE140();
    func_000EDF00();
    func_00157960();
}

undefined4 C_00101A10::func_00101A10(byte param_1)
{
  int func_000EE3B0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000EE3B0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00101A30::func_00101A30() {
    if (f2A0 != 0) {
        f2B0 = 1;
        f2AC = 0;
        func_000F0910();
        f3FC = 0xff;
        f400 = 0;
        f404 = f3EC;
        f408 = 0;
        f40C = 0.25f;
        f2A0 = 0;
    }
    if (f2A4 != 0) {
        func_000F0A00();
        f3FC = 0;
        f400 = 0xff;
        f404 = f3EC;
        f408 = 0;
        f40C = 0.25f;
        f2A4 = 0;
    }
    if (f410 == 0) {
        if (f414 != 0) {
            for (int i = 0; i < 9; i++) {
                f638[i]->func_001B1980();
            }
            f414 = 0;
        }
    }
    if (f410 != 0) {
        func_000F0400();
        func_000F0AE0();
    }
    func_00157960();
}

undefined4 C_00101B20::func_00101B20(byte param_1)
{
  int func_000F0D20(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000F0D20();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00101B40::func_00101B40()
{
    S_00101B40_Owner *owner = f124;

    if (f29C != 0) {
        f2AC = 1;
        f2A8 = 0;
        owner->func_000BA9B0(0x2c)->func_00103260(0);
        owner->func_000BA9B0(0x2d)->func_00103260(0);
        owner->func_000BA9B0(0x2e)->func_00103260(0);
        owner->func_000BA9B0(0x2f)->func_00103260(0);
        owner->func_000BA9B0(0x30)->func_00103260(0);
        f3C4 = 0xff;
        f3C8 = 0;
        f3CC = 0;
        f3D0 = 0;
        f3D4 = 0.25f;
        func_001BEE50(1, f3BC, 0);
        f29C = 0;
    }
    if (f2A0 != 0) {
        owner->func_000BA9B0(0x2c)->func_00103350();
        owner->func_000BA9B0(0x2d)->func_00103350();
        owner->func_000BA9B0(0x2e)->func_00103350();
        owner->func_000BA9B0(0x2f)->func_00103350();
        owner->func_000BA9B0(0x30)->func_00103350();
        f3C4 = 0;
        f3C8 = 0xff;
        f3CC = 0xff;
        f3D0 = 0;
        f3D4 = 0.25f;
        f2A0 = 0;
    }
    if (f3C0 != 0) {
        func_000F1B60();
        func_000F1BA0();
    }
    func_00157960();
}

undefined4 C_00101CB0::func_00101CB0(byte param_1)
{
  int func_000F1D90(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000F1D90();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_00101CD0::func_00101CD0(byte param_1)
{
  int func_000F2600(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000F2600();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

