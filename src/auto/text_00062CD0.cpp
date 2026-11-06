/* 6 functions from 0x00062CD0 to 0x00063CD0, found by Ghidra. */
#include "common.h"
#include <string.h>

#include <xmmintrin.h>

static __forceinline float Min_00062CD0(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float MinR_00062CD0(const float &a, const float &b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }

struct Vec4_62 {
    float x, y, z, w;
    Vec4_62() {}
    Vec4_62(float x_, float y_, float z_) { x = x_; y = y_; z = z_; w = 1.0f; }
};
static inline Vec4_62 operator+(const Vec4_62 &a, const Vec4_62 &b) { return Vec4_62(a.x + b.x, a.y + b.y, a.z + b.z); }
static inline Vec4_62 operator-(const Vec4_62 &a, const Vec4_62 &b) { return Vec4_62(a.x - b.x, a.y - b.y, a.z - b.z); }
static inline Vec4_62 operator*(const Vec4_62 &a, float s) { return Vec4_62(a.x * s, a.y * s, a.z * s); }

struct C_Elem_62 {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x1C];
    float f28;
    float f2C;
    char pad30[0x28];
    unsigned char f58;
};

struct C_00062CD0 {
    char pad0[0x12C];
    C_Elem_62 *f12C[30];
    C_Elem_62 *f1A4[33];
    int f228;
    int pad22C;
    int f230;
    float f234;
    void func_00062CD0(float dt);
};

extern float D_002A1D08;
extern float D_002A1D88, D_002A1D8C, D_002A1D90;
extern float D_002A1DC8, D_002A1DCC, D_002A1DD0;
extern float D_002A1DD8, D_002A1DDC, D_002A1DE0;
extern float D_002A1E18, D_002A1E1C, D_002A1E20;
extern float D_00278784;

struct S_func_000639B0_arg1 { int f0; };
struct C_Elem_62;

struct C_0005E840 {
    void func_0005E840(char *s);
};

struct C_5C020Ret_62 {
    char pad0[4];
    int f4;
};

struct C_0005C020 {
    C_5C020Ret_62 *func_0005C020(int param);
};

struct C_Mgr_62 {
    char pad0[0x2C0];
    C_0005C020 *f2C0;
    char pad2C4[0x14];
    int f2D8;
};

struct C_GObj4_62 {
    char pad0[0xEA8];
    char *fEA8;
};

struct C_GObj2E8_62 {
    char pad0[4];
    C_GObj4_62 *p4;
};

struct Clamp_63 { char pad[0x10]; float f10, f14; };
struct Mid_63 { Clamp_63 *func_0018C070(); };
struct Lookup_63 { int *func_0018C160(int); };
struct W_63 { Clamp_63 *func_001D5AA0(); };
extern float D_00275AEC;
extern int D_002786A0, D_00278690;
struct C_00063080 {
    char pad0[0xfc];
    W_63 *f[0x1f0/4 - 0x3f + 1];
    void func_001578D0();
    void func_00063080();
};
#define CL(o) if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000; if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;

struct C_Root_62 {
    char pad0[0x2E0];
    C_Mgr_62 *f2E0;
    char pad2E4[4];
    C_GObj2E8_62 *p2E8;
    Lookup_63 *p2EC;
};

struct C_000634D0 {
    char pad0[0x29C];
    C_0005E840 *f29C;
    void func_000634D0(void);
};

extern C_Root_62 *D_002A8490;
extern char D_00275630[];
extern char D_002787F0[];
extern char D_002E2E2E[];
char *func_001E8920(char *dst, const char *src, int n);
char *func_001E8AF0(const char *s, const char *pat);
extern int D_00277038;
void func_001ADCC0(char *buf, int size, char *fmt, int val);
void func_001AC330(char *dest, char *fmt, char *arg);

void C_000634D0::func_000634D0(void)
{
    char dest[0x40];
    char buf[5];
    C_Mgr_62 *mgr = D_002A8490->f2E0;

    func_001ADCC0(buf, 5, (char *)&D_00277038,
                  mgr->f2C0->func_0005C020(mgr->f2D8)->f4);
    func_001AC330(dest, D_002A8490->p2E8->p4->fEA8, buf);
    f29C->func_0005E840(dest);
}

char* __stdcall func_000639B0(int value, char* out)
{
    char buf[64];
    int i, o, n;
    memset(buf, 0, 64);
    *(int*)out = 0;
    func_001ADCC0(buf, 0x40, (char*)&D_00277038, value);
    value = strlen(buf) % 3;
    o = 0;
    n = strlen(buf);
    for (i = 0; i < n; i++) {
        char c = buf[i];
        if (c == ' ') {
            strcat(out, buf + i);
            break;
        }
        if (i > value - 1 && i != 0 && ((i - value) == 0 || (i - value) % 3 == 0)) {
            out[o++] = ',';
            out[o++] = c;
        } else {
            out[o++] = c;
        }
    }
    out[o] = 0;
    return out;
}

void __stdcall func_00063AD0(char *str, C_0005E840 **lines, int width, int count)
{
    char buf[780];
    char last[780];
    int i;
    int col;
    int pos;
    int start;
    int lineStart;
    int lastSpace;
    int line;
    int done;
    int n;
    int maxLine;
    char *p;

    for (i = 0; i < count; i++)
        lines[i]->func_0005E840(D_00275630);

    col = 0;
    lastSpace = 0;
    line = 0;
    done = 0;
    pos = 0;
    start = 0;
    lineStart = 0;
    maxLine = count - 1;
    while (line < maxLine) {
        if (done)
            break;
        buf[0] = 0;
        if (str[pos] == ' ')
            lastSpace = pos;
        else if (str[pos] == 0)
            done = 1;
        pos++;
        col++;
        if (col >= width || done) {
            if (done) {
                strcpy(buf, str + start);
                lines[line]->func_0005E840(buf);
            } else {
                n = lastSpace - lineStart;
                func_001E8920(buf, str + start, n);
                buf[n] = 0;
                lines[line]->func_0005E840(buf);
                line++;
                lineStart = lastSpace + 1;
                start = lineStart;
                col = 0;
            }
        }
    }
    if (line == maxLine) {
        func_001E8920(last, str + start, width);
        last[width] = 0;
        p = func_001E8AF0(last, D_002787F0);
        if ((int)strlen(last) >= width)
            *(int *)(p + 4) = (int)D_002E2E2E;
        lines[line]->func_0005E840(last);
    }
}

