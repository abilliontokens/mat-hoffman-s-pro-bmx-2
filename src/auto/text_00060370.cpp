/* 5 functions from 0x00060370 to 0x00061300, found by Ghidra. */
#include "common.h"

extern float D_00275AEC;

struct S_00060D80_Obj {
    char pad0[0x10];
    float f10;
    float f14;
};

struct C_001D5AA0 {
    S_00060D80_Obj *func_001D5AA0(void);
};

struct C_001D5AD0 {
    void func_001D5AD0(void);
};

extern int D_002B9018;
extern int D_002B9014;
int func_001361E0(int a, int b, int *c, unsigned int d);
struct C_00031610 { void func_00031610(int a, int b); };
struct Item_60D {
 void func_001B1980();
 void func_001B2270(unsigned int);
 void func_001B19C0(int,int,int);
 void func_001B1A30(float,float,float);
 void func_001B1860(float,float,int,float,float,float,float,int,float,float,float,float,float);
};
extern float D_00275600;

struct BmxSinglePlayerInGameMenu {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7();
    virtual void vf8();
    virtual void vf9();
    virtual void vf10();
    virtual void vf11();
    virtual void vf12();
    virtual void vf13();
    virtual void vf14();
    virtual void vf15();
    virtual void vf16();
    virtual void vf17();
    virtual void vf18();
    virtual void vf19();
    virtual void vf20();
    virtual void vf21();
    virtual void vf22();
    virtual void vf23();
    virtual void vf24();
    virtual void vf25();
    virtual void vf26();
    virtual void vf27();
    virtual void vf28();
    virtual void vf29();
    virtual void vf30();
    virtual void vf31();
    char pad4[0x90];
    C_001D5AD0 *unk94;
    C_001D5AD0 *unk98;
    char pad9C[0x10];
    C_001D5AD0 *unkAC[5];
    C_001D5AD0 *unkC0[5];
    C_001D5AD0 *unkD4;
    C_001D5AD0 *unkD8;
    C_001D5AD0 *unkDC;
    C_001D5AD0 *unkE0;
    char padE4[0xC];
    int unkF0;
    int unkF4;
    int unkF8;
    char padFC[0x4];
    int unk100;
    C_00031610 *unk104;
    char pad108[0x4];
    C_001D5AD0 *unk10C;
    int unk110;
    int unk114;
    int unk118;
    int unk11C;
    int unk120;
    char pad124[0x4];
    int unk128;
    int unk12C;
    char pad130[4];
    Item_60D *items[5];
    int positions[5];
    void func_00060DE0();
    C_001D5AA0 *unk15c[10];
    void func_00060D80(void);
    int func_00061030(void);
    int func_00157BF0(int *a, int b);
    int func_000610D0(int *a, int b);
    int func_00060370(int *a, int b);
    __forceinline void CloseMenu()
    {
        unk104->func_00031610(4, 1);
        unkF8 = 1;
        unkF0 = 0;
    }
};

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
int BmxSinglePlayerInGameMenu::func_00060370(int *a, int b) {
 if(unk128) { D_002B9014=a[2]; unk128=0; }
 if(unkF4 || unkF8) return 1;
 if(unk11C!=-1 && a[2]!=unk11C) return func_00157BF0(a,b);
 unk12C=0;
 if(func_001361E0(2,2,a,0x80000000)) {
 if(unk120) return 0;
 unk104->func_00031610(2,1); unk114=unk100;
 if(--unk100<0) unk100=3;
 unk110=1;
 } else if(func_001361E0(3,2,a,0x80000000)) {
 if(unk120) return 0;
 unk104->func_00031610(2,1); unk114=unk100;
 if(++unk100>3) unk100=0;
 unk110=1;
 } else if(func_001361E0(4,2,a,0x80000000) || func_001361E0(23,2,a,0x80000000)) {
 unk104->func_00031610(4,1); unkF0=0; unkF4=1; return 0;
 } else if(func_001361E0(5,2,a,0x80000000) || func_001361E0(24,2,a,0x80000000)) {
 if(unk120) { unk104->func_00031610(4,1); unkF8=1; _ReadWriteBarrier(); unkF0=0; }
 unk104->func_00031610(4,1); unkF8=1; _ReadWriteBarrier(); unkF0=0; return 0;
 }
 return func_00157BF0(a,b);
}
void BmxSinglePlayerInGameMenu::func_00060D80(void) {
    int i;
    for (i = 0; i < 10; i++) {
        if (unk15c[i] != 0) {
            S_00060D80_Obj *p = unk15c[i]->func_001D5AA0();
            if (D_00275AEC > p->f10) {
                p->f10 = 10.0f;
            }
            if (D_00275AEC < p->f14 || p->f14 > p->f10) {
                p->f14 = 10.0f;
            }
        }
    }
}

void BmxSinglePlayerInGameMenu::func_00060DE0()
{
 if(unk118) {
  for(int i=0;i<5;i++) {
   items[i]->func_001B1980();
   if(i==unk100) {
    items[i]->func_001B2270(0xFFBFA35A);
    items[i]->func_001B1A30(320.0f,positions[i]+D_00275600,0);
    items[i]->func_001B1860(0,-1,255,1.3f,0,0,-1,255,1,0,0,0,0);
   } else {
    items[i]->func_001B2270(0xFFCCCCCC);
    items[i]->func_001B19C0(320,positions[i],0);
    items[i]->func_001B1860(0,-1,255,1,0,0,-1,255,1,0,0,0,0);
   }
  }
  unk118=0;
 }
}

int BmxSinglePlayerInGameMenu::func_00061030(void) {
    int i;
    unk94->func_001D5AD0();
    unk98->func_001D5AD0();
    for (i = 0; i < 5; i++) {
        unkAC[i]->func_001D5AD0();
        unkC0[i]->func_001D5AD0();
    }
    if (unkF4 != 0) {
        unkDC->func_001D5AD0();
    } else {
        unkD4->func_001D5AD0();
    }
    if (unkF8 != 0) {
        unkE0->func_001D5AD0();
    } else {
        unkD8->func_001D5AD0();
    }
    vf31();
    if (unk10C != 0) {
        unk10C->func_001D5AD0();
    }
    return 1;
}

int BmxSinglePlayerInGameMenu::func_000610D0(int *a, int b)
{
    if (unk128 != 0) {
        D_002B9018 = a[2];
        unk128 = 0;
    }
    if (unkF4 != 0 || unkF8 != 0) return 1;
    if (unk11C != -1 && a[2] != unk11C) return func_00157BF0(a, b);
    unk12C = 0;
    if (func_001361E0(5, 2, a, 0x80000000) || func_001361E0(24, 2, a, 0x80000000)) {
        if (unk120 != 0) {
            unk104->func_00031610(4, 1);
            unkF8 = 1;
            unkF0 = 0;
        }
        unk104->func_00031610(4, 1);
        unkF8 = 1;
        unkF0 = 0;
    } else if (func_001361E0(2, 2, a, 0x80000000)) {
        if (unk120 != 0) return 0;
        unk104->func_00031610(2, 1);
        unk114 = unk100;
        if (--unk100 < 0) unk100 = 4;
        unk110 = 1;
    } else if (func_001361E0(3, 2, a, 0x80000000)) {
        if (unk120 != 0) return 0;
        unk104->func_00031610(2, 1);
        unk114 = unk100;
        if (++unk100 > 4) unk100 = 0;
        unk110 = 1;
    } else if (func_001361E0(4, 2, a, 0x80000000) || func_001361E0(23, 2, a, 0x80000000)) {
        unk104->func_00031610(4, 1);
        unkF4 = 1;
        unkF0 = 0;
        return 0;
    }
    return func_00157BF0(a, b);
}

