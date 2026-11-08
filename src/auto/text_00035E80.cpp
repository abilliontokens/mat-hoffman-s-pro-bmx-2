/* 2 functions from 0x00035E80 to 0x000363E0, found by Ghidra. */
#include "common.h"

struct Vec4_000361F0 {
    float x, y, z, w;
    Vec4_000361F0() { x = y = z = 0; w = 1; }
    Vec4_000361F0(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};

#include <string.h>
#include "asm_helpers.h"

static inline int Min_00035E80(volatile int a, volatile int b) { int y = b, x = a; return y > x ? x : y; }


void *func_001E8A44(unsigned int size);
void func_001E891B(void *ptr);

/* config file reader, 0x4CC bytes */
struct S_00035E80_Stream {
    char pad0[0x4CC];
    static void *operator new(unsigned int size) { return func_001E8A44(size); }
    static void operator delete(void *ptr) { func_001E891B(ptr); }
    S_00035E80_Stream *func_00168280(void);
    int func_00169490(const char *path, int flags);
    void func_001691E0(void);
    void func_00169710(const char *name);
    void func_00168A10(const char *key, int *dst);
    void func_00168550(const char *key, char *dst, int n);
    void func_00168CB0(const char *key, void *def, void *dst);
    void func_00168CB0(const char *key, const Vec4_000361F0 &def, Vec4_000361F0 &dst);
};

struct S_00035E80_Line;

/* grind line manager (owner->f530) */
struct S_00035E80_Mgr {
    S_00035E80_Line *func_00159E90(char *name, Vec4_000361F0 *p0, Vec4_000361F0 *p1, char *s2, char *s3, int n);
    void func_00159C40(S_00035E80_Line *line);
};

struct S_00035E80_Owner {
    char pad0[0x530];
    S_00035E80_Mgr *f530;
};

struct S_00035E80_Out {
    char pad0[0x14];
    int f14;
    S_00035E80_Line **f18;
};

struct C_00035E80 {
    char pad0[0x64];
    S_00035E80_Owner *f64;
    int func_00035E80(int a1, const char *path, S_00035E80_Out *out);
};

extern char D_00276DCC[], D_00276DBC[], D_00276DB0[], D_00276DA4[], D_00276D98[], D_00276D8C[];
int func_001ADCC0(char *dst, int size, const char *fmt, ...);
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);
extern "C" char *func_001E8AC0(const char *s, int c);

/* the light/colour object a page owns (f44->f5C) */
struct S_000361F0_Gfx {
    char pad0[4];
    int f4;
    void func_00194E60(Vec4_000361F0 v);
    void func_00194EE0(Vec4_000361F0 v);
    void func_00194F10(Vec4_000361F0 *out);
};

struct S_000361F0_Owner {
    char pad0[0x5C];
    S_000361F0_Gfx *f5C;
};

extern float D_002A14D4;
extern float D_002A14D8;
extern float D_002A14DC;

struct C_000361F0 {
    char pad0[0x44];
    S_000361F0_Owner *f44;
    char pad48[0x428 - 0x48];
    int f428;
    char pad42C[4];
    int f430;
    int f434;
    char pad438[4];
    int f43C;
    float f440;
    char pad444[0x46C - 0x444];
    float f46C;
    float f470;
    char pad474[0x4A4 - 0x474];
    int f4A4;
    char pad4A8[4];
    Vec4_000361F0 f4AC;
    char pad4BC[0x52C - 0x4BC];
    Vec4_000361F0 f52C;
    void func_000361F0(int flag);
};

int C_00035E80::func_00035E80(int a1, const char *volatile path, S_00035E80_Out *out)
{
    Vec4_000361F0 pos0;
    Vec4_000361F0 pos1;
    char buf[0x104];
    char secName[0x14];
    char key1[0x1e];
    char name[0x1e];
    char key2[0x20];
    int count;
    int subCount;
    int total = 0;
    int idx = 0;
    int i, j;
    int len;
    int lim;
    int n;
    char *dot;

    S_00035E80_Stream *stream;
    stream = new S_00035E80_Stream;
    if (stream)
        stream = stream->func_00168280();
    else
        stream = 0;
    if (!stream->func_00169490(path, 0)) {
        if (stream) {
            stream->func_001691E0();
            delete stream;
        }
        return 0;
    }
    len = strlen(path);
    lim = 0x103;
    n = AsmMinI(lim, len);
    func_001E8920(buf, path, n);
    buf[n] = 0;
    dot = func_001E8AC0(buf, '.');
    if (dot) memset(dot, 0, strlen(dot));
    stream->func_00169710(D_00276DCC);
    stream->func_00168A10(D_00276DBC, &count);
    for (i = 0; i < count; i++) {
        func_001ADCC0(secName, 0x14, D_00276DB0, i + 1);
        stream->func_00169710(secName);
        stream->func_00168A10(D_00276DA4, &subCount);
        total = total + (subCount - 1);
    }
    out->f14 = total;
    out->f18 = (S_00035E80_Line **)func_001E8A44(total * 4);
    for (i = 0; i < count; i++) {
        func_001ADCC0(secName, 0x14, D_00276DB0, i + 1);
        stream->func_00169710(secName);
        stream->func_00168550(D_00276D98, name, -1);
        stream->func_00168A10(D_00276DA4, &subCount);
        for (j = 0; j < subCount - 1; j++) {
            S_00035E80_Line *line;
            func_001ADCC0(key1, 0x1e, D_00276D8C, j + 1);
            func_001ADCC0(key2, 0x1e, D_00276D8C, j + 2);
            stream->func_00168CB0(key1, Vec4_000361F0(0.0f, 0.0f, 0.0f, 1.0f), pos0);
            stream->func_00168CB0(key2, Vec4_000361F0(0.0f, 0.0f, 0.0f, 1.0f), pos1);
            line = f64->f530->func_00159E90(name, &pos0, &pos1, 0, 0, a1);
            f64->f530->func_00159C40(line);
            out->f18[idx] = line;
            idx = idx + 1;
        }
    }
    if (stream) {
        stream->func_001691E0();
        delete stream;
    }
    return 1;
}

