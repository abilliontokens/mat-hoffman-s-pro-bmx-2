/* 16 functions from 0x001BB4F0 to 0x001BC310, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
struct C_001BC020 {
    undefined4 func_001BC020(byte param_1);
};

extern int D_0028D244;
extern int D_0028D2BC;

void func_001E891B(void *p);

struct S_1BB4F0_Arg1 {
    char pad0[0x64];
    int f64;
};

struct S_1BB4F0_Arg3 {
    char pad0[0xE0];
    int fE0;
    int fE4;
    int fE8;
    int fEC;
    int fF0[8];
    void (*f110)(S_1BB4F0_Arg1 *a, S_1BB4F0_Arg3 *b, int c, int d);
    int f114;
};

struct S_1BB4F0_Obj {
    char pad0[0x1E0];
    int f1E0;
    char pad1E4[0x680 - 0x1E4];
    int f680;
    char pad684[0x69C - 0x684];
    int f69C;
    char pad6A0[0x1178 - 0x6A0];
    int f1178;
};

struct S_1BB4F0_List {
    char pad0[0x24];
    int f24;
    char pad28[0x1A8 - 0x28];
    S_1BB4F0_Obj *f1A8[1];
};

struct S_1BB4F0_Sub64 {
    char pad0[0x4E0];
    S_1BB4F0_List *f4E0;
};

struct S_1BB4F0_Sub2A4 {
    char pad0[0x64];
    S_1BB4F0_Sub64 *f64;
};

struct S_1BB4F0_Sub2E0 {
    int f0;
    int f4;
};

struct S_1BB4F0_Global {
    char pad0[0x2A4];
    S_1BB4F0_Sub2A4 *f2A4;
    char pad2A8[0x2E0 - 0x2A8];
    S_1BB4F0_Sub2E0 *f2E0;
};

extern S_1BB4F0_Global *D_002A8490;

void func_001BB4F0(S_1BB4F0_Arg1 *a1, int a2, S_1BB4F0_Arg3 *a3, int idx);

struct C_001BB5F0 {
    void *vtbl;
    void func_00157660();
    void *func_001BB5F0(unsigned int flags);
};

extern int D_002AADF8;

int func_00011260(int lo, int hi);
int func_00135C70(int param_1, int param_2, int *param_3, int param_4);

struct C_001BBAA0 {
    char pad0[0x21];
    u8 unk21;                         /* 0x21 */
    char pad22[0x6E];
    int unk90;                        /* 0x90 */
    int unk94;                        /* 0x94 */
    int unk98;                        /* 0x98 */
    int *unk9C;                       /* 0x9C */
    int unkA0[5];                     /* 0xA0 */
    void **unkB4;                     /* 0xB4 */
    void **unkB8;                     /* 0xB8 */
    char padBC[0x14];
    int unkD0;                        /* 0xD0 */
    char padD4[0x218];
    u8 unk2EC;                        /* 0x2EC */
    void func_001BBA60(void);
    __declspec(noinline) void func_001BBAA0(void *a, void *b);
    void func_001BBE20(int a);
};

struct S_001BBDD0_2E4 {
    char pad0[0xA6];
    u8 unkA6;
};

struct C_001BBDD0 {
    char pad0[0x2E4];
    S_001BBDD0_2E4 *unk2E4;           /* 0x2E4 */
    int func_00157BF0(int *a, int b);
    void func_001BBDD0(int *a, int b);
};

struct S_001BBF90_Arg {
    char pad0[0x60];
    C_001BBAA0 *unk60;
};

struct C_001BB620 {
    char pad0[0xe8];
    int unkE8;
    int unkEC;
    char padF0[0x20];
    int unk110;
    int unk114;
    void func_001D3F50();
    void func_001BB620(void *a1, void *a2, int a3, int a4);
};

struct C_001BB860 {
    void *vtbl;
    char pad4[0xb0];
    void *unkB4;
    void *unkB8;
    void *unkBC;
    void *unkC0;
    void *unkC4;
    void *unkC8;
    void *unkCC;
    void func_00157660();
    void func_001BB860();
};

struct C_001334E0 {
    void func_001334E0(int a);
    void func_001334F0(void *a);
};

struct C_001BB900 {
    char pad0[0x2e4];
    void *unk2e4;
    int func_001BB900(void *a1);
};

__declspec(align(16)) struct S_001BBAE0_Mat {
    float m[16];
};

S_001BBAE0_Mat func_000263B0(void *a, void *b);

struct C_001BBAE0_2DC {
    void func_00197EA0(S_001BBAE0_Mat *dst);
};

struct C_001BBAE0_2E4 {
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
    virtual void v31(S_001BBAE0_Mat *m);
    void func_00133140(int a, int b);
};

struct C_001BBAE0 {
    char pad0[0x2DC];
    C_001BBAE0_2DC *unk2DC;
    char pad2E0[4];
    C_001BBAE0_2E4 *unk2E4;
    void func_001BBAE0(int a);
};


void func_001BB4F0(S_1BB4F0_Arg1 *a1, int a2, S_1BB4F0_Arg3 *a3, int enable)
{
    S_1BB4F0_List *list;
    S_1BB4F0_Obj *obj;
    int found;
    int idx;
    int i;
    int key;
    int n;

    if (enable == 0) {
        return;
    }
    if (D_002A8490->f2E0->f4 == 10) {
        return;
    }
    list = D_002A8490->f2A4->f64->f4E0;
    key = a1->f64;
    n = list->f24;
    found = 0;
    for (i = 0; i < n; i++) {
        if (found) {
            break;
        }
        obj = list->f1A8[i];
        if (obj->f1E0 == key) {
            found = 1;
            idx = i;
        }
    }
    if (!found) {
        return;
    }
    if (a3->fE4 == 2) {
        if (obj->f680 == 0) {
            return;
        }
    } else if (a3->fE4 == 3) {
        if (obj->f69C == 0) {
            return;
        }
    } else if (a3->fE4 == 0) {
        if (obj->f1178 != 0) {
            return;
        }
    }
    if (a3->fF0[idx] != 0) {
        if (a3->fF0[idx] != a2) {
            a3->f110(a1, a3, a3->f114, 1);
            a3->fE0 = 1;
        }
    } else {
        a3->fF0[idx] = a2;
    }
}

void *C_001BB5F0::func_001BB5F0(unsigned int flags)
{
    vtbl = &D_0028D244;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001BB620::func_001BB620(void *a1, void *a2, int a3, int a4)
{
    unkE8 = (int)a1;
    unkEC = (int)a2;
    ((C_001BBAA0 *)a1)->func_001BBAA0(this, (void *)&func_001BB4F0);
    ((C_001BBAA0 *)unkEC)->func_001BBAA0(this, (void *)&func_001BB4F0);
    unk110 = a3;
    unk114 = a4;
    func_001D3F50();
}

void C_001BB860::func_001BB860()
{
    vtbl = &D_0028D2BC;
    if (unkB4) func_001E891B(unkB4);
    if (unkB8) func_001E891B(unkB8);
    if (unkBC) func_001E891B(unkBC);
    if (unkC0) func_001E891B(unkC0);
    if (unkC8) func_001E891B(unkC8);
    if (unkC4) func_001E891B(unkC4);
    if (unkCC) func_001E891B(unkCC);
    func_00157660();
}

int C_001BB900::func_001BB900(void *a1)
{
    if (a1) {
        ((C_001334E0 *)unk2e4)->func_001334E0(1);
        ((C_001334E0 *)unk2e4)->func_001334F0(a1);
        ((C_001334E0 *)a1)->func_001334F0(unk2e4);
        return 1;
    }
    return 0;
}

void C_001BBAA0::func_001BBA60(void)
{
    int i;
    if (unk9C != 0) {
        for (i = 0; i < 5; i++) {
            if (unkA0[i] == -1082130432) {
                unkA0[i] = *unk9C;
                return;
            }
        }
    }
}

void C_001BBAA0::func_001BBAA0(void *a, void *b)
{
    if (unk98 < unk94) {
        unkB4[unk98] = a;
        unkB8[unk98] = b;
        unk98++;
    }
}

void C_001BBAE0::func_001BBAE0(int a)
{
    if (unk2DC != 0) {
        S_001BBAE0_Mat t;
        S_001BBAE0_Mat r;

        unk2DC->func_00197EA0(&t);
        r = func_000263B0((char *)this + 0x50, &t);
        t = r;
        unk2E4->v31(&t);
        unk2E4->func_00133140(a, 2);
    } else {
        unk2E4->v31((S_001BBAE0_Mat *)((char *)this + 0x50));
        unk2E4->func_00133140(a, 1);
    }
}

void C_001BBDD0::func_001BBDD0(int *a, int b)
{
    if (func_00135C70(0x14, 0, a, 0x80) != 0 && unk2E4 != 0) {
        unk2E4->unkA6 = unk2E4->unkA6 == 0;
    }
    func_00157BF0(a, b);
}

void func_001BBF90(S_001BBF90_Arg *a, int b)
{
    C_001BBAA0 *p;
    if (D_002AADF8 != 0) {
        p = a->unk60;
        if (p->unk21 & 1) {
            p->unk2EC |= 0x20;
            if ((!(p->unk2EC & 8) || !(p->unk2EC & 0x10)) &&
                (p->unk90 == 100 || (!(p->unk2EC & 0x40) && func_00011260(1, 100) <= p->unk90))) {
                p->unk2EC |= 0x10;
                p->unkD0++;
                p->func_001BBE20(b);
                p->func_001BBA60();
            }
        }
    }
}

undefined4 C_001BC020::func_001BC020(byte param_1)
{
  int func_001BB860(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001BB860();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
