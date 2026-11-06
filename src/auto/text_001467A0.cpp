/* 8 functions from 0x001467A0 to 0x00147550, found by Ghidra. */
#include "common.h"
struct S_1472_Config {
 void func_00168C20(const void *, int, int *);
 void func_00168BE0(const char *, const void *, char *, int);
 void func_00168C50(const void *, int, int *);
};
extern int D_002862D4, D_002862C4, D_00286264, D_0028624C, D_00286234, D_00286224, D_00286214;
extern int D_00286204, D_002861F4, D_002861E4, D_002861D8, D_002861C0, D_002861B4, D_002861A4;
extern int D_00286194, D_0028618C, D_00286184;
int func_00144BF0(char *, int, int, int);
extern "C" int func_001EA426(const char *, const char *);

/* DXRenderPrologue */
struct C_00146E50 {
 void *vtbl;
 int f4;
 int f8;
 char padC[4];
 int f10;
 int f14;
 char pad18[4];
 int f1C;
 int f20;
 int f24;
 int f28;
 unsigned int bit0 : 1;
 unsigned int rest2C : 31;
 int f30;
 void D_00011420(struct S_1472_Config *cfg);
 int func_00146E50(struct S_1472_Config *cfg);
};
struct S_1472_Object {
 char pad[0xec]; void *fEC;
 S_1472_Object *func_0014A3A0();
 void func_00149620(int,int,int,int,int,int);
 void func_00149E70(int,int,int);
};
struct S_1472_Aux {
 S_1472_Aux *func_00142C70();
 void func_00142C80(const void *,int);
};
extern int D_00286338, D_00286280, D_00286328, D_002862B0, D_0028629C;
extern int D_00286318, D_00276F28, D_00275630, D_00286304;
extern int D_002F0BB8;
extern char *D_002A71C0;
void func_001ADCC0(char *,int,const void *,const void *);
int func_00144AE0(char *,int,int,int);
void *func_001E8A44(int);

extern int D_0028634C;
extern int D_00284E94;
extern int D_0028617C;
extern int D_00286170;
extern int D_002862FC;
extern int D_002862F0;

struct C_001B01D0 { void func_001B01D0(); };
struct C_001B0180 { void func_001B0180(); };
struct C_001B01B0 { void func_001B01B0(); };

void __stdcall func_00200390(int a, int b);

struct S_002EFDB8 {
    char pad0[0x54];
    int *f54;
    int *f58;
};
extern S_002EFDB8 *D_002EFDB8;

struct C_00147490 {
    void *vtbl;
    C_00147490 *func_00147490();
};

struct S_001474B0_Sub {
    char pad0[0xC];
    int fC;
};

struct S_001474B0_Res {
    char pad0[0x1C];
    char *f1C;
    S_001474B0_Sub *f20;
    void func_001AFEC0();
};

struct S_001474B0_Elem {
    char pad0[0x24];
    unsigned char f24;
    S_001474B0_Res *func_001B0130(unsigned int key);
};

struct S_001474B0_Target {
    void func_00149310(int a, int b, int c, int d);
};

struct S_001474B0_Tbl {
    char pad0[0x10];
    S_001474B0_Target *f10[1];
};

extern S_001474B0_Tbl *D_002F0630;

struct C_001474B0 {
    char pad0[0x50];
    int f50;
    S_001474B0_Elem *f54[32];
    int fD4[32];
    void func_001474B0(int a, int b, unsigned int key);
};

struct C_00146E20 {
    void *vtbl;
    char pad4[0x8];
    void *vtbl2;
    char pad10[0x8];
    int unk18;
    C_00146E20 *func_00146E20();
};

struct C_00147280 {
    void *vtbl;
    void *vtbl2;
    void *unk8;
    C_00147280 *func_00147280();
    int func_001472B0(struct S_1472_Config *cfg);
    void D_00011420(struct S_1472_Config *cfg);
};

struct C_00146DC0 {
    char pad0[0xA];
    u8 unkA;
    char padB[0xD];
    short unk18;
    char pad1A[0x2A];
    int unk44;
    int unk48;
    void func_00146DC0();
};

void C_00146DC0::func_00146DC0()
{
    int i = 0;
    short *p;
    if (0 < unkA) {
        p = &unk18;
        do {
            int v = *p;
            if (v == -3) {
                func_00200390(i, 0);
                *D_002EFDB8->f58 = unk48;
            } else if (v == -4) {
                func_00200390(i, 0);
                *D_002EFDB8->f54 = unk44;
            }
            i++;
            p++;
        } while (i < unkA);
    }
}

C_00146E20 *C_00146E20::func_00146E20()
{
    ((C_001B0180 *)this)->func_001B0180();
    *(void *volatile *)((char *)this + 0xc) = (void *)&D_00284E94;
    vtbl = (void *)&D_0028617C;
    vtbl2 = (void *)&D_00286170;
    unk18 = 0;
    return this;
}

C_00147280 *C_00147280::func_00147280()
{
    ((C_001B01B0 *)this)->func_001B01B0();
    *(void *volatile *)((char *)this + 0x4) = (void *)&D_00284E94;
    vtbl = (void *)&D_002862FC;
    vtbl2 = (void *)&D_002862F0;
    unk8 = 0;
    return this;
}

C_00147490 *C_00147490::func_00147490()
{
    ((C_001B01D0 *)this)->func_001B01D0();
    vtbl = (void *)&D_0028634C;
    return this;
}

void C_001474B0::func_001474B0(int a, int b, unsigned int key)
{
    int i;
    for (i = 0; i < f50; i++) {
        S_001474B0_Elem *e = f54[i];
        if ((e->f24 & 2) != 0) {
            S_001474B0_Res *r = e->func_001B0130(key);
            char *p1 = 0;
            S_001474B0_Sub *p2 = 0;
            if (r != 0) {
                r->func_001AFEC0();
                if (r->f1C != 0) {
                    p1 = r->f1C + 0x1c;
                }
                if (r->f20 != 0) {
                    p2 = (S_001474B0_Sub *)((char *)r->f20 + 0xc);
                }
            }
            D_002F0630->f10[fD4[i]]->func_00149310(a, b, (int)p1, (int)p2);
        }
    }
}

