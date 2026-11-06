/* 2 functions from 0x001B8920 to 0x001B9560, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
#include <xmmintrin.h>

extern int D_0028D0BC;
extern char D_00275630[];

extern "C" int strlen(const char *s);
char *func_001E8920(char *dst, const char *src, int n);

extern void *D_002EFDB8;
extern unsigned short D_002EFE50;
extern float D_0028CA50;
extern float D_0028CA40;
extern float D_0028CA30;

struct V4_1B8920 { float x, y, z, w; };
extern V4_1B8920 D_002AAA14;
extern "C" void func_00158390(float f, V4_1B8920 a, V4_1B8920 b, V4_1B8920 *out);
extern "C" float func_0014F890(float x);

static __forceinline void norm_1B8920(float * volatile out, float * volatile in)
{
    __m128 v = _mm_loadu_ps(in);
    __m128 sq = _mm_mul_ps(v, v);
    __m128 len = _mm_add_ss(_mm_movehl_ps(sq, sq), sq);
    len = _mm_add_ss(len, _mm_shuffle_ps(sq, sq, 0xe1));
    __m128 minv = _mm_load_ss(&D_0028CA50);
    __m128 cmp = _mm_cmplt_ss(len, minv);
    len = _mm_add_ss(len, _mm_and_ps(cmp, minv));
    __m128 r = _mm_rsqrt_ss(len);
    __m128 t = _mm_mul_ss(_mm_mul_ss(len, r), r);
    __m128 scale = _mm_mul_ss(_mm_mul_ss(r, _mm_load_ss(&D_0028CA30)), _mm_sub_ss(_mm_load_ss(&D_0028CA40), t));
    scale = _mm_shuffle_ps(scale, scale, 0);
    _mm_storeu_ps(out, _mm_mul_ps(scale, v));
}

static __forceinline void Cross_1B8920(V4_1B8920 * volatile out, V4_1B8920 * volatile a, V4_1B8920 * volatile b)
{
    V4_1B8920 *pa = a, *pb = b;
    _mm_storeu_ps(&out->x,
        _mm_shuffle_ps(
            _mm_sub_ps(
                _mm_mul_ps(_mm_loadu_ps(&pa->x), _mm_shuffle_ps(_mm_loadu_ps(&pb->x), _mm_loadu_ps(&pb->x), 0xc9)),
                _mm_mul_ps(_mm_loadu_ps(&pb->x), _mm_shuffle_ps(_mm_loadu_ps(&pa->x), _mm_loadu_ps(&pa->x), 0xc9))),
            _mm_sub_ps(
                _mm_mul_ps(_mm_loadu_ps(&pa->x), _mm_shuffle_ps(_mm_loadu_ps(&pb->x), _mm_loadu_ps(&pb->x), 0xc9)),
                _mm_mul_ps(_mm_loadu_ps(&pb->x), _mm_shuffle_ps(_mm_loadu_ps(&pa->x), _mm_loadu_ps(&pa->x), 0xc9))), 0xc9));
}

struct Item_1B8920 {
    char pad0[0x18c];
    void *f18C;
    void func_00197E70(float *out);
    void func_001994C0(int flags, float *axis, float *v2);
};

struct Sub_1B8920 {
    char pad0[0x104];
    int f104;
    char pad108[0x118 - 0x108];
    V4_1B8920 f118;
    char pad128[0x158 - 0x128];
    Item_1B8920 **f158;
};

struct C_1B8920_Mgr {
    char pad0[0x24];
    int f24;
    Sub_1B8920 **f28;
    void func_001B8920(void);
};

struct S_001B9460_Quat {
    u32 x;
    u32 y;
    u32 z;
    u32 w;
};

extern S_001B9460_Quat D_002AA9F4;
extern u32 D_002AA9F8;
extern u32 D_002AA9FC;
extern u32 D_002AAA00;

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
    int len;
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
    len = (int)strlen("");
    if (lim > len) {
        lim = len;
    }
    tmp[1] = lim;
    n = tmp[1];
    func_001E8920(self->f10, (const char *)&D_00275630, n);
    self->f10[n] = 0;

    tmp[1] = sizeof(f218) - 1;
    lim = tmp[1];
    len = (int)strlen("");
    if (lim > len) {
        lim = len;
    }
    tmp[0] = lim;
    n = tmp[0];
    func_001E8920(self->f218, (const char *)&D_00275630, n);
    self->f218[n] = 0;

    self->f31C = 0;
    self->f320 = D_002AA9F4;
    self->f4 = 0;
    self->fC = 0;
    return self;
}
