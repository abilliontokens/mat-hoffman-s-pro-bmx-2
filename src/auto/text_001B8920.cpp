/* 2 functions from 0x001B8920 to 0x001B9560, found by Ghidra. */
#include "common.h"

extern int D_0028D0BC;
extern char D_00275630[];

extern "C" int strlen(const char *s);
char *func_001E8920(char *dst, const char *src, int n);

struct S_001B9460_Quat {
    u32 x;
    u32 y;
    u32 z;
    u32 w;
};

extern S_001B9460_Quat D_002AA9F4;

/* SegmentedCordTempData */
struct C_001B9460 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    char f10[0x104];
    char f114[0x104];
    char f218[0x104];
    int f31C;
    S_001B9460_Quat f320;
    C_001B9460 *func_001B9460(void);
};

static inline void set_str(C_001B9460 * volatile *pself, int off, const char *src,
                           volatile int *plimit, volatile int *pcount)
{
    int lim;
    int len;
    int n;

    *plimit = 0x104 - 1;
    lim = *plimit;
    len = (int)strlen(src);
    *pcount = lim > len ? len : lim;
    n = *pcount;
    func_001E8920((char *)*pself + off, (const char *)&D_00275630, n);
    ((char *)*pself)[off + n] = 0;
}

C_001B9460 *C_001B9460::func_001B9460(void) {
    C_001B9460 * volatile self = this;
    volatile int tmp[2];
    int lim;
    int n;

    vtbl = (void *)&D_0028D0BC;
    {
        S_001B9460_Quat *q = &self->f320;
        q->z = 0;
        q->y = 0;
        q->x = 0;
        q->w = 0x3f800000;
    }
    tmp[0] = sizeof(f10) - 1;
    lim = tmp[0];
    tmp[1] = lim > (int)strlen("") ? (int)strlen("") : lim;
    n = tmp[1];
    func_001E8920(self->f10, (const char *)&D_00275630, n);
    self->f10[n] = 0;

    tmp[1] = sizeof(f218) - 1;
    lim = tmp[1];
    tmp[0] = lim > (int)strlen("") ? (int)strlen("") : lim;
    n = tmp[0];
    func_001E8920(self->f218, (const char *)&D_00275630, n);
    self->f218[n] = 0;

    self->f31C = 0;
    self->f320 = D_002AA9F4;
    self->f4 = 0;
    self->fC = 0;
    return self;
}
