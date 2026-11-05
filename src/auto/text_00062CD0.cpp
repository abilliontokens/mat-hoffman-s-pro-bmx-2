/* 6 functions from 0x00062CD0 to 0x00063CD0, found by Ghidra. */
#include "common.h"

struct C_0005E840 {
    void func_0005E840(char *s);
};

struct C_5C020Ret_62 {
    char pad0[4];
    int f4;
};

struct C_0005C020 {
    C_5C020Ret_62 *func_0005C020(int param);
};

struct C_Mgr_62 {
    char pad0[0x2C0];
    C_0005C020 *f2C0;
    char pad2C4[0x14];
    int f2D8;
};

struct C_GObj4_62 {
    char pad0[0xEA8];
    char *fEA8;
};

struct C_GObj2E8_62 {
    char pad0[4];
    C_GObj4_62 *p4;
};

struct C_Root_62 {
    char pad0[0x2E0];
    C_Mgr_62 *f2E0;
    char pad2E4[4];
    C_GObj2E8_62 *p2E8;
};

struct C_000634D0 {
    char pad0[0x29C];
    C_0005E840 *f29C;
    void func_000634D0(void);
};

extern C_Root_62 *D_002A8490;
extern int D_00277038;
void func_001ADCC0(char *buf, int size, char *fmt, int val);
void func_001AC330(char *dest, char *fmt, char *arg);

void C_000634D0::func_000634D0(void)
{
    char dest[0x40];
    char buf[5];
    C_Mgr_62 *mgr = D_002A8490->f2E0;

    func_001ADCC0(buf, 5, (char *)&D_00277038,
                  mgr->f2C0->func_0005C020(mgr->f2D8)->f4);
    func_001AC330(dest, D_002A8490->p2E8->p4->fEA8, buf);
    f29C->func_0005E840(dest);
}
