/* 22 functions from 0x001B5D90 to 0x001B6A70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001B61A0 {
    int unk0;
    int unk4;
    char unk8;
    char pad9[0x103];
    char unk10C;
    char pad10D[0x103];
    int unk210;
    int unk214;
    int unk218;
    int unk21C;
    int unk220;
    C_001B61A0* func_001B61A0(void);
};

struct C_001B6100 {
    int unk0;
    int unk4;
    char unk8;
    char pad9[0x103];
    char unk10C;
    char pad10D[0x77];
    char unk184;
    char pad185[0x103];
    int unk288;
    int unk28C;
    C_001B6100* func_001B6100(void);
};

struct C_001B6410 {
    int unk0;
    int unk4;
    char unk8;
    char pad9[0x103];
    int unk10C;
    int unk110;
    int unk114;
    C_001B6410* func_001B6410(void);
};

struct C_001B5EA0 {
    int unk0;
    int unk4;
    char unk8;
    char pad9[0x103];
    int unk10C;
    char unk110;
    C_001B5EA0* func_001B5EA0(void);
};

struct C_001B65E0 {
    int unk0;
    void func_001B65E0(void);
};

struct C_001B65D0 {
    int unk0;
    void func_001B65D0(void);
};


C_001B5EA0* C_001B5EA0::func_001B5EA0(void) {
    extern int D_0028CC9C;
    unk4 = 0;
    unk8 = 0;
    unk0 = (int)&D_0028CC9C;
    unk10C = -1;
    unk110 = 0;
    return this;
}

C_001B6100* C_001B6100::func_001B6100(void) {
    extern int D_0028CCB4;
    unk4 = 0;
    unk8 = 0;
    unk0 = (int)&D_0028CCB4;
    unk10C = 0;
    unk184 = 0;
    unk28C = 1;
    unk288 = 0;
    return this;
}

C_001B61A0* C_001B61A0::func_001B61A0(void) {
    extern int D_0028CCCC;
    unk4 = 0;
    unk8 = 0;
    unk0 = (int)&D_0028CCCC;
    unk10C = 0;
    unk214 = 0;
    unk210 = 0;
    unk218 = 0;
    unk21C = 0;
    unk220 = 0;
    return this;
}

C_001B6410* C_001B6410::func_001B6410(void) {
    extern int D_0028CD24;
    unk4 = 0;
    unk8 = 0;
    unk0 = (int)&D_0028CD24;
    unk10C = 0;
    unk110 = 0;
    unk114 = 0;
    return this;
}

undefined4 func_001B6560(undefined4 *param_1)
{
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *param_1;
}

void C_001B65D0::func_001B65D0(void) {
    unk0 = 1;
}

void C_001B65E0::func_001B65E0(void) {
    unk0 = 0;
}

