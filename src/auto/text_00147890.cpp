/* 2 functions from 0x00147890 to 0x00148748, found by Ghidra. */
#include "common.h"

struct C_00147890_Ini {
    char pad[0x4cc];
    void func_00168280();
    void func_001691E0();
    int func_00169490(char *name, int zero);
    int func_00169710(char *name);
    int func_00168BE0(char *key, char *fmt, void *out, int def);
    int func_00168C20(char *key, int def, void *out);
};

struct C_00147890 {
    int w[0x270 / 4];
    int func_00147890(char *name);
};

struct C_001490A0 {
    int pad;
    void func_001490A0(unsigned int flags);
};

struct C_00148740 {
    int pad;
    void func_00148740(unsigned int flags);
};

void C_00148740::func_00148740(unsigned int flags)
{
    int idx = -1;
    (&((C_001490A0 *)this)[idx])->func_001490A0(flags);
}
