/* 11 functions from 0x001B3E70 to 0x001B4E20, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

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

template <class T> inline const T &tmin(const T &a, const T &b) {
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

extern char D_00276310[];
extern char D_002764EC[];
extern char D_002764D8[];
extern char D_0027CEF0[];
extern char D_0027D060[];
extern char D_0027D050[];
extern char D_0027D044[];
extern char D_0027D030[];
extern char D_0027D020[];
extern char D_0027D008[];
int func_001E9040(char *a, char *b);

struct S_001B4C90_Stream {
    void func_00168BE0(char *a, char *b, char *buf, int size);
    void func_00168C50(char *name, int a, int *p);
    void func_00168C20(char *name, int a, int *p);
};

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
    int func_001B4C90(S_001B4C90_Stream *stream);
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
    virtual void v32(int a, int b, int c, int d);
};
struct V4_3E70 {
    float x, y, z, w;
    __forceinline V4_3E70() {}
    __forceinline V4_3E70(float a, float b, float c, float d = 1.0f) : x(a), y(b), z(c), w(d) {}
    __forceinline V4_3E70 operator+(const V4_3E70 &o) const { return V4_3E70(x+o.x,y+o.y,z+o.z); }
    __forceinline V4_3E70 operator-(const V4_3E70 &o) const { return V4_3E70(x-o.x,y-o.y,z-o.z); }
    __forceinline V4_3E70 operator-() const { return V4_3E70(-x,-y,-z); }
    __forceinline V4_3E70 operator*(float f) const { return V4_3E70(x*f,y*f,z*f); }
};
static __forceinline float MinF_3E70(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float MaxF_3E70(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
extern float D_0027A060;
extern float D_002754B0;
extern float D_002755E0;
int func_001E8833();
void func_001B3BA0(void *out, void *in);

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
    V4_3E70 v40; V4_3E70 v50; V4_3E70 v60; V4_3E70 v70; V4_3E70 v80; V4_3E70 v90;
    float fa0;
    float fa4;
    unsigned char fa8; unsigned char fa9; unsigned char faa;
    char padAB[0xC0 - 0xAB];
    void func_001B3E70(V4_3E70 *a0, V4_3E70 *a1, float a2, int a3, float a4);
    void func_001B4970();
    void func_001B49B0();
    void func_001B4A20();
};

struct C_001B4A40 {
    int unk0;
    const char *f4;
    void Tokenizer_SetString(const char *str);
};

struct C_001B4A40Ret {
    int unk0;
    const char *f4;
    C_001B4A40Ret *Tokenizer_SetString(const char *str);
};

struct C_001B4B70 {
    int unk0;
    void func_001B4B70(void);
};


float sqrtf(float);
int func_001E8858(float x);
void TireTrack::func_001B3E70(V4_3E70 *a0, V4_3E70 *a1, float a2, int a3, float a4)
{
    float clamped;
    unsigned char bl;
    float acc;
    float dist;
    float off;
    V4_3E70 n1;
    V4_3E70 n2;
    V4_3E70 diff;
    int color;
    int i;
    clamped = AsmMinF(a4, 1.0f);
    clamped = AsmMaxF(clamped, 0.0f);
    a4 = clamped;
    bl = (unsigned char)(int)(clamped * D_0027A060);
    if (f34) {
        v40 = *a0;
        v50 = *a1;
        f34 = 0;
    }
    v60 = *a0;
    v70 = *a1;
    acc = fa4;
    acc += (float)func_001E8833() * D_002754B0 * D_002755E0;
    {
        float sq;
        float r;
        float dx = v40.x - v60.x;
        float dy = v40.y - v60.y;
        float dz = v40.z - v60.z;
        sq = dz * dz + dy * dy + dx * dx;
        r = AsmSqrtF(sq);
        dist = r / a2;
    }
    off = 0.0f;
    if (f30 > 0) {
        off = dist + fa0;
    }
    n1.x = n1.y = n1.z = 0; n1.w = 1;
    n2.x = n2.y = n2.z = 0; n2.w = 1;
    func_001B3BA0(&n1, &(v40 - v60));
    AsmVec3Cross(&n2.x, &n1.x, &v70.x);
    v80 = ((-n2) * a2 + v70 * acc) + v60;
    v90 = (n2 * a2 + v70 * acc) + v60;
    int first = f30;
    int next = first + 1;
    int end = first + 2;
    if (f30 == 0) {
        for (i = 2; i < 0x10; i += 2) {
            f24->v29(f2c, i, &v70);
            f24->v28(f2c, i, &v80);
            f24->v31(f2c, i, 0);
            f24->v29(f2c, i + 1, &v70);
            f24->v28(f2c, i + 1, &v90);
            f24->v31(f2c, i + 1, 0);
        }
        f24->v29(f2c, 0, &v70);
        f24->v28(f2c, 0, &v80);
        f24->v31(f2c, 0, ((((unsigned int)bl << 8) | fa8) << 8 | fa9) << 8 | faa);
        f24->v32(f2c, 0, 0, 0);
        f24->v29(f2c, 1, &v70);
        f24->v28(f2c, 1, &v90);
        f24->v31(f2c, 1, ((((unsigned int)bl << 8) | fa8) << 8 | fa9) << 8 | faa);
        f24->v32(f2c, 1, 0, 0x3f800000);
        f30 += 2;
        v40 = v60;
    }
    else {
        if (first == 2 && f38) {
            V4_3E70 left = ((-n2) * a2 + v50 * acc) + v40;
            V4_3E70 right = (n2 * a2 + v50 * acc) + v40;
            f24->v28(f2c, 0, &left);
            f24->v28(f2c, 1, &right);
            f38 = 0;
        }
        f24->v29(f2c, first, &v70);
        f24->v29(f2c, next, &v70);
        f24->v28(f2c, first, &v80);
        f24->v28(f2c, next, &v90);
        f24->v31(f2c, first, ((((unsigned int)bl << 8) | fa8) << 8 | fa9) << 8 | faa);
        f24->v31(f2c, next, ((((unsigned int)bl << 8) | fa8) << 8 | fa9) << 8 | faa);
        f24->v32(f2c, first, *(int *)&off, 0);
        f24->v32(f2c, next, *(int *)&off, 0x3f800000);
        for (i = end; i < 16; ++i) {
            f24->v28(f2c, i, &v60);
            f24->v31(f2c, i, (fa8 << 16) | (fa9 << 8) | faa);
        }
        float dx = v40.x - v60.x;
        float dy = v40.y - v60.y;
        float dz = v40.z - v60.z;
        if (AsmSqrtF(dz*dz+dy*dy+dx*dx) > *(float *)&a3) {
            f30 += 2;
            fa0 += dist;
            v40 = v60;
            v50 = v70;
        }
        if (f30 >= 16) {
            f30 = 0;
            fa0 = 0;
            if (++f2c >= f28) f2c = 0;
        for (i = 2; i < 0x10; i += 2) {
            f24->v29(f2c, i, &v70);
            f24->v28(f2c, i, &v80);
            f24->v31(f2c, i, 0);
            f24->v29(f2c, i + 1, &v70);
            f24->v28(f2c, i + 1, &v90);
            f24->v31(f2c, i + 1, 0);
        }
        f24->v29(f2c, 0, &v70);
        f24->v28(f2c, 0, &v80);
        f24->v31(f2c, 0, ((((unsigned int)bl << 8) | fa8) << 8 | fa9) << 8 | faa);
        f24->v32(f2c, 0, 0, 0);
        f24->v29(f2c, 1, &v70);
        f24->v28(f2c, 1, &v90);
        f24->v31(f2c, 1, ((((unsigned int)bl << 8) | fa8) << 8 | fa9) << 8 | faa);
        f24->v32(f2c, 1, 0, 0x3f800000);

            f30 += 2;
        }
    }
}

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

#pragma intrinsic(strlen)
/* Points the tokenizer at `str`, or clears it when the string is empty.
   The original called strlen, which the compiler expanded inline. */
C_001B4A40Ret *C_001B4A40Ret::Tokenizer_SetString(const char *str)
{
    f4 = strlen(str) ? str : 0;
    return this;
}
char *C_001B4A70::func_001B4A70(char *delims) {
 char *p = f4;
 char c;
 if (!p) return 0;
 f0=p;
 p=func_001EA3D0(p,delims);
 f4=p;
 if(p) {
 *p=0;
 f4++;
 c=*f4;
 if(c==0) {f4=0;return f0;}
 if(func_001E9260(delims,c)) {
 int d;
 do {
 d=*(f4=f4+1);
 } while(func_001E9260(delims,d));
 }
 }
 return f0;
}

C_001B4AF0 *C_001B4AF0::func_001B4AF0(void) {
    vtbl = (void *)&D_0028CA64;
    int limit = sizeof(f4) - 1;
    int count = AsmMinI(limit, strlen("none"));
    func_001E8920(f4, (const char *)&D_002764F0, count);
    f4[count] = 0;
    f108 = 0;
    f10C = 1;
    f110 = 1;
    return this;
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
    ((C_001B4AF0 *)this)->func_001B4AF0();
    vtbl = (void *)&D_0028CA7C;
    int limit = sizeof(f114) - 1;
    int count = AsmMinI(limit, 4);
    func_001E8920(f114, (const char *)&D_002764F0, count);
    f114[count] = 0;
    f218 = 0;
    f21C = 0;
    f220 = 0;
    f224 = 1;
    f228 = 1;
    f22C = 0;
    f230 = 0;
    return this;
}

int C_001B4BE0::func_001B4C90(S_001B4C90_Stream * volatile stream) {
    char buf[0x104];
    ((C_001B4AF0 *)this)->func_001B4B80((S_001B4B80_Stream *)stream);
    stream->func_00168BE0(D_00276310, (char *)&D_002764F0, buf, 0x104);
    int len = func_001E9040(buf, D_0027CEF0);
    int count = AsmMinI(len, 0x32);
    func_001E8920((char *)this + 4, buf, count);
    ((char *)this)[count + 4] = 0;
    stream->func_00168BE0(D_002764EC, (char *)&D_002764F0, this->f114, -1);
    stream->func_00168C50(D_002764D8, 0, &this->f218);
    stream->func_00168C20(D_0027D060, 0, &this->f21C);
    stream->func_00168C20(D_0027D050, 0, &this->f220);
    stream->func_00168C20(D_0027D044, 1, &this->f224);
    stream->func_00168C20(D_0027D030, 1, &this->f228);
    stream->func_00168C20(D_0027D020, 0, &this->f22C);
    stream->func_00168C20(D_0027D008, 0, &this->f230);
    return 1;
}

