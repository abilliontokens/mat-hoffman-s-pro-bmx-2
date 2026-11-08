/* 2 functions from 0x000707D0 to 0x000716F0, found by Ghidra. */
#include "common.h"
#include <string.h>

extern float D_002755E8, D_002B9034, D_00278C58, D_00278C48, D_00278500, D_002782A8;
extern double D_00278C50;

struct KB_Obj {
    char *func_001B17F0();
    void func_001B17D0(char *s);
    void func_000602B0();
    int func_00094960(int a);
    void func_0001EDC0(int a);
    void func_0005B850(char *s);
    void func_00032060(char *s, int a);
    void func_000320A0(char *s, int a);
    void func_00032120(char *s, int a);
    void func_00032150(char *s, int a);
    void func_00032180(char *s, int a);
    void func_000320E0(char *s, int a);
    int func_00032180(int score, char *name);
    int func_00032060(int score, char *name);
    int func_000320A0(float value, char *name);
    int func_000320E0(int score, char *name);
    int func_00032120(float value, char *name);
    int func_00032150(float value, char *name);
    int func_0005B960(int a, float b);
    void func_00064A40();
    void func_00032720();
    void func_00032740();
    void func_000683F0();
    void func_0006D1D0();
    void func_0006E620(int a);
};

struct KB_VT {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual int v4(int a, int b, int c, int d);
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17();
    virtual void v18(int a);
    virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22();
    virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26();
    virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30();
    virtual void v31(int a, int b);
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38();
    virtual void v39();
};

struct KB_VT23 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22();
    virtual void v23(int a, int b);
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38();
    virtual void v39();
};

struct C_000707D0 {
    int f0;
    char pad4[0x64 - 4];
    int f64;
    float f68;
    int f6C;
    char pad70[0xA0 - 0x70];
    int fA0;
    char aA4[0xBC - 0xA4];
    float fBC;
    int fC0;
    int fC4;
    char padC8[0xD0 - 0xC8];
    KB_Obj *fD0;
    KB_Obj *fD4;
    char padD8[0xEC - 0xD8];
    KB_Obj *fEC;
    char padF0[0xF4 - 0xF0];
    int fF4;
    char padF8[0xFC - 0xF8];
    int fFC;
    char pad100[0x104 - 0x100];
    int f104;
    char pad108[0x110 - 0x108];
    float f110;
    float f114;
    int f118;
    int f11C;
    int f120;
    int f124;
    void func_0006EC60();
    void func_0006E910();
    void func_0006E620(int a);
    int func_0005EA10(float dt);
    int func_000707D0(float dt);
};
struct BmxMusicMenu {
 void* func_000715B0(int);
 void func_00157600(int);
 int f0;
 int f4;
 int f8;
 int fc;
 int f10;
 int f14;
 int f18;
 int f1c;
 int f20;
 int f24;
 int f28;
 int f2c;
 int f30;
 int f34;
 int f38;
 int f3c;
 int f40;
 int f44;
 int f48;
 int f4c;
 int f50;
 int f54;
 int f58;
 int f5c;
 int f60;
 int f64;
 int f68;
 int f6c;
 int f70;
 int f74;
 int f78;
 int f7c;
 int f80;
 int f84;
 int f88;
 int f8c;
 int f90;
 int f94;
 int f98;
 int f9c;
 int fa0;
 int fa4;
 int fa8;
 int fac;
 int fb0;
 int fb4;
 int fb8;
 int fbc;
 int fc0;
 int fc4;
 int fc8;
 int fcc;
 int fd0;
 int fd4;
 int fd8;
 int fdc;
 int fe0;
 int fe4;
 int fe8;
 int fec;
 int ff0;
 int ff4;
 int ff8;
 int ffc;
 int f100;
 int f104;
 int f108;
 int f10c;
 int f110;
 int f114;
 int f118;
 int f11c;
 int f120;
 int f124;
 int f128;
 int f12c;
 int f130;
 int f134[2];
 int f13c;
};
extern int D_0027850C;
extern int D_00278C64;
extern char* D_002A8490;

int C_000707D0::func_000707D0(float dt)
{
    char *g2e0;
    char *g2a4;

    f68 += dt;
    if (f68 >= D_002755E8) {
        f68 = 0.0f;
        f6C = (f6C == 0);
    }
    D_002B9034 += dt;
    f110 += dt;
    if(f11C || f118) {
        KB_VT *o=(KB_VT *)*(char **)(D_002A8490+8);
        if(o->v4(2,2,0x3F,0)) {
            if(f114>=D_00278C58 && D_002B9034>=D_00278C50) {
                ((KB_VT23 *)this)->v23(f124,f120);
                D_002B9034=0;
            }
        } else f11C=0;
        o=(KB_VT *)*(char **)(D_002A8490+8);
        if(o->v4(3,2,0x3F,0)) {
            if(f114>=D_00278C48 && D_002B9034>=D_00278C50) {
                ((KB_VT23 *)this)->v23(f124,f120);
                D_002B9034=0;
            }
        } else f118=0;
    }
after118:
    f114 += dt;
    fBC += dt;
    if (fC4 != 0) {
        if (fBC >= D_00278500 && f104 != 0) {
            f104 = 0;
            fC4 = 0;
            func_0006EC60();
            if (*(int *)(*(char **)(D_002A8490 + 0x2E0) + 4) == 0) {
                ((KB_Obj *)*(int *)((char *)fEC + 0x160))->func_000602B0();
            } else {
                ((KB_Obj *)*(int *)((char *)fEC + 0x15C))->func_000602B0();
            }
        }
    }
    if (fC0 == 0) goto tail;
    if (!(fBC >= D_00278500)) goto tail;
    if (f104 != 0) {
        f104 = 0;
        fC0 = 0;
        ((KB_Obj *)*(int *)(*(char **)(D_002A8490 + 0x2E0) + 0x2FC))->func_00094960(0);
        ((KB_VT *)*(int *)(*(int *)(*(char **)(D_002A8490 + 0x2A4) + 0x64) + 0x4C0))->v31(0, 1);
        ((KB_VT *)*(int *)(*(char **)(D_002A8490 + 0x2E0) + 0x2FC))->v18(0);
        *(int *)(*(char **)(D_002A8490 + 0x2A4) + 0x154) = 1;
        g2e0 = *(char **)(D_002A8490 + 0x2E0);
        *(int *)(g2e0 + 0x324) = (*(int *)(g2e0 + 4) == 0);
        ((KB_Obj *)*(int *)(D_002A8490 + 0x2F0))->func_0001EDC0(4);
        return func_0005EA10(dt);
    }
    {
        char *s = fD0->func_001B17F0();
        char *s4;
        fA0 = strlen(s)+1;
        if (fA0 > 0xF) goto tail;
        s4 = fD4->func_001B17F0();
        if (s4 != 0) {
            strcpy(aA4, fD0->func_001B17F0());
            strcat(aA4, fD4->func_001B17F0());
        }
        char *text=aA4;
        if(text) fD0->func_001B17D0(text);
        f68 = 0.0f;
        f64=0;
        f6C = 1;
        ((KB_Obj *)*(int *)(*(char **)(D_002A8490 + 0x2E0) + 0x2C0))->func_0005B850(aA4);
        g2a4 = *(char **)(D_002A8490 + 0x2A4);
        fEC->func_00032060(*(int *)(*(int *)(*(int *)(*(int *)(*(char **)(D_002A8490+0x2A4)+0x64)+0x4E0)+0x1A8+fF4*4)+0xA58),aA4);
        fEC->func_000320A0(*(float *)(*(int *)(*(int *)(*(int *)(*(char **)(D_002A8490+0x2A4)+0x64)+0x4E0)+0x1A8+fF4*4)+0xA4C),aA4);
        fEC->func_00032120(*(float *)(*(int *)(*(int *)(*(int *)(*(char **)(D_002A8490+0x2A4)+0x64)+0x4E0)+0x1A8+fF4*4)+0x1058),aA4);
        fEC->func_00032150(*(float *)(*(int *)(*(int *)(*(int *)(*(char **)(D_002A8490+0x2A4)+0x64)+0x4E0)+0x1A8+fF4*4)+0xA54),aA4);
        fEC->func_00032180(*(int *)(*(int *)(*(int *)(*(int *)(*(char **)(D_002A8490+0x2A4)+0x64)+0x4E0)+0x1A8+fF4*4)+0xA5C),aA4);
        if (*(float *)(*(char **)(D_002A8490 + 0x2E0) + 0x10) == D_002782A8) {
            fEC->func_000320E0(*(int *)(*(int *)(*(int *)(*(int *)(*(char **)(D_002A8490+0x2A4)+0x64)+0x4E0)+0x1A8+fF4*4)+0xA40),aA4);
        }
    }
    if (*(int *)((char *)fEC + 0x90) - 1 == fF4) {
    g2e0 = *(char **)(D_002A8490 + 0x2E0);
    switch (*(int *)(g2e0 + 4)) {
    case 0:
        if (fFC == 0) {
            *(int *)(*(int *)((char *)fEC + 0x16C) + 0x64) = 1;
            *(int *)(D_002A8490 + 0x124) = 0;
            func_0006EC60();
            ((KB_Obj *)*(int *)((char *)fEC + 0x16C))->func_00064A40();
            ((KB_VT *)fEC)->v39();
            return 1;
        }
        if (fFC == 1) {
            func_0006EC60();
            fEC->func_00032720();
            ((KB_VT *)fEC)->v39();
            fEC->func_00032740();
            return 1;
        }
        if (fFC == 2) {
            fC0 = 0;
            ((KB_Obj *)*(int *)(*(char **)(D_002A8490 + 0x2E0) + 0x2FC))->func_00094960(0);
            ((KB_VT *)*(int *)(*(int *)(*(char **)(D_002A8490 + 0x2A4) + 0x64) + 0x4C0))->v31(0, 1);
            ((KB_VT *)*(int *)(*(char **)(D_002A8490 + 0x2E0) + 0x2FC))->v18(0);
            *(int *)(*(char **)(D_002A8490 + 0x2A4) + 0x154) = 1;
            g2e0 = *(char **)(D_002A8490 + 0x2E0);
            *(int *)(g2e0 + 0x324) = (*(int *)(g2e0 + 4) == 0);
            ((KB_Obj *)*(int *)(*(char **)(D_002A8490 + 0x2F0)))->func_0001EDC0(4);
            return 1;
        }
        break;
    case 2:
        if (fFC == 2) {
            fC0 = 0;
            ((KB_Obj *)*(int *)(*(char **)(D_002A8490 + 0x2E0) + 0x2FC))->func_00094960(0);
            ((KB_VT *)*(int *)(*(int *)(*(char **)(D_002A8490 + 0x2A4) + 0x64) + 0x4C0))->v31(0, 1);
            ((KB_VT *)*(int *)(*(char **)(D_002A8490 + 0x2E0) + 0x2FC))->v18(0);
            *(int *)(*(char **)(D_002A8490 + 0x2A4) + 0x154) = 1;
            g2e0 = *(char **)(D_002A8490 + 0x2E0);
            *(int *)(g2e0 + 0x324) = (*(int *)(g2e0 + 4) == 0);
            ((KB_Obj *)*(int *)(*(char **)(D_002A8490 + 0x2F0)))->func_0001EDC0(4);
            return 1;
        }
        if (fFC != 3) {
            func_0006EC60();
            fEC->func_00032720();
            ((KB_VT *)fEC)->v39();
            fEC->func_00032740();
            fC0 = 0;
            return 1;
        }
        goto lab6db;
    case 3:
    case 5:
    case 6:
    case 8:
    case 9:
    lab6db:
        func_0006E910();
        ((KB_Obj *)*(int *)((char *)fEC + 0x190))->func_000683F0();
        return 1;
    case 4:
    case 7:
        func_0006E910();
        ((KB_Obj *)*(int *)((char *)fEC + 0x19C))->func_0006D1D0();
        *(int *)(*(int *)((char *)fEC + 0x19C) + 0xB8) = *(int *)((char *)fEC + 0x134) + 1;
        return 1;
    }
    return 1;
    }
nextEntry:
    ++fF4;
    g2a4=*(char **)(D_002A8490+0x2A4);
    if(((KB_Obj *)*(int *)((char *)fEC+0x68))->func_0005B960(3,(float)*(int *)(*(int *)(*(int *)(*(int *)((char *)fEC+0x64)+0x4E0)+0x1A8)+0xA58)) ||
       ((KB_Obj *)*(int *)((char *)fEC+0x68))->func_0005B960(1,*(float *)(*(int *)(*(int *)(*(int *)(*(char **)(D_002A8490+0x2A4)+0x64)+0x4E0)+0x1A8+fF4*4)+0xA4C)) ||
       ((KB_Obj *)*(int *)((char *)fEC+0x68))->func_0005B960(4,(float)*(int *)(*(int *)(*(int *)(*(int *)(*(char **)(D_002A8490+0x2A4)+0x64)+0x4E0)+0x1A8+fF4*4)+0xA40)) ||
       ((KB_Obj *)*(int *)((char *)fEC+0x68))->func_0005B960(2,*(float *)(*(int *)(*(int *)(*(int *)(*(char **)(D_002A8490+0x2A4)+0x64)+0x4E0)+0x1A8+fF4*4)+0x1058)) ||
       ((KB_Obj *)*(int *)((char *)fEC+0x68))->func_0005B960(0,*(float *)(*(int *)(*(int *)(*(int *)(*(char **)(D_002A8490+0x2A4)+0x64)+0x4E0)+0x1A8+fF4*4)+0xA54))) {
        func_0006E910();
        func_0006E620(fF4);
        fC0=0; fBC=0;
        goto tail;
    }
    return 1;
tail:
    return func_0005EA10(dt);
}

void* BmxMusicMenu::func_000715B0(int a0) {
 func_00157600(a0);
 f0=(int)&D_0027850C;
 int* p=&f44;
 int i;
 for(i=0;i<8;i++,p++) { p[-8]=0; p[0]=0; }
 f0=(int)&D_00278C64;
 p=&fdc;
 for(i=0;i<4;i++,p++) { p[-4]=0;p[0]=0; }
 f80=0;
 p=&f120;
 for(i=0;i<5;i++,p++) { p[-5]=0;p[0]=0; }
 for (i=0;i<2;i++) f134[i]=0;
 memset(&fec,0,32);
 f64=1;
 f6c=1;
 f94=1;
 fbc=0;
 f78=0;
 f7c=0;
 f74=0;
 fc4=-1;
 f9c=1;
 fa0=1;
 fc8=0;
 f70=0;
 f68=-1;
 f84=0;
 f88=0;
 f8c=0;
 f90=0;
 fa4=0;
 fb4=0;
 fb8=0;
 f98=0;
 fac=*(int*)(*(char**)(D_002A8490+0x2e0)+0x18);
 fb0=*(int*)(*(char**)(D_002A8490+0x2e0)+0x1c);
 fbc=0;
 f13c=0;
 return this;
}
