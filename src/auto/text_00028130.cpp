/* 1 function from 0x00028130 to 0x00028CD0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

struct V4 { float x; float y; float z; float w; };
extern float D_00276600;
extern float D_002765F0;
extern float D_002765E0;
extern float D_002756D4;
extern float D_002756D0;
extern float D_002756DC;
extern float D_00275544;
static __forceinline void norm28130(float *out, float *in)
{
    __m128 v = _mm_loadu_ps(in);
    __m128 sq = _mm_mul_ps(v, v);
    __m128 len = _mm_add_ss(_mm_movehl_ps(sq, sq), sq);
    len = _mm_add_ss(len, _mm_shuffle_ps(sq, sq, 0xe1));
    __m128 minv = _mm_load_ss(&D_00276600);
    __m128 cmp = _mm_cmplt_ss(len, minv);
    len = _mm_add_ss(len, _mm_and_ps(cmp, minv));
    __m128 r = _mm_rsqrt_ss(len);
    __m128 t = _mm_mul_ss(_mm_mul_ss(len, r), r);
    __m128 scale = _mm_mul_ss(_mm_mul_ss(r, _mm_load_ss(&D_002765E0)), _mm_sub_ss(_mm_load_ss(&D_002765F0), t));
    scale = _mm_shuffle_ps(scale, scale, 0);
    _mm_storeu_ps(out, _mm_mul_ps(scale, v));
}
int strcmp(const char *a, const char *b);
void func_00026340(void *a, void *b);
float func_0014F7E0(float a);

struct Cand {
    char pad0[0x10];
    int f10;
    char *f14;
    char pad18[8];
    float p20;
    float p24;
    float p28;
    char pad2C[4];
    float p30;
    float p34;
    float p38;
    char pad3C[4];
    float v40;
    float v44;
    float v48;
    float v4C;
};
struct A530 { Cand *func_0015A520(); void func_0015A4F0(V4 *a, V4 *b); };
struct Obj24 { char pad0[0x530]; A530 *f530; };
struct Node230 {
    V4 func_00197F70(V4 *in);
    void func_0019A8C0(V4 *a, V4 *b);
    V4 func_00198120(V4 *in);
};
struct TailObj {
    char pad0[0x14];
    char *f14;
    char pad18[0x64];
    void *f7C;
    int f80;
};
struct F210 { char pad0[0x30]; TailObj *f30; };
struct F1F4 { char pad0[0x2c]; int f2C; };

struct C_00028130 {
    char pad0[0x24];
    Obj24 *f24;
    char pad28[0xe4];
    float f10C;
    float f110;
    float f114;
    int f118;
    int f11C;
    int f120;
    char pad124[0xbc];
    int f1E0;
    char pad1E4[0x10];
    F1F4 *f1F4;
    char pad1F8[0x18];
    F210 *f210;
    char pad214[0x1c];
    Node230 *f230;
    char pad234[0x234];
    int f468;
    char pad46C[0x18];
    int f484;
    int f488;
    char pad48C[0x68];
    int f4F4;
    int f4F8;
    char pad4FC[0x5a0 - 0x4fc];
    float f5A0;
    float f5A4;
    float f5A8;
    char pad5AC[4];
    float f5B0;
    char pad5B4[0xe4];
    int f698;
    char pad69C[0x84];
    TailObj *f720;
    int f724;
    int f728;
    int f72C;
    int f730;
    int f734;
    int f738;
    int f73C;
    int func_00028130(int *param1, int param2, int *param3);
    void func_0005DA40(Cand *a);
    void func_0005DA80(int a);
    void func_00026270(Cand *a);
    void func_0005DA50(int a);
};

int C_00028130::func_00028130(int *param1, int param2, int *param3)
{
    if (param3 != 0) {
        *param3 = 0;
    }
    if (f24->f530 == 0) {
        return 0;
    }
    if ((f4F8 != 0 || f4F4 != 0) && f698 != 4) {
        return 0;
    }
    V4 v1;
    v1.z = 0.0f;
    v1.y = 0.0f;
    v1.x = 0.0f;
    v1.w = 1.0f;
    V4 v2;
    v2.z = 0.0f;
    v2.y = 0.0f;
    v2.x = 0.0f;
    v2.w = 1.0f;
    V4 v3;
    v3.z = 0.0f;
    v3.y = 0.0f;
    v3.x = 0.0f;
    v3.w = 1.0f;
    V4 va;
    va.z = 0.0f;
    va.y = 0.0f;
    va.x = 0.0f;
    va.w = 1.0f;
    V4 vb;
    vb.z = 0.0f;
    vb.y = 0.0f;
    vb.x = 0.0f;
    vb.w = 1.0f;
    v1.x = f10C;
    v1.y = f114;
    *(int *)&v1.z = f118;
    v1.y = 0.0f;
    func_00026340(&v1, &v1);
    func_00026340((char *)f1E0 + 0x238, &v2);
    v3.x = v2.x;
    v3.y = 0.0f;
    v3.z = v2.z;
    func_00026340(&v3, &v3);
    float best1 = f5A0;
    float best2 = f5A4;
    V4 entry = *(V4 *)((char *)f210 + (*param1 + 8) * 16);
    V4 resF = f230->func_00197F70(&entry);
    V4 a0v;
    a0v.z = 0.0f;
    a0v.y = 0.0f;
    a0v.x = 0.0f;
    a0v.w = 1.0f;
    V4 v90;
    v90.z = 0.0f;
    v90.y = 0.0f;
    v90.x = 0.0f;
    v90.w = 1.0f;
    f230->func_0019A8C0(&a0v, &v90);
    f24->f530->func_0015A4F0(&a0v, &v90);
    Cand *best = 0;
    int flagResult = 0;
    Cand *cand;
    while ((cand = f24->f530->func_0015A520()) != 0) {
        V4 nrm;
        nrm.x = cand->v40;
        nrm.y = cand->v44;
        nrm.z = cand->v48;
        nrm.w = cand->v4C;
        nrm.y = 0.0f;
        norm28130((float *)&nrm, (float *)&nrm);
        float dd = nrm.y * v1.y + nrm.x * v1.x;
        dd = dd + nrm.z * v1.z;
        float ang = func_0014F7E0(dd);
        float angAbs = ang;
        if (D_002756D4 < ang) {
            float t = D_002756D0 - ang;
            int ti = *(int *)&t & 0x7fffffff;
            angAbs = *(float *)&ti;
        }
        float dd2 = nrm.y * v3.y + nrm.x * v3.x;
        dd2 = dd2 + nrm.z * v3.z;
        float ang2 = func_0014F7E0(dd2);
        if (D_002756D4 < ang2) {
            float t = D_002756D0 - ang2;
            int ti = *(int *)&t & 0x7fffffff;
            ang2 = *(float *)&ti;
        }
        V4 diff1;
        diff1.x = cand->p20 - resF.x;
        diff1.y = cand->p24 - resF.y;
        diff1.z = cand->p28 - resF.z;
        diff1.w = 1.0f;
        float proj = diff1.z * nrm.z + diff1.x * nrm.x + diff1.y * nrm.y;
        V4 point;
        point.x = cand->p20 - nrm.x * proj;
        point.y = cand->p24 - nrm.y * proj;
        point.z = cand->p28 - nrm.z * proj;
        float dx = point.x - resF.x;
        float dy = point.y - resF.y;
        float dz = point.z - resF.z;
        float ssq = dz * dz + dx * dx + dy * dy;
        float dist;
        _mm_store_ss(&dist, _mm_sqrt_ss(_mm_load_ss(&ssq)));
        V4 diffA;
        diffA.x = cand->p20 - point.x;
        diffA.y = cand->p24 - point.y;
        diffA.z = cand->p28 - point.z;
        diffA.w = 1.0f;
        V4 diffB;
        diffB.x = cand->p30 - point.x;
        diffB.y = cand->p34 - point.y;
        diffB.z = cand->p38 - point.z;
        diffB.w = 1.0f;
        norm28130((float *)&diffA, (float *)&diffA);
        norm28130((float *)&diffB, (float *)&diffB);
        int flag = 1;
        float dot = diffB.z * diffA.z + diffB.x * diffA.x + diffB.y * diffA.y;
        int ti2 = *(int *)&f120 & 0x7fffffff;
        float f120abs = *(float *)&ti2;
        if (f120abs < D_002756DC && v2.y < D_00275544) {
            flag = 0;
        }
        if (f468 != 0) {
            if (D_002756DC < f120abs && ang2 < f5B0) {
                flag = 0;
            }
        }
        V4 pointC = point;
        if (dot < D_00275544 && dist < best1 && -f5A8 < resF.y - point.y && flag) {
            best1 = dist;
            best = cand;
            V4 out = f230->func_00198120(&pointC);
            if (out.x <= D_00275544) {
                flagResult = 1;
            } else {
                flagResult = 0;
            }
        }
        if (dist < best2) {
            best2 = dist;
        }
    }
    if (best2 < f5A4 && param3 != 0) {
        *param3 = 1;
    }
    if (best == 0) {
        return 0;
    }
    int candF10 = best->f10;
    if (param2 != 0) {
        if (candF10 == 0) {
            int p = *param1;
            if (p == 1 && flagResult != 0) {
                *param1 = 0;
            } else if (p == 3 && flagResult != 0) {
                *param1 = 2;
            } else if (p == 0 && flagResult == 0) {
                *param1 = 1;
            } else if (p == 2 && flagResult == 0) {
                *param1 = 3;
            }
            goto lab_end;
        }
        if (D_00275544 < f114 * best->v48 + f10C * best->v40 + f110 * best->v44) {
            if (candF10 == 1) goto lab_8de;
        } else if (candF10 != 1) {
lab_8de:
            if (*param1 == 0) {
                *param1 = 1;
            } else if (*param1 == 2) {
                *param1 = 3;
            }
            goto lab_end;
        }
        if (*param1 == 1) {
            *param1 = 0;
        } else if (*param1 == 3) {
            *param1 = 2;
        }
        goto lab_end;
    }
    if (candF10 == 0) {
        int p = *param1;
        if (flagResult == 0) {
            if (p == 0) {
                return 0;
            }
            if (p == 2) {
                return 0;
            }
            goto lab_end;
        }
lab_9c5:
        if (p == 1) {
            return 0;
        }
        if (p != 3) {
            return 1;
        }
        return 0;
    } else {
        if (D_00275544 < f114 * best->v48 + f10C * best->v40 + f110 * best->v44) {
            if (candF10 != 1) goto lab_9c0;
        } else if (candF10 == 1) {
lab_9c0:
            int p = *param1;
            goto lab_9c5;
        }
        if (*param1 == 0) {
            return 0;
        }
        if (*param1 != 2) {
            return 1;
        }
        return 0;
    }
lab_end:
    if (*param1 != 0 && *param1 != 1) {
        func_0005DA40(best);
        func_0005DA80(*param1);
        return 1;
    }
    if (f210->f30 != 0) {
        if (strcmp(best->f14, f210->f30->f14) != 0) {
            f484 = 0;
            f488 = 0;
        }
    }
    func_00026270(best);
    func_0005DA50(*param1);
    f72C = 0;
    if (f720 == 0) {
        f730 = f72C;
        f720 = (TailObj *)best;
        f73C = 0;
    } else {
        if (strcmp(best->f14, f720->f14) != 0) {
            if (f720->f7C != 0 && f73C != 0) {
                void (__cdecl *cb)(int, int, void *, int) = (void (__cdecl *)(int, int, void *, int))f720->f7C;
                cb(0, f720->f80, f720, f1F4->f2C);
            }
            f730 = f72C;
            f720 = (TailObj *)best;
            f73C = 0;
            return 1;
        }
    }
    return 1;
}
