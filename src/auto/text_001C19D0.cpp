/* 12 functions from 0x001C19D0 to 0x001C26B0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern char D_00275AD4[], D_00275AC8[], D_0027CEE4[];
extern char D_00284A98[], D_0028E23C[], D_00277268[], D_0028E234[];
extern char D_0028E220[], D_0028E210[], D_0028E1F8[], D_0028E1E8[];
void *func_001E8A44(int);
void *func_001E8AA5(int);
int func_001ADCC0(char *, int, const char *, ...);
extern "C" char * __cdecl strcpy(char *,const char *);
struct Config1C22C0 {
 Config1C22C0 *func_00168280();
 void func_001691E0();
 int func_00169490(char *,int);
 int func_00168C20(const char *,int,int *);
 void func_00168CB0(const char *,float *,float *);
 void func_00169710(const char *);
 void func_00168550(const char *,char *,int);
};
struct Object1C22C0 {
 int *table;
 unsigned char *data;
 Object1C22C0 *func_00164440(int,int);
 void func_001673B0(int,int,int,int,int);
};
struct UIWidgetSoultreeCharacter {
 char pad0[0x28];
 int unk28;
 char pad2C[0x3c];
 Object1C22C0 *unk68;
 float v6C[4],v7C[4],v8C[4];
 char str9C[0x100],str19C[0x100],str29C[0x100];
 int count;
 char **strings;
 void func_001BF600(Config1C22C0 *);
 void func_001577A0(void *,int);
 UIWidgetSoultreeCharacter *func_001C22C0(int,char *,Config1C22C0 *);
};
extern char D_0028D75C[], D_0028D998[], D_0028E1D4[], D_0028E1C4[], D_0028E1B0[], D_0028E19C[], D_0028E18C[], D_0028E17C[], D_0028E16C[], D_0028E15C[], D_0028E14C[], D_0028E138[], D_0028E120[], D_0028E10C[], D_0028E0F8[], D_0028E0E4[], D_0028E0D4[], D_0028E0C0[], D_0028E0AC[], D_0028E09C[], D_0028E08C[], D_0028E07C[], D_0027DE44[];
extern float D_00275544;
extern int D_002F07B8[];
char *func_001E8AC0(char *, int);
extern "C" void *memset(void *, int, unsigned int);
extern "C" unsigned int strlen(const char *);
int func_001E8858(float);
struct Cfg19D0 {
    void func_00168BE0(char *, char *, char *, int);
    int func_00168E70(char *, int *, int *);
    int func_00168C50(char *, int, float *);
    int func_00168C20(char *, int, int *);
    void func_00168CB0(char *, float *, float *);
};
struct Sub19D0 {
    char pad0[4];
    float f04, f08;
    char padC[8];
    float f14, f18;
    char pad1C[0xc];
    float f28, f2c, f30, f34;
    int f38;
    float f3c, f40, f44, f48, f4c, f50;
    char pad54[4];
    unsigned char f58;
    void func_001D5810(int *, int, int, int);
};
struct C_001C19D0 {
    char pad0[0x28];
    int f28;
    char pad2C[0x3c];
    Sub19D0 f68;
    char padCC0[0x64 - 0x5c];
    Sub19D0 fCC;
    void func_001BF600(Cfg19D0 *);
    void *func_001C19D0(int, int);
};
static __forceinline void LoadSub19D0(Sub19D0 *s, Cfg19D0 *cfg, char **keys, char *buf)
{
    char *p = func_001E8AC0(buf, 0x2e);
    if (p != 0) {
        memset(p, 0, strlen(p));
    }
    s->func_001D5810((int *)buf, 0, 0, 0);
    int v1 = (int)s->f28;
    int v2 = (int)s->f2c;
    (void)v1; (void)v2;
    int a[4];
    int b[4];
    b[0] = 0; b[1] = 0; b[2] = 0; b[3] = 0;
    if (cfg->func_00168E70(keys[0], b, a) != 0) {
        s->f58 |= 4;
        s->f3c = (float)a[0] * s->f4c;
        s->f40 = (float)a[2] * s->f4c;
        s->f44 = (float)a[1] * s->f50;
        s->f48 = (float)a[3] * s->f50;
    }
    if (cfg->func_00168E70(keys[1], b, a) == 0) {
        float t;
        cfg->func_00168C50(keys[2], 0, &t);
        int x = func_001E8858(t);
        cfg->func_00168C50(keys[3], 0, &t);
        int y = func_001E8858(t);
        b[0] = x;
        b[1] = y;
        b[2] = (x - a[0]) + a[2];
        b[3] = (y - a[1]) + a[3];
    }
    if ((float)b[1] != s->f04 || (float)b[3] != s->f08) {
        s->f04 = (float)b[1];
        s->f08 = (float)b[3];
        s->f58 |= 1;
    }
    {
        int w = b[2] - b[1];
        if ((float)w != s->f28) {
            s->f28 = (float)w;
            s->f58 |= 1;
        }
        int h = b[3] - b[0];
        if ((float)h != s->f2c) {
            s->f2c = (float)h;
            s->f58 |= 1;
        }
    }
    float f1, f2, f3;
    if (cfg->func_00168C50(keys[4], 0, &f1) != 0) {
        cfg->func_00168C50(keys[5], 0, &f2);
        cfg->func_00168C50(keys[6], 0, &f3);
        if (s->f30 != f1) {
            s->f30 = f1;
            s->f58 |= 1;
        }
        if (s->f14 != f2 || s->f18 != f3) {
            s->f14 = f2;
            s->f18 = f3;
            s->f58 |= 1;
        }
    }
    int color;
    cfg->func_00168C20(keys[7], 0xff, &color);
    s->f38 = ((int)(short)color << 24) | (s->f38 & 0xffffff);
    s->f58 |= 2;
    float temp;
    cfg->func_00168C50(keys[8], 0, &temp);
    if (temp < D_00275544) {
        temp = (float)(D_002F07B8[0x6b4 / 4] - 300);
    }
    if (s->f34 != temp) {
        s->f34 = temp;
        s->f58 |= 1;
    }
    float colIn[4];
    float colOut[4];
    colIn[0] = 200.0f; colIn[1] = 200.0f; colIn[2] = 200.0f; colIn[3] = 1.0f;
    cfg->func_00168CB0(keys[9], colOut, colIn);
    int packed = func_001E8858(colOut[1]) & 0xff;
    packed = (packed << 8) | (func_001E8858(colOut[0]) & 0xff);
    packed = (packed << 8) | (func_001E8858(colOut[2]) & 0xff);
    s->f38 = (s->f38 ^ packed) & 0xffffff ^ s->f38;
    s->f58 |= 2;
}
struct C_001C22A0 {
    undefined4 func_001C22A0(byte param_1);
};

struct C_001C2190 {
    void func_001C2190(int a0);
    void func_001BF980(int a0);
    void func_00157A00(int a0);
};

struct Sub_001D5AD0 {
    void func_001D5AD0();
};

struct C_001C2140 {
    char pad0[0x2C];
    u32 unk2C;
    void func_001C2140();
    void func_00157960();
};

struct VCall8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};

struct C_001C21B0 {
    void **vtbl;
    char pad4[0x28];
    u32 unk2C;
    u32 unk30;
    u32 unk34;
    void func_001C21B0();
};

struct C_001C2210 {
    void **vtbl;
    char pad4[0x28];
    u32 unk2C;
    u32 unk30;
    u32 unk34;
    void func_001C2210();
};

struct C_001C21F0 {
    void func_001C21F0(int a0);
    void func_001BFD00(int a0);
    void func_00157A00(int a0);
};

extern int D_0028D804;
extern int D_0028DB04;
void func_001E891B(void *);
void func_001E8390(void *);

struct C_001C2160 {
    void *vtbl;
    void *func_001C2160(int flags);
    void func_00157660();
};

struct C_001C2250 {
    void **vtbl;
    char pad4[0x28];
    u32 unk2C;
    char pad30[0x8];
    u32 unk38;
    u32 unk3C;
    void func_001C2250();
};

struct C_001C2670 {
    void *vtbl;
    char pad4[0x64];
    void *unk68;
    void *func_001C2670(int flags);
    void func_00157660();
};

struct C_001C2290 {
    char pad0[0x2C];
    int unk2C;
    void func_001C2290(void);
};


void *C_001C19D0::func_001C19D0(int a1, int a2)
{
    Cfg19D0 *cfg = (Cfg19D0 *)a1;
    func_001BF600(cfg);
    f28 = a2;
    char buf[0x104];
    char *keys1[10];
    keys1[0] = D_0028E1D4; keys1[1] = D_0028E1C4; keys1[2] = D_0028E1B0; keys1[3] = D_0028E19C;
    keys1[4] = D_0028E18C; keys1[5] = D_0028E17C; keys1[6] = D_0028E16C; keys1[7] = D_0028E15C;
    keys1[8] = D_0028E14C; keys1[9] = D_0027DE44;
    cfg->func_00168BE0(D_0028D998, D_0028D75C, buf, 0x104);
    LoadSub19D0(&f68, cfg, keys1, buf);
    char *keys2[10];
    keys2[0] = D_0028E120; keys2[1] = D_0028E10C; keys2[2] = D_0028E0F8; keys2[3] = D_0028E0E4;
    keys2[4] = D_0028E0D4; keys2[5] = D_0028E0C0; keys2[6] = D_0028E0AC; keys2[7] = D_0028E09C;
    keys2[8] = D_0028E08C; keys2[9] = D_0028E07C;
    cfg->func_00168BE0(D_0028E138, D_0028D75C, buf, 0x104);
    LoadSub19D0(&fCC, cfg, keys2, buf);
    return this;
}

void C_001C2140::func_001C2140() {
    if (unk2C != 0) {
        ((Sub_001D5AD0 *)((char *)this + 0x68))->func_001D5AD0();
    } else {
        ((Sub_001D5AD0 *)((char *)this + 0xcc))->func_001D5AD0();
    }
    func_00157960();
}

void *C_001C2160::func_001C2160(int flags) {
    vtbl = (void *)&D_0028D804;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001C2190::func_001C2190(int a0) {
    func_001BF980(a0);
    func_00157A00(a0);
}

void C_001C21B0::func_001C21B0() {
    unk2C = 1;
    if (unk30 == 0 || unk34 == 0) {
        if (unk30 != 0) {
            ((VCall8 *)this)->v7();
        }
        if (unk34 != 0) {
            ((VCall8 *)this)->v5();
        }
    }
}

void C_001C21F0::func_001C21F0(int a0) {
    func_001BFD00(a0);
    func_00157A00(a0);
}

void C_001C2210::func_001C2210() {
    *(volatile u32 *)&unk2C = 1;
    if (unk30 == 0 || unk34 == 0) {
        if (unk30 != 0) {
            ((VCall8 *)this)->v7();
        }
        if (unk34 != 0) {
            ((VCall8 *)this)->v5();
        }
    }
}

void C_001C2250::func_001C2250() {
    unk2C = 0;
    if (unk38 == 0 || unk3C == 0) {
        if (unk38 != 0) {
            ((VCall8 *)this)->v7();
        }
        if (unk3C != 0) {
            ((VCall8 *)this)->v5();
        }
    }
}

void C_001C2290::func_001C2290(void) {
    unk2C = 0;
}

undefined4 C_001C22A0::func_001C22A0(byte param_1)
{
  int func_001BFE80(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001BFE80();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void *C_001C2670::func_001C2670(int flags) {
    vtbl = (void *)&D_0028DB04;
    if (unk68) {
        func_001E8390(unk68);
    }
    vtbl = (void *)&D_0028D804;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

