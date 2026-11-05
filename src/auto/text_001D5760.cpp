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
