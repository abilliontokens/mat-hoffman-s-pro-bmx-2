/* 7 functions from 0x000186F0 to 0x000195B0, found by Ghidra. */
#include "common.h"
struct C_0004AAD0 {
    void func_0004AAD0();
};

struct Vec4_00018D40 {
    float x, y, z, w;
    Vec4_00018D40() { x = y = z = 0; w = 1; }
};

struct C_00018D40Param {
    void func_00169710(void *a);
    int func_00168C20(void *a, int b, void *c);
    void func_00168CB0(void *a, void *b, void *c);
    int func_00168C50(void *a, float b, void *c);
};

struct C_00018D40Elem {
    float f0;
    Vec4_00018D40 f4;
};

extern char D_00275984[];
extern char D_00275978[];
extern char D_00275968[];
extern char D_0027595C[];
extern char D_00275950[];
extern int D_00144CD0;
void *func_001E8A44(int size);
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void __stdcall func_00011FF0(void *p, int stride, int count, void *ctor);

struct C_00018D40 {
    char pad0[0x49c];
    C_00018D40Elem *f49c;
    char pad4a0[0x4d8 - 0x4a0];
    int f4d8;
    void func_00018D40(C_00018D40Param *param);
};
struct C_00199B00 {
    void func_00199B00(float *out, int a);
};
struct S_000192D0_Dev {
    char pad0[4];
    C_00199B00 *f4;
};
struct S_000192D0_Ent {
    char pad0[0x1a4];
    S_000192D0_Dev *f1a4;
};
struct S_000192D0_Slot {
    char pad0[0x2c];
    S_000192D0_Ent *f2c;
};
extern float D_002A0718f[4];
extern float D_002757FC;
int __stdcall func_00017AD0(void *a, void *b, void *c, int d);
double __cdecl sqrt(double);
struct C_000192D0 {
    char pad0[0x398];
    S_000192D0_Slot *f398;
    char pad39c[0x49c - 0x39c];
    C_00018D40Elem *f49c;
    char pad4a0[0x4d8 - 0x4a0];
    int f4d8;
    int f4dc;
    int func_000192D0(int a, int b);
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

void C_00018D40::func_00018D40(C_00018D40Param *param)
{
    int count;
    int i;
    param->func_00169710(D_00275984);
    param->func_00168C20(D_00275978, 0, &count);
    f4d8 = count;
    if (count > 0) {
        Vec4_00018D40 v;
        char buf[0x40];
        float fval;
        int n = count;
        C_00018D40Elem *p = (C_00018D40Elem *)func_001E8A44(n * 0x14);
        if (p != 0) {
            func_00011FF0(p, 0x14, n, &D_00144CD0);
        } else {
            p = 0;
        }
        f49c = p;
        for (i = 0; i < f4d8; i++) {
            func_001ADCC0(buf, 0x40, D_00275968, i + 1);
            param->func_00169710(buf);
            func_001ADCC0(buf, 0x40, D_0027595C, i + 1);
            param->func_00168CB0(buf, &D_002A0718, &v);
            f49c[i].f4 = v;
            func_001ADCC0(buf, 0x40, D_00275950, i + 1);
            param->func_00168C50(buf, 8.0f, &fval);
            f49c[i].f0 = fval;
        }
    }
}

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
