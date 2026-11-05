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
 char *data;
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
 UIWidgetSoultreeCharacter *func_001C22C0(int,Config1C22C0 *,char *);
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

void C_001C2250::func_001C2250() {
    unk2C = 0;
    if (!(unk38 && unk3C)) {
        if (unk38) {
            ((VCall8 *)this)->v7();
        }
        if (unk3C) {
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

