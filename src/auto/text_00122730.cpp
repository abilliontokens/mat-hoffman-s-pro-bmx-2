/* 2 functions from 0x00122730 to 0x001236A0, found by Ghidra. */
#include "common.h"

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    Vec4() { x = y = z = 0.0f; w = 1.0f; }
};

void func_00030AC0(float *out, float *v, float *m);

static __forceinline float DistSq_00122730(const float *a, const float *b)
{
    float dx = b[0] - a[0];
    float dy = b[1] - a[1];
    float dz = b[2] - a[2];
    return dx * dx + dy * dy + dz * dz;
}

struct S_00122810_V4 {
    float x, y, z, w;
};
struct S_00122810_V3 {
    float x, y, z, w;
    S_00122810_V3() { z = 0; y = 0; x = 0; }
    S_00122810_V3(float a, float b, float c) { x = a; y = b; z = c; }
    S_00122810_V3 operator+(const S_00122810_V3 &o) const { return S_00122810_V3(x + o.x, y + o.y, z + o.z); }
    S_00122810_V3 operator-(const S_00122810_V3 &o) const { return S_00122810_V3(x - o.x, y - o.y, z - o.z); }
    S_00122810_V3 operator*(float s) const { return S_00122810_V3(x * s, y * s, z * s); }
};
struct S_00122810_Box {
    S_00122810_V4 min;
    S_00122810_V4 max;
};
void func_0011F540(S_00122810_V3 *out, S_00122810_V4 pos, float *m);
extern float D_002755E8;
extern float D_00275544;
static __forceinline float DotAxis_00122810(float x, float y, float z, const S_00122810_V3 &n) { return x*n.x + y*n.y + z*n.z; }
void func_0011EFA0(float *out, float *in);
S_00122810_V3 func_0001E9B0(const S_00122810_V3 &a, const S_00122810_V3 &b);
static __forceinline float Dot_00122810(const S_00122810_V3 &a, const S_00122810_V3 &b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}
static __forceinline float Fabs_00122810(volatile float f)
{
    volatile float result;
    *(int *)&result = *(volatile int *)&f & 0x7fffffff;
    return result;
}

int func_00122730(float *p1, float r1, float *m1, float *p2, float r2, float *m2)
{
    Vec4 a;
    Vec4 b;
    float *q1;
    float *q2;
    float sum;
    float dx;
    float dy;
    float dz;

    a.z = 0.0f;
    a.y = 0.0f;
    a.x = 0.0f;
    a.w = 1.0f;
    b.z = 0.0f;
    b.y = 0.0f;
    b.x = 0.0f;
    b.w = 1.0f;
    if (m1 != 0) {
        q1 = &a.x;
        func_00030AC0(&a.x, p1, m1);
    } else {
        q1 = p1;
    }
    if (m2 != 0) {
        q2 = &b.x;
        func_00030AC0(&b.x, p2, m2);
    } else {
        q2 = p2;
    }
    sum = r1 + r2;
    dx = q2[0] - q1[0];
    dy = q2[1] - q1[1];
    dz = q2[2] - q1[2];
    if (dx * dx + dy * dy + dz * dz <= sum * sum) {
        return 1;
    }
    return 0;
}

int func_00122810(float *p, float *half, S_00122810_Box *box, float eps, float unused, float *m)
{
    S_00122810_V3 a;
    S_00122810_V3 b;

    func_0011F540(&a, box->min, m);
    func_0011F540(&b, box->max, m);
    a.x -= p[0];
    a.y -= p[1];
    a.z -= p[2];
    b.x -= p[0];
    b.y -= p[1];
    b.z -= p[2];
    S_00122810_V3 c = (b + a) * D_002755E8;
    S_00122810_V3 h = c - a;
    if (Fabs_00122810(h.x) + half[0] + eps < Fabs_00122810(c.x)) {
        return 0;
    }
    if (Fabs_00122810(h.y) + half[1] + eps < Fabs_00122810(c.y)) {
        return 0;
    }
    if (Fabs_00122810(h.z) + half[2] + eps < Fabs_00122810(c.z)) {
        return 0;
    }
    const S_00122810_V3 x(half[0], D_00275544, D_00275544);
    const S_00122810_V3 y(D_00275544, half[1], D_00275544);
    const S_00122810_V3 z(D_00275544, D_00275544, half[2]);
    Vec4 unit;
    {
        S_00122810_V3 direction = b - a;
        direction.w = 1.0f;
        func_0011EFA0(&unit.x, &direction.x);
    }
    S_00122810_V3 n;
    n.w = 1.0f;
    float distance, rx, ry, rz, rh;
    {
    n.x = -unit.z; n.y = 0; n.z = unit.x;
    func_0011EFA0(&n.x, &n.x);
    distance = Fabs_00122810(Dot_00122810(n, c));
    rx = Fabs_00122810(Dot_00122810(x, n));
    ry = Fabs_00122810(Dot_00122810(y, n));
    rz = Fabs_00122810(Dot_00122810(z, n));
    rh = Fabs_00122810(Dot_00122810(n, h));
    if (rz + ry + rx + rh + eps < distance) return 0;
    }
    {
    n.x = unit.y; n.y = -unit.x; n.z = 0;
    func_0011EFA0(&n.x, &n.x);
    distance = Fabs_00122810(Dot_00122810(n, c));
    rx = Fabs_00122810(Dot_00122810(x, n));
    ry = Fabs_00122810(Dot_00122810(y, n));
    rz = Fabs_00122810(Dot_00122810(z, n));
    rh = Fabs_00122810(Dot_00122810(n, h));
    if (rz + ry + rx + rh + eps < distance) return 0;
    }
    {
    n.x = 0; n.y = unit.z; n.z = -unit.y;
    func_0011EFA0(&n.x, &n.x);
    distance = Fabs_00122810(Dot_00122810(n, c));
    rx = Fabs_00122810(Dot_00122810(x, n));
    ry = Fabs_00122810(Dot_00122810(y, n));
    rz = Fabs_00122810(Dot_00122810(z, n));
    rh = Fabs_00122810(Dot_00122810(n, h));
    if (rz + ry + rx + rh + eps < distance) return 0;
    }
    S_00122810_V3 da, db;
    da.w = db.w = 1.0f;
    da.x = Fabs_00122810(half[0])-Fabs_00122810(a.x);
    da.y = Fabs_00122810(half[1])-Fabs_00122810(a.y);
    da.z = Fabs_00122810(half[2])-Fabs_00122810(a.z);
    db.x = Fabs_00122810(half[0])-Fabs_00122810(b.x);
    db.y = Fabs_00122810(half[1])-Fabs_00122810(b.y);
    db.z = Fabs_00122810(half[2])-Fabs_00122810(b.z);
    da = func_0001E9B0(da, da);
    db = func_0001E9B0(db, db);
    {
    if (da.x + da.y < db.x + db.y) {
        n.x = a.x < D_00275544 ? -da.x : da.x;
        n.y = a.y < D_00275544 ? -da.y : da.y;
    } else {
        n.x = b.x < D_00275544 ? -db.x : db.x;
        n.y = b.y < D_00275544 ? -db.y : db.y;
    }
    n.z = 0;
    func_0011EFA0(&n.x, &n.x);
    distance = Fabs_00122810(Dot_00122810(n, c));
    rx = Fabs_00122810(Dot_00122810(x, n));
    ry = Fabs_00122810(Dot_00122810(y, n));
    rz = Fabs_00122810(Dot_00122810(z, n));
    rh = Fabs_00122810(Dot_00122810(n, h));
    if (rz + ry + rx + rh + eps < distance) return 0;
    }
    {
    if (da.x + da.z < db.x + db.z) {
        n.x = a.x < D_00275544 ? -da.x : da.x;
        n.z = a.z < D_00275544 ? -da.z : da.z;
    } else {
        n.x = b.x < D_00275544 ? -db.x : db.x;
        n.z = b.z < D_00275544 ? -db.z : db.z;
    }
    n.y = 0;
    func_0011EFA0(&n.x, &n.x);
    distance = Fabs_00122810(Dot_00122810(n, c));
    rx = Fabs_00122810(Dot_00122810(x, n));
    ry = Fabs_00122810(Dot_00122810(y, n));
    rz = Fabs_00122810(Dot_00122810(z, n));
    rh = Fabs_00122810(Dot_00122810(n, h));
    if (rz + ry + rx + rh + eps < distance) return 0;
    }
    {
    if (da.y + da.z < db.y + db.z) {
        n.y = a.y < D_00275544 ? -da.y : da.y;
        n.z = a.z < D_00275544 ? -da.z : da.z;
    } else {
        n.y = b.y < D_00275544 ? -db.y : db.y;
        n.z = b.z < D_00275544 ? -db.z : db.z;
    }
    n.x = 0;
    func_0011EFA0(&n.x, &n.x);
    distance = Fabs_00122810(Dot_00122810(n, c));
    rx = Fabs_00122810(Dot_00122810(x, n));
    ry = Fabs_00122810(Dot_00122810(y, n));
    rz = Fabs_00122810(Dot_00122810(z, n));
    rh = Fabs_00122810(Dot_00122810(n, h));
    if (rz + ry + rx + rh + eps < distance) return 0;
    }
    return 1;
}

