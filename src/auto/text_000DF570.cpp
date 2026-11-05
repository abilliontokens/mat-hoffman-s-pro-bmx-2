/* 7 functions from 0x000DF570 to 0x000E00F0, found by Ghidra. */
#include "common.h"
struct S_000DFE50_W {
    char pad0[0x38];
    u32 f38;
    char pad3c[0x1c];
    u8 f58;
    void func_001D5AD0();
    void set_alpha(int a) { f38 = (a << 24) | (f38 & 0xffffff); f58 |= 2; }
};

struct S_000DFC90_Obj {
    void func_000951B0(int i);
    void func_00095200(int i);
};

struct S_000DFC90_Mid {
    char pad0[0x2fc];
    S_000DFC90_Obj *p2fc;
};

struct S_000DFC00_Data {
    char pad0[0xa00];
    int fa00;
    char pada04[4];
    int fa08;
};

struct S_000DFC00_Mid {
    char pad0[4];
    S_000DFC00_Data *p4;
};

struct S_000DFC00_Widget {
    char pad0[0x48];
    u32 unk48;
    char pad4c[2];
    u8 unk4e;
    void func_0005E840(int v);
};

struct S_000DFC00_Root {
    char pad0[0x44];
    S_000DFC00_Widget *unk44;
};

struct S_002A8490_DF {
    char pad0[0x2e0];
    S_000DFC90_Mid *p2e0;
    char pad2e4[4];
    S_000DFC00_Mid *p2e8;
};

extern S_002A8490_DF *D_002A8490;
extern S_000DFC00_Root *D_002B91AC;

struct C_000DFC00 {
    char pad0[0x280];
    int unk280;
    char pad284[0xB4];
    int unk338[19];
    void func_000DFC00();
    void func_000DFC90();
    void func_000DFE50();
};

struct S_000DFCF0_W {
    char pad0[4];
    u32 f4;
    float f8;
    char pad0c[0x4c];
    u8 f58;
};

struct C_000DFCF0 {
    char pad0[0x2ac];
    int unk2ac;
    char pad2b0[0x18];
    int unk2c8;
    char pad2cc[0x1dc];
    int unk4a8[72];
    void func_000DF570();
    void func_001BF000();
    void func_000DFCF0();
};

struct S_000DFA80_W {
    void func_001B1980();
    void func_001B2270(unsigned int c);
    void func_001B1A30(float a, float b, float c);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, float a12, int a13);
};

extern float D_00275AF0;
extern float D_0027F974;
extern float D_00275994;

struct C_000DFA80 {
    char pad0[0x280];
    int unk280;
    char pad284[0x100];
    float arr384[18];
    float arr3cc[18];
    char pad414[0x480];
    S_000DFA80_W *arr894[18];
    S_000DFA80_W *arr8dc[18];
    void func_000DFA80();
    void func_000DF8C0();
};

extern float D_002755EC;

void C_000DFA80::func_000DF8C0()
{
    for (int i = 0; i < 18; i++) {
        arr894[i]->func_001B1980();
        arr8dc[i]->func_001B1980();
        if (i + 1 == unk280) {
            arr894[i]->func_001B2270(0xffbfa35a);
            arr8dc[i]->func_001B2270(0xffbfa35a);
            float b = arr3cc[i] - D_002755EC;
            arr894[i]->func_001B1A30(244.0f, arr384[i] - D_002755EC, 0.5f);
            arr8dc[i]->func_001B1A30(244.0f, b, 0.5f);
            arr894[i]->func_001B1860(0, -1.0f, 0, 0.8f, 0, 0, 0, 0xff, 0.95f, 0, 0.25f, 0.2f, 0);
            arr8dc[i]->func_001B1860(0, -1.0f, 0, 0.8f, 0, 0, 0, 0xff, 0.95f, 0, 0.25f, 0.2f, 0);
        } else {
            arr894[i]->func_001B2270(0xffcccccc);
            arr8dc[i]->func_001B2270(0xffcccccc);
            arr894[i]->func_001B1860(0, -1.0f, 0, 0.8f, 0, 0, 0, 0xff, 0.8f, 0, 0.25f, 0, 0);
            arr8dc[i]->func_001B1860(0, -1.0f, 0, 0.8f, 0, 0, 0, 0xff, 0.8f, 0, 0.25f, 0, 0);
        }
        if (arr3cc[i] > D_00275AF0 || arr3cc[i] < D_0027F974) {
            arr8dc[i]->func_001B1980();
        }
        if (arr384[i] > D_00275AF0 || arr384[i] < D_00275994) {
            arr894[i]->func_001B1980();
        }
    }
}

void C_000DFA80::func_000DFA80()
{
    for (int i = 0; i < 18; i++) {
        arr894[i]->func_001B1980();
        arr8dc[i]->func_001B1980();
        if (i + 1 == unk280) {
            arr894[i]->func_001B2270(0xffbfa35a);
            arr8dc[i]->func_001B2270(0xffbfa35a);
            arr894[i]->func_001B1860(0, -1.0f, 0xff, 0.95f, 0, 0, 0, 0, 0.95f, 0, 0.25f, 0, 0);
            arr8dc[i]->func_001B1860(0, -1.0f, 0xff, 0.95f, 0, 0, 0, 0, 0.95f, 0, 0.25f, 0, 0);
        } else {
            arr894[i]->func_001B2270(0xffcccccc);
            arr8dc[i]->func_001B2270(0xffcccccc);
            arr894[i]->func_001B1860(0, -1.0f, 0xff, 0.8f, 0, 0, 0, 0, 0.8f, 0, 0.25f, 0, 0);
            arr8dc[i]->func_001B1860(0, -1.0f, 0xff, 0.8f, 0, 0, 0, 0, 0.8f, 0, 0.25f, 0, 0);
        }
        if (arr3cc[i] > D_00275AF0 || arr3cc[i] < D_0027F974) {
            arr8dc[i]->func_001B1980();
        }
        if (arr384[i] > D_00275AF0 || arr384[i] < D_00275994) {
            arr894[i]->func_001B1980();
        }
    }
}

void C_000DFC00::func_000DFC00()
{
    S_000DFC00_Widget *w = D_002B91AC->unk44;
    if (w->unk48 != 0xffcccccc) {
        w->unk4e |= 8;
        w->unk48 = (w->unk48 & 0xffcccccc) | 0xcccccc;
    }
    if (unk338[unk280] != 0) {
        D_002B91AC->unk44->func_0005E840(D_002A8490->p2e8->p4->fa00);
    } else {
        D_002B91AC->unk44->func_0005E840(D_002A8490->p2e8->p4->fa08);
    }
}

void C_000DFC00::func_000DFC90()
{
    int i = 1;
    int *p = &unk338[1];
    int n = 18;
    do {
        if (*p != 0) {
            D_002A8490->p2e0->p2fc->func_000951B0(i);
        } else {
            D_002A8490->p2e0->p2fc->func_00095200(i);
        }
        p++;
        i++;
        n--;
    } while (n != 0);
}

void C_000DFCF0::func_000DFCF0()
{
    if (unk2c8 != 0) {
        func_000DF570();
        unk2c8 = 0;
    }
    if (unk2ac != 0) {
        for (int i = 0; i < 18; i++) {
            for (int k = 0; k < 6; k++) {
                S_000DFCF0_W *w = ((S_000DFCF0_W **)((char *)this + 0x924))[i + k * 18];
                float v = (float)unk4a8[i * 4];
                if (w->f4 != 0x434c0000 || w->f8 != v) {
                    w->f8 = v;
                    w->f4 = 0x434c0000;
                    w->f58 |= 1;
                }
            }
        }
    }
    func_001BF000();
}

void C_000DFC00::func_000DFE50()
{
    func_000DFC00();
    S_000DFE50_W **root;
    if (*(int *)((char *)this+0x298)) ((S_000DFE50_W **)D_002B91AC)[0x6c/4]->func_001D5AD0();
    else ((S_000DFE50_W **)D_002B91AC)[0x54/4]->func_001D5AD0();
    if (!((int *)((char *)this+0x2f0))[unk280]) {
        if (*(int *)((char *)this+0x2bc)) ((S_000DFE50_W **)D_002B91AC)[0x70/4]->func_001D5AD0();
        else ((S_000DFE50_W **)D_002B91AC)[0x58/4]->func_001D5AD0();
        if (*(int *)((char *)this+0x2a0)) ((S_000DFE50_W **)D_002B91AC)[0x74/4]->func_001D5AD0();
        else ((S_000DFE50_W **)D_002B91AC)[0x5c/4]->func_001D5AD0();
    }
    int i=1;
    float *p=(float *)((char *)this+0x45c);
    int n=18;
    do {
        if (*p < D_00275AF0 && *p > D_00275994) {
            if (*(int *)((char *)p-0x120) && !*(int *)((char *)p-0x168)) {
                if (i == unk280) {
                    S_000DFE50_W **w=(S_000DFE50_W **)((char *)p+0x4c8);
                    (*w)->set_alpha(*(short *)((char *)this+0x2d8)); (*w)->func_001D5AD0();
                } else {
                    S_000DFE50_W **w=(S_000DFE50_W **)((char *)p+0x510);
                    (*w)->set_alpha(*(short *)((char *)this+0x2d8)); (*w)->func_001D5AD0();
                }
            } else if (*(int *)((char *)p-0x168)) {
                if (i == unk280) {
                    S_000DFE50_W **w=(S_000DFE50_W **)((char *)p+0x5e8);
                    (*w)->set_alpha(*(short *)((char *)this+0x2d8)); (*w)->func_001D5AD0();
                } else {
                    S_000DFE50_W **w=(S_000DFE50_W **)((char *)p+0x630);
                    (*w)->set_alpha(*(short *)((char *)this+0x2d8)); (*w)->func_001D5AD0();
                }
            } else {
                if (i == unk280) {
                    S_000DFE50_W **w=(S_000DFE50_W **)((char *)p+0x558);
                    (*w)->set_alpha(*(short *)((char *)this+0x2d8)); (*w)->func_001D5AD0();
                } else {
                    S_000DFE50_W **w=(S_000DFE50_W **)((char *)p+0x5a0);
                    (*w)->set_alpha(*(short *)((char *)this+0x2d8)); (*w)->func_001D5AD0();
                }
            }
        }
        p++; i++; n--;
    } while(n);
    S_000DFE50_W **w=(S_000DFE50_W **)((char *)this+0xad4);
    n=4;
    do {
        (*w)->set_alpha(*(short *)((char *)this+0x2d8)); (*w)->func_001D5AD0();
        w++; n--;
    } while(n);
    w=(S_000DFE50_W **)((char *)this+0xae4);
    n=2;
    do {
        (*w)->set_alpha(*(short *)((char *)this+0x2d8)); (*w)->func_001D5AD0();
        w++; n--;
    } while(n);
    root=(S_000DFE50_W **)D_002B91AC;
    root[9]->func_001D5AD0();
    root[10]->func_001D5AD0();
    root[11]->func_001D5AD0();
    root[12]->func_001D5AD0();
}

