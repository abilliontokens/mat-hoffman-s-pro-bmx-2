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

static __forceinline float vld_1B8920(const volatile float *p)
{
    return *p;
}

static __forceinline void norm_1B8920(float * volatile out, float * volatile in)
{
    __m128 v = _mm_loadu_ps(in);
    __m128 sq = _mm_mul_ps(v, v);
    __m128 len = _mm_add_ss(_mm_movehl_ps(sq, sq), sq);
    len = _mm_add_ss(len, _mm_shuffle_ps(sq, sq, 0xe1));
    __m128 minv = _mm_set_ss(vld_1B8920(&D_0028CA50));
    __m128 cmp = _mm_cmplt_ss(len, minv);
    len = _mm_add_ss(len, _mm_and_ps(cmp, minv));
    __m128 r = _mm_rsqrt_ss(len);
    __m128 t = _mm_mul_ss(_mm_mul_ss(len, r), r);
    __m128 scale = _mm_mul_ss(_mm_mul_ss(r, _mm_set_ss(vld_1B8920(&D_0028CA30))), _mm_sub_ss(_mm_set_ss(vld_1B8920(&D_0028CA40)), t));
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
    char pad190[0x190];
    void func_00197E70(float *out);
    void func_001994C0(int flags, float *axis, float *v2);
    void func_00199110(int a1, float *a2, float *a3, int a4, int a5, int a6);
    void func_00198390(void);
    void func_001983A0(void);
    void func_00182530(float t);
    void func_0019AC50(void);
};

struct Sub_1B8920 {
    char pad0[0x104];
    int f104;
    char pad108[0x10C - 0x108];
    float f10C;
    float f110;
    float f114;
    V4_1B8920 f118;
    char pad128[0x158 - 0x128];
    Item_1B8920 **f158;
};

struct C_1B8920_Mgr {
    char pad0[0x24];
    int f24;
    Sub_1B8920 **f28;
    void func_001B8920(void);
    void func_001578D0(void);
};

extern "C" int func_001E8858(float x);
extern float D_00275544;

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

void C_1B8920_Mgr::func_001B8920(void)
{
    C_1B8920_Mgr *self = this;
    V4_1B8920 P = {0, 0, 0, 1.0f};
    V4_1B8920 c2 = {0, 0, 0, 1.0f};
    V4_1B8920 axis = {0, 0, 0, 1.0f};
    V4_1B8920 v2 = {0, 0, 0, 1.0f};
    V4_1B8920 rot = {0, 0, 0, 1.0f};
    V4_1B8920 pos = {0, 0, 0, 1.0f};
    V4_1B8920 c3 = {0, 0, 0, 1.0f};
    V4_1B8920 q = {0, 0, 0, 1.0f};
    float len;
    V4_1B8920 cam;
    V4_1B8920 B;
    int i;
    int j;

    cam = *(V4_1B8920 *)(*(char **)((char *)*(void **)&D_002EFDB8 + 4) + 0x170);
    if (self->f24 > 0) {
        for (i = 0; i < self->f24; i++) {
            Sub_1B8920 *sub = self->f28[i];
            if (sub->f158 == 0)
                continue;
            for (j = 0; j < sub->f104; j++) {
                Item_1B8920 *obj = sub->f158[j];
                if (obj == 0)
                    continue;
                void *t = obj->f18C;
                if (t != 0 && *(unsigned short *)((char *)*(void **)((char *)t + 4) + 0x90) != D_002EFE50)
                    continue;
                obj->func_00197E70(&pos.x);
                float dx = pos.x - cam.x;
                float dy = pos.y - cam.y;
                float dz = pos.z - cam.z;
                P.x = dx;
                P.w = 1.0f;
                P.y = dy;
                P.z = dz;
                float sq = dx * dx + dy * dy + dz * dz;
                len = sqrtf(sq);
                norm_1B8920(&P.x, &P.x);
                q = sub->f118;
                if (q.x != *(float *)&D_002AA9F4.x && q.y != *(float *)&D_002AA9F8 && q.z != *(float *)&D_002AA9FC) {
                    rot = P;
                    Cross_1B8920(&c3, &rot, &D_002AAA14);
                    norm_1B8920(&c3.x, &c3.x);
                    Cross_1B8920(&c2, &c3, &rot);
                    norm_1B8920(&c2.x, &c2.x);
                    Cross_1B8920(&c2, &c3, &rot);
                    norm_1B8920(&c2.x, &c2.x);
                } else {
                    obj->func_001994C0(0, &axis.x, &v2.x);
                    float d = q.y * axis.y + q.x * axis.x + q.z * axis.z;
                    B = axis;
                    axis.x -= q.x * d;
                    axis.y -= q.y * d;
                    axis.z -= q.z * d;
                    axis.w = 1.0f;
                    norm_1B8920(&axis.x, &axis.x);
                    float d2 = q.y * P.y + q.x * P.x + q.z * P.z;
                    P.x -= q.x * d2;
                    P.y -= q.y * d2;
                    P.z -= q.z * d2;
                    P.w = 1.0f;
                    norm_1B8920(&P.x, &P.x);
                    float angle = func_0014F890(axis.x * P.x + axis.y * P.y + axis.z * P.z);
                    Cross_1B8920(&q, &axis, &P);
                    norm_1B8920(&q.x, &q.x);
                    func_00158390(angle, B, q, &rot);
                    norm_1B8920(&rot.x, &rot.x);
                }
                obj->func_00199110(0, &rot.x, &c2.x, 0, 1, 0);
                int i0 = func_001E8858(sub->f10C);
                int i1 = func_001E8858(sub->f110);
                int i2 = func_001E8858(sub->f114);
                float t0 = (float)i0;
                if (t0 > 0.0f) {
                    if (len < t0) {
                        obj->func_001983A0();
                        if ((float)(i0 + i2) > len)
                            obj->func_00182530((len - t0) / i2);
                    } else {
                        obj->func_00198390();
                    }
                }
                float t1 = (float)i1;
                if (t1 > 0.0f) {
                    if (len <= t1) {
                        obj->func_001983A0();
                        if ((float)(i1 - i2) >= len)
                            obj->func_00182530((t1 - len) / i2);
                    } else {
                        obj->func_00198390();
                    }
                }
                obj->func_0019AC50();
            }
        }
        self->func_001578D0();
    }
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
