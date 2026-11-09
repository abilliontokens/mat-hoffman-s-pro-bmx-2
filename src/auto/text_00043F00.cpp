/* 1 function from 0x00043F00 to 0x000448D0, found by Ghidra. */
#include "common.h"
struct V4_43 { float x, y, z, w; };
struct __declspec(align(16)) AV4_43 { float x, y, z, w; };
struct Obj8_43 {
    void func_00197E70(V4_43 *out);
    void func_00197B40(V4_43 *a, V4_43 *b);
    void func_00199600(V4_43 v);
    void func_0019AC50();
    void func_001824E0(V4_43 *out, float a, float b, float c);
    void func_00199B00(V4_43 *out, int a);
};
struct Obj564_43 {
    int f0; char pad4[4]; Obj8_43 *f8; Obj8_43 *fC;
    void *f10; int f14; int *f18;
};
struct Obj53C_43 { void func_001A4100(int, int, int); };
struct Obj5B4_43 { void func_001CDE90(void *a); };
struct Vt18_43 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); };
struct G8490_43 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(void *a, void *b, int c, int d);
};
struct Obj550_43 : Vt18_43 { void func_0008A080(); void func_0008A910(); void func_0008A980(); void func_0008A990(); };
struct Obj560_43 : Vt18_43 { void func_0008B670(char *s); void func_0008B690(); };
struct SA0_43 { int count; void **arr; void *base; int bound; char pad10[4]; Obj5B4_43 *ctl; };
extern int D_002A8490;
extern char D_00277014[];
struct Obj568_43 { void func_00133EF0(V4_43 *v); };
struct Ctx530_43 { void func_0015A250(int); };
struct Ctx5A4_43 { char pad0[0x47C]; int f47C; };
struct Ctx43 {
    char pad0[0x530]; Ctx530_43 *f530;
    char pad534[0x5A4 - 0x534]; struct Ctx5A4_43 *f5A4; int f5A8; int *f5AC;
};
struct GlobEF_43 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(int);
    virtual void v8();
};
extern GlobEF_43 *D_002EFDB8;
extern float D_0027701C;
extern float D_00275F64;
extern float D_00275548;
extern V4_43 D_002A14D4;
extern char D_00276F78[];
extern char D_00276F9C[];
void func_000265C0(void *, void *, void *, void *, int, int);
int func_001E8AF0(char *, char *);
void func_001ADCC0(int, int, char *, int);
struct C_00043F00 {
    char pad0[0x24]; int f24; int f28; char pad2C[0x64 - 0x2C]; Ctx43 *f64;
    char pad68[0x288 - 0x68]; unsigned char f288; char pad289[3];
    int f28C; int f290; V4_43 f294; V4_43 f2A4; V4_43 f2B4;
    char pad2C4[0x2D8 - 0x2C4]; int f2D8; char pad2DC[0x324 - 0x2DC]; char s324[0x32];
    char pad356[0x420 - 0x356]; int f420;
    char pad424[0x440 - 0x424]; float f440;
          char pad444[0x474 - 0x444]; int f474; char pad478[0x47C - 0x478]; int f47C;
          char pad480[0x48C - 0x480]; int f48C;
    char pad490[0x4CC - 0x490]; V4_43 f4CC; char pad4DC[0x51C - 0x4DC]; V4_43 f51C;
    char pad52C[0x53C - 0x52C]; Obj53C_43 *f53C;
    Vt18_43 *f540; char pad544[0x550 - 0x544]; Obj550_43 *f550; Obj550_43 *f554;
    char pad558[0x560 - 0x558]; Obj560_43 *f560; Obj564_43 *f564; Obj568_43 *f568; Obj568_43 *f56C; Obj568_43 *f570;
          char pad574[0x57C - 0x574]; void *f57C; void *f580; char pad584[0x5A0 - 0x584]; int f5A0; void *f5A4; int f5A8; int *f5AC;
    int func_00043F00(int arg);
    int func_00041560();
    int func_000395A0(V4_43 v);
    int func_000392B0();
    void func_000361F0(int a);
    void func_00035940();
    int func_00042840();
};

int C_00043F00::func_00043F00(int arg)
{
    V4_43 v1 = {0.0f, 0.0f, 0.0f, 1.0f};
    V4_43 v2 = {0.0f, 0.0f, 0.0f, 1.0f};
    V4_43 v3 = {0.0f, 0.0f, 0.0f, 1.0f};
    V4_43 v4;
    V4_43 out;
    int i;
    D_002EFDB8->v7(1);
    D_002EFDB8->v8();
    if (f564 != 0 && arg != 0) {
        int n;
        f564->f8->func_00197E70(&v1);
        v4 = v1;
        f564->f8->func_00197B40(&v2, &v3);
        f51C = v2;
        n = -1 - (int)(v1.y * D_0027701C);
        while (n >= (int)(f440 * D_00275F64)) {
            V4_43 tmp = v1;
            tmp.y = (float)n * D_00275548;
            f564->f8->func_00199600(tmp);
            f564->f8->func_0019AC50();
            for (i = 0; i < f564->f14; i++) {
                f64->f530->func_0015A250(f564->f18[i]);
            }
            if (f564->fC != 0) {
                f564->fC->func_00199600(v1);
                f564->fC->func_0019AC50();
            }
            func_000265C0(&out, &v1, &v2, &v3, 0, 1);
            if (f568) f568->func_00133EF0(&out);
            if (f56C) f56C->func_00133EF0(&out);
            if (f570) f570->func_00133EF0(&out);
            if (func_00041560() == -1) {
                f53C->func_001A4100(1, 1, 0);
                if (v4.y - v1.y != D_00275548) {
                    v1.y = v4.y;
                } else {
                    v1.y += D_00275548;
                }
                f564->f8->func_00199600(v1);
                if (f564->fC != 0) {
                    f564->fC->func_00199600(v1);
                    f564->fC->func_0019AC50();
                }
                f564->f8->func_0019AC50();
                for (i = 0; i < f564->f14; i++) {
                    f64->f530->func_0015A250(f564->f18[i]);
                }
                func_000265C0(&out, &v1, &v2, &v3, 0, 1);
                if (f568) f568->func_00133EF0(&out);
                if (f56C) f56C->func_00133EF0(&out);
                if (f570) f570->func_00133EF0(&out);
                return 0;
            }
            if (func_000395A0(D_002A14D4) != 0) {
                break;
            }
            n--;
        }
    } else if (f564 != 0) {
        if (func_000395A0(D_002A14D4) != 0) {
            if (f564->f0 != 0 && f564->f0 < 3) {
                v1 = *(V4_43 *)((char *)f564->f10 + 0x24);
                f51C = f4CC;
            } else {
                f564->f8->func_00197E70(&v1);
                f564->f8->func_00197B40(&v2, &v3);
                f51C = v2;
            }
            if (f564->f0 == 0 || f564->f0 >= 3) {
                if (func_000392B0() == 0) {
                    goto shared;
                }
            } else {
                f53C->func_001A4100(2, 1, 0);
                goto done;
            }
        } else {
            goto shared;
        }
    } else {
        return 0;
    }
shared:
    if (func_001E8AF0((char *)f564->f8 + 0x28, D_00276F78) != 0) {
        if (f288 == 8) {
            if (f48C == -1) {
                f53C->func_001A4100(1, 1, 0);
                return 0;
            }
        } else if (f48C == -1) {
            f288 = f288 + 1;
            if (f288 < 8) {
                int edi = f64->f5A4->f47C;
                if (f64->f5A8 > 0 && f64->f5AC != 0 && edi < f64->f5A8) {
                    edi = f64->f5AC[edi];
                } else {
                    edi = 0;
                }
                func_001ADCC0(edi + 0x314, 0x32, D_00276F9C, f288);
                f53C->func_001A4100(2, 1, 0);
            }
        }
    }
    f564->f8->func_001824E0(&v4, 1.0f, 1.0f, 1.0f);
    if (f564->f0 == 3 || f564->f0 == 5) {
        f564->fC->func_001824E0(&v4, 1.0f, 1.0f, 1.0f);
    }
    if (f564->f0 == 0) {
        if (func_001E8AF0((char *)f564->f8 + 0x28, D_00276F78) != 0) {
            if (f48C == -1 && f290 == 0) {
                V4_43 local;
                f290 = 1;
                f564->f8->func_00199B00(&local, 0);
                f294 = *(V4_43 *)f564;
                f564->f8->func_00197B40(&f2A4, &f2B4);
                f28C = f5A0;
            }
        }
    }
done:
    return 0;
}
