/* 2 functions from 0x0019FD20 to 0x001A0C90, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <math.h>
#include "asm_helpers.h"

struct Vec_19FD20 {
    f32 x, y, z, w;
    Vec_19FD20() {}
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

static __forceinline void Sqrt_19FD20(float *d, float square) { _mm_store_ss(d, _mm_sqrt_ss(_mm_load_ss(&square))); }
static __forceinline float Abs_19FD20(float f)
{
    int i = *(int *)&f & 0x7fffffff;
    return *(float *)&i;
}

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
float func_0014F890(float v);
void func_0001E9E0(Vec_19FD20 *out, Vec_19FD20 *in);
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
    int f40;
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
    Vec_19FD20 q1;
    Vec_19FD20 q2;
    float lenA, lenB, lenC, lenD;
    float dx, dy, dz, s;
    Vec_19FD20 *m30 = &this->f30;
    m30->z = 0; m30->y = 0; m30->x = 0; m30->w = 1.0f;
    this->f44.z = this->f44.y = this->f44.x = 0;
    this->f44.w = 1.0f;
    Vec_19FD20 *m44 = &this->f44;
    this->f0 = a;
    this->f4 = b;
    this->f8 = c;
    Vec_19FD20 p0(0, 0, 0, 1.0f);
    Vec_19FD20 p1(0, 0, 0, 1.0f);
    Vec_19FD20 p2(0, 0, 0, 1.0f);
    this->f0->func_00199A70(0, &p0);
    this->f4->func_00199A70(0, &p1);
    this->f8->func_00199A70(0, &p2);
    this->f4->func_00197E70(&this->f30);
    m44 = &this->f44;
    m44->x = x; m44->y = y; m44->z = z; m44->w = w;
    dx = p1.x - p2.x; dy = p1.y - p2.y; dz = p1.z - p2.z;
    s = dx * dx + dz * dz + dy * dy;
    lenA = AsmSqrtF(s);
    dx = p0.x - p1.x; dy = p0.y - p1.y; dz = p0.z - p1.z;
    s = dx * dx + dz * dz + dy * dy;
    lenB = AsmSqrtF(s);
    this->f14 = lenB * lenB + lenA * lenA;
    dx = p1.x - p2.x; dy = p1.y - p2.y; dz = p1.z - p2.z;
    s = dx * dx + dz * dz + dy * dy;
    lenC = AsmSqrtF(s);
    dx = p0.x - p1.x; dy = p0.y - p1.y; dz = p0.z - p1.z;
    s = dx * dx + dz * dz + dy * dy;
    lenD = AsmSqrtF(s);
    this->f18 = D_00275460 / (lenD * lenC + lenD * lenC);
    this->f4->func_00198120(&q1, &p0);
    this->f4->func_00198120(&q2, &p2);
    Vec_19FD20 v1(0, 0, 0, 1.0f);
    float fa1 = Abs_19FD20(q1.y * this->f44.y + q1.x * this->f44.x + q1.z * this->f44.z);
    float p1x = fa1 * this->f44.x;
    float p1y = fa1 * this->f44.y;
    float p1z = fa1 * this->f44.z;
    if (q1.y * this->f44.y + q1.x * this->f44.x + q1.z * this->f44.z > D_00275544)
        v1 = Vec_19FD20(q1.x - p1x, q1.y - p1y, q1.z - p1z);
    else
        v1 = Vec_19FD20(q1.x + p1x, q1.y + p1y, q1.z + p1z);
    float l1 = AsmSqrtF(v1.x * v1.x + v1.y * v1.y + v1.z * v1.z);
    Vec_19FD20 v2(0, 0, 0, 1.0f);
    float fa2 = Abs_19FD20(q2.y * this->f44.y + q2.x * this->f44.x + q2.z * this->f44.z);
    float p2x = fa2 * this->f44.x;
    float p2y = fa2 * this->f44.y;
    float p2z = fa2 * this->f44.z;
    if (q2.y * this->f44.y + q2.x * this->f44.x + q2.z * this->f44.z > D_00275544)
        v2 = Vec_19FD20(q2.x - p2x, q2.y - p2y, q2.z - p2z);
    else
        v2 = Vec_19FD20(q2.x + p2x, q2.y + p2y, q2.z + p2z);
    float l2 = AsmSqrtF(v2.x * v2.x + v2.y * v2.y + v2.z * v2.z);
    int s1 = (q1.y * this->f44.y + q1.x * this->f44.x + q1.z * this->f44.z < D_00275544) ? -1 : 1;
    int s2 = (q2.y * this->f44.y + q2.x * this->f44.x + q2.z * this->f44.z < D_00275544) ? -1 : 1;
    float k = (s1 != s2) ? (fa2 + fa1) : (fa1 - fa2);
    this->f1C = k * k + l2 * l2 + l1 * l1;
    this->f20 = D_00275460 / (l1 * l2 + l1 * l2);
    func_0019FBD0(&v1, &v1);
    Vec_19FD20 t;
    t.x = p1.x - p2.x; t.y = p1.y - p2.y; t.z = p1.z - p2.z; t.w = 1.0f;
    Vec_19FD20 tmp;
    func_0001E9E0(&tmp, &t);
    t = this->f4->func_00198040(&tmp);
    func_0019FBD0(&v2, &v2);
    this->f24 = t.x * v1.x + t.y * v1.y + t.z * v1.z;
    v2.x = -v2.x; v2.y = -v2.y; v2.z = -v2.z; v2.w = 1.0f;
    this->f24 = v2.x * v1.x + v2.y * v1.y + v2.z * v1.z;
    this->f28 = AsmSqrtF(D_00275460 - this->f24 * this->f24);
    this->f2C = func_0014F890(this->f24);
    Vec_19FD20 ax = func_0001C610(&v1, &t);
    if (ax.y * this->f44.y + ax.x * this->f44.x + ax.z * this->f44.z > D_00275544)
        this->f2C = -this->f2C;
    this->f40 = 0;
    this->f10 = 1;
}

void C_001A0510::func_001A0510(Vec_19FD20 target)
{
    if (f40) {
        int id = D_002A9D7C;
        if (id < 0) {
            Log_19FD20 *log = D_002A8490->log;
            id = log->next;
            D_002A9D7C = id;
            log->next = id + 1;
        }
        if (D_002A9D78 == -1)
            D_002A9D78 = D_002A7CB8->func_00026500(D_0028B348, id);
        D_002A7CB8->func_0019FC40(D_002A9D78);
    }

    Vec_19FD20 a, b, c;
    a.z = 0; a.y = 0; a.x = 0; a.w = 1.0f;
    b.z = 0; b.y = 0; b.x = 0; b.w = 1.0f;
    c.z = 0; c.y = 0; c.x = 0; c.w = 1.0f;
    f0->func_00199A70(0, &a);
    f4->func_00199A70(0, &b);
    f8->func_00199A70(0, &c);

    Vec_19FD20 d, i;
    d = Vec_19FD20(target.x - a.x, target.y - a.y, target.z - a.z);
    f32 s = d.z * d.z + d.y * d.y + d.x * d.x;
    f32 len = AsmSqrtF(s);
    f32 cosA = (f14 - len * len) * f18;
    if (cosA > 1.0f)
        cosA = 1.0f;
    else if (cosA < -1.0f)
        cosA = -1.0f;
    s = 1.0f - cosA * cosA;
    f32 sinA = AsmSqrtF(s);

    Vec_19FD20 e(a.x - b.x, a.y - b.y, a.z - b.z);
    Vec_19FD20 f(c.x - b.x, c.y - b.y, c.z - b.z);
    Vec_19FD20 g, h;
    h.z = 0; h.y = 0; h.x = 0; h.w = 1.0f;
    g.z = 0; g.y = 0; g.x = 0; g.w = 1.0f;
    func_0019FBD0(&g, &e);
    func_0019FBD0(&h, &f);
    f32 dot = h.y * g.y + h.x * g.x + h.z * g.z;
    s = 1.0f - dot * dot;
    f32 sinD = AsmSqrtF(s);
    Vec_19FD20 q = func_0001C610(&g, &h);
    func_0019FBD0(&q, &q);
    f32 cs = sinD * sinA + dot * cosA;
    s = 1.0f - cs * cs;
    f32 sn = AsmSqrtF(s);
    if (dot < cosA)
        q = Vec_19FD20(q.x * -1.0f, q.y * -1.0f, q.z * -1.0f);
    q = f4->func_00198040(&q);
    f4->func_00199C90(q, cs, sn);

    f8->func_00199A70(0, &c);
    i = Vec_19FD20(c.x - a.x, c.y - a.y, c.z - a.z);
    func_0019FBD0(&i, &i);
    func_0019FBD0(&d, &d);
    AsmVec3Cross(&q.x, &i.x, &d.x);
    func_0019FBD0(&q, &q);
    q = f0->func_00198040(&q);
    f32 dot2 = i.y * d.y + i.x * d.x + i.z * d.z;
    s = 1.0f - dot2 * dot2;
    f32 s2 = AsmSqrtF(s);
    f0->func_00199C90(q, dot2, s2);

    if (f40) {
        D_002A7CB8->func_0019FC80(D_002A9D78);
        i = Vec_19FD20(c.x - a.x, c.y - a.y, c.z - a.z);
        s = i.z * i.z + i.y * i.y + i.x * i.x;
        f32 len1 = AsmSqrtF(s);
        f8->func_00199A70(0, &c);
        i = Vec_19FD20(c.x - a.x, c.y - a.y, c.z - a.z);
        s = i.z * i.z + i.y * i.y + i.x * i.x;
        f32 len2 = AsmSqrtF(s);
        func_0013E260(D_002A8490->log, D_002A9D7C, (char *)f8 + 0x28);
        func_0013E1F0(D_002A8490->log, D_002A9D7C, D_0028B334, (double)(len1 - len));
        func_0013E1F0(D_002A8490->log, D_002A9D7C, D_0028B324, (double)(len2 - len));
    }
}

