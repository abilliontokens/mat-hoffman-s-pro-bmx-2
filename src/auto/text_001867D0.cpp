/* 19 functions from 0x001867D0 to 0x00187670, found by Ghidra. */
#include "common.h"

extern int D_00289B5C;
extern int D_00289998;
extern int D_00289A08;
extern int D_002899F4;
extern int D_002899E0;
extern int D_002899CC;
extern int D_002899B0;
extern int D_0028999C;
extern int D_00289A28;
extern int D_00289A1C;

extern "C" int strlen(const char *s);
char *func_001E8920(char *dst, const char *src, int n);

struct C_00157600 {
    void func_00157600(void *param);
};

struct C_001867D0 {
    void func_001867D0();
};

struct C_00187640 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    C_00187640 *func_00187640(void *param);
};

struct C_00186AB0 {
    void *vtbl;
    char pad4[0x164];
    int f168;
    int f16c;
    int f170;
    int f174;
    int f178;
    int f17c;
    C_00186AB0 *func_00186AB0();
};

struct C_00186AF0Param {
    int func_00168C20(void *a, int b, void *c);
    int func_00168C50(void *a, int b, void *c);
};

struct C_00186AF0 {
    char pad0[0x168];
    int f168;
    int f16c;
    int f170;
    int f174;
    int f178;
    int f17c;
    int func_00186960(void *param);
    int func_00186AF0(C_00186AF0Param *param);
};

struct C_00186B90 {
    void *vtbl;
    char pad4[0x164];
    char f168[0x104];
    char pad26c[0x104];
    int f370;
    C_00186B90 *func_00186B90();
};

C_00186AB0 *C_00186AB0::func_00186AB0()
{
    ((C_001867D0 *)this)->func_001867D0();
    f168 = 0;
    f16c = 0;
    f170 = 0;
    f174 = 0;
    f178 = 0;
    f17c = 0;
    vtbl = (void *)&D_00289998;
    return this;
}

int C_00186AF0::func_00186AF0(C_00186AF0Param *param)
{
    if (func_00186960(param) == 0) {
        return 0;
    }
    param->func_00168C20((void *)&D_00289A08, 0, &f168);
    param->func_00168C20((void *)&D_002899F4, 0, &f16c);
    param->func_00168C20((void *)&D_002899E0, 0, &f170);
    param->func_00168C20((void *)&D_002899CC, 0, &f174);
    param->func_00168C20((void *)&D_002899B0, 0, &f178);
    param->func_00168C50((void *)&D_0028999C, 0, &f17c);
    return 1;
}

C_00187640 *C_00187640::func_00187640(void *param)
{
    ((C_00157600 *)this)->func_00157600(param);
    f24 = 0;
    f28 = 0;
    vtbl = (void *)&D_00289B5C;
    return this;
}
