/* 15 functions from 0x001D5760 to 0x001D6600, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
extern int D_0028F5F4;
extern int D_00284E94;

void func_001E891B(void *p);
void __stdcall func_00201100(void *p);

struct C_001D5AA0 {
    undefined4 func_001D5AA0(void);
};

struct C_001D6410Obj {
    virtual void destroy(int flags);
};

struct C_001D6410 {
    void *unk0;
    char pad4[0x54];
    C_001D6410Obj *unk58;
    C_001D6410Obj *unk5C;
    void func_001D6410(void);
};

extern int D_0028F600;

struct C_001D63D0 {
    void *vtbl;
    char pad4[0x58];
    C_001D6410Obj *unk5C;
    C_001D6410Obj *unk60;
    C_001D63D0 *func_001D63D0(unsigned int flags);
};

struct C_001D6380 {
    void *vtbl;
    char pad4[0x10];
    void *unk14;
    char pad18[0x4C];
    void *unk64;
    C_001D6380 *func_001D6380(unsigned int flags);
};

struct C_001D61E0Entry {
    char pad0[0xC];
    float fC;
    float f10;
    char pad14[6];
    short s1A;
    int f1C;
};

struct C_001D61E0Scale {
    char pad0[0xC];
    int fC;
};

struct C_001D61E0Owner {
    char pad0[0x58];
    C_001D61E0Entry *tbl[1];
    C_001D61E0Scale *func_0018C070(void);
};

struct C_001D61E0 {
    unsigned char *unk0;
    char pad4[0x30];
    float unk34;
    char pad38[8];
    C_001D61E0Owner *unk40;
    int func_001D61E0(void);
};

struct C_001D6190 {
    void func_001D5FA0(int a, int b, int c, int d);
    void func_001D6190(int a, const char *s, int b);
};


undefined4 C_001D5AA0::func_001D5AA0(void)
{
  extern undefined4 D_002A829C;
  extern undefined4 D_002AA6C0;
  int in_ECX = (int)this;
  
  return *(undefined4 *)
          (*(short *)(*(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x5c) + 4) * 0x10 + 4 +
                                       *(int *)(D_002A829C + 0x14)) + 0x54) + 0x18) * 0x10 + 4 +
          *(int *)(D_002AA6C0 + 0x14));
}

void C_001D6190::func_001D6190(int a, const char *s, int b)
{
    if (s != 0) {
        func_001D5FA0(a, b, strlen(s), (int)s);
    } else {
        func_001D5FA0(a, b, 0x28, 0);
    }
}

int C_001D61E0::func_001D61E0(void)
{
    int result = 0;
    C_001D61E0Entry *e = unk40->tbl[*unk0];

    if (e == 0) {
        C_001D61E0Entry **p = unk40->tbl;
        do {
            e = *p++;
        } while (e == 0);
    }
    if (e->f1C == 0) {
        float d = e->f10 - e->fC;
        result = (int)((float)unk40->func_0018C070()->fC * unk34 * d);
    } else {
        result = (int)((float)(e->s1A + 1) * unk34);
    }
    return result;
}

C_001D6380 *C_001D6380::func_001D6380(unsigned int flags)
{
    vtbl = (void *)&D_0028F5F4;
    if (unk64 != 0) {
        func_001E891B(unk64);
    }
    if (unk14 != 0) {
        func_00201100(unk14);
    }
    vtbl = (void *)&D_00284E94;
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001D6410::func_001D6410(void)
{
    if (unk0 != 0) {
        func_001E891B(unk0);
    }
    if (unk5C != 0) {
        unk5C->destroy(1);
    }
    if (unk58 != 0) {
        unk58->destroy(1);
    }
}

