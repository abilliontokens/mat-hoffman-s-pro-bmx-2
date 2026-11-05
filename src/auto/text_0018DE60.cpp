/* 10 functions from 0x0018DE60 to 0x0018EB70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0018E720 {
    undefined4 func_0018E720(byte param_1);
};

extern "C" int strcmp(const char *s1, const char *s2);

struct C_00191400 {
    void *func_00191400(void);
};

struct C_0018E1D0_Entry {
    char name[0x20];
    char pad20[0x18];
};

struct C_0018E740_Out {
    char pad0[0x38];
    int f38;
};

struct C_0018E1D0 {
    char pad0[0x19];
    u8 type;
    char pad1A[6];
    int f20;
    int f24;
    int f28;
    char pad2C[0x100];
    int f12C;
    int f130;
    int f134;
    int f138;
    char pad13C[4];
    int f140;
    char pad144[0xC];
    C_00191400 f150;
    char pad151[0x13];
    C_0018E1D0_Entry *entries;
    int count;
    void *func_0018E1D0(void);
    int func_0018E740(C_0018E740_Out *out, const char *name);
    int func_0018CC00(const char *name);
};


void *C_0018E1D0::func_0018E1D0()
{
    switch (type) {
    case 1:
        return &f20;
    case 2:
        return &f24;
    case 3:
        return &f28;
    case 4:
        return &f138;
    case 5:
        return &f140;
    case 6:
        return &f12C;
    case 7:
        return &f130;
    case 8:
        return &f134;
    case 9:
        return f150.func_00191400();
    }
    return 0;
}

undefined4 C_0018E720::func_0018E720(byte param_1)
{
  int func_0018CA20(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0018CA20();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int C_0018E1D0::func_0018E740(C_0018E740_Out *out, const char *name)
{
    int i;

    for (i = 0; i < count; i++) {
        if (strcmp(entries[i].name, name) == 0) {
            out->f38 = i;
            return 1;
        }
    }
    out->f38 = func_0018CC00(name);
    return 0;
}

