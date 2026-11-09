/* 4 functions from 0x000C6E70 to 0x000C7DF0, found by Ghidra. */
#include "common.h"

extern int D_0027E28C;
extern char D_00278690[], D_002786A0[], D_00278678[], D_002786B0[], D_0027E328[], D_0027E31C[];
extern float D_002757F0, D_002786B8;
extern int D_0028F5E0;
extern void *D_002A8490;
extern "C" void *func_001E8A44(unsigned int);
struct S_C7970_Manager { void func_0018C160(const char *); };
struct S_C7970_Text {
 char pad[0x184];
 S_C7970_Text *func_001B12C0(int);
 void func_001B13A0(const char *,const char *,int,int);
 void func_001B1A30(float,float,int);
 void func_001B2270(unsigned int);
 void func_001B19A0(int);
 void func_001B17D0(int);
};

struct S_000C7_Obj {
    virtual void destroying(int flag);
    char pad4[0x24];
    u32 unk28;
    char pad2C[12];
    u32 unk38;
    float unk3C, unk40, unk44, unk48;
    char pad4C[12];
    unsigned char flags;
    S_000C7_Obj *func_001D5760();
    void func_001D5810(const char *, float, float, int);
    void depth(u32 v) { if (unk28 != v) { unk28 = v; flags |= 1; } }
    void color() { unk38 = (unk38 & 0xffbfa35a) | 0xbfa35a; flags |= 2; }
    void coords(float a,float b,float c,float d) { unk3C=a; unk40=b; unk44=c; unk48=d; flags |= 4; }

};

struct S_000C6E70_Widget {
    char pad0[0x38];
    int f38;
    char pad3C[0x58 - 0x3C];
    unsigned char flags;
          void SetAlpha(int a) { f38 = (f38 & 0xffffff) | (a << 24); flags |= 2; }
};

/* BmxUIPageParkLevel (vtable 0x0027E1F4) */
struct C_000C6E70 {
    char pad0[0x2D4];
    short f2D4;
    char pad2D6[0x2F0 - 0x2D6];
    S_000C6E70_Widget *f2F0;
    S_000C6E70_Widget *f2F4;
    S_000C6E70_Widget *f2F8;
    S_000C6E70_Widget *f2FC;
    S_000C6E70_Widget *f300;
    S_000C6E70_Widget *f304;
    void func_001BF000(void);
    void func_000C6E70(void);
};

struct BmxUIPageTwoPlayer {
    void *vtbl;
    char pad4[0x280 - 4];
    u32 unk280;
    u32 unk284;
    u32 unk288;
    u32 unk28C;
    u32 unk290;
    u32 unk294;
    u32 unk298;
    u32 unk29C;
    char pad2A0[8];
    u32 unk2A8;
    u32 unk2AC;
    u32 unk2B0;
    u32 unk2B4;
    u32 unk2B8;
    u32 unk2BC;
    u32 unk2C0;
    u32 unk2C4;
    u32 unk2C8;
    u32 unk2CC;
    u32 unk2D0;
    u32 unk2D4;
    u32 unk2D8;
    u32 unk2DC;
    int unk2E0;
    int unk2E4;
    int unk2E8;
    u32 unk2EC;
    u32 unk2F0;
    u32 unk2F4;
    u32 unk2F8;
    u32 unk2FC;
    char pad300[4];
    float unk304;
    S_000C7_Obj *arr308[4];
    S_000C7_Obj *arr318[2];
    u32 arr320[9];
    u32 arr344[9];
    u32 arr368[9];
    BmxUIPageTwoPlayer *func_000C7970(int,int,int);
    void func_001BE4F0(int,int,int);
    void func_001577A0(void *,int);
    void func_001BE3F0(void);
    void func_001BE360(int a);
    void func_000C7900(void);
    BmxUIPageTwoPlayer *func_000C77D0(int a);
};

void C_000C6E70::func_000C6E70(void)
{
    f2F0->SetAlpha(f2D4);
    f2F4->SetAlpha(f2D4);
    f2F8->SetAlpha(f2D4);
    f2FC->SetAlpha(f2D4);
    f300->SetAlpha(f2D4);
    f304->SetAlpha(f2D4);
    func_001BF000();
}

BmxUIPageTwoPlayer *BmxUIPageTwoPlayer::func_000C77D0(int a)
{
    int i;

    func_001BE360(a);
    vtbl = (void *)&D_0027E28C;
    unk28C = 0;
    unk294 = 0;
    unk284 = 0;
    unk290 = 0;
    unk288 = 0;
    unk280 = 0;
    unk298 = 0;
    unk29C = 0;
    unk2A8 = 0;
    unk2AC = 0;
    unk2B4 = 0;
    unk2B0 = 0;
    for (i = 0; i < 4; i++) {
        arr308[i] = 0;
    }
    for (i = 0; i < 2; i++) {
        arr318[i] = 0;
    }
    unk2B8 = 0;
    unk2BC = 0;
    unk2C0 = 0;
    unk2C4 = 0;
    unk2C8 = 0;
    unk2CC = 0;
    unk2D0 = 0;
    unk2D4 = 0;
    unk2D8 = 0;
    unk2E4 = -1;
    unk2E8 = 6;
    unk2F0 = 1;
    unk2F4 = 0;
    unk2EC = 0;
    unk2FC = 0;
    unk2F8 = 0;
    for (i = 0; i < 9; i++) {
        arr320[i] = 0;
        arr344[i] = 0;
        arr368[i] = 0;
    }
    unk2DC = 0;
    unk2E0 = -1;
    unk304 = 1.0f;
    return this;
}

void BmxUIPageTwoPlayer::func_000C7900(void)
{
    int i;
    vtbl = (void *)&D_0027E28C;
    for (i = 0; i < 4; i++) {
        if (arr308[i] != 0) {
            arr308[i]->destroying(1);
            arr308[i] = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (arr318[i] != 0) {
            arr318[i]->destroying(1);
            arr318[i] = 0;
        }
    }
    func_001BE3F0();
}

BmxUIPageTwoPlayer *BmxUIPageTwoPlayer::func_000C7970(int a,int b,int c) {
func_001BE4F0(a,b,c);
(*(S_C7970_Manager **)((char *)D_002A8490+0x2ec))->func_0018C160(D_00278690);
(*(S_C7970_Manager **)((char *)D_002A8490+0x2ec))->func_0018C160(D_002786A0);
(*(S_C7970_Manager **)((char *)D_002A8490+0x2ec))->func_0018C160(D_00278678);
for(int i=0;i<4;i++) { S_000C7_Obj *p=(S_000C7_Obj *)func_001E8A44(0x64); arr308[i]=p?p->func_001D5760():0; }
arr308[0]->func_001D5810(D_002786B0,100,90,0); arr308[0]->depth(0x435d0000); arr308[0]->color();
arr308[1]->func_001D5810(D_002786B0,321,90,0); arr308[1]->depth(0x435d0000); arr308[1]->color(); arr308[1]->coords(1,0,0,1);
arr308[2]->func_001D5810(D_002786B0,100,325,0); arr308[2]->depth(0x435d0000); arr308[2]->color(); arr308[2]->coords(0,1,1,0);
arr308[3]->func_001D5810(D_002786B0,321,325,0); arr308[3]->depth(0x435d0000); arr308[3]->color(); arr308[3]->coords(1,0,1,0);
for(int j=0;j<2;j++) { S_000C7_Obj *p=(S_000C7_Obj *)func_001E8A44(0x64); arr318[j]=p?p->func_001D5760():0; if(j==0) arr318[j]->func_001D5810(D_0027E328,309,82,0); else arr318[j]->func_001D5810(D_0027E31C,309,349,0); arr318[j]->color(); }
for(int k=0;k<9;k++) { S_C7970_Text *p=(S_C7970_Text *)func_001E8A44(0x184); p=p?p->func_001B12C0(1):0; arr320[k]=(u32)p; ((S_C7970_Text *)arr320[k])->func_001B13A0(D_002786A0,D_002786A0,0,15); float y=k*D_002757F0+D_002786B8; ((float *)arr368)[k]=y; ((S_C7970_Text *)arr320[k])->func_001B1A30(320,y,0); ((S_C7970_Text *)arr320[k])->func_001B2270(0xffcccccc); ((S_C7970_Text *)arr320[k])->func_001B19A0(D_0028F5E0); func_001577A0((void *)arr320[k],-1); }
((S_C7970_Text *)arr320[0])->func_001B17D0(*(int *)(*(char **)(*(char **)((char *)D_002A8490+0x2e8)+4)+880));
((S_C7970_Text *)arr320[1])->func_001B17D0(*(int *)(*(char **)(*(char **)((char *)D_002A8490+0x2e8)+4)+232));
((S_C7970_Text *)arr320[2])->func_001B17D0(*(int *)(*(char **)(*(char **)((char *)D_002A8490+0x2e8)+4)+216));
((S_C7970_Text *)arr320[3])->func_001B17D0(*(int *)(*(char **)(*(char **)((char *)D_002A8490+0x2e8)+4)+848));
((S_C7970_Text *)arr320[4])->func_001B17D0(*(int *)(*(char **)(*(char **)((char *)D_002A8490+0x2e8)+4)+312));
((S_C7970_Text *)arr320[5])->func_001B17D0(*(int *)(*(char **)(*(char **)((char *)D_002A8490+0x2e8)+4)+240));
((S_C7970_Text *)arr320[6])->func_001B17D0(*(int *)(*(char **)(*(char **)((char *)D_002A8490+0x2e8)+4)+872));
((S_C7970_Text *)arr320[7])->func_001B17D0(*(int *)(*(char **)(*(char **)((char *)D_002A8490+0x2e8)+4)+720));
((S_C7970_Text *)arr320[8])->func_001B17D0(*(int *)(*(char **)(*(char **)((char *)D_002A8490+0x2e8)+4)+856));
return this;
}

