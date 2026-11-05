/* 9 functions from 0x0019EEC0 to 0x0019FD20, found by Ghidra. */
#include "common.h"

extern int D_0028B25C;

void func_001E891B(void *p);

extern "C" char *strcpy(char *, const char *);
extern "C" char *strcat(char *, const char *);
extern "C" unsigned int strlen(const char *);

extern char D_002A4C10[];
extern char D_002A4C0F[];
extern char D_00284644;
extern char D_0028463C;
extern char D_00284638;
extern int D_00275FB4;

void func_001E8BF0(char *dst, void *src, int n);
void func_00030F30(char *s, void *p);
int func_001EA426(void *a, void *b);
void func_00132E90(int a, void *b);

struct C_002BEAAC {
    int func_0013D310(char *a, void *b, int *c, int *d, int e);
    void func_0013C8A0(int a, void *b, int c, int d);
    void func_0013C110(int a);
};
extern C_002BEAAC *D_002BEAAC;

struct C_0019F9B0 {
    void func_0019ECB0(char *path, int *p);
    void func_0019F780(char *path, int h);
    int func_0019F9B0(int a1, char *path);
};

struct SoultreeHierarchyCollisionObject {
    void *vtbl;
    void func_0019DC80();
    void func_00133E60();
    void *func_0019FBA0(int flags);
};

void *SoultreeHierarchyCollisionObject::func_0019FBA0(int flags)
{
    vtbl = (void *)&D_0028B25C;
    func_0019DC80();
    func_00133E60();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
