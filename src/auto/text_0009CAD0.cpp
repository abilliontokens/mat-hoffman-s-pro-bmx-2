/* 2 functions from 0x0009CAD0 to 0x0009DA90, found by Ghidra. */
#include "common.h"

extern float D_00275460;
extern float D_00275544;
extern float D_00275548;
extern char D_00277038;
extern char D_0027A9D8;
extern int D_002A8490;
#define I4(p, o) (*(int *)((char *)(p) + (o)))
#define F4(p, o) (*(float *)((char *)(p) + (o)))
#define P4(p, o) (*(char **)((char *)(p) + (o)))
#define B1(p, o) (*(unsigned char *)((char *)(p) + (o)))
int __fastcall func_000988B0(char *self, int unused, char *a, char *b);
void __fastcall func_00096FE0(char *self, int unused, float dt);
void __fastcall func_00083A70(char *self, int unused, const char *name);
void __fastcall func_00095D70(char *self, int unused);
void __fastcall func_00096450(char *self, int unused, int arg);
int __fastcall func_00098080(char *self, int unused, const char *name);
void __fastcall func_00096AB0(char *self, int unused);
int __fastcall func_00097CA0(char *self, int unused, const char *name);
int func_001EA426(const char *a, const char *b);
int func_001ADCC0(char *buf, int size, const char *fmt, int val);
int func_001AC330(char *out, char *a, char *b);
int func_00109370(void);
int __fastcall func_00109380(char *self, int unused, int arg);
int __fastcall func_00109390(char *self, int unused, int arg);
int __fastcall func_001093A0(char *self, int unused, int arg);
struct C_0009CAD0_Calls {
    int func_00109370();
    int func_00109380(int);
    int func_00109390(int);
    int func_001093A0(int);
    int func_000988B0(char *, char *);
    void func_00096FE0(float);
    void func_00083A70(const char *);
    void func_00095D70();
    void func_00096450(int);
    int func_00098080(const char *);
    void func_00096AB0();
    int func_00097CA0(const char *);
};
struct S_0009CAD0 {
    char *arr0;
    char *arr1;
    char *arr2;
    int cnt0;
    int cnt1;
    int cnt2;
    int mode0;
    int mode1;
    char pad20[0x198 - 0x20];
    char *unk198;
    int func_0009CAD0(float dt, char *a, char *b);
};

static __forceinline void vec3_set(float *out, float x, float y, float z) {
    out[3] = 1.0f;
    out[0] = x;
    out[1] = y;
    out[2] = z;
}

int S_0009CAD0::func_0009CAD0(float dt, char *a, char *b)
{
    char *self = (char *)this;
    char *mgr;
    char **list;
    int count;
    int group;
    int j;
    int k;
    int flag;
    char *elem;
    char *sub;

    if (a == 0)
        return 0;
    if (I4(a, 0x24) == 0)
        return 0;
    func_000988B0(self, 0, a, b);
    mgr = P4(P4(P4(self, 0x198), 0x64), 0x4e0);
    mgr = P4(mgr, 0x1a8);

    for (group = 0; ; group++) {
        switch (group) {
        case 0: list = *(char ***)(self + 0); break;
        case 1: list = *(char ***)(self + 4); break;
        case 2: list = *(char ***)(self + 8); break;
        default: list = 0; break;
        }
        switch (group) {
        case 0: count = I4(self, 0xc); break;
        case 1: count = I4(self, 0x10); break;
        case 2: count = I4(self, 0x14); break;
        default: count = 0; break;
        }
        for (j = 0; j < count; j++) {
            elem = list[j];
            func_00096FE0(elem, 0, dt);
            if (I4(elem, 0x1a8) != 0) {
                flag = 1;
                if (F4(elem, 0x1c0) > 0.0f) {
                    if ((I4(mgr, 0x1178) != 0 || I4(mgr, 0x5c8) != 0) &&
                        (I4(mgr, 0x454) == 0 || I4(elem, 0x1c4) != 0)) {
                        F4(elem, 0x1c0) = F4(elem, 0x1c0) - dt;
                        if (F4(elem, 0x1c0) <= 0.0f) {
                            int cleared = 0;
                            int any = 0;
                            int kk;
                            if (I4(mgr, 0x5c8) != 0)
                                flag = 0;
                            for (kk = 0; kk < I4(elem, 0x1b8); kk++) {
                                sub = (*(char ***)(elem + 0x1c8))[kk];
                                if (I4(sub, 0x40) != 0) {
                                    cleared++;
                                    continue;
                                }
                                if (I4(sub, 0x44) == 0)
                                    continue;
                                if (flag != 0) {
                                    I4(sub, 0x2f0) = 0;
                                    I4(sub, 0x2f4) = 0;
                                    I4(sub, 0x2f8) = 0;
                                    I4(sub, 0x2fc) = 0;
                                    I4(sub, 0x40) = 1;
                                    cleared++;
                                    any = 1;
                                    if (B1(sub, 0x84) != 0)
                                        func_00083A70(P4(P4(self, 0x198), 0x170), 0, sub + 0x84);
                                    if (I4(elem, 0x1b8) > 1)
                                        func_00095D70(sub, 0);
                                }
                                I4(sub, 0x44) = 0;
                            }
                            *(int *)(elem + 0x1c0) = 0;
                            I4(elem, 0x1c4) = 0;
                            if (any != 0 && cleared < I4(elem, 0x1b8)) {
                                char buf1[0x58];
                                char buf2[0x10];
                                char buf3[0x100];
                                func_001ADCC0(buf1, 5, &D_00277038, cleared);
                                if (func_001AC330(buf2, elem + 0x78, buf3))
                                    func_00083A70(P4(P4(self, 0x198), 0x170), 0, buf2);
                            }
                        }
                    }
                }
            }
            flag = 0;
            if (I4(elem, 0x48e0) == 0) {
                int kk;
                for (kk = 0; kk < I4(elem, 0x1b8); kk++) {
                    sub = (*(char ***)(elem + 0x1c8))[kk];
                    if (I4(sub, 0x40) != 0)
                        continue;
                    if (I4(mgr, 0x1178) == 0 && I4(mgr, 0x117c) != 0) {
                        I4(sub, 0x2f0) = 0;
                        I4(sub, 0x2f4) = 0;
                        I4(sub, 0x2f8) = 0;
                        I4(sub, 0x2fc) = 0;
                    }
                    if (I4(sub, 0) == 1) {
                        int e;
                        int l20 = 0;
                        int l24 = 0;
                        int l28 = 0;
                        int l34 = 0;
                        int l2c = 0;
                        for (e = 0; e < I4(sub, 0x2554); e++) {
                            int n = I4(sub, 0x2558 + e * 4);
                            int allow = 0;
                            if (I4(sub, 0x2580 + e * 4) == 0) {
                                if (I4(sub, 0x25d0 + e * 4) != 0) {
                                    allow = I4(P4(P4(P4(self, 0x198), 0x64), 0x56c), n * 4);
                                    allow = I4((char *)allow, 0xe0);
                                } else {
                                    char *o = (*(char ***)(b + 0x28))[n];
                                    o = P4(o, 4);
                                    allow = (B1(o, 0x2ec) >> 4) & 1;
                                }
                                if (allow == 0) {
                                    l20 = 1;
                                    continue;
                                }
                            } else {
                                if (I4(sub, 0x25a8 + e * 4) != 0) {
                                    char *t = P4(P4(P4(self, 0x198), 0x64), 0x530);
                                    allow = I4(P4(t, 0x34), n * 4);
                                    allow = I4((char *)allow, 0xc);
                                } else {
                                    char *o = (*(char ***)(b + 0x28))[n];
                                    allow = I4(o, 0x18);
                                }
                                l28 = allow;
                                if (allow == 0)
                                    continue;
                                {
                                    int l48 = 0;
                                    int lok = 0;
                                    int v1 = I4(sub, 0x2aa8 + e * 4);
                                    int v2;
                                    if (v1 != -1 && I4(mgr, 0x718) == v1)
                                        l48 = 1;
                                    v2 = I4(sub, 0x2ad0 + e * 4);
                                    if (I4(mgr, 0xa44) == v2)
                                        lok = 1;
                                    if (v2 == -1)
                                        lok = 1;
                                    if (l48 != 0 && lok != 0) {
                                        float fv = F4(sub, 0x2af8 + e * 4);
                                        int ok = 1;
                                        if (fv > 0.0f) {
                                            if (fv > F4(mgr, 0x484)) {
                                                float fv2 = F4(sub, 0x2b20 + e * 4);
                                                ok = 0;
                                                if (fv2 > 0.0f && fv2 <= F4(mgr, 0x488))
                                                    ok = 1;
                                            }
                                        }
                                        if (ok == 0)
                                            continue;
                                    } else {
                                        continue;
                                    }
                                }
                            }
                            if (I4(sub, 0x6388 + e * 4) != 0)
                                continue;
                            if (allow != 0 && l28 != 0) {
                                if (func_001EA426(&D_0027A9D8, sub + 0x2b48 + e * 0x78) == 0) {
                                    char *t2 = P4(mgr, 0x20c);
                                    if (I4(t2, 0x30) == 0) {
                                        char *t3 = P4(mgr, 0x1ec);
                                        if ((F4(mgr, 0x744) - (F4(t3, 0x3c) - D_00275548)) == 0.0f)
                                            l28 = 0;
                                    }
                                }
                            }
                            if (l28 == 0) {
                                char *o = (*(char ***)(b + 0x28))[n];
                                char *oo = P4(o, 4);
                                B1(oo, 0x2ec) = B1(oo, 0x2ec) & 0xef;
                                l20 = 1;
                                continue;
                            }
                            I4(sub, 0x6388 + e * 4) = 1;
                            func_00096450(sub, 0, l2c);
                            I4(sub, 0x63b0 + e * 4) = I4(P4((char *)D_002A8490, 0x2a4), 0x124);
                            l34++;
                            l2c++;
                        }
                        if (l20 != 0) {
                            if (l24 == 0) {
                                flag = 0;
                            } else {
                                char buf1[0x58];
                                char buf2[0x10];
                                char buf3[0x100];
                                func_001ADCC0(buf1, 5, &D_00277038, l34);
                                if (func_001AC330(buf2, elem + 0x78, buf3))
                                    func_00083A70(P4(P4(self, 0x198), 0x170), 0, buf2);
                            }
                        }
                    } else {
                        int type = I4(sub, 0);
                        switch (type) {
                        case 0:
                            if ((B1(P4((*(char ***)(a + 0x28))[I4(sub, 0x268)], 4), 0x2ec) & 0x10) == 0 ||
                                (I4(elem, 0x1bc) != 0 && flag == 0)) {
                                flag = 0;
                            } else if (I4(elem, 0x1b8) > 1) {
                                func_00083A70(P4(P4(self, 0x198), 0x170), 0, sub + 0x84);
                            }
                            break;
                        case 7: {
                            char *o = P4((*(char ***)(a + 0x28))[I4(sub, 0x268)], 4);
                            unsigned char bv = B1(o, 0x2ec);
                            if ((bv & 0x10) == 0) {
                                flag = 0;
                                break;
                            }
                            if (I4(mgr, 0x69c) == 0) {
                                flag = 0;
                                if (I4(mgr, 0x1178) != 0)
                                    B1(o, 0x2ec) = bv & 0xef;
                            } else {
                                if (I4(elem, 0x1b8) > 1)
                                    func_00083A70(P4(P4(self, 0x198), 0x170), 0, sub + 0x84);
                                I4(sub, 0x40) = 1;
                            }
                            break;
                        }
                        case 4: {
                            int v = func_00097CA0(self, 0, elem + 0xb4);
                            char *o = P4((*(char ***)(a + 0x28))[I4(sub, 0x268)], 4);
                            if ((B1(o, 0x2ec) & 0x10) != 0 && v <= I4(mgr, 0xa40))
                                flag = 1;
                            else
                                flag = 0;
                            break;
                        }
                        case 2: {
                            int v = func_00097CA0(self, 0, elem + 0xb4);
                            flag = (v <= I4(mgr, 0xa40)) ? 1 : 0;
                            break;
                        }
                        case 3: {
                            int v = func_00097CA0(self, 0, elem + 0xb4);
                            flag = (v <= I4(mgr, 0xa58)) ? 1 : 0;
                            break;
                        }
                        case 5: {
                            char *t = P4(P4(self, 0x198), 0x64);
                            int m;
                            int found = 0;
                            int l20 = 0;
                            for (m = 0; m < I4(t, 0x568); m++) {
                                char *it = (*(char ***)(t + 0x56c))[m];
                                if (func_001EA426(it + 0x60, sub + 0x138) == 0) {
                                    found = 1;
                                    if (I4(it, 0xe0) != 0)
                                        l20 = 1;
                                    break;
                                }
                            }
                            if (l20 != 0)
                                I4(sub, 0x2f4) = 1;
                            I4(sub, 0x2f0) = 1;
                            I4(sub, 0x2f8) = 1;
                            I4(sub, 0x2fc) = 1;
                            if (l20 != 0 && F4(elem, 0x1c0) > 0.0f) {
                                F4(elem, 0x1c0) = 0.2f;
                                I4(sub, 0x44) = 1;
                                if (I4(sub, 0x2ec) == 0)
                                    I4(elem, 0x1c4) = 1;
                            }
                            flag = 0;
                            break;
                        }
                        case 6: {
                            if (I4(sub, 0x2e8) == 0 || I4(mgr, 0x1128) != 0)
                                I4(sub, 0x2fc) = 1;
                            switch (I4(sub, 0x2e4)) {
                            case 0:
                                I4(sub, 0x2f8) = 1;
                                break;
                            case 1:
                                if (I4(mgr, 0x1200) > 0xb3)
                                    I4(sub, 0x2f8) = 1;
                                break;
                            case 2:
                                if (I4(mgr, 0x1200) > 0x167)
                                    I4(sub, 0x2f8) = 1;
                                break;
                            case 3:
                                if (I4(mgr, 0x1200) > 0x21b)
                                    I4(sub, 0x2f8) = 1;
                                break;
                            case 4:
                                if (I4(mgr, 0x1200) > 0x2cf)
                                    I4(sub, 0x2f8) = 1;
                                break;
                            case 5:
                                if (I4(mgr, 0x1200) > 899)
                                    I4(sub, 0x2f8) = 1;
                                break;
                            case 6:
                                if (I4(mgr, 0x1204) != 0)
                                    I4(sub, 0x2f8) = 1;
                                break;
                            case 7:
                                if (I4(mgr, 0x1208) != 0)
                                    I4(sub, 0x2f8) = 1;
                                break;
                            }
                            if (I4(sub, 0x2f0) != 0 && I4(sub, 0x2f4) != 0 &&
                                I4(sub, 0x2f8) != 0 && I4(sub, 0x2fc) != 0 &&
                                I4(sub, 0x44) == 0) {
                                F4(elem, 0x1c0) = 0.2f;
                                I4(sub, 0x44) = 1;
                            }
                            flag = 0;
                            break;
                        }
                        default:
                            break;
                        }
                    }
                    flag = 0;
                }
                if (flag != 0) {
                    func_00098080(self, 0, elem + 0xb4);
                    func_00096AB0(self, 0);
                }
            }
        }
        if (group >= 2)
            return 1;
    }
}

void func_0009DA50(float *out, float *in, float s)
{
    s = D_00275460 / s;
    vec3_set(out, s * in[0], s * in[1], s * in[2]);
}
