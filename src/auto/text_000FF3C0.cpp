/* 16 functions from 0x000FF3C0 to 0x001002A0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
#include "ghidra.h"
#include <string.h>
extern int D_0027F724;
extern int D_0028F5DC;
extern float D_00275AEC;

struct S_00100030_V4 {
    float x, y, z, w;
};

/* text sprite (label) */
struct S_00100030_Text {
    char *func_001B17F0(void);
    int func_001B1800(void);
    void func_001B1810(S_00100030_V4 *out);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, float a11, float a12, int a13);
    void func_001B1980(void);
    void func_001B1A30(float x, float y, float z);
    void func_001B1C10(int color);
};

struct S_00100030_Pos {
    void func_0005E7C0(float x, float y);
};

struct S_00100030_Item {
    char pad0[0x38];
    unsigned int color;
    char pad3c[0x1c];
    unsigned char flags;
    void func_001D5AD0();
    int func_000301D0();
    void func_001D6600(void);
};

struct S_00100030_Hud {
    void func_000BF860(int, int, int, int);
    char pad0[0x24];
    S_00100030_Item *f24;
    S_00100030_Item *f28;
    S_00100030_Item *f2C;
    S_00100030_Item *f30;
    S_00100030_Item *f34;
    S_00100030_Item *f38;
    S_00100030_Item *f3C;
    char pad40[8];
    S_00100030_Item *f48;
    S_00100030_Item *f4C;
    S_00100030_Item *f50;
    S_00100030_Item *f54;
    char pad58[0x10];
    S_00100030_Item *f68;
    S_00100030_Item *f6C;
    char pad70[0x18];
    S_00100030_Item *f88;
    S_00100030_Item *f8C;
    S_00100030_Item *f90;
    S_00100030_Item *f94;
};
extern S_00100030_Hud *D_002B91AC;

struct S_000FFC20_Sub {
    char pad0[0x324];
    int f324;
};

struct S_00100030_Root {
    char pad0[0x10];
    int f10;
    char pad14[0x2cc];
    S_000FFC20_Sub *f2E0;
};

struct S_000FFC20_Dev {
    char pad0[0x74];
    S_00100030_Item *f74;
};

struct S_000FFC20_Owner {
    char pad0[0x25c];
    S_000FFC20_Dev *f25c;
};
extern S_00100030_Root *D_002A8490;

/* BmxUIPageHorseWord */
struct C_00100030 {
    char pad0[0x288];
    int f288;
    char pad28C[0x60];
    S_00100030_Pos *f2EC;
    float f2F0;
    int f2F4;
    int f2F8;
    int f2FC;
    char pad300[0xC];
    int f30C;
    int f310;
    int f314;
    int f318;
    float f31C;
    char pad320[8];
    S_00100030_Text *f328;
    S_00100030_Text *f32C;
    char pad330[8];
    int f338;
    int f33C;
    void D_000DE220(void);
    void func_000DE300(void);
    void func_000DE3C0(void);
    void func_00157960(void);
    void func_00100030(void);
};

struct PageObj {
    virtual void destroy(int flags);
};

struct C_00100010 {
    undefined4 func_00100010(byte param_1);
};

struct C_000FF4A0 {
    char pad0[0x29C];
    int unk29C;
    int unk2A0;
    char pad2A4[4];
    int unk2A8;
    int unk2AC;
    char pad2B0[0x24];
    int unk2D4;
    int unk2D8;
    int unk2DC;
    int unk2E0;
    float unk2E4;
    void func_000DB3E0();
    void func_000DB310();
    void func_000DB180();
    void func_000DB4B0();
    void func_00157960();
    void func_000FF4A0();
};

struct C_000FF550 {
    void *vtbl;
    char pad4[0x298];
    PageObj *f29c;
    void func_001BE3F0();
    void *func_000FF550(int flags);
};

struct C_000FFF70 {
    char pad0[0x298];
    int unk298;
    void func_000DCE10();
    void func_001BF000();
    void func_000FFF70();
};

struct PhotoMessages { void func_0001BC50(const void *, const void *, int); };
struct PhotoUI { char pad[0x484]; PhotoMessages *messages; };
struct PhotoOwner { char pad[0x150]; PhotoUI *ui; char pad154[0x108]; S_000FFC20_Dev *dev; char pad260[0x44]; int busy; void func_000BB3B0(const void *,const void *); void func_000BB380(const void *); };
struct PhotoDevice { int func_00092A10(); int func_00092A50(int); int func_00092BE0(); };
extern float D_00278C48,D_00275544,D_002755E8,D_00275460,D_0027DE74;
extern char D_00282668[],D_0027F7D4[],D_00282658[],D_00282648[],D_0027A144[],D_00282638[],D_0028262C[],D_0028261C[],D_0028260C[],D_002825FC[],D_002825EC[],D_002825E4[];
struct C_000FF590 {
    void **vtbl; char pad4[0x120]; PhotoOwner *owner; char pad128[0x20]; int inputs[8]; char pad168[0x118];
    float f280; int f284,f288,f28c,f290,f294,f298,f29c,f2a0,f2a4,f2a8,f2ac,f2b0,f2b4; float f2b8; PhotoDevice *f2bc;
    int f2c0,f2c4,f2c8,f2cc,f2d0,f2d4,f2d8,f2dc,f2e0; float f2e4; int f2e8,f2ec,f2f0,f2f4,f2f8; float f2fc,f300; int f304,f308,f30c;
    int func_000DCC20(); void func_001BED00(float); void func_000FF590(float dt);
};

struct C_000FF590Vt {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(int a, int b);
};

struct C_000FF3C0 {
    undefined4 func_000FF3C0(byte param_1);
};

struct C_000FF400 {
    undefined4 func_000FF400(byte param_1);
};

struct C_000FF3E0 {
    undefined4 func_000FF3E0(byte param_1);
};

struct C_000FF420 {
    undefined4 func_000FF420(byte param_1);
};

struct C_000FF440 {
    undefined4 func_000FF440(byte param_1);
};

struct C_000FF460 {
    undefined4 func_000FF460(byte param_1);
};

struct C_000FF480 {
    undefined4 func_000FF480(byte param_1);
};

struct C_00100280 {
    undefined4 func_00100280(byte param_1);
};

struct C_000FFFA0 {
    char pad0[0x124];
    S_000FFC20_Owner *f124;
    char pad128[0x164];
    int f28c, f290;
    char pad294[8];
    S_00100030_Item *f29c;
    char pad2a0[12];
    int f2ac, f2b0;
    char pad2b4[16];
    int f2c4, f2c8;
    char pad2cc[8];
    int f2d4, f2d8;
    char pad2dc[8];
    int f2e4, f2e8;
    char pad2ec[4];
    int f2f0, f2f4, f2f8, f2fc;
    float f300;
    int f304;
    char pad308[4];
    int f30c;
    void func_000DBC40();
    void func_000DBD20();
    void func_000DC270();
    void func_000DCBF0();
    void func_000FFC20();
    void func_00157960();
    void func_000FFFA0();
};


undefined4 C_000FF3C0::func_000FF3C0(byte param_1)
{
  int func_000D4DD0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000D4DD0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000FF3E0::func_000FF3E0(byte param_1)
{
  int func_000D5E00(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000D5E00();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000FF400::func_000FF400(byte param_1)
{
  int func_000D6D50(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000D6D50();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000FF420::func_000FF420(byte param_1)
{
  int func_000D7B70(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000D7B70();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000FF440::func_000FF440(byte param_1)
{
  int func_000D8D30(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000D8D30();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000FF460::func_000FF460(byte param_1)
{
  int func_000D98E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000D98E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000FF480::func_000FF480(byte param_1)
{
  int func_000DA320(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000DA320();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_000FF4A0::func_000FF4A0()
{
    if (unk29C != 0) {
        unk2AC = 1;
        unk2A8 = 0;
        unk2D4 = 0xff;
        unk2D8 = 0;
        unk2DC = 0;
        unk2E0 = 0;
        unk2E4 = 0.25f;
        func_000DB3E0();
        unk29C = 0;
    }
    if (unk2A0 != 0) {
        unk2D4 = 0;
        unk2D8 = 0xff;
        unk2DC = 0xff;
        unk2E0 = 0;
        unk2E4 = 0.25f;
        func_000DB310();
        unk2A0 = 0;
    }
    func_000DB180();
    func_000DB4B0();
    func_00157960();
}

void *C_000FF550::func_000FF550(int flags)
{
    int func_001E891B(...);
    vtbl = (void *)&D_0027F724;
    if (f29c) {
        f29c->destroy(1);
        f29c = 0;
    }
    func_001BE3F0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int func_001E8858(float f);
void C_000FF590::func_000FF590(float dt)
{
    PhotoOwner *owner = this->owner;

    if (f28c || f290) {
        memset(inputs, 0, 32);
    }
    if (f2e8 && !f2c0) {
        f2e4 = f2e4 + dt;
        if (f2e4 >= D_00278C48) {
            f2c0 = 1;
            f2e8 = 0;
        }
    }
    switch (f2d4) {
    case 5:
        if (f2d0 == 1) {
            if (f2b8 > D_00275544 && f308 == 0) {
                f298 = 1;
                f2d4 = 4;
                if (f2e0 != 0) {
                    owner->ui->messages->func_0001BC50(D_0027F7D4, D_00282668, 0);
                } else {
                    owner->ui->messages->func_0001BC50(D_0027F7D4, D_00282658, 0);
                }
                break;
            }
        }
        if (f2d0 == 0) {
            f2d4 = 1;
            owner->ui->messages->func_0001BC50(D_0027A144, D_00282648, 0);
            if (f2d8 > f2dc) {
                owner->ui->messages->func_0001BC50(D_0027F7D4, D_00282648, 0);
            }
            f2d8 = 0;
            f2dc = 1;
            f2a8 = 0;
        }
        break;
    case 1:
        if (f2d0 != 0) {
            f2d4 = 2;
            if (f2bc->func_00092A50(0) && f2bc->func_00092BE0()) {
                f2d4 = 3;
                f2b8 = f2b8 + dt;
                if (f2b8 >= D_00275460 && owner->dev->f74->func_000301D0() == 0) {
                    f2d0 = f2bc->func_00092A10();
                    f2b8 = 0;
                }
            }
        }
        break;
    case 3:
        if (f2d0 == 1) {
            if (f2b8 > D_002755E8) {
                if (f30c == 0) {
                    if (func_000DCC20() != 0) {
                        f2d4 = 4;
                        owner->ui->messages->func_0001BC50(D_0027A144, D_00282638, 0);
                        break;
                    }
                }
                f30c = 1;
                break;
            }
        }
        if (f2d0 == 0) {
            f2d4 = 1;
            owner->ui->messages->func_0001BC50(D_0027A144, D_00282648, 0);
            if (f2d8 > f2dc) {
                owner->ui->messages->func_0001BC50(D_0027F7D4, D_00282648, 0);
            }
            f2d8 = 0;
            f2dc = 1;
            f2a8 = 0;
        }
        break;
    }
    if (f290 || f28c) {
        f280 = f280 + dt;
        if (f280 >= D_0027DE74) {
            if (f2d4 == 0) {
                f294 = 1;
                ((C_000FF590Vt *)this)->v28(f288, f284);
            } else if (f2d4 == 4) {
                if (f290) {
                    if (f2d8 < 7) {
                        if (f2d8 > f2dc) f2d4 = 5;
                        f2d8 = f2d8 + 1;
                        f2e0 = 0;
                    }
                } else if (f2d8 > 0) {
                    if (f2d8 < f2dc) f2d4 = 5;
                    f2d8 = f2d8 - 1;
                    f2e0 = 1;
                    f2dc = f2d8 + 1;
                }
                if (f2d4 != 5) {
                    if (f2e0 != 0) {
                        owner->ui->messages->func_0001BC50(D_0027F7D4, D_00282668, 0);
                    } else {
                        owner->ui->messages->func_0001BC50(D_0027F7D4, D_00282658, 0);
                    }
                    f2b8 = 0;
                } else {
                    f294 = 1;
                    ((C_000FF590Vt *)this)->v28(f288, f284);
                }
            }
            f290 = 0;
            f28c = 0;
            f280 = 0;
        }
    }
    if (f2ac) {
        f280 = f280 + dt;
        if (owner->busy) {
            f2c8 = 0;
        } else if (f280 >= D_0027DE74) {
            switch (f2d4) {
            case 0:
                f2d0 = f2bc->func_00092A10();
                if (f2d0 != 0) {
                    f2d4 = 2;
                    if (f2bc->func_00092A50(0) && f2bc->func_00092BE0()) {
                        f2d4 = 3;
                        f2b8 = 0;
                    }
                }
                break;
            case 1:
            case 2:
            case 3:
                f2d4 = 1;
                f2b8 = 0;
                break;
            case 4:
                f2d4 = 0;
                break;
            case 6:
                f2d4 = 6;
                f2ec = 1;
                owner->func_000BB3B0(D_0028261C, D_0028262C);
                break;
            case 5: {
                int n = ++f2ec;
                if (n == 2) {
                    owner->func_000BB380(D_0028260C);
                } else if (n == 3) {
                    owner->func_000BB380(D_002825FC);
                } else if (n == 4) {
                    owner->func_000BB380(D_002825EC);
                } else {
                    f2d4 = 4;
                    owner->func_000BB380(D_002825E4);
                }
                f280 = 0;
                f2ac = 0;
                break;
            }
            }
        }
    }
    if (f2b0) {
        f280 = f280 + dt;
        if (f280 >= D_0027DE74) {
            if (f2d4 == 4) {
                f2d4 = 0;
                owner->ui->messages->func_0001BC50(D_0027A144, D_00282648, 0);
                if (f2d8 > f2dc) {
                    owner->ui->messages->func_0001BC50(D_0027F7D4, D_00282648, 0);
                }
                f2d8 = 0;
                f2dc = 1;
                f2a8 = 0;
            } else if (f2d4 == 0) {
                if (D_002A8490->f2E0->f324 == 1) {
                    f294 = 1;
                    ((C_000FF590Vt *)this)->v28(f288, f284);
                }
            }
            f2b0 = 0;
            f280 = 0;
        }
    }
    if (f2f0 != f2f8) {
        if (f2fc >= f300) {
            f2f8 = f2f0;
            f308 = 0;
        } else {
            int b = f2f4;
            f2f8 = (int)((float)(f2f0 - b) * (f2fc / f300)) + b;
            f2fc = f2fc + dt;
        }
    }
    func_001BED00(dt);
}

void C_000FFFA0::func_000FFC20()
{
    S_00100030_Hud *hud = D_002B91AC;
    S_000FFC20_Owner *owner = f124;
    S_00100030_Item *item;
    int state;

    hud->f24->func_001D5AD0();
    hud->f28->func_001D5AD0();
    hud->f2C->func_001D5AD0();
    hud->f30->func_001D5AD0();
    D_002B91AC->func_000BF860(0, 0x1eb, 0x184, 0);
    switch (f2d4) {
    case 0:
        if (D_002A8490->f2E0->f324 == 0) {
            if (f28c)
                D_002B91AC->f90->func_001D5AD0();
            else
                D_002B91AC->f88->func_001D5AD0();
            if (f290)
                D_002B91AC->f94->func_001D5AD0();
            else
                D_002B91AC->f8C->func_001D5AD0();
        } else if (!owner->f25c->f74->func_000301D0()) {
            if (f2b0)
                D_002B91AC->f6C->func_001D5AD0();
            else
                D_002B91AC->f54->func_001D5AD0();
        }
        if (!owner->f25c->f74->func_000301D0()) {
            if (f2ac)
                D_002B91AC->f68->func_001D5AD0();
            else
                D_002B91AC->f50->func_001D5AD0();
        }
        break;
    case 1:
        D_002B91AC->func_000BF860(0, 0x140, 0x184, 0);
        goto case6;
    case 2:
        if (f2ac)
            D_002B91AC->f68->func_001D5AD0();
        else
            D_002B91AC->f50->func_001D5AD0();
        break;
    case 3:
        if (f30c) {
            if (f2ac)
                D_002B91AC->f68->func_001D5AD0();
            else
                D_002B91AC->f50->func_001D5AD0();
        }
        break;
    case 4:
    case 5:
        if (f2d8) {
            if (f2d8 != 7) {
                if (f28c)
                    D_002B91AC->f90->func_001D5AD0();
                else
                    D_002B91AC->f88->func_001D5AD0();
                if (f290)
                    D_002B91AC->f94->func_001D5AD0();
                else
                    D_002B91AC->f8C->func_001D5AD0();
            } else {
                if (f28c)
                    D_002B91AC->f90->func_001D5AD0();
                else
                    D_002B91AC->f88->func_001D5AD0();
            }
        } else {
            if (f290)
                D_002B91AC->f94->func_001D5AD0();
            else
                D_002B91AC->f8C->func_001D5AD0();
        }
        if (f2ac)
            D_002B91AC->f68->func_001D5AD0();
        else
            D_002B91AC->f50->func_001D5AD0();
        if (f2b0)
            D_002B91AC->f6C->func_001D5AD0();
        else
            D_002B91AC->f54->func_001D5AD0();
        break;
    case 6:
    case6:
        if (f2ac)
            D_002B91AC->f68->func_001D5AD0();
        else
            D_002B91AC->f50->func_001D5AD0();
        break;
    }
    state = f2d4;
    if (state == 1 || state == 2 || state == 3 || state == 5) {
        if (!f304) {
            f2f0 = 0x80;
            f2f4 = 0;
            f2f8 = 0;
            f2fc = 0;
            f300 = 0.25f;
            f304 = 1;
            return;
        }
    } else {
        if (f304)
            func_000DCBF0();
        return;
    }
    item = f29c;
    item->color = ((short)f2f8 << 24) | (item->color & 0xffffff);
    item->flags |= 2;
    f29c->func_001D5AD0();
}

void C_000FFF70::func_000FFF70()
{
    if (unk298 != 0) {
        func_000DCE10();
        unk298 = 0;
    }
    func_001BF000();
}

void C_000FFFA0::func_000FFFA0()
{
  if (f2c4 != 0) {
    f2e8 = 1;
    f2e4 = 0;
    func_000DBC40();
    f2c4 = 0;
  }
  if (f2c8 != 0) {
    func_000DBD20();
    f2c8 = 0;
  }
  func_000DC270();
  func_000FFC20();
  func_00157960();
}

undefined4 C_00100010::func_00100010(byte param_1)
{
  int func_000DD130(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_000DD130();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00100030::func_00100030(void)
{
    S_00100030_V4 size;
    int w;
    char *s;

    if (f2F8 != 0) {
        f33C = 1;
        f338 = 0;
        D_000DE220();
        f30C = 0xff;
        f310 = 0;
        f314 = 0;
        f318 = 0;
        f31C = 0.25f;
        f2F8 = 0;
    }
    if (f2FC != 0) {
        func_000DE300();
        f30C = 0;
        f310 = 0xff;
        f314 = 0xff;
        f318 = 0;
        f31C = 0.25f;
        f2FC = 0;
    }
    if (f2F8 == 0 && f2FC == 0 && f2F4 != 0 && D_002A8490->f10 == 0) {
        if (f288 != 0) {
            s = f328->func_001B17F0();
            if ((int)strlen(s) < 0xf) {
                w = f328->func_001B1800();
                f328->func_001B1810(&size);
                f32C->func_001B1A30((float)w + size.x, size.y, 0.0f);
                f32C->func_001B1C10(D_0028F5DC);
                f2F0 = (float)w + size.x - D_00275AEC;
                f2EC->func_0005E7C0(f2F0, 175.0f);
            }
        }
        f32C->func_001B1980();
        f328->func_001B1980();
        f328->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
        f32C->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    }
    D_002B91AC->f38->func_001D6600();
    D_002B91AC->f3C->func_001D6600();
    D_002B91AC->f48->func_001D6600();
    D_002B91AC->f4C->func_001D6600();
    D_002B91AC->f34->func_001D6600();
    func_000DE3C0();
    func_00157960();
}

undefined4 C_00100280::func_00100280(byte param_1)
{
  int func_000DE650(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000DE650();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

