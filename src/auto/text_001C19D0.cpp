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

