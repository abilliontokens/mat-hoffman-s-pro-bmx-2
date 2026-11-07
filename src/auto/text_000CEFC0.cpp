/* 7 functions from 0x000CEFC0 to 0x000CFF30, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

extern const char D_0027EB6C[];
extern const char D_0027EB60[];
extern const char D_0027DB54[];
extern const char D_0027EB78[];
extern char D_0027DB68[], D_0027DB80[], D_0027E914[], D_0027E904[], D_0027E8F8[], D_0027E8F0[];
extern char D_0027E8E4[], D_0027E8D8[], D_0027E8C8[], D_0027E8BC[], D_0027E8B0[], D_0027E8A0[];
extern char D_0027E894[], D_0027E888[], D_0027E878[], D_0027E86C[], D_0027E85C[], D_0027E850[];
extern char D_0027E83C[], D_0027E830[], D_0027E824[];
extern char D_0027E7E0[], D_0027E7EC[], D_0027E7F8[], D_0027E7D4[], D_0027E7C8[];
extern char D_0027EB58[], D_0027EB50[];

struct S_000CEFC0_Obj30000 {
    int func_00030020(const char *name);
    int func_000300C0(const char *name);
    void func_00030210();
    void func_000301A0();
};

struct S_000CEFC0_Obj25C {
    char pad0[0x74];
    S_000CEFC0_Obj30000 *unk74;
};

struct S_000CEFC0_Obj268 {
    void func_001C4D50(int v);
};

struct S_000CEFC0_Obj360 {
    char pad0[0x360];
    int unk360;
};

struct S_000CEFC0_Tags {
      int func_0001B3C0(const char *name);
      void func_0001BD60(char *name, const char *tag);
      void func_0001BC50(char *name, const char *tag, int v);
};

struct S_000CEFC0_Obj150 {
    char pad0[0x484];
    S_000CEFC0_Tags *f484;
};

struct S_000CEFC0_124 {
    char pad0[0x150];
    S_000CEFC0_Obj150 *f150;
    char pad154[0x25c - 0x154];
    S_000CEFC0_Obj25C *unk25c;
    char pad260[8];
    S_000CEFC0_Obj268 *unk268;
    char pad26c[0x27c - 0x26c];
    char *f27c;
    char *f280;
    char pad284[8];
    int f28c;
    S_000CEFC0_Obj360 *func_000BA9D0(int v);
    void func_000BB440(int v);
    void func_000BB600(int v);
    void func_000BC2A0();
        void func_000BDF30(int show);
        void func_000BC240();
    void func_000BE020(int v);
    void func_000BE1D0(int v);
    int func_000BC180();
    int func_000BC0B0();
};

struct S_000CEFC0_4F8 {
    void func_00093120();
    int func_00093620(float v);
    int func_00093300(float v);
    void func_00092E30(int idx);
};

struct S_000CEFC0_Mgr {
    int *func_0005C020(int idx);
    void func_0005C3A0(int idx);
};

struct S_000CEFC0_Record {
    int f0;
    int f4;
    char pad8[0x2b8];
          S_000CEFC0_Mgr *f2c0;
      char pad2c4[0x2d8 - 0x2c4];
      int f2d8;
};

struct S_000CEFC0_Root {
    char pad0[0x2e0];
    S_000CEFC0_Record *f2e0;
};

extern S_000CEFC0_Root *D_002A8490;

struct S_000CEFC0_Widget {
    void func_001B1980();
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

extern "C" void *func_001E8920(void *dst, const void *src, int n);

struct BmxUIPageGameOptions {
    char pad0[0x124];
    S_000CEFC0_124 *unk124;
    char pad128[0x480 - 0x128];
    S_000CEFC0_Widget *unk480;
    char pad484[8];
    int unk48c;
    char pad490[0x4ec - 0x490];
    int unk4ec;
    char pad4f0[8];
    S_000CEFC0_4F8 *unk4f8;
    char pad4fc[0x558 - 0x4fc];
    int unk558;
    int unk55c;
    int unk560;
    char pad564[4];
    S_000CEFC0_Widget *unk568;
    int unk56c;
    int unk570;
    int unk574;
    int unk578;
    int unk57c;
    int unk580;
          void func_000CEFC0();
      int func_001BF050(int v);
    void func_000CFDA0();
    void func_000CFCD0();
    void func_000CFCA0();
    void func_000CFAC0();
    void func_000CFB20();
    void func_000CFB90();
};

void BmxUIPageGameOptions::func_000CEFC0()
{
    S_000CEFC0_124 *p = unk124;
    int *e = D_002A8490->f2e0->f2c0->func_0005C020(D_002A8490->f2e0->f2d8);
    char tmp[260];
    int val;

    *(int *)((char *)D_002A8490->f2e0 + 0x234 + *(int *)((char *)this + 0x490) * 4) = p->func_000BC180();
    *(int *)((char *)D_002A8490->f2e0 + 0x1b0 + *(int *)((char *)this + 0x490) * 4) = p->func_000BC0B0();
    val = func_001BF050(1);
    switch (val) {
    case 1:
        *(int *)((char *)D_002A8490->f2e0 + 0x190 + *(int *)((char *)this + 0x490) * 4) = 0;
        if (D_002A8490->f2e0->f4 == 0) *(int *)((char *)e + 0x5cc) = 0;
        { int n = 0x103; n = AsmMinI(n, 11); func_001E8920((char *)this + 0x28c, D_0027DB68, n); ((char *)this + 0x28c)[n] = 0; }
        { int n = 0x103; n = AsmMinI(n, 9); func_001E8920(tmp, D_0027DB80, n); tmp[n] = 0; }
        break;
    case 2:
        *(int *)((char *)D_002A8490->f2e0 + 0x190 + *(int *)((char *)this + 0x490) * 4) = 1;
        if (D_002A8490->f2e0->f4 == 0) *(int *)((char *)e + 0x5cc) = 1;
        { int n = 0x103; n = AsmMinI(n, 4); func_001E8920((char *)this + 0x28c, D_0027E914, n); ((char *)this + 0x28c)[n] = 0; }
        break;
    case 3:
        *(int *)((char *)D_002A8490->f2e0 + 0x190 + *(int *)((char *)this + 0x490) * 4) = 2;
        if (D_002A8490->f2e0->f4 == 0) *(int *)((char *)e + 0x5cc) = 2;
        { int n = 0x103; n = AsmMinI(n, 12); func_001E8920((char *)this + 0x28c, D_0027E904, n); ((char *)this + 0x28c)[n] = 0; }
        { int n = 0x103; n = AsmMinI(n, 9); func_001E8920(tmp, D_0027E8F8, n); tmp[n] = 0; }
        break;
    case 4:
        *(int *)((char *)D_002A8490->f2e0 + 0x190 + *(int *)((char *)this + 0x490) * 4) = 3;
        if (D_002A8490->f2e0->f4 == 0) *(int *)((char *)e + 0x5cc) = 3;
        { int n = 0x103; n = AsmMinI(n, 4); func_001E8920((char *)this + 0x28c, D_0027E8F0, n); ((char *)this + 0x28c)[n] = 0; }
        break;
    case 5:
        *(int *)((char *)D_002A8490->f2e0 + 0x190 + *(int *)((char *)this + 0x490) * 4) = 4;
        if (D_002A8490->f2e0->f4 == 0) *(int *)((char *)e + 0x5cc) = 4;
        { int n = 0x103; n = AsmMinI(n, 11); func_001E8920((char *)this + 0x28c, D_0027E8E4, n); ((char *)this + 0x28c)[n] = 0; }
        { int n = 0x103; n = AsmMinI(n, 10); func_001E8920(tmp, D_0027E8D8, n); tmp[n] = 0; }
        break;
    case 6:
        *(int *)((char *)D_002A8490->f2e0 + 0x190 + *(int *)((char *)this + 0x490) * 4) = 5;
        if (D_002A8490->f2e0->f4 == 0) *(int *)((char *)e + 0x5cc) = 5;
        { int n = 0x103; n = AsmMinI(n, 14); func_001E8920((char *)this + 0x28c, D_0027E8C8, n); ((char *)this + 0x28c)[n] = 0; }
        { int n = 0x103; n = AsmMinI(n, 10); func_001E8920(tmp, D_0027E8BC, n); tmp[n] = 0; }
        break;
    case 7:
        *(int *)((char *)D_002A8490->f2e0 + 0x190 + *(int *)((char *)this + 0x490) * 4) = 6;
        if (D_002A8490->f2e0->f4 == 0) *(int *)((char *)e + 0x5cc) = 6;
        { int n = 0x103; n = AsmMinI(n, 9); func_001E8920((char *)this + 0x28c, D_0027E8B0, n); ((char *)this + 0x28c)[n] = 0; }
        break;
    case 8:
        *(int *)((char *)D_002A8490->f2e0 + 0x190 + *(int *)((char *)this + 0x490) * 4) = 7;
        if (D_002A8490->f2e0->f4 == 0) *(int *)((char *)e + 0x5cc) = 7;
        { int n = 0x103; n = AsmMinI(n, 12); func_001E8920((char *)this + 0x28c, D_0027E8A0, n); ((char *)this + 0x28c)[n] = 0; }
        { int n = 0x103; n = AsmMinI(n, 11); func_001E8920(tmp, D_0027E894, n); tmp[n] = 0; }
        break;
    case 9:
        *(int *)((char *)D_002A8490->f2e0 + 0x190 + *(int *)((char *)this + 0x490) * 4) = 8;
        if (D_002A8490->f2e0->f4 == 0) *(int *)((char *)e + 0x5cc) = 8;
        { int n = 0x103; n = AsmMinI(n, 8); func_001E8920((char *)this + 0x28c, D_0027E888, n); ((char *)this + 0x28c)[n] = 0; }
        break;
    case 10:
        *(int *)((char *)D_002A8490->f2e0 + 0x190 + *(int *)((char *)this + 0x490) * 4) = 9;
        if (D_002A8490->f2e0->f4 == 0) *(int *)((char *)e + 0x5cc) = 9;
        { int n = 0x103; n = AsmMinI(n, 14); func_001E8920((char *)this + 0x28c, D_0027E878, n); ((char *)this + 0x28c)[n] = 0; }
        { int n = 0x103; n = AsmMinI(n, 11); func_001E8920(tmp, D_0027E86C, n); tmp[n] = 0; }
        break;
    case 11:
        *(int *)((char *)D_002A8490->f2e0 + 0x190 + *(int *)((char *)this + 0x490) * 4) = 10;
        if (D_002A8490->f2e0->f4 == 0) *(int *)((char *)e + 0x5cc) = 10;
        { int n = 0x103; n = AsmMinI(n, 13); func_001E8920((char *)this + 0x28c, D_0027E85C, n); ((char *)this + 0x28c)[n] = 0; }
        { int n = 0x103; n = AsmMinI(n, 10); func_001E8920(tmp, D_0027E850, n); tmp[n] = 0; }
        break;
    case 12:
        *(int *)((char *)D_002A8490->f2e0 + 0x190 + *(int *)((char *)this + 0x490) * 4) = 11;
        if (D_002A8490->f2e0->f4 == 0) *(int *)((char *)e + 0x5cc) = 11;
        { int n = 0x103; n = AsmMinI(n, 16); func_001E8920((char *)this + 0x28c, D_0027E83C, n); ((char *)this + 0x28c)[n] = 0; }
        { int n = 0x103; n = AsmMinI(n, 11); func_001E8920(tmp, D_0027E830, n); tmp[n] = 0; }
        break;
    case 13:
        *(int *)((char *)D_002A8490->f2e0 + 0x190 + *(int *)((char *)this + 0x490) * 4) = 12;
        if (D_002A8490->f2e0->f4 == 0) *(int *)((char *)e + 0x5cc) = 12;
        { int n = 0x103; n = AsmMinI(n, 8); func_001E8920((char *)this + 0x28c, D_0027E824, n); ((char *)this + 0x28c)[n] = 0; }
        break;
    case 15:
        *(int *)((char *)D_002A8490->f2e0 + 0x190 + *(int *)((char *)this + 0x490) * 4) = 14;
        if (D_002A8490->f2e0->f4 == 0) *(int *)((char *)e + 0x5cc) = 14;
        { int n = 0x103; n = AsmMinI(n, 11); func_001E8920((char *)this + 0x28c, D_0027E7E0, n); ((char *)this + 0x28c)[n] = 0; }
        { int n = 0x103; n = AsmMinI(n, 10); func_001E8920(tmp, D_0027E7D4, n); tmp[n] = 0; }
        break;
    case 14:
        *(int *)((char *)D_002A8490->f2e0 + 0x190 + *(int *)((char *)this + 0x490) * 4) = 13;
        if (D_002A8490->f2e0->f4 == 0) *(int *)((char *)e + 0x5cc) = 13;
        { int n = 0x103; n = AsmMinI(n, 14); func_001E8920((char *)this + 0x28c, D_0027E7F8, n); ((char *)this + 0x28c)[n] = 0; }
        { int n = 0x103; n = AsmMinI(n, 10); func_001E8920(tmp, D_0027E7EC, n); tmp[n] = 0; }
        break;
    case 16:
        *(int *)((char *)D_002A8490->f2e0 + 0x190 + *(int *)((char *)this + 0x490) * 4) = 15;
        if (D_002A8490->f2e0->f4 == 0) *(int *)((char *)e + 0x5cc) = 15;
        { int n = 0x103; n = AsmMinI(n, 9); func_001E8920((char *)this + 0x28c, D_0027E7C8, n); ((char *)this + 0x28c)[n] = 0; }
        break;
    default:
        break;
    }
    if (*(int *)((char *)this + 0x288) == 0) {
        return;
    }
    p->func_000BE1D0(*(int *)((char *)this + 0x490));
    p->f150->f484->func_0001BD60((char *)this + 0x28c, D_0027EB58);
    p->f150->f484->func_0001BC50((char *)this + 0x28c, D_0027EB50, 1);
    if (val == 2 || val == 4 || val == 7 || val == 9 || val == 13 || val == 16) {
        return;
    }
    p->f150->f484->func_0001BD60(tmp, D_0027EB58);
    p->f150->f484->func_0001BC50(tmp, D_0027EB50, 1);
}

void BmxUIPageGameOptions::func_000CFAC0()
{
    S_000CEFC0_124 *p = unk124;
    p->unk25c->unk74->func_00030020(D_0027EB6C);
    p->unk25c->unk74->func_000300C0(D_0027EB60);
    p->unk268->func_001C4D50(1000);
    p->unk25c->unk74->func_00030210();
    p->unk25c->unk74->func_000301A0();
}

void BmxUIPageGameOptions::func_000CFB20()
{
    S_000CEFC0_124 *p = unk124;
    p->unk25c->unk74->func_00030020(D_0027DB54);
    p->unk25c->unk74->func_000300C0(D_0027EB78);
    p->unk268->func_001C4D50(1000);
    p->unk25c->unk74->func_00030210();
    p->unk25c->unk74->func_000301A0();
    p->func_000BA9D0(1)->unk360 = 3;
}

void BmxUIPageGameOptions::func_000CFB90()
{
    int idx;

    switch (unk48c) {
    case 1:
        idx = 0;
        break;
    case 3:
        idx = 1;
        break;
    case 5:
        idx = 2;
        break;
    case 6:
        idx = 3;
        break;
    case 8:
        idx = 4;
        break;
    case 10:
        idx = 5;
        break;
    case 11:
        idx = 6;
        break;
    case 12:
        idx = 7;
        break;
    case 14:
        idx = 8;
        break;
    case 15:
        idx = 9;
        break;
    case 2:
    case 4:
    case 7:
    case 9:
    case 13:
        return;
    default:
        return;
    }
    if (unk4f8->func_00093300(100.0f) == 1) {
        *D_002A8490->f2e0->f2c0->func_0005C020(idx) = 0;
        unk57c = 1;
    } else {
        *D_002A8490->f2e0->f2c0->func_0005C020(idx) = 1;
        unk580 = 1;
    }
}

void BmxUIPageGameOptions::func_000CFCA0()
{
    if (unk4f8->func_00093620(100.0f) == 1) {
        unk57c = 1;
    } else {
        unk580 = 1;
    }
}

void BmxUIPageGameOptions::func_000CFCD0()
{
    unk4f8->func_00093120();
    unk4ec = 0;
    if (D_002A8490->f2e0->f4 == 0) {
        unk568->func_001B1980();
        unk568->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
    }
    unk480->func_001B1980();
    if (unk48c != 2 && unk48c != 4 && unk48c != 7 && unk48c != 9 && unk48c != 0xd && unk48c != 0x10) {
        unk480->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
    }
}

void BmxUIPageGameOptions::func_000CFDA0()
{
    int idx;
    S_000CEFC0_124 *p = unk124;

    switch (unk48c) {
    case 1:
        idx = 0;
        break;
    case 3:
        idx = 1;
        break;
    case 5:
        idx = 2;
        break;
    case 6:
        idx = 3;
        break;
    case 8:
        idx = 4;
        break;
    case 10:
        idx = 5;
        break;
    case 11:
        idx = 6;
        break;
    case 12:
        idx = 7;
        break;
    case 14:
        idx = 8;
        break;
    case 15:
        idx = 9;
        break;
    default:
        goto skip;
    }
    unk4f8->func_00092E30(idx);
    D_002A8490->f2e0->f2c0->func_0005C3A0(idx);
skip:
    unk56c = 1;
    unk55c = 0;
    unk558 = 0;
    unk574 = 1;
    unk570 = 0;
    unk560 = 0;
    p->func_000BB440(unk48c - 1);
    p->func_000BB600(unk48c - 1);
    p->f28c = 0;
    p->func_000BC2A0();
    p->f150->f484->func_0001B3C0(p->f27c + (unk48c - 1) * 0x1a8);
    p->func_000BDF30(1);
    p->f150->f484->func_0001B3C0(p->f280 + (unk48c - 1) * 0x120);
    p->func_000BC240();
    p->func_000BE020(1);
}

