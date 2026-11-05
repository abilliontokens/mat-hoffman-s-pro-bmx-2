/* 19 functions from 0x001867D0 to 0x00187670, found by Ghidra. */
#include "common.h"
struct C_00186EF0 {
    int unk0;
    char unk4;
    char pad5[0x103];
    int unk108;
    int unk10C;
    int unk110;
    C_00186EF0* func_00186EF0(void);
};


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

struct C_00187510Param {
    int func_00169710(void *a);
    int func_00168C20(void *a, int b, void *c);
};

struct C_00187370 {
    virtual void func_00187390(void *a);
    int f4;
    int f8;
};

struct C_00187510 {
    char pad0[0x24];
    int f24;
    C_00187370 *f28;
    int func_00187510(C_00187510Param *param);
};

extern int D_0027AEE4;
extern int D_00289B40;
extern int D_00289B30;
extern int D_00187370;

void *func_001E8A44(int size);
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void __stdcall func_00011FF0(void *p, int stride, int count, void *ctor);

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

C_00186B90 *C_00186B90::func_00186B90()
{
    C_00186B90 *self;
    int limit;
    int count;
    self = this;
    ((C_001867D0 *)self)->func_001867D0();
    self->vtbl = (void *)&D_00289A28;
    limit = sizeof(f168) - 1;
    if (limit > strlen("body")) {
        count = strlen("body");
    } else {
        count = limit;
    }
    func_001E8920(self->f168, (const char *)&D_00289A1C, count);
    self->f168[count] = 0;
    self->f370 = 0;
    return self;
}

C_00186EF0* C_00186EF0::func_00186EF0(void) {
    extern int D_00289A88;
    unk0 = (int)&D_00289A88;
    unk110 = 0;
    unk108 = 0;
    unk4 = 0;
    unk10C = 0;
    return this;
}

C_00187640 *C_00187640::func_00187640(void *param)
{
    ((C_00157600 *)this)->func_00157600(param);
    f24 = 0;
    f28 = 0;
    vtbl = (void *)&D_00289B5C;
    return this;
}
