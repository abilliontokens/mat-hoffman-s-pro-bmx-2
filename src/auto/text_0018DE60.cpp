/* 10 functions from 0x0018DE60 to 0x0018EB70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0018E720 {
    undefined4 func_0018E720(byte param_1);
};

struct C_0018E640 {
    int unk0;
    char *next;
    char *func_0018E640(const char *delim);
};

extern "C" int strcmp(const char *s1, const char *s2);

struct C_00191400 {
    void *func_00191400(void);
};

struct C_0018DA90_Result {
    int pad0[16];
    int f40;
};

struct C_0018E0E0_Entry {
    char pad0[4];
    char name[0x40];
    int f44;
    char type;
    char pad49[3];
    int kind;
};

struct C_0018E0E0_Arg {
    char pad0[0x20];
    C_0018E0E0_Entry *f20;
    int f24;
};

struct C_0018E0E0 {
    C_0018DA90_Result func_0018DA90(int kind, int idx, const char *name, volatile unsigned int *out);
    void func_0018E0E0(C_0018E0E0_Arg *arg, int idx);
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


void C_0018E0E0::func_0018E0E0(C_0018E0E0_Arg *arg, int idx)
{
    int i;
    C_0018DA90_Result r;
    C_0018E0E0_Entry *e;

    for (i = 0; i < arg->f24; i++) {
        e = &arg->f20[i];
        if (e->type == 2) {
            int kind = e->kind;
            char c = e->name[0];
            const char *name = e->name;
            if (c != '$'
                && (kind == 13 || kind == 14 || kind == 10 || kind == 11 || kind == 12
                    || kind == 2 || kind == 19 || kind == 20 || kind == 21)) {
                r = func_0018DA90(2, idx, name, 0);
                if (r.f40 != -1) {
                    arg->f20[i].f44 = r.f40;
                }
            }
        }
    }
}

void *C_0018E1D0::func_0018E1D0()
{
    void *r = 0;

    switch (type) {
    case 1:
        r = &f20;
        break;
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
    return r;
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

