/* 1 function from 0x00024380 to 0x00025240, found by Ghidra. */
#include "common.h"

struct V4_24380 { float x, y, z, w; };

struct Ini_24380 {
    int func_00169710(const char *name);
    void func_00168C20(const char *key, int def, void *out);
    void func_00168C50(const char *key, float def, void *out);
    void func_00168CB0(const char *key, void *def, void *out);
    void func_00168BE0(const char *key, const char *def, char *out, int size);
};

struct Debris_24380 {
    float f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    V4_24380 f1C;
    unsigned char f2C;
    unsigned char f2D;
    unsigned char f2E;
    unsigned char f2F;
    char f30[0x104];
};

struct Seg_24380 {
    int f0;
    int f4;
    int f8;
    int fC;
    void *f10;
};

struct Obj20C_24380;

struct Obj20C_Vtbl_24380 {
    void *f0;
    void *f4;
    void *f8;
    void *fC;
    void (*v10)(int a, int b, int c, int d, char *buf);
};

struct Obj20C_24380 {
    virtual void v0();
    virtual void v4();
    virtual void v8();
    virtual void vC();
    virtual void v10(char *, int, int, int, int);
    void *vtbl;
    Obj20C_24380 *func_001CF740(void *a, int b, int c);
};

struct Seg5C_24380 {
    int f0;
    Obj20C_24380 *f4;
};

struct D217F0_24380 {
    void *vtbl;
    char pad4[0x70];
    char f7a;
    char f7b;
    D217F0_24380 *func_000217F0(int a);
    void func_001D3F50();
    void func_00021890(Ini_24380 *stream, int base);
    void func_001578D0();
};

struct Obj138_24380 {
    void *vtbl;
    int f4;
    int f8;
    void **fC;
    int f10;
    int f14;
    void **f18;
    float f1C;
    float f20;
    float f24;
    float f28;
    float f2C;
    float f30;
    char f34[0x104];
};

struct AmbientDebris {
    char pad0[0x28];
    Ini_24380 *f28;
    char pad2c[4];
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int f44;
    char pad48[8];
    int f50;
    char pad54[8];
    Seg5C_24380 **f5C;
    D217F0_24380 **f60;
    Debris_24380 **f64;
    Seg_24380 **f68;
    int (*f6C)[2];
    Obj138_24380 **f70;
    AmbientDebris *func_00024140(int a, int b);
    void func_00024380(Ini_24380 *ini);
    void func_00021600(const char *path, int index);
};

void *func_001E8A44(int size);
void *func_001E83E8(void *p, int size);
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void func_00011FF0(void *dst, int size, int count, const void *src);

extern char D_00276510[];
extern char D_00276504[];
extern char D_002764F8[];
extern char D_002764F0[];
extern char D_002764EC[];
extern char D_002764DC[];
extern char D_002764D8[];
extern char D_002764C8[];
extern char D_002764B4[];
extern char D_002764A8[];
extern char D_0027649C[];
extern char D_00276490[];
extern char D_00276488[];
extern char D_0027647C[];
extern char D_00276470[];
extern char D_00276464[];
extern char D_00276454[];
extern char D_00276444[];
extern char D_0027643C[];
extern char D_0027642C[];
extern V4_24380 D_002A0FA4;
extern char D_00021290[];

extern char D_0027643C[], D_0027642C[], D_00276424[], D_00276410[];
extern char D_002763F4[], D_002763E4[];
extern char D_002A48F8[], D_002A5348[], D_002A47F0[], D_00275678[];
extern void *D_002A8490;
void func_001577A0(void *obj, int a);
char *func_001E8920(char *dst, const char *src, unsigned int n);
extern char D_002763F4[], D_002763E4[], D_002763D0[], D_002763BC[];
extern char D_002763AC[], D_00276388[], D_00276378[], D_00276370[];
extern char D_0027635C[], D_0027634C[], D_00276328[], D_00276314[];
extern char D_00276310[], D_00275630[], D_00276300[], D_00276218[];
extern V4_24380 D_002A0F74;
void AmbientDebris::func_00024380(Ini_24380 *ini)
{
    char buf[0x104];
    char buf2[0x104];
    int cnt;
    int n;
    int start;
    int i;
    int t;
    int idx;
    int j;
    int k;
    int total;

    idx = -1;
    if (!ini->func_00169710(D_00276510))
        return;
    ini->func_00168C20(D_00276504, 0, &cnt);
    if (cnt <= 0)
        return;
    if (f64 == 0) {
        f34 = cnt;
        n = f34;
        start = 0;
        idx = 0;
        f64 = (Debris_24380 **)func_001E8A44(n * 4);
    } else {
        start = f34;
        f34 = start + cnt;
        n = f34;
        f64 = (Debris_24380 **)func_001E83E8(f64, n * 4);
        idx = n;
    }
    if (start >= n)
        return;
    for (i = start; i < n; i++) {
        void *m = func_001E8A44(0x134);
        Debris_24380 *o;
        if (m) {
            o = (Debris_24380 *)m;
            o->f1C.x = 0.0f;
            o->f1C.y = 0.0f;
            o->f1C.z = 0.0f;
            o->f1C.w = 1.0f;
        } else {
            o = 0;
        }
        f64[i] = o;
        func_001ADCC0(buf, 0x20, D_002764F8, i - start + 1);
        ini->func_00169710(buf);
        ini->func_00168BE0(D_002764EC, D_002764F0, o->f30, 0x104);
        ini->func_00168C20(D_002764DC, 1, &idx);
        o->f2C = (unsigned char)idx;
        ini->func_00168C50(D_002764D8, 60.0f, &o->f0);
        ini->func_00168CB0(D_002764C8, &D_002A0FA4, &o->f1C);
        ini->func_00168C20(D_002764B4, 0, &t);
        o->f2E = (unsigned char)t;
        ini->func_00168C20(D_002764A8, 0, &t);
        o->f8 = t - 1;
        if (o->f8 != -1)
            o->f8 += start;
        ini->func_00168C20(D_0027649C, 0, &t);
        o->fC = t - 1;
        ini->func_00168C20(D_00276490, 0, &t);
        o->f10 = t - 1;
        if (o->f10 != -1)
            o->f10 += start;
        ini->func_00168C20(D_00276488, 0, &t);
        o->f14 = t - 1;
        o->f18 = 0;
        o->f4 = 0;
        o->f2D = 0;
        o->f2F = 0;
    }
    if (ini->func_00169710(D_0027647C)) {
        ini->func_00168C20(D_00276470, 0, &cnt);
        if (cnt > 0 && start != -1) {
            if (f68 == 0) {
                f38 = cnt;
                n = f38;
                start = 0;
                f68 = (Seg_24380 **)func_001E8A44(n * 4);
            } else {
                start = f38;
                f38 = start + cnt;
                n = f38;
                f68 = (Seg_24380 **)func_001E83E8(f68, n * 4);
            }
            if (start < n) {
                for (i = start; i < n; i++) {
                    Seg_24380 *s = (Seg_24380 *)func_001E8A44(0x14);
                    f68[i] = s;
                    s->f4 = 0;
                    func_001ADCC0(buf, 0x10, D_00276464, i - start + 1);
                    ini->func_00169710(buf);
                    ini->func_00168C20(D_00276454, 0, s);
                    ini->func_00168C20(D_002764A8, 0, &t);
                    s->f8 = t - 1;
                    if (s->f8 != -1)
                        s->f8 += start;
                    ini->func_00168C20(D_00276490, 0, &t);
                    s->fC = t - 1;
                    if (s->fC != -1)
                        s->fC += start;
                    f64[s->f8]->f2F = 1;
                    f64[s->fC]->f2F = 1;
                    if (s->f0 > 0) {
                        V4_24380 *arr = (V4_24380 *)func_001E8A44(s->f0 * 16);
                        if (arr)
                            func_00011FF0(arr, 0x10, s->f0, D_00021290);
                        s->f10 = arr;
                        for (k = 0; k < s->f0; k++) {
                            V4_24380 v;
                            v.x = 0.0f;
                            v.y = 0.0f;
                            v.z = 0.0f;
                            v.w = 1.0f;
                            func_001ADCC0(buf, 0x20, D_00276444, i + 1, k + 1);
                            ini->func_00168CB0(buf, &D_002A0F74, &v);
                            ((V4_24380 *)s->f10)[k] = v;
                            ((V4_24380 *)s->f10)[k].w = 0.0f;
                        }
                    } else {
                        s->f10 = 0;
                    }
                }
            }
        }
    }
    if (ini->func_00169710(D_0027643C)) {
        ini->func_00168C20(D_0027642C, 0, &cnt);
        if (cnt > 0 && start != -1) {
            if (f60 == 0) {
                f30 = cnt;
                n = f30;
                start = 0;
                f60 = (D217F0_24380 **)func_001E8A44(n * 4);
            } else {
                start = f30;
                f30 = start + cnt;
                n = f30;
                f60 = (D217F0_24380 **)func_001E83E8(f60, n * 4);
            }
            if (start < n) {
                for (i = start; i < n; i++) {
                    void *m = func_001E8A44(0x7c);
                    D217F0_24380 *o = m ? ((D217F0_24380 *)m)->func_000217F0(1) : 0;
                    f60[i] = o;
                    func_001ADCC0(buf, 0x10, D_00276424, i - start + 1);
                    ini->func_00169710(buf);
                    o->func_001D3F50();
                    o->func_00021890(ini, start);
                    func_001577A0(f60[i], -1);
                }
            }
        }
        ini->func_00168C20(D_00276410, 0, &cnt);
        if (cnt > 0 && start != -1) {
            if (f5C == 0) {
                f40 = cnt;
                n = f40;
                start = 0;
                f5C = (Seg5C_24380 **)func_001E8A44(n * 4);
            } else {
                start = f40;
                f40 = start + cnt;
                n = f40;
                f5C = (Seg5C_24380 **)func_001E83E8(f5C, n * 4);
            }
            if (start < n) {
                int len = 0;
                char *p = D_002A48F8;
                while (*p++)
                    len++;
                if (len > 0x103)
                    len = 0x103;
                func_001E8920(buf2, D_002A48F8, len);
                func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5348, D_002A47F0);
                buf2[len] = 0;
                ini->func_00169710(D_002A48F8);
                for (i = start; i < n; i++) {
                    Seg5C_24380 *s = (Seg5C_24380 *)func_001E8A44(8);
                    void *m;
                    f5C[i] = s;
                    func_001ADCC0(buf, 0x20, D_002763F4, i + 1);
                    ini->func_00168BE0(buf, 0, buf2, -1);
                    ini->func_00168C20(D_002763E4, 0, &t);
                    s->f0 = t - 1;
                    m = func_001E8A44(0x20c);
                    s->f4 = m ? ((Obj20C_24380 *)m)->func_001CF740(
                                   *(void **)((char *)D_002A8490 + 4),
                                   0, 1) : 0;
                    ((Obj20C_Vtbl_24380 *)s->f4->vtbl)->v10(1, 1, 0, 0, buf2);
                }
                len = 0;
                p = buf2;
                while (*p++)
                    len++;
                if (len > 0x103)
                    len = 0x103;
                func_001E8920(D_002A48F8, buf2, len);
                D_002A48F8[len] = 0;
            }
        }
    }
    if (ini->func_00169710(D_002763D0)) {
        ini->func_00168C20(D_002763BC, 0, &cnt);
        if (cnt > 0 && start != -1) {
            if (f6C == 0) {
                f3C = cnt;
                n = f3C;
                start = 0;
                f6C = (int (*)[2])func_001E8A44(n * 8);
            } else {
                start = f3C;
                f3C = start + cnt;
                n = f3C;
                f6C = (int (*)[2])func_001E83E8(f6C, n * 8);
            }
            if (start < n) {
                total = 0;
                for (i = start; i < n; i++) {
                    func_001ADCC0(buf, 0x40, D_002763AC, i - start + 1);
                    ini->func_00169710(buf);
                    ini->func_00168C20(D_00276388, 0, &t);
                    ini->func_00168C20(D_00276378, 0, &j);
                    t += start;
                    if (t < 0)
                        t = 0;
                    ((int *)f6C)[i * 2] = t;
                    ((int *)f6C)[i * 2 + 1] = j;
                    total += j;
                }
                if (total > 0) {
                    if (f60 == 0) {
                        f60 = (D217F0_24380 **)func_001E8A44((f30 + total) * 4);
                    } else {
                        f60 = (D217F0_24380 **)func_001E83E8(f60, (f30 + total) * 4);
                    }
                    i = f30;
                    for (k = 0; k < n; k++) {
                        func_001ADCC0(buf, 0x20, D_00276378, k + 1);
                        ini->func_00169710(buf);
                        for (j = 0; j < ((int *)f6C)[k * 2 + 1]; j++) {
                            void *m = func_001E8A44(0x7c);
                            D217F0_24380 *o = m ? ((D217F0_24380 *)m)->func_000217F0(1) : 0;
                            f60[i] = o;
                            o->f7a = 1;
                            o->func_001D3F50();
                            o->func_00021890(ini, start);
                            func_001577A0(f60[i], -1);
                            i++;
                        }
                    }
                    f30 += total;
                }
            }
        }
    }
    if (ini->func_00169710(D_00276370)) {
        ini->func_00168C20(D_0027635C, 0, &f44);
        if (f44 > 0) {
            f70 = (Obj138_24380 **)func_001E8A44(f44 * 4);
            k = 1;
            for (i = 0; i < f44; i++) {
                Obj138_24380 *o;
                int t20;
                int t14;
                func_001ADCC0(buf, 0x10, D_0027634C, k);
                ini->func_00169710(buf);
                ini->func_00168C20(D_00276328, 0, &t20);
                ini->func_00168C20(D_00276314, 0, &t14);
                {
                    void *m = func_001E8A44(0x138);
                    if (m) {
                        o = (Obj138_24380 *)m;
                        o->vtbl = D_00276218;
                        o->f8 = t20;
                        o->f10 = t14;
                        o->f14 = f50;
                        o->f18 = (void **)func_001E8A44(f50 * 4);
                        o->fC = (void **)func_001E8A44(o->f8 * 4);
                        o->f4 = 0;
                        o->f34[0] = 0;
                        o->f1C = 4.0f;
                        o->f20 = 1.3f;
                        o->f24 = 20.0f;
                        o->f28 = 10.0f;
                        o->f2C = 10.0f;
                        o->f30 = 10.0f;
                    } else {
                        o = 0;
                    }
                }
                f70[i] = o;
                ini->func_00168BE0(D_00276310, D_00275630, o->f34, 0x104);
                for (j = 1; j <= o->f8; j++) {
                    func_001ADCC0(buf, 0x20, D_00276300, j);
                    ini->func_00168BE0(D_00275630, buf, buf2, 0x104);
                    ini->func_00168BE0(D_00275630, buf2, buf, 0x104);
                }
                for (j = 0; j < f50; j++) {
                    void *m = func_001E8A44(0x38);
                    o->f18[j] = m ? ((AmbientDebris *)m)->func_00024140(j, f50 / 3) : 0;
                    func_001577A0(o->f18[j], -1);
                }
                k++;
            }
        }
    }
}
