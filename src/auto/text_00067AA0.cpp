/* 12 functions from 0x00067AA0 to 0x000689E0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000683C0 {
    void func_000683C0(void);
};

extern int D_002786A0, D_00278690, D_00278678;
extern float D_00275AEC;
struct Clamp_67 { char pad[0x10]; float f10, f14; };
struct Mid_67 { Clamp_67 *func_0018C070(); };
struct Lookup_67 { int *func_0018C160(int); };
struct Global_67 { char pad[0x2ec]; Lookup_67 *p2EC; };
extern Global_67 *D_002A8490;
struct W_67 { Clamp_67 *func_001D5AA0(); };
struct C_00067AA0 {
    char pad0[0x90];
    W_67 *w[48];
    void func_001578D0();
    void func_00067AA0();
};

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

struct V_002EFDB8 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7(int a);
    virtual void vf8();
};
extern V_002EFDB8 *D_002EFDB8;

struct C_001D5AD0 {
    void func_001D5AD0(void);
};

struct C_000683F0_Obj {
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
    virtual void v18(int a);
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
    char pad4[0x1D];
    u8 unk21;
    char pad22[0x6E];
    int unk90;
    char pad94[0x1F4 - 0x94];
    int unk1F4;
    void func_00032A40();
};

struct C_000683F0 {
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
    virtual void v18(int a);
    char pad4[0x8C];
    C_001D5AD0 *unk90;
    C_001D5AD0 *unk94;
    C_001D5AD0 *unk98[5];
    C_001D5AD0 *unkAC[5];
    C_001D5AD0 *unkC0;
    C_001D5AD0 *unkC4;
    C_001D5AD0 *unkC8;
    C_001D5AD0 *unkCC;
    C_001D5AD0 *unkD0;
    C_001D5AD0 *unkD4;
    int unkD8[8];
    C_001D5AD0 *unkF8;
    char padFC[0xC];
    int unk108;
    C_000683F0_Obj *unk10C;
    char pad110[0x28];
    int unk138;
    C_001D5AD0 *unk13C;
    C_001D5AD0 *unk140;
    C_001D5AD0 *unk144;
    C_001D5AD0 *unk148;
    char pad14C[4];
    int unk150;
    char pad154[4];
    int unk158;
    int unk15C;
    int unk160;
    int unk164;
    int unk168;
    int func_000682B0();
    void func_00157600(int a);
    C_000683F0 *func_000687B0(int a);
    void func_000683F0();
    void func_00068440();
    void func_000684B0();
};

struct W_000688C0 {
    virtual ~W_000688C0();
};

struct D_000688C0 {
    void func_001D6410();
};

void func_001E891B(void *p);
extern int D_0027887C;

struct C_000688C0 {
    void *vtbl;
    char pad4[0x7C];
    W_000688C0 *unk80[2];
    char pad88[0x20];
    D_000688C0 *unkA8[4];
    W_000688C0 *unkB8[4];
    W_000688C0 *unkC8[4];
    W_000688C0 *unkD8[5];
    W_000688C0 *unkEC[5];
    W_000688C0 *unk100[14];
    W_000688C0 *unk138;
    D_000688C0 *unk13C;
    void func_00157660();
    void func_000688C0();
};

struct R_Ctl {
    char pad0[0x90];
    int unk90;
    void func_00031610(int a, int b);
};

extern int D_002B901C;
int __cdecl func_001361E0(int a, int b, int *c, unsigned int d);

struct C_00068540 {
    char pad0[0x108];
    int unk108;
    R_Ctl *unk10C;
    int unk110;
    char pad114[0x24];
    int unk138;
    char pad13C[0x14];
    int unk150;
    char pad154[4];
    int unk158;
    int unk15C;
    int unk160;
    int unk164;
    int func_00157BF0(int *a, int b);
    int func_00068540(int *a, int b);
};

struct C_00067D60 {
    void func_00067D60(int param_1, undefined4 param_2);
};

struct C_00067D80 {
    void func_00067D80(int param_1);
};

struct T_67DA0 {
    char pad0[0x34];
    float f34;
    char pad38[0x44 - 0x38];
    int f44;
    int f48;
    char pad4C[2];
    unsigned char f4E;
    void func_0005E840(char *s);
    void func_001D6600(void);
};

struct M_67DA0 {
    void func_001B1980(void);
    void func_001B2270(int color);
    void func_001B19C0(int a, int b, int c);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, int a11, float a12, int a13);
};

struct R_67DA0 {
    char pad0[0x90];
    int unk90;
};

struct Sc_67DA0 {
    char pad0[0xa40];
    int fA40;
};

struct G67DA0_E2E8 { char pad0[4]; void *f4; };
struct G67DA0_E2E0 { char pad0[4]; int f4; };
struct P67_TBL { char pad0[0x4e0]; void *tbl; };
struct G67DA0_2A4 { char pad0[0x64]; P67_TBL *f64; };
struct G67DA0_8490 {
    char pad0[0x2a4];
    G67DA0_2A4 *f2A4;
    char pad2a8[0x2e0 - 0x2a8];
    G67DA0_E2E0 *f2E0;
    char pad2e4[4];
    G67DA0_E2E8 *f2E8;
};
extern G67DA0_8490 *D_002A8490_67DA0;

struct C_00067DA0 {
    char pad0[0x64];
    T_67DA0 *arr[8];
    float fs[3];
    char pad90[0xd8 - 0x90];
    int flags[8];
    char padF8[4];
    T_67DA0 *tFC;
    char pad100[4];
    T_67DA0 *t104;
    int f108;
    R_67DA0 *r10C;
    char pad110[4];
    int f114;
    int scores[11];
    char pad144[8];
    T_67DA0 *t14C;
    int f150;
    char pad154[4];
    int f158;
    int f15C;
    void func_00067DA0(void);
    void func_000639B0(int score, char *buf);
};

extern char D_00277038[];
extern float D_00276DD4;
extern int D_0028F5E0_67DA0;
int func_001E8858(float f);
int func_001ADCC0_67DA0(char *buf, int size, const char *fmt, ...);
void func_001AC330_67DA0(char *a, char *b, char *c);
void func_000639B0_67DA0(char *a, int b, char *c);



void C_00067AA0::func_00067AA0() {
    int ids[3]; int i; int *r; Clamp_67 *o; W_67 **e; Lookup_67 *lk;
    ids[0]=(int)&D_002786A0; ids[1]=(int)&D_00278690; ids[2]=(int)&D_00278678;
    for (i=0;i<3;i++) { lk=D_002A8490->p2EC; r=lk->func_0018C160(ids[i]); if (r && *r) { o=((Mid_67 *)*r)->func_0018C070(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
 if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } }
    e=&w[0]; i=2; do { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
 if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; e++; i--; } while(i);
    e=&w[43]; i=2; do { if (e[2]) { o=e[2]->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
 if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } if (*e) { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
 if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } e++; i--; } while(i);
    if (w[26]) { o=w[26]->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
 if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; }
    e=&w[7]; i=5; do { if (e[-5]) { o=e[-5]->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
 if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } if (*e) { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
 if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } e++; i--; } while(i);
    e=&w[12]; i=6; do { if (*e) { o=(*e)->func_001D5AA0(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
 if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; } e++; i--; } while(i);
    func_001578D0();
}

void C_00067D60::func_00067D60(int param_1, undefined4 param_2)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x114) = 0;
  *(undefined4 *)(in_ECX + 0x118 + param_1 * 4) = param_2;
  return;
}

void C_00067D80::func_00067D80(int param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xd8 + param_1 * 4) = 1;
  return;
}

extern "C" char *strcpy(char *dst, const char *src);
void C_00067DA0::func_00067DA0(void)
{
    char s3[0x40];
    int besti;
    int best;
    int tie;
    int num;
    int n;
    int i;
    int score;
    unsigned int c;

    if (f150 != 0) {
        t104->func_0005E840(*(char **)((char *)D_002A8490_67DA0->f2E8->f4 + 0xec0));
    } else {
        t104->func_0005E840(*(char **)((char *)D_002A8490_67DA0->f2E8->f4 + 0x740));
    }
    t104->func_001D6600();
    n = (r10C->unk90 == 1) ? 3 : 2;
    if (f150 == 0) {
        if (f15C != 0) {
            for (i = 0; i < n; i++) {
                ((M_67DA0 *)arr[5 + i])->func_001B1980();
                if (n == 3) {
                    fs[0] = 290.0f;
                } else {
                    fs[0] = 320.0f;
                }
                if (i == f108) {
                    ((M_67DA0 *)arr[5 + i])->func_001B2270(0xffbfa35a);
                    ((M_67DA0 *)arr[5 + i])->func_001B19C0(0x140, (int)(fs[i] - D_00276DD4), 0);
                    ((M_67DA0 *)arr[5 + i])->func_001B1860(0, -1.0f, 0xff, 1.0f, 0, 0, 0.0f, 0xff, 1.3f, 0, 0, 0.2f, 0);
                } else if (i == f158) {
                    ((M_67DA0 *)arr[5 + i])->func_001B2270(0xffcccccc);
                    ((M_67DA0 *)arr[5 + i])->func_001B19C0(0x140, (int)fs[i], 0);
                    ((M_67DA0 *)arr[5 + i])->func_001B1860(0, -1.0f, 0xff, 1.3f, 0, 0, 0.0f, 0xff, 1.0f, 0, 0, 0.2f, 0);
                } else {
                    ((M_67DA0 *)arr[5 + i])->func_001B2270(0xffcccccc);
                    ((M_67DA0 *)arr[5 + i])->func_001B19C0(0x140, (int)fs[i], 0);
                    ((M_67DA0 *)arr[5 + i])->func_001B1860(0, -1.0f, 0xff, 1.0f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0.0f, 0);
                }
            }
            f15C = 0;
        }
    } else {
        for (i = 0; i < n; i++) {
            ((M_67DA0 *)arr[5 + i])->func_001B1980();
        }
        t14C->func_001D6600();
    }
    if (f150 != 0) {
        return;
    }
    besti = -1;
    best = 0;
    tie = -1;
    if (r10C->unk90 <= 1) {
        return;
    }
    for (i = 0; i < r10C->unk90; i++) {
        func_001ADCC0_67DA0((char *)&num, 0x104, D_00277038, i + 1);
        func_001AC330_67DA0(s3, *(char **)((char *)D_002A8490_67DA0->f2E8->f4 + 0x850), (char *)&num);
        arr[i]->func_0005E840(s3);
        if (D_002A8490_67DA0->f2E0->f4 == 2) {
            f114 = 1;
        }
        if (f114) {
            scores[i] = ((Sc_67DA0 **)(*(char **)((char *)D_002A8490_67DA0->f2A4->f64 + 0x4e0) + 0x1a8))[i]->fA40;
        }
        int s2[5] = {0, 0, 0, 0, 0};
        if (scores[i] == 0) {
            func_001ADCC0_67DA0((char *)s2, 0x104, D_00277038, scores[i]);
        } else {
            func_000639B0(scores[i], (char *)s2);
        }
        if (D_002A8490_67DA0->f2E0->f4 == 8 || D_002A8490_67DA0->f2E0->f4 == 9) {
            if (flags[i] != 0) {
                arr[i + 2]->func_0005E840(*(char **)((char *)D_002A8490_67DA0->f2E8->f4 + 0xfd0));
            } else {
                arr[i + 2]->func_0005E840((char *)s2);
            }
        } else {
            arr[i + 2]->func_0005E840((char *)s2);
        }
        {
            T_67DA0 *p = arr[i];
            c = p->f48;
            if (c != 0xffcccccc) {
                p->f4E |= 8;
                p->f48 = (c & 0xffcccccc) | 0xcccccc;
            }
        }
        {
            T_67DA0 *p = arr[i];
            if (p->f44 != D_0028F5E0_67DA0) {
                p->f44 = D_0028F5E0_67DA0;
                p->f4E |= 6;
            }
        }
        {
            T_67DA0 *p = arr[i];
            if (p->f34 != 1.0f) {
                p->f34 = 1.0f;
                p->f4E |= 6;
            }
        }
        arr[i]->func_001D6600();
        arr[i + 2]->func_001D6600();
        score = ((Sc_67DA0 **)(*(char **)((char *)D_002A8490_67DA0->f2A4->f64 + 0x4e0) + 0x1a8))[i]->fA40;
        if (score > best) {
            best = score;
            besti = i;
            tie = -1;
        } else if (score == best && tie == -1) {
            tie = best;
        }
    }
    if (r10C->unk90 <= 1) {
        return;
    }
    if (besti == -1) {
        return;
    }
    {
        T_67DA0 *p = tFC;
        c = p->f48;
        if (c != 0xffaaaaff) {
            p->f4E |= 8;
            p->f48 = (c & 0xffaaaaff) | 0xaaaaff;
        }
    }
    if (tie > 0) {
        strcpy(s3, *(char **)((char *)D_002A8490_67DA0->f2E8->f4 + 0xee0));
    } else {
        func_001ADCC0_67DA0((char *)&num, 0x104, D_00277038, besti + 1);
        func_001AC330_67DA0(s3, *(char **)((char *)D_002A8490_67DA0->f2E8->f4 + 0x858), (char *)&num);
    }
    tFC->func_0005E840(s3);
    {
        T_67DA0 *p = tFC;
        if (p->f44 != D_0028F5E0_67DA0) {
            p->f44 = D_0028F5E0_67DA0;
            p->f4E |= 6;
        }
    }
    {
        T_67DA0 *p = tFC;
        if (p->f34 != 1.0f) {
            p->f34 = 1.0f;
            p->f4E |= 6;
        }
    }
    tFC->func_001D6600();
}

int C_000683F0::func_000682B0()
{
    int i;
    unk90->func_001D5AD0();
    unk94->func_001D5AD0();
    if (unk150 == 0) {
        if (unk10C->unk90 == 1) {
            if (unk108 == 0) {
                unkC0->func_001D5AD0();
                unkC4->func_001D5AD0();
            } else if (unk108 == 2) {
                unkC8->func_001D5AD0();
                unkCC->func_001D5AD0();
            } else if (unk108 == 1) {
                unkD0->func_001D5AD0();
                unkD4->func_001D5AD0();
            }
        } else {
            if (unk108 == 0) {
                unkC8->func_001D5AD0();
                unkCC->func_001D5AD0();
            } else if (unk108 == 1) {
                unkD0->func_001D5AD0();
                unkD4->func_001D5AD0();
            }
        }
    }
    for (i = 0; i < 5; i++) {
        unk98[i]->func_001D5AD0();
        unkAC[i]->func_001D5AD0();
    }
    if (unk138 != 0) {
        unk13C->func_001D5AD0();
    } else {
        unk144->func_001D5AD0();
    }
    if (unk150 != 0) {
        if (unk164 != 0) {
            unk140->func_001D5AD0();
        } else {
            unk148->func_001D5AD0();
        }
    }
    if (unkF8 != 0) {
        unkF8->func_001D5AD0();
    }
    return 1;
}

void C_000683C0::func_000683C0(void)
{
  int* in_ECX = (int*)this;
  int iVar1;
  int *piVar2;
  byte bVar3;
  
  bVar3 = 0;
  in_ECX[0x5a] = 0;
  (**(code **)(*in_ECX + 0x10))();
  piVar2 = in_ECX + 0x36;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + (uint)bVar3 * -2 + 1;
  }
  in_ECX[0x54] = 0;
  return;
}

void C_000683F0::func_000683F0()
{
    unk168 = 1;
    unk138 = 0;
    unk164 = 0;
    v6();
    unk158 = -1;
    unk15C = 1;
    unk160 = 1;
    unk150 = 0;
}

void C_000683F0::func_00068440()
{
    D_002EFDB8->vf7(1);
    D_002EFDB8->vf8();
    unk138 = 0;
    unk168 = 0;
    unk10C->v34();
    unk10C->func_00032A40();
    v4();
    unk10C->unk1F4 = 0;
    memset(unkD8, 0, sizeof(unkD8));
    unk150 = 0;
}

void C_000683F0::func_000684B0()
{
    unk108 = 0;
    unk168 = 1;
    v6();
    unk10C->v35();
    unk10C->v18(1);
    v18(0);
    unk10C->v35();
    unk10C->unk21 &= 0xfb;
    unk10C->unk1F4 = 1;
    unk15C = 1;
    unk160 = 1;
    unk150 = 0;
    unk138 = 0;
    unk164 = 0;
    unk158 = -1;
}

int C_00068540::func_00068540(int *a, int b)
{
    if (unk160) {
        D_002B901C = a[2];
        unk160 = 0;
    }
    if (unk138 || unk164)
        return 0;
    if (func_001361E0(0x17, 2, a, 0x80000000))
        goto rot;
    if (func_001361E0(2, 2, a, 0x80000000)) {
        unk10C->func_00031610(2, 1);
        unk158 = unk108;
        unk15C = 1;
        if (unk10C->unk90 == 1) {
            if (unk108 == 0)
                unk108 = 1;
            else if (unk108 == 2)
                unk108 = 0;
            else if (unk108 == 1)
                unk108 = 2;
        } else {
            if (unk108 == 0)
                unk108 = 1;
            else if (unk108 == 1)
                unk108 = 0;
        }
    } else if (func_001361E0(3, 2, a, 0x80000000)) {
        unk10C->func_00031610(2, 1);
        unk158 = unk108;
        unk15C = 1;
        if (unk10C->unk90 == 1) {
            if (unk108 == 0)
                unk108 = 2;
            else if (unk108 == 2)
                unk108 = 1;
            else if (unk108 == 1)
                unk108 = 0;
        } else {
            if (unk108 == 0)
                unk108 = 1;
            else if (unk108 == 1)
                unk108 = 0;
        }
    } else {
        if (func_001361E0(4, 2, a, 0x80000000) || func_001361E0(0x17, 2, a, 0x80000000)) {
            unk10C->func_00031610(4, 1);
            unk138 = 1;
            unk110 = 0;
            return 0;
        }
        if (func_001361E0(5, 2, a, 0x80000000) || func_001361E0(0x18, 2, a, 0x80000000)) {
            if (unk150) {
                unk10C->func_00031610(4, 1);
                unk164 = 1;
                unk110 = 0;
                return 0;
            }
        } else if (!func_001361E0(0, 2, a, 0x80000000)) {
            func_001361E0(1, 2, a, 0x80000000);
        }
    }
rot:
    return func_00157BF0(a, b);
}

C_000683F0 *C_000683F0::func_000687B0(int a)
{
    extern int D_0027850C;
    extern int D_0027887C;
    int *w = (int *)this;
    int *p;
    int i;

    func_00157600(a);
    w[0] = (int)&D_0027850C;
    p = &w[0x11];
    for (i = 0; i < 8; i++) {
        p[-8] = 0;
        p[0] = 0;
        p++;
    }
    w[0] = (int)&D_0027887C;
    w[0x50] = 0;
    w[0x51] = 0;
    w[6] = -1;
    w[0x57] = 1;
    w[0x59] = 0;
    w[0x5a] = 0;
    w[0x58] = 0;
    w[0x5b] = 2;
    for (i = 0; i < 7; i++) {
        w[0x19 + i] = 0;
    }
    for (i = 0; i < 2; i++) {
        w[0x20 + i] = 0;
    }
    p = &w[0x2e];
    for (i = 0; i < 4; i++) {
        p[4] = 0;
        p[0] = 0;
        p[-4] = 0;
        p++;
    }
    w[0x4f] = 0;
    w[0x53] = 0;
    w[0x5e] = 0;
    w[0x4e] = 0;
    w[0x55] = 0;
    w[0x56] = 0;
    w[0x54] = 0;
    p = &w[0x3b];
    for (i = 0; i < 5; i++) {
        p[-5] = 0;
        p[0] = 0;
        p++;
    }
    for (i = 0; i < 14; i++) {
        w[0x40 + i] = 0;
    }
    w[0x5c] = -1;
    w[0x5d] = 0;
    return this;
}

void C_000688C0::func_000688C0()
{
    int i;
    D_000688C0 *p;
    vtbl = (void *)&D_0027887C;
    for (i = 0; i < 2; i++) {
        if (unk80[i]) {
            delete unk80[i];
            unk80[i] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        if (unkC8[i]) {
            delete unkC8[i];
            unkC8[i] = 0;
        }
        if (unkB8[i]) {
            delete unkB8[i];
            unkB8[i] = 0;
        }
        p = unkA8[i];
        if (p) {
            p->func_001D6410();
            func_001E891B(p);
            unkA8[i] = 0;
        }
    }
    if (unk138) {
        delete unk138;
        unk138 = 0;
    }
    p = unk13C;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
        unk13C = 0;
    }
    for (i = 0; i < 5; i++) {
        if (unkD8[i]) {
            delete unkD8[i];
            unkD8[i] = 0;
        }
        if (unkEC[i]) {
            delete unkEC[i];
            unkEC[i] = 0;
        }
    }
    for (i = 0; i < 14; i++) {
        if (unk100[i]) {
            delete unk100[i];
            unk100[i] = 0;
        }
    }
    func_00157660();
}

