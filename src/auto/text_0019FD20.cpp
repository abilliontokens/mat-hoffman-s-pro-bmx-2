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
    void func_00197E70(Vec_19FD20 *v);
    void func_00198120(Vec_19FD20 *a, Vec_19FD20 *b);
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

void C_0019FD20::func_0019FD20(Node_19FD20 *a, Node_19FD20 *b, Node_19FD20 *c, f32 x, f32 y, f32 z, f32 w)
{
    Vec_19FD20 p0;
    Vec_19FD20 p1;
    Vec_19FD20 p2;
    Vec_19FD20 q1;
    Vec_19FD20 q2;
    float lenA, lenB, lenC, lenD;
    float dx, dy, dz, s;
    f30.x = 0; f30.y = 0; f30.z = 0; f30.w = 1.0f;
    f44.x = 0; f44.y = 0; f44.z = 0; f44.w = 1.0f;
    f0 = a; f4 = b; f8 = c;
    f0->func_00199A70(0, &p0);
    f4->func_00199A70(0, &p1);
    f8->func_00199A70(0, &p2);
    f4->func_00197E70(&f30);
    f44.x = x; f44.y = y; f44.z = z; f44.w = w;
    dx = p1.x - p2.x; dy = p1.y - p2.y; dz = p1.z - p2.z;
    s = dz * dz + dy * dy + dx * dx;
    Sqrt_19FD20(&lenA, s);
    dx = p0.x - p1.x; dy = p0.y - p1.y; dz = p0.z - p1.z;
    s = dz * dz + dy * dy + dx * dx;
    Sqrt_19FD20(&lenB, s);
    f14 = lenB * lenB + lenA * lenA;
    dx = p1.x - p2.x; dy = p1.y - p2.y; dz = p1.z - p2.z;
    s = dz * dz + dy * dy + dx * dx;
    Sqrt_19FD20(&lenC, s);
    dx = p0.x - p1.x; dy = p0.y - p1.y; dz = p0.z - p1.z;
    s = dz * dz + dy * dy + dx * dx;
    Sqrt_19FD20(&lenD, s);
    f18 = D_00275460 / (lenD * lenC + lenD * lenC);
    f4->func_00198120(&q1, &p0);
    f4->func_00198120(&q2, &p2);
}

void C_001A0510::func_001A0510(Vec_19FD20 target)
{
    if (f40) {
        if (D_002A9D7C < 0) {
            Log_19FD20 *log = D_002A8490->log;
            int n = log->next;
            D_002A9D7C = n;
            log->next = n + 1;
        }
        if (D_002A9D78 == -1)
            D_002A9D78 = D_002A7CB8->func_00026500(D_0028B348, D_002A9D7C);
        D_002A7CB8->func_0019FC40(D_002A9D78);
    }

    Vec_19FD20 a, b, c;
    f0->func_00199A70(0, &a);
    f4->func_00199A70(0, &b);
    f8->func_00199A70(0, &c);

    Vec_19FD20 d(target.x - a.x, target.y - a.y, target.z - a.z);
    f32 len;
    Sqrt_19FD20(&len, d.z * d.z + d.y * d.y + d.x * d.x);
    f32 cosA = (f14 - len * len) * f18;
    if (cosA > 1.0f)
        cosA = 1.0f;
    else if (cosA < -1.0f)
        cosA = -1.0f;
    f32 sinA;
    Sqrt_19FD20(&sinA, 1.0f - cosA * cosA);

    Vec_19FD20 e(a.x - b.x, a.y - b.y, a.z - b.z);
    Vec_19FD20 f(c.x - b.x, c.y - b.y, c.z - b.z);
    Vec_19FD20 g, h;
    func_0019FBD0(&g, &e);
    func_0019FBD0(&h, &f);
    f32 dot = h.y * g.y + h.x * g.x + h.z * g.z;
    f32 sinD;
    Sqrt_19FD20(&sinD, 1.0f - dot * dot);
    Vec_19FD20 q = func_0001C610(&g, &h);
    func_0019FBD0(&q, &q);
    f32 cs = sinD * sinA + dot * cosA;
    f32 sn;
    Sqrt_19FD20(&sn, 1.0f - cs * cs);
    if (dot < cosA)
        q = Vec_19FD20(q.x * -1.0f, q.y * -1.0f, q.z * -1.0f);
    q = f4->func_00198040(&q);
    f4->func_00199C90(q, cs, sn);

    f8->func_00199A70(0, &c);
    Vec_19FD20 i(c.x - a.x, c.y - a.y, c.z - a.z);
    func_0019FBD0(&i, &i);
    func_0019FBD0(&d, &d);
    Cross_19FD20(&q, &i, &d);
    func_0019FBD0(&q, &q);
    q = f0->func_00198040(&q);
    f32 dot2 = i.y * d.y + i.x * d.x + i.z * d.z;
    f32 s2;
    Sqrt_19FD20(&s2, 1.0f - dot2 * dot2);
    f0->func_00199C90(q, dot2, s2);

    if (f40) {
        D_002A7CB8->func_0019FC80(D_002A9D78);
        i = Vec_19FD20(c.x - a.x, c.y - a.y, c.z - a.z);
        f32 len1;
        Sqrt_19FD20(&len1, i.z * i.z + i.y * i.y + i.x * i.x);
        f8->func_00199A70(0, &c);
        i = Vec_19FD20(c.x - a.x, c.y - a.y, c.z - a.z);
        f32 len2;
        Sqrt_19FD20(&len2, i.z * i.z + i.y * i.y + i.x * i.x);
        func_0013E260(D_002A8490->log, D_002A9D7C, (char *)f8 + 0x28);
        func_0013E1F0(D_002A8490->log, D_002A9D7C, D_0028B334, (double)(len1 - len));
        func_0013E1F0(D_002A8490->log, D_002A9D7C, D_0028B324, (double)(len2 - len));
    }
}

