/* 19 functions from 0x001002A0 to 0x00101280, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_001E891B(void *p);

struct C_001D6600 {
    void func_001D6600(void);
};

struct C_002B91AC_s {
    char pad0[0x34];
    C_001D6600 *f34;
    C_001D6600 *f38;
    C_001D6600 *f3C;
};

extern C_002B91AC_s *D_002B91AC;

struct C_001006E0 {
    void func_001006E0(void);
    void func_000F1B60(void);
    void func_000E1650(void);
    void func_00157960(void);
};

struct C_00100700 {
    void *func_00100700(unsigned int flags);
    void func_000E1810(void);
};

struct C_00100AB0 {
    void *func_00100AB0(unsigned int flags);
    void func_000E2140(void);
};

struct C_00100AD0 {
    char pad0[0x2B8];
    int unk2B8;
    void func_00100AD0(void);
    void func_000E3AC0(void);
};
struct C_001003E0 {
    undefined4 func_001003E0(byte param_1);
};


undefined4 C_001003E0::func_001003E0(byte param_1)
{
  int func_000E0DF0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000E0DF0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_001006E0::func_001006E0(void) {
    func_000F1B60();
    func_000E1650();
    func_00157960();
}

void *C_00100700::func_00100700(unsigned int flags) {
    func_000E1810();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

