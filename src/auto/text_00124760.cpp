/* 1 function from 0x00124760 to 0x00125540, found by Ghidra. */
#include "common.h"

struct Vec4 {
    float x, y, z, w;
    Vec4() { x = 0; y = 0; z = 0; w = 1.0f; }
    Vec4(float ax, float ay, float az) { x = ax; y = ay; z = az; w = 1.0f; }
};

extern float D_002755E8;
extern float D_00275460;
void func_0011EFA0(Vec4 *out, Vec4 *in);

static inline float Fabs(float f);
static inline void EdgeEval(Vec4 &P, Vec4 &N, float *v0, float *v1, float *n0, float *n1, float *n, float t);

static __forceinline void TriInterp(Vec4 *out, Vec4 *Q, Vec4 *R, float *p, float *n, float *a, float *b, float *c, float *na, float *nb, float *nc, int k, int cmp, int ja, int jb)
{
    float *v[4];
    float *vn[4];
    int cnt = 0;
    int j;
    float t;
    Vec4 dummy;

    if ((a[k] <= p[k] && b[k] >= p[k]) || (a[k] >= p[k] && b[k] <= p[k])) {
        v[0] = a; v[1] = b; vn[0] = na; vn[1] = nb;
        cnt = 2;
    }
    if ((b[k] <= p[k] && c[k] >= p[k]) || (b[k] >= p[k] && c[k] <= p[k])) {
        v[cnt] = b; v[cnt + 1] = c; vn[cnt] = nb; vn[cnt + 1] = nc;
        cnt += 2;
    }
    if ((c[k] <= p[k] && a[k] >= p[k]) || (c[k] >= p[k] && a[k] <= p[k])) {
        v[cnt] = c; v[cnt + 1] = a; vn[cnt] = nc; vn[cnt + 1] = na;
    }
    t = (p[k] - v[0][k]) / (v[1][k] - v[0][k]);
    EdgeEval(Q[0], R[0], v[0], v[1], vn[0], vn[1], n, t);
    t = (p[k] - v[2][k]) / (v[3][k] - v[2][k]);
    EdgeEval(Q[1], R[1], v[2], v[3], vn[2], vn[3], n, t);
    j = (Fabs(n[1]) > Fabs(n[cmp])) ? ja : jb;
    t = (p[j] - (&Q[0].x)[j]) / ((&Q[1].x)[j] - (&Q[0].x)[j]);
    EdgeEval(dummy, *out, &Q[0].x, &Q[1].x, &R[0].x, &R[1].x, n, t);
}

static inline float Fabs(float f)
{
    int i = *(int *)&f & 0x7fffffff;
    return *(float *)&i;
}

static inline void EdgeEval(Vec4 &P, Vec4 &N, float *v0, float *v1, float *n0, float *n1, float *n, float t)
{
    float mx = (n1[0] + n0[0]) * D_002755E8;
    float my = (n1[1] + n0[1]) * D_002755E8;
    float mz = (n1[2] + n0[2]) * D_002755E8;
    float d = (my * n[1] + mx * n[0] + mz * n[2]);
    float rx, ry, rz, s;
    d = d + d;
    rx = n[0] * d - mx;
    ry = n[1] * d - my;
    rz = n[2] * d - mz;
    s = D_00275460 - t;
    P = Vec4(v1[0] * t + v0[0] * s, v1[1] * t + v0[1] * s, v1[2] * t + v0[2] * s);
    N = Vec4(rx * t * s + v0[0] * s * s + n1[0] * t, ry * t * s + n0[1] * s * s + n1[1] * t, rz * t * s + n0[2] * s * s + n1[2] * t);
}
