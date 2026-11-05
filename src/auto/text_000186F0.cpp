/* 7 functions from 0x000186F0 to 0x000195B0, found by Ghidra. */
#include "common.h"
struct C_0004AAD0 {
    void func_0004AAD0();
};
struct C_0001CE80 {
    void func_0001CE80(void *a, void *b, void *c, float d, float e);
};
struct S_002A8490 {
    char pad0[4];
    C_0001CE80 *f4;
    char pad8[0x230];
    u32 f238;
    char pad23c[0x68];
    C_0004AAD0 *f2a4;
};
extern S_002A8490 *D_002A8490;
extern int D_002A0718;
struct S_00019520_Dev {
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
};
struct S_00019520_Obj {
    char pad0[0x24];
    S_00019520_Dev *f24;
};
struct C_0008AB90 {
    void func_0008AB90(int a);
};
struct S_00019520_Owner {
    char pad0[0x384];
    C_0008AB90 *f384;
    char pad388[8];
    int f390;
    char pad394[8];
    S_00019520_Obj *f39c[77];
    int f4d0;
    char pad4d4[8];
    int f4dc;
    char pad4e0[12];
    u32 f4ec;
    int f4f0;
    int func_000192D0(int a, int b);
};
struct S_TikiObj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int a);
};

/* AiTikiGod */
struct AiTikiGod {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    char pad4[0x380];
    C_0008AB90 *f384;
    char pad388[8];
    int f390;
    char pad394[0x4bc - 0x394];
    S_TikiObj *f4bc;
    char pad4c0[0x4d4 - 0x4c0];
    int f4d4;
    char pad4d8[4];
    int f4dc;
    char pad4e0[0x4f4 - 0x4e0];
    int f4f4;
    char pad4f8[0x508 - 0x4f8];
    char f508[4];
    char pad50c[0x76c - 0x50c];
    int f76c;
    void func_00019480();
};

struct TikiHuntState {
    char pad0[8];
    S_00019520_Owner *f8;
    u32 fC;
    u32 f10;
    void func_00019520();
};

void AiTikiGod::func_00019480()
{
    f4d4 = 0;
    f4f4 = 1;
    D_002A8490->f4->func_0001CE80(f4bc, f508, &D_002A0718, 10.0f, 1000.0f);
    f4bc->v5(4);
    f76c++;
    if (f4dc != 0) {
        f4dc = 0;
        f384->func_0008AB90(f390);
        return;
    }
    D_002A8490->f2a4->func_0004AAD0();
    v4();
}

void TikiHuntState::func_00019520()
{
    if (f8->f4f0 == 1 && D_002A8490->f238 > f8->f4ec) {
        int result = f8->func_000192D0(0, 0);
        if (result != -1) {
            f8->f4dc = result;
            f8->f384->func_0008AB90(f8->f390);
            f8->f4ec = D_002A8490->f238 + 12000;
        }
    }
    if (fC == 1 && f10 == 0) {
        f8->f39c[f8->f4d0]->f24->v31();
    }
}
