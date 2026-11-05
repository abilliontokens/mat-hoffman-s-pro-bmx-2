/* 14 functions from 0x000B21B0 to 0x000B2ED0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern float D_002755E8;
extern char D_0027D0D8[];
extern char D_0027D0E8[];

int __stdcall func_0018C890(int);

struct VehicleV4 {
    u32 x, y, z, w;
};

struct VehicleAIOwner {
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
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46(int a, int b);
    char pad4[0x4B4];
    int f4B8;
    int func_0012FCF0(int a, int b);
};

struct C_002B9134 {
    char pad0[0x3C];
    int f3C;
};

extern C_002B9134 *D_002B9134;

struct VehicleAIIface {
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
    virtual int v17();
};

struct VehicleAIBody {
    char pad0[0x1A0];
    u8 f1A0;
    char pad1A1[0x1B];
    VehicleAIIface *f1BC;
    void func_001A1C70(int a);
};

struct VehicleAIB {
    char pad0[8];
    VehicleAIBody *f8;
};

struct VehicleAIA {
    char pad0[0x28];
    VehicleAIB *f28;
};

struct VehicleAI {
    void *vtbl;
    char pad4[0x38];
    VehicleAIOwner *f3C;
    char pad40[4];
    VehicleAIA *f44;
    char pad48[4];
    s32 f4C;
    s32 f50;
    s32 f54;
    u32 f58;
    u32 f5C;
    u32 f60;
    char pad64[4];
    u32 f68;
    char pad6C[0xC];
    u32 f78;
    char pad7C[0x10];
    u32 f8C;
    char pad90[0x111];
    u8 f1A1;
    char pad1A2[0x106];
    u8 f2A8;
    void SetState(int s) {
        if (f5C != s) {
            f1A1 = 1;
            f58 = s;
        }
    }
    void func_000B2450(float a);
    void func_000B2540(int mode, int a, VehicleV4 *p);
    void func_000B2C20(int a, int b);
    void func_000B1F70(void);
};

struct C_0018C800 {
    void func_0018C800(void);
    void func_0018C890(int a);
};

extern char D_0027CF70[];

struct VehicleAIMgr {
    char pad0[0x34];
    int f34;
    int f38;
    char pad3C[8];
    C_0018C800 **f44;
    VehicleAI **f48;
    void func_000B2D50(int a);
};
extern int D_0027CEFC;
void func_001E891B(void *p);

struct S_000B25D0_Leaf {
    void func_001A2AA0(int a);
    void func_001A2B40(int a);
};

struct S_000B25D0_Mid {
    char pad0[8];
    S_000B25D0_Leaf *f8;
};

struct S_000B25D0_Top {
    char pad0[0x28];
    S_000B25D0_Mid *f28;
};

struct C_000B25D0 {
    char pad0[0x44];
    S_000B25D0_Top *f44;
    char pad48[0x10];
    int f58;
    int f5C;
    char pad60[8];
    float f68;
    char pad6C[0xC];
    int f78;
    char pad7C[0x125];
    u8 f1A1;
    char pad1A2[0x106];
    u8 f2A8;
    void func_000B25D0(void);
};

struct S_000B2E40_Obj {
    virtual void Destroy(int a);
};

struct S_000B2E40_Buf {
    void func_00188720(void);
};

struct C_000B2E40 {
    void *vtbl;
    char pad4[0x3C];
    S_000B2E40_Obj *f40;
    S_000B2E40_Buf *f44;
    void **f48;
    int f4C;
    void func_000B2E40(void);
    void func_0018C7F0(void);
};

struct S_000B2C80_Owner {
    char pad0[0x4B8];
    int f4B8;
};

struct S_000B2C80_Item {
    char pad0[0x3C];
    S_000B2C80_Owner *f3C;
    char pad40[0x30];
    int f70;
    void func_000B2540(int a, int b, int c);
};

struct S_000B2C80_Group {
    int f0;
    int f4;
    int f8;
    S_000B2C80_Item **fC;
};

struct S_000B2C80_Entry {
    int idx;
    float f4;
};

struct S_000B2C80_Arg {
    char pad0[0x48];
    S_000B2C80_Entry **f48;
    int f4C;
    int f50;
};

static inline int IsNear(int v, int c, int r)
{
    if (v == c) {
        return 1;
    }
    if (v < c) {
        if (v >= c - r) {
            return 1;
        }
    } else if (v <= c + r) {
        return 1;
    }
    return 0;
}

struct C_000B2C80 {
    char pad0[0x30];
    int f30;
    char pad34[0x18];
    S_000B2C80_Group **f4C;
    void func_000B2C80(S_000B2C80_Arg *a);
};

struct C_000B2C60 {
    undefined4 func_000B2C60(byte param_1);
};

struct C_000B2510 {
    void func_000B2510(int param_1);
};

struct C_000B2530 {
    undefined4 func_000B2530(void);
};


void VehicleAI::func_000B2450(float arg)
{
    if (f78) {
        VehicleAIBody *body = f44->f28->f8;
        if (body->f1A0 & 2) {
            unsigned int u = (unsigned int)(body->f1BC->v17() * D_002755E8);
            float fu = (float)u;
            float scaled = arg * fu;
            f44->f28->f8->func_001A1C70((int)(scaled + fu));
        }
    }
}

float __stdcall func_000B24C0(float a, float b, float c)
{
    if (a <= b) {
        return b;
    }
    if (a >= c) {
        return c;
    }
    return (a + c) * D_002755E8 + b;
}

void C_000B2510::func_000B2510(int param_1)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x5c) != param_1) {
    *(undefined1 *)(in_ECX + 0x1a1) = 1;
    *(int *)(in_ECX + 0x58) = param_1;
  }
  return;
}

undefined4 C_000B2530::func_000B2530(void)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x3c) + 0x4b8);
}

void VehicleAI::func_000B2540(int mode, int a, VehicleV4 *p)
{
    switch (mode) {
    case 0:
        f60 = a;
        *(VehicleV4 *)&f8C = *p;
        f68 = 0;
        f2A8 = 1;
        SetState(0x5A);
        break;
    case 1:
        f60 = a;
        func_0018C890((int)D_0027D0D8);
        break;
    case 2:
        if (f2A8 == 1) {
            func_0018C890((int)D_0027D0E8);
        }
        break;
    }
}

void C_000B25D0::func_000B25D0(void)
{
    f68 = 1.0f;
    f2A8 = 0;
    if (f5C != 0) {
        f1A1 = 1;
        f58 = 0;
    }
    if (f78 != 0) {
        f44->f28->f8->func_001A2AA0(1);
        if (f78 != 0) {
            f44->f28->f8->func_001A2B40(3);
        }
    }
}

void VehicleAI::func_000B2C20(int a, int b)
{
    if (f54 >= 0 && f54 < D_002B9134->f3C) {
        if (f3C->func_0012FCF0(a, b)) {
            int t = f54;
            f54 = f50;
            f50 = t;
        }
    }
}

undefined4 C_000B2C60::func_000B2C60(byte param_1)
{
  int func_000B1200(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000B1200();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_000B2C80::func_000B2C80(S_000B2C80_Arg *a)
{
    int i;
    int j;

    for (i = 0; i < a->f4C; i++) {
        int idx = a->f48[i]->idx;

        for (j = 0; j < f4C[idx]->f4; j++) {
            S_000B2C80_Item *item = f4C[idx]->fC[j];

            item->f70 = 1;
            if (a->f50 == 2) {
                int range = f30;
                int cur = (int)a->f48[i]->f4;
                int v = item->f3C->f4B8;

                if (IsNear(v, cur, range)) {
                    item->func_000B2540(2, 0, 0);
                }
            }
        }
    }
}

void VehicleAIMgr::func_000B2D50(int a)
{
    int i;
    VehicleAI *ai;

    for (i = 0; i < f38; i++) {
        f48[i]->f3C->f4B8 = 0;
        ai = f48[i];
        if (ai->f50 != ai->f4C) {
            ai->func_000B2C20(0, 0);
        }
        f48[i]->f3C->v46(0, 1);
        f48[i]->func_000B1F70();
        ((C_0018C800 *)f48[i])->func_0018C800();
        if (a == 1) {
            ((C_0018C800 *)f48[i])->func_0018C890((int)D_0027CF70);
        }
    }
    for (i = 0; i < f34; i++) {
        f44[i]->func_0018C800();
        if (a == 1) {
            f44[i]->func_0018C890((int)D_0027CF70);
        }
    }
}

void C_000B2E40::func_000B2E40(void)
{
    int i;
    S_000B2E40_Buf *buf;

    vtbl = &D_0027CEFC;
    if (f48 != 0) {
        for (i = 0; i < f4C; i++) {
            func_001E891B(f48[i]);
        }
        func_001E891B(f48);
        f48 = 0;
        f4C = 0;
    }
    if (f40 != 0) {
        f40->Destroy(1);
        f40 = 0;
    }
    buf = f44;
    if (buf != 0) {
        buf->func_00188720();
        func_001E891B(buf);
    }
    func_0018C7F0();
}

