/* 2 functions from 0x001B7570 to 0x001B829F, found by Ghidra. */
#include "common.h"

#pragma intrinsic(memcmp)
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

void func_001B826C(void)
{
}
