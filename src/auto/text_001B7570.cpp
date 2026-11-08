/* 2 functions from 0x001B7570 to 0x001B829F, found by Ghidra. */
#include "common.h"

#pragma intrinsic(memcmp)
#pragma intrinsic(strcmp)
extern "C" int strcmp(const char *a, const char *b);
extern "C" int memcmp(const void *a, const void *b, unsigned int n);

struct V4_1B7570 { float x, y, z, w; };

struct Reader_1B7570 {
    void func_00168C20(const void *name, int def, void *out);
    void func_00168BE0(const void *name, const void *def, void *buf, int size);
    void func_00168CB0(const void *name, void *def, void *out);
};

extern char D_0028CA68[], D_00288A34[], D_00284A98[], D_0028CF6C[], D_00275AD4[], D_0028CF60[], D_0028CF4C[];
extern char D_0027C4BC[], D_0028CF3C[], D_0028CF34[];
extern V4_1B7570 D_002AA9F4;

/* ParticleEmitterTempData */
struct C_001B7570 {
    void *vtbl;
    int f4;
    int f8;
    char fC[0x104];
    char f110[0x104];
    char f214[0x104];
    V4_1B7570 f318;
    int f328;
    int f32C;
    int func_001B7570(Reader_1B7570 *r);
};

extern "C" int __cdecl strcmp(const char *, const char *);
#pragma intrinsic(strcmp)
int C_001B7570::func_001B7570(Reader_1B7570 *r)
{
    r->func_00168C20(D_0028CA68, 0, &f4);
    r->func_00168C20(D_00288A34, 0, &f8);
    r->func_00168BE0(D_0028CF6C, D_00284A98, fC, -1);
    if (strcmp(fC, D_00284A98) == 0) {
        r->func_00168CB0(D_00275AD4, &D_002AA9F4, &f318);
        f328 = 1;
    } else {
        r->func_00168BE0(D_0028CF60, D_00284A98, f110, -1);
        r->func_00168CB0(D_0028CF4C, &D_002AA9F4, &f318);
        r->func_00168C20(D_0027C4BC, 1, &f328);
    }
    r->func_00168BE0(D_0028CF3C, D_00284A98, f214, -1);
    r->func_00168C20(D_0028CF34, 1, &f32C);
    return 1;
}
void func_001B826C(void)
{
}
