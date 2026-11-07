/* 1 function from 0x00124760 to 0x00125540, found by Ghidra. */
#include "common.h"

struct Vec4 {
    float x, y, z, w;
    Vec4() { x = 0; y = 0; z = 0; w = 1.0f; }
    Vec4(float ax, float ay, float az) { x = ax; y = ay; z = az; w = 1.0f; }
};

struct Vec3 {
    float x, y, z;
    Vec3() { }
    Vec3(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3 operator+(const Vec3 &o) const { return Vec3(x + o.x, y + o.y, z + o.z); }
    Vec3 operator-(const Vec3 &o) const { return Vec3(x - o.x, y - o.y, z - o.z); }
    Vec3 operator*(float s) const { return Vec3(x * s, y * s, z * s); }
};

extern float D_002755E8;
extern float D_00275460;
void func_0011EFA0(Vec4 *out, Vec4 *in);

static __forceinline float Fabs(volatile float f);
static __forceinline void EdgeEval(Vec4 &P, Vec4 &N, float *v0, float *v1, float *n0, float *n1, float *n, float t);

static __forceinline void TriInterp(Vec4 *out, Vec4 *Q, Vec4 *R, float *p, float *n, float *a, float *b, float *c, float *na, float *nb, float *nc, int k, int cmp, int ja, int jb)
{
    float *v[4];
    float *vn[4];
    int cnt = 0;
    int j;
    float t;
    Vec4 dummy;

    if ((a[k] <= p[k] && b[k] > p[k]) || (a[k] >= p[k] && b[k] < p[k])) {
        v[0] = a; v[1] = b; vn[0] = na; vn[1] = nb;
        cnt = 2;
    }
    if ((b[k] <= p[k] && c[k] > p[k]) || (b[k] >= p[k] && c[k] < p[k])) {
        v[cnt] = b; v[cnt + 1] = c; vn[cnt] = nb; vn[cnt + 1] = nc;
        cnt += 2;
    }
    if ((c[k] <= p[k] && a[k] > p[k]) || (c[k] >= p[k] && a[k] < p[k])) {
        v[cnt] = c; v[cnt + 1] = a; vn[cnt] = nc; vn[cnt + 1] = na;
    }
    t = (p[k] - v[0][k]) / (v[1][k] - v[0][k]);
    Vec4 pv, nv;
    EdgeEval(pv, nv, v[0], v[1], vn[0], vn[1], n, t);
    Q[0] = pv; R[0] = nv;
    t = (p[k] - v[2][k]) / (v[3][k] - v[2][k]);
    EdgeEval(pv, nv, v[2], v[3], vn[2], vn[3], n, t);
    Q[1] = pv; R[1] = nv;
    j = (Fabs(n[1]) > Fabs(n[cmp])) ? ja : jb;
    t = (p[j] - (&Q[0].x)[j]) / ((&Q[1].x)[j] - (&Q[0].x)[j]);
    EdgeEval(pv, nv, &Q[0].x, &Q[1].x, &R[0].x, &R[1].x, n, t);
    *out = pv;
}

static __forceinline float Fabs(volatile float f)
{
    int i = *(volatile int *)&f & 0x7fffffff;
    return *(float *)&i;
}

static __forceinline void EdgeEval(Vec4 &P, Vec4 &N, float *v0, float *v1, float *n0, float *n1, float *n, float t)
{
    Vec3 m = (Vec3(n1[0], n1[1], n1[2]) + Vec3(n0[0], n0[1], n0[2])) * D_002755E8;
    float d = m.y * n[1] + m.x * n[0] + m.z * n[2];
    Vec3 r;
    float s;

    d = d + d;
    r.x = n[0] * d - m.x;
    r.y = n[1] * d - m.y;
    r.z = n[2] * d - m.z;
    s = D_00275460 - t;
    Vec3 v0v(v0[0], v0[1], v0[2]);
    Vec3 v1v(v1[0], v1[1], v1[2]);
    Vec3 n1v(n1[0], n1[1], n1[2]);
    Vec3 pv = v0v * s + v1v * t;
    Vec3 nn = r * (t * s) + v0v * (s * s) + n1v * t;
    P = Vec4(pv.x, pv.y, pv.z);
    N = Vec4(nn.x, nn.y, nn.z);
}

void func_00124760(Vec4 *out, float *p, float *n, float *a, float *b, float *c, float *na, float *nb, float *nc)
{
    Vec4 R[2];
    Vec4 Q[2];

    if (Fabs(n[0]) > Fabs(n[2])) {
        TriInterp(out, Q, R, p, n, a, b, c, na, nb, nc, 2, 0, 0, 1);
    } else {
        TriInterp(out, Q, R, p, n, a, b, c, na, nb, nc, 0, 2, 2, 1);
    }
    func_0011EFA0(out, out);
}
