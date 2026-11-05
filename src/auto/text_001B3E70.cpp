/* 11 functions from 0x001B3E70 to 0x001B4E20, found by Ghidra. */
#include "common.h"

extern int D_002AA8E0;
extern int D_002AA8C0;
extern int D_0028CA64;
extern int D_0028CA7C;
extern int D_002764F0;
extern char D_00275680[];
extern char D_0027CED8[];
extern char D_0028CA68[];

extern "C" int strlen(const char *s);
char *func_001E8920(char *dst, const char *src, int n);
char *func_001E9260(char *str, int ch);
char *func_001EA3D0(const char *str, const char *ctrl);

static inline const int &min_ref(const int &a, const int &b) {
    return (b < a) ? b : a;
}

struct S_001B4B80_Stream {
    int func_00168C20(const char *name, int a, int *p);
};

struct C_001B4A70 {
    char *f0;
    char *f4;
    char *func_001B4A70(char *delims);
};

/* DynamicModelTempData */
struct C_001B4AF0 {
    void *vtbl;
    char f4[0x104];
    int f108;
    int f10C;
    int f110;
    int func_001B4B80(S_001B4B80_Stream *stream);
    C_001B4AF0 *func_001B4AF0(void);
};

static inline void set_name(C_001B4AF0 *&self, int limit)
{
    int count = limit > (int)strlen("none") ? (int)strlen("none") : limit;
    func_001E8920(self->f4, (const char *)&D_002764F0, count);
    self->f4[count] = 0;
}

static inline void copy_name(C_001B4AF0 *&self, const int &limit, int &count)
{
    count = limit > strlen("none") ? strlen("none") : limit;
    func_001E8920(self->f4, (const char *)&D_002764F0, count);
    self->f4[count] = 0;
}

/* ProceduralTempData */
struct C_001B4BE0 {
    void *vtbl;
    char pad4[0x110];
    char f114[0x104];
    int f218;
    int f21C;
    int f220;
    int f224;
    int f228;
    int f22C;
    int f230;
    C_001B4BE0 *func_001B4BE0(void);
};

/* vtable of the object at TireTrack+0x24 (28..31 are the slots used here) */
struct S_TireTrackSurf {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28(int a, int b, void *c);
    virtual void v29(int a, int b, void *c);
    virtual void v30();
    virtual void v31(int a, int b, int c);
};

struct C_00157960 {
    void func_00157960();
};

/* TireTrack */
struct TireTrack {
    void *vtbl;
    char pad4[0x20];
    S_TireTrackSurf *f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    char pad40[0x60];
    int fa0;
    void func_001B4970();
    void func_001B49B0();
    void func_001B4A20();
};

struct C_001B4A40 {
    int unk0;
    const char *f4;
    void func_001B4A40(const char *str);
};

struct C_001B4A40Ret {
    int unk0;
    const char *f4;
    C_001B4A40Ret *func_001B4A40(const char *str);
};

struct C_001B4B70 {
    int unk0;
    void func_001B4B70(void);
};


void TireTrack::func_001B4970()
{
    if (f34 == 0) {
        int n = f2c + 1;
        f30 = 0;
        fa0 = 0;
        f2c = n;
        if (n >= f28) {
            f2c = 0;
        }
        f38 = 1;
        f34 = 1;
    }
}

void TireTrack::func_001B49B0()
{
    int i;
    int j;
    for (i = 0; i < f28; i++) {
        for (j = 0; j < 16; j++) {
            f24->v31(i, j, 0);
            f24->v29(i, j, &D_002AA8E0);
            f24->v28(i, j, &D_002AA8C0);
        }
    }
    f30 = 0;
    fa0 = 0;
    f2c = 0;
}

void TireTrack::func_001B4A20()
{
    if (f3c != 0) {
        func_001B49B0();
        f3c = 0;
    }
    ((C_00157960 *)this)->func_00157960();
}

C_001B4A40Ret *C_001B4A40Ret::func_001B4A40(const char *str)
{
    const char *p = str;
    const char *first = p + 1;
    char c;
    do {
        c = *p++;
    } while (c != 0);
    f4 = (p - first) ? str : 0;
    return this;
}

char *C_001B4A70::func_001B4A70(char *delims) {
    char *p = f4;
    char c;
    if (p == 0) {
        return 0;
    }
    f0 = p;
    p = func_001EA3D0(p, delims);
    f4 = p;
    if (p != 0) {
        *p = 0;
        f4++;
        c = *f4;
        if (c == 0) {
            f4 = 0;
            return f0;
        }
        while (func_001E9260(delims, c) != 0) {
            f4++;
            c = *f4;
        }
    }
    return f0;
}

C_001B4AF0 *C_001B4AF0::func_001B4AF0(void) {
    C_001B4AF0 * volatile self = this;
    volatile int limit;
    int count;

    self->vtbl = (void *)&D_0028CA64;
    limit = sizeof(f4) - 1;
    count = limit > strlen("none") ? strlen("none") : limit;
    func_001E8920(self->f4, (const char *)&D_002764F0, count);
    self->f4[count] = 0;
    self->f108 = 0;
    self->f10C = 1;
    self->f110 = 1;
    return self;
}

void C_001B4B70::func_001B4B70(void) {
    extern int D_0028CA64;
    unk0 = (int)&D_0028CA64;
}

int C_001B4AF0::func_001B4B80(S_001B4B80_Stream *stream) {
    stream->func_00168C20(D_00275680, 0, &f108);
    stream->func_00168C20(D_0027CED8, 1, &f10C);
    stream->func_00168C20(D_0028CA68, 1, &f110);
    f110--;
    return 1;
}

C_001B4BE0 *C_001B4BE0::func_001B4BE0(void) {
    C_001B4BE0 *self;
    int limit;
    int count;
    self = this;
    ((C_001B4AF0 *)self)->func_001B4AF0();
    self->vtbl = (void *)&D_0028CA7C;
    limit = sizeof(f114) - 1;
    if (limit > strlen("none")) {
        count = strlen("none");
    } else {
        count = limit;
    }
    func_001E8920(self->f114, (const char *)&D_002764F0, count);
    self->f114[count] = 0;
    self->f218 = 0;
    self->f21C = 0;
    self->f220 = 0;
    self->f224 = 1;
    self->f228 = 1;
    self->f22C = 0;
    self->f230 = 0;
    return self;
}

