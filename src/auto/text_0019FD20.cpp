/* 2 functions from 0x0019FD20 to 0x001A0C90, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

struct Vec_19FD20 {
    f32 x, y, z, w;
    Vec_19FD20() { x = y = z = 0.0f; w = 1.0f; }
    Vec_19FD20(f32 ax, f32 ay, f32 az, f32 aw = 1.0f) { x = ax; y = ay; z = az; w = aw; }
};

static __forceinline void Cross_19FD20(Vec_19FD20 * volatile out, Vec_19FD20 * volatile a, Vec_19FD20 * volatile b)
{
    Vec_19FD20 *pa = a, *pb = b;
    __m128 va = _mm_loadu_ps(&pa->x);
    __m128 vb = _mm_loadu_ps(&pb->x);
    __m128 sa = va, sb = vb;
    sa = _mm_shuffle_ps(sa, sa, 0xc9);
    sb = _mm_shuffle_ps(sb, sb, 0xc9);
    vb = _mm_mul_ps(vb, sa);
    va = _mm_mul_ps(va, sb);
    va = _mm_sub_ps(va, vb);
    va = _mm_shuffle_ps(va, va, 0xc9);
    _mm_storeu_ps(&out->x, va);
}

static __forceinline void Sqrt_19FD20(float *d, float square) { _mm_store_ss(d, _mm_sqrt_ss(*(__m128 *)&square)); }

struct Node_19FD20 {
    void func_00199A70(int a, Vec_19FD20 *out);
    Vec_19FD20 func_00198040(Vec_19FD20 *in);
    void func_00199C90(Vec_19FD20 axis, f32 c, f32 s);
};

struct Res_19FD20 {
    int func_00026500(void *name, int a);
    void func_0019FC40(int id);
    void func_0019FC80(int id);
};

struct Log_19FD20 { char pad[0x1934]; int next; };
struct App_19FD20 { char pad[0x18]; Log_19FD20 *log; };

struct C_001A0510 {
    Node_19FD20 *f0;
    Node_19FD20 *f4;
    Node_19FD20 *f8;
    int fC;
    int f10;
    f32 f14;
    f32 f18;
    char pad1c[0x24];
    int f40;
    void func_001A0510(Vec_19FD20 target);
};

void func_0019FBD0(Vec_19FD20 *out, Vec_19FD20 *in);
Vec_19FD20 func_0001C610(Vec_19FD20 *a, Vec_19FD20 *b);
extern "C" void func_0013E260(Log_19FD20 *log, int id, void *p);
extern "C" void func_0013E1F0(Log_19FD20 *log, int id, const void *fmt, ...);

struct C_0019FD20 {
    Node_19FD20 *f0;
    Node_19FD20 *f4;
    Node_19FD20 *f8;
    int fC;
    int f10;
    f32 f14;
    f32 f18;
    f32 f1C;
    f32 f20;
    f32 f24;
    f32 f28;
    f32 f2C;
    Vec_19FD20 f30;
    char pad40[4];
    Vec_19FD20 f44;
    void func_0019FD20(Node_19FD20 *a, Node_19FD20 *b, Node_19FD20 *c, f32 x, f32 y, f32 z, f32 w);
};
extern float D_00275460;
extern float D_00275544;

extern int D_002A9D7C;
extern int D_002A9D78;
extern App_19FD20 *D_002A8490;
extern Res_19FD20 *D_002A7CB8;
extern char D_0028B348[];
extern char D_0028B334[];
extern char D_0028B324[];
