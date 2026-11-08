/* 17 functions from 0x00086530 to 0x000874E0, found by Ghidra. */
#include "common.h"
#include <string.h>

extern int D_0028F5E0;
void *func_001E8A44(unsigned int size);
struct S_Rec11 { int a, b, c, d; char e; };
extern S_Rec11 D_00278664, D_002A60B0;
extern char D_002786B0[];
void __stdcall func_001D5810(void *p, float x, float y, int z);
extern char D_00279058[];
extern char D_00277038[];
struct C_0005E840;
struct C_000867F0 {
    char pad0[0x30];
    C_0005E840 *f30, *f34, *f38, *f3C;
    int f40;
    int f44;
    char **f48;
    char pad4C[0x24];
    int f70;
    void func_000867F0(int a);
    void func_00086910(int a);
};
extern int D_00279734;
struct C_0005E840 { void func_0005E840(const char *s); };
extern char D_00275630[];
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
struct C_86A40_Obj4 {
    char pad0[0x1030];
    char *f1030;
    char pad1034[0x14];
    char *f1048;
    char pad104C[4];
    char *f1050;
    char pad1054[4];
    char *f1058;
};
extern char D_00279728[];
struct C_00086B20 {
    char pad0[0x30];
    C_0005E840 *f30, *f34, *f38, *f3C;
    int f40;
    int f44;
    void func_00086B20(int a);
};
struct C_86A40_Obj2E8 {
    char pad0[4];
    C_86A40_Obj4 *f4;
};
struct C_Clamp_00086C80 {
    char pad0[0x10];
    float f10;
    float f14;
};
struct C_Mid_00086C80 {
    C_Clamp_00086C80 *func_0018C070();
};
struct C_Lookup_00086C80 {
    int *func_0018C160(int a);
    void func_0018C780(int a, void *b, int c);
};
struct C_86530_Prof {
    char pad0[0x254];
    char name[1];
};
C_Clamp_00086C80 *__fastcall func_0018C070(C_Mid_00086C80 *self);
struct C_86A40_G {
    char pad0[0x2E0];
    C_86530_Prof *f2E0;
    char pad2E4[4];
    C_86A40_Obj2E8 *f2E8;
    C_Lookup_00086C80 *f2EC;
};
extern int D_00278690;
extern float D_00275AEC;
struct C_00086C80 {
    void func_001578D0();
    void func_00086C80();
};
extern C_86A40_G *D_002A8490;
struct C_00086A40 {
    char pad0[0x30];
    C_0005E840 *f30, *f34, *f38, *f3C;
    int f40;
    void func_00086A40(int a);
};
void func_001E891B(void *p);

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_00157660 {
    void func_00157660(void);
};

struct BestScoreOverlay_Text {
    virtual void Destroy(int flag);
    int x;
    int y;
    char padC[0x30];
    int scale;
    char pad40[4];
    int color;
    unsigned int argb;
    char pad4C[2];
    unsigned char flags;
    void SetPos(int nx, int ny) {
        if (x != nx || y != ny) {
            x = nx;
            y = ny;
            flags |= 6;
        }
    }
    void SetPosY(int nx, float ny) {
        if (x != nx || *(float *)&y != ny) {
            x = nx;
            *(float *)&y = ny;
            flags |= 6;
        }
    }
    void SetScale(int s) {
        if (scale != s) {
            scale = s;
            flags |= 4;
        }
    }
    void SetColor(int c) {
        if (color != c) {
            color = c;
            flags |= 6;
        }
    }
    void SetArgb(unsigned int c) {
        if (argb != c) {
            flags |= 8;
            argb = (argb & c) | (c & 0xffffff);
        }
    }
    BestScoreOverlay_Text *func_001D5E90(void);
    void func_0005E960(int a, int b);
    void func_001D5FA0(int font, void *name, int a, int b);
    void func_001D6410(void);
    void func_001D6600(void);
    void func_0005E840(const char *s);
};
typedef BestScoreOverlay_Text BestScoreOverlay_24;
typedef BestScoreOverlay_Text BestScoreOverlay_V;

struct BestScoreOverlay {
    void *vtbl;
    char pad4[0x20];
    BestScoreOverlay_24 *f24;
    BestScoreOverlay_24 *f28;
    BestScoreOverlay_V *f2C;
    BestScoreOverlay_V *f30;
    u32 f34;
    u32 f38;
    u32 f3C;
    u32 f40;
    u32 f44;
    char **f48;
    char pad4c[0x24];
    int f70;
    char f74[0xc];
    int f80;
    int f84;
    BestScoreOverlay *func_00086530(char **players, int idx);
    BestScoreOverlay *func_00086DC0(int a0);
    BestScoreOverlay *func_00086E60(u32 a, int mode, int c);
    void func_00086E00(void);
    void func_00086C40(float a0);
    void func_000873C0(void);
};

struct C_00086C70 {
    char pad0[0x70];
    int unk70;
    int func_00086C70(int a0);
};

struct C_00086C20 {
    char pad0[0x8C];
    int unk8C;
    void func_00086C20(int a0);
};

struct C_00086C10 {
    char pad0[0x88];
    int unk88;
    void func_00086C10(int a0);
};

extern int D_0027958C;
extern int D_002786A0;
extern int D_0028F5EC;
extern int D_0028F5DC;
struct Icon86E60 {
    void *vtbl;
    char pad4[0x24];
    int w28;
    char pad2C[8];
    int h34;
    char pad38[4];
    float a3C, b40, c44, d48;
    char pad4C[0xC];
    unsigned char flags;
    Icon86E60 *func_001D5760();
    void func_001D5810(char *name, float x, float y, int z);
    void SetW() { if (w28 != 0x42c00000) { w28 = 0x42c00000; flags |= 1; } }
    void SetH() { if (h34 != 0x40c00000) { h34 = 0x40c00000; flags |= 1; } }
    void SetQuad() { unsigned char f = flags | 4; a3C = 1.0f; b40 = 0.0f; c44 = 0.0f; d48 = 1.0f; flags = f; }
};

struct C_000874D0 {
    char pad0[0x40];
    int unk40;
    void func_000874D0(void);
};

struct C_00086C30 {
    char pad0[0x44];
    int unk44;
    void func_00086C30(int a0);
};

struct C_00086C60 {
    char pad0[0x44];
    int unk44;
    int func_00086C60(void);
};


BestScoreOverlay *BestScoreOverlay::func_00086530(char **players, int idx)
{
    int *name = &D_00278690;
    D_002A8490->f2EC->func_0018C780(1, &name, 0);
    int *res = D_002A8490->f2EC->func_0018C160((int)&D_00278690);
    int font = res ? *res : 0;
    f48 = players;
    f70 = idx;
    void *mem = func_001E8A44(0x60);
    f24 = mem ? ((BestScoreOverlay_Text *)mem)->func_001D5E90() : 0;
    f24->func_001D5FA0(font, &D_00278690, 0x28, 0);
    f24->SetPos(0x43fa0000, 0x41a00000);
    f24->SetArgb(0xffffffff);
    int i;
    BestScoreOverlay_Text **slot;
    for (i = 150, slot = (BestScoreOverlay_Text **)&f30; i < 270; i += 30, slot++) {
        mem = func_001E8A44(0x60);
        *slot = mem ? ((BestScoreOverlay_Text *)mem)->func_001D5E90() : 0;
        (*slot)->func_001D5FA0(font, &D_00278690, 0x28, 0);
        (*slot)->SetPosY(0x43a00000, (float)i);
        (*slot)->SetArgb(0xffffffff);
        (*slot)->SetColor(D_0028F5E0);
    }
    mem = func_001E8A44(0x60);
    f28 = mem ? ((BestScoreOverlay_Text *)mem)->func_001D5E90() : 0;
    f28->func_001D5FA0(font, &D_00278690, 0x28, 0);
    f28->SetPos(0x43a00000, 0x41a00000);
    f28->SetScale(0x40a00000);
    f28->SetColor(D_0028F5E0);
    mem = func_001E8A44(0x60);
    f2C = mem ? ((BestScoreOverlay_Text *)mem)->func_001D5E90() : 0;
    f2C->func_001D5FA0(font, &D_00278690, 0x28, 0);
    f2C->SetPos(0x43a00000, 0x42200000);
    f2C->SetScale(0x40a00000);
    f2C->SetColor(D_0028F5E0);
    char *src = D_002A8490->f2E0->name;
    char *dst = f74;
    char c;
    do {
        c = *src++;
        *dst++ = c;
    } while (c);
    f80 = strlen(f74);
    return this;
}

void C_000867F0::func_000867F0(int a)
{
    char buf[0x104];
    if (a) {
        char *src = *(char **)((char *)D_002A8490->f2E8->f4 + 0x1020);
        char *dst = buf;
        char c;
        do {
            c = *src++;
            *dst++ = c;
        } while (c);
        f30->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_00279058, *(char **)((char *)D_002A8490->f2E8->f4 + 0x1018), f70 + 1);
        f34->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_00279058, *(char **)((char *)D_002A8490->f2E8->f4 + 0x1028), *(int *)(f48[f70 + 0x6a] + 0x970) + 1);
        f38->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, *(char **)((char *)D_002A8490->f2E8->f4 + 0x1030));
        f3C->func_0005E840(buf);
    }
    f40 = a;
}

void C_000867F0::func_00086910(int a)
{
    char buf[0x104];
    if (a) {
        func_001ADCC0(buf, 0x104, D_00279058, *(char **)((char *)D_002A8490->f2E8->f4 + 0x1038), f44);
        f30->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_00279058, *(char **)((char *)D_002A8490->f2E8->f4 + 0x1018), f70 + 1);
        f34->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_00279058, *(char **)((char *)D_002A8490->f2E8->f4 + 0x1028), *(int *)(f48[f70 + 0x6a] + 0x970) + 1);
        f38->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, *(char **)((char *)D_002A8490->f2E8->f4 + 0x1030));
        f3C->func_0005E840(buf);
    }
    f40 = a;
}

void C_00086A40::func_00086A40(int a)
{
    char buf[0x104];

    if (a) {
        char *src = D_002A8490->f2E8->f4->f1050;
        char *dst = buf;
        char c;
        do {
            c = *src;
            *dst = c;
            src++;
            dst++;
        } while (c);
        f30->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_002A8490->f2E8->f4->f1048);
        f34->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_00275630);
        f38->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_00275630);
        f3C->func_0005E840(buf);
    }
    f40 = a;
}

void C_00086B20::func_00086B20(int a)
{
    char buf[0x104];

    if (a) {
        func_001ADCC0(buf, 0x104, D_00279728, D_002A8490->f2E8->f4->f1058, f44);
        f30->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_002A8490->f2E8->f4->f1030);
        f34->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_00275630);
        f38->func_0005E840(buf);
        func_001ADCC0(buf, 0x104, D_00275630);
        f3C->func_0005E840(buf);
    }
    f40 = a;
}

void C_00086C10::func_00086C10(int a0) {
    unk88 = a0;
}

void C_00086C20::func_00086C20(int a0) {
    unk8C = a0;
}

void C_00086C30::func_00086C30(int a0) {
    unk44 = a0;
}

void BestScoreOverlay::func_00086C40(float a0) {
    f84 = (int)a0;
}

int C_00086C60::func_00086C60(void) {
    return unk44;
}

int C_00086C70::func_00086C70(int a0) {
    unk70 = a0;
    return 1;
}

void C_00086C80::func_00086C80()
{
 int *r; C_Clamp_00086C80 *o; C_Lookup_00086C80 *lk;
 lk=D_002A8490->f2EC; r=lk->func_0018C160((int)&D_00278690);
 if(r && *r) { o=((C_Mid_00086C80 *)*r)->func_0018C070(); if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
 if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000; }
 func_001578D0();
}

BestScoreOverlay *BestScoreOverlay::func_00086DC0(int a0) {
    ((C_00157600 *)this)->func_00157600(1);
    f24 = 0;
    f28 = 0;
    f2C = 0;
    f30 = 0;
    f34 = 0;
    f38 = 0;
    f3C = 0;
    f40 = 0;
    f44 = 0;
    vtbl = (void *)&D_00279734;
    return this;
}

void BestScoreOverlay::func_00086E00(void) {
    BestScoreOverlay_24 *p = f24;

    vtbl = (void *)&D_00279734;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    p = f28;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
    if (f2C) {
        f2C->Destroy(1);
    }
    if (f30) {
        f30->Destroy(1);
    }
    ((C_00157660 *)this)->func_00157660();
}

BestScoreOverlay *BestScoreOverlay::func_00086E60(u32 a, int mode, int c)
{
    f34 = a;
    f44 = c;
    D_002A60B0.a = D_00278664.a;
    D_002A60B0.b = D_00278664.b;
    D_002A60B0.c = D_00278664.c;
    D_002A60B0.d = D_00278664.d;
    D_002A60B0.e = D_00278664.e;
    void *mem = func_001E8A44(0x64);
    Icon86E60 *v = mem ? ((Icon86E60 *)mem)->func_001D5760() : 0;
    f2C = (BestScoreOverlay_Text *)v;
    if (mode == 0) {
        v->func_001D5810(D_002786B0, 428.0f, 47.0f, 0);
    } else if (mode == 1) {
        if (f44 == 0) {
            v->func_001D5810(D_002786B0, 428.0f, 47.0f, 0);
        } else {
            v->func_001D5810(D_002786B0, 428.0f, 271.0f, 0);
        }
    } else if (mode == 2) {
        if (c == 1) {
            v->func_001D5810(D_002786B0, 340.0f, 47.0f, 0);
        } else {
            v->func_001D5810(D_002786B0, 109.0f, 47.0f, 0);
        }
    }
    ((Icon86E60 *)f2C)->SetW();
    ((Icon86E60 *)f2C)->SetH();
    mem = func_001E8A44(0x64);
    v = mem ? ((Icon86E60 *)mem)->func_001D5760() : 0;
    f30 = (BestScoreOverlay_Text *)v;
    if (mode == 0) {
        v->func_001D5810(D_002786B0, 524.0f, 47.0f, 0);
    } else if (mode == 1) {
        if (f44 == 0) {
            v->func_001D5810(D_002786B0, 524.0f, 47.0f, 0);
        } else {
            v->func_001D5810(D_002786B0, 524.0f, 271.0f, 0);
        }
    } else if (mode == 2) {
        if (c == 1) {
            v->func_001D5810(D_002786B0, 436.0f, 47.0f, 0);
        } else {
            v->func_001D5810(D_002786B0, 204.0f, 47.0f, 0);
        }
    }
    ((Icon86E60 *)f30)->SetW();
    ((Icon86E60 *)f30)->SetQuad();
    ((Icon86E60 *)f30)->SetH();
    int font;
    int font2;
    if (mode == 0) {
        int *ids[2];
        ids[0] = &D_00278690;
        ids[1] = &D_0027958C;
        D_002A8490->f2EC->func_0018C780(2, ids, 0);
        int *res = D_002A8490->f2EC->func_0018C160((int)&D_00278690);
        font = res ? *res : 0;
        res = D_002A8490->f2EC->func_0018C160((int)&D_0027958C);
        font2 = res ? *res : 0;
    } else {
        int *name = &D_002786A0;
        D_002A8490->f2EC->func_0018C780(1, &name, 0);
        int *res = D_002A8490->f2EC->func_0018C160((int)&D_002786A0);
        font = res ? *res : 0;
    }
    mem = func_001E8A44(0x60);
    f24 = mem ? ((BestScoreOverlay_Text *)mem)->func_001D5E90() : 0;
    mem = func_001E8A44(0x60);
    f28 = mem ? ((BestScoreOverlay_Text *)mem)->func_001D5E90() : 0;
    if (mode == 0) {
        f24->func_001D5FA0(font, &D_00278690, 0x28, 0);
        f24->SetPos(0x4415c000, 0x41d00000);
        f24->SetColor(D_0028F5EC);
        f28->func_001D5FA0(font2, &D_0027958C, 0x28, 0);
        f28->SetPos(0x4415c000, 0x42500000);
        f28->SetColor(D_0028F5EC);
    } else if (mode == 1) {
        f24->func_001D5FA0(font, &D_002786A0, 0x28, 0);
        f24->SetColor(D_0028F5EC);
        f28->func_001D5FA0(font, &D_002786A0, 0x28, 0);
        f28->SetColor(D_0028F5EC);
        if (f44 == 0) {
            f24->func_0005E960(0x257, 0x1a);
            f28->func_0005E960(0x257, 0x34);
        } else {
            f24->func_0005E960(0x257, 0xfa);
            f28->func_0005E960(0x257, 0x114);
        }
    } else if (mode == 2) {
        if (c == 1) {
            f24->func_001D5FA0(font, &D_002786A0, 0x28, 0);
            f24->func_0005E960(0x168, 0x1a);
            f24->SetColor(D_0028F5DC);
            f28->func_001D5FA0(font, &D_002786A0, 0x28, 0);
            f28->func_0005E960(0x168, 0x34);
            f28->SetColor(D_0028F5DC);
        } else {
            f24->func_001D5FA0(font, &D_002786A0, 0x28, 0);
            f24->func_0005E960(0x117, 0x1a);
            f24->SetColor(D_0028F5EC);
            f28->func_001D5FA0(font, &D_002786A0, 0x28, 0);
            f28->func_0005E960(0x117, 0x34);
            f28->SetColor(D_0028F5EC);
        }
    }
    f24->SetArgb(0xffcccccc);
    {
        char *s = *(char **)((char *)D_002A8490->f2E8->f4 + 0x1060);
        f24->func_0005E840(s);
    }
    f24->SetScale(0x40a00000);
    f28->SetArgb(0xffbfa35a);
    f28->SetScale(0x40a00000);
    return this;
}

extern "C" unsigned int strlen(const char *);
extern "C" void *memset(void *, int, unsigned int);
void BestScoreOverlay::func_000873C0(void) {
 char buf[15];
 char out[15];
 memset(buf,0,15);
 memset(out,0,15);
 f3C = *(int *)(f34 + 0xA40);
 if ((int)f3C > (int)f40) f40 = f3C;
 func_001ADCC0(buf, 15, D_00277038, f40);
 int rem = strlen(buf) % 3;
 int i=0;
 if (0 < (int)strlen(buf)) {
 char *p=out;
 do {
  if (i > rem-1 && i && ((i-rem)==0 || (i-rem)%3==0)) {
   *p = ',';
   p++;
   *p = buf[i];
  } else *p = buf[i];
  p++;
  i++;
 } while (i<(int)strlen(buf));
 }
 f28->func_0005E840(out);
 f28->func_001D6600();
}

void C_000874D0::func_000874D0(void) {
    unk40 = 0;
}

