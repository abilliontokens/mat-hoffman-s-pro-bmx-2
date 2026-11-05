/* 16 functions from 0x00140680 to 0x001414A0, found by Ghidra. */
#include "common.h"
extern int D_00284F8C;
extern char D_0028502C[];

extern "C" int memcmp(const void *a, const void *b, unsigned int n);
void func_001E891B(void *p);
void *func_001E8A44(unsigned int size);
int func_001E9576(const char *s, char **end, int base);

struct VObj {
    virtual void destroyObject(int flags);
};

struct C_00140680 {
    VObj *a;
    VObj *b;
    void func_001402C0(int p1, int p2);
    void *func_00140680(unsigned int flags);
};

struct C_0013FD50 {
    VObj *func_0013FD50(void *owner);
};

struct C_00168BE0 {
    void func_00168BE0(const char *key, const char *def, char *buf, int size);
};

struct DXMesh {
    void *vtbl;
    char pad04[0x38];
    C_00140680 *f3c;
    int f40;
    int f44;
    VObj *f48;
    void func_00162690(int p1, int p2, int p3, int *p4, int p5);
    void func_00162660();
    DXMesh *func_00140710(int p1, int p2, int count, int *p4, int p5);
    void *func_001407D0(unsigned int flags);
};
