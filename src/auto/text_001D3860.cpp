/* 26 functions from 0x001D3860 to 0x001D47C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>

struct S_001D3F90_Size {
    unsigned int lo;
    unsigned int hi;
};

int __stdcall func_001DE942(char *path, S_001D3F90_Size *a, S_001D3F90_Size *b, S_001D3F90_Size *c);

struct C_001D3F50;

struct C_001D3F90 {
    int f0;
    char f4[1];
    int func_001D3F90(unsigned int *a, unsigned int *b, unsigned int *c);
};

struct C_001D3E30 {
    char unk0;
    char pad1[0x1E];
    char unk1F;
    char pad20[0x3C];
    int unk5C;
    int unk60;
    char unk64;
    char pad65[0x1E];
    char unk83;
    char pad84[0x1E];
    char unkA2;
    char padA3[0x1E];
    char unkC1;
    C_001D3E30* func_001D3E30(void);
    void func_001D3F20(const char *s, int n);
    void func_001D3E80(const char *s);
    void func_001D3EA0(int n, const char *a, const char *b, const char *c);
};

struct C_001D4010 {
    int func_001D4010(int a);
};

struct C_001D3CA0 {
    undefined4 func_001D3CA0(byte param_1);
};

struct C_001D3E60 {
    void func_001D3E60(int a0);
};

struct C_001D3F50 {
    C_001D3F50* func_001D3F50(void);
};

static __forceinline void ClearInt_001D3F60(int *p)
{
    *p = 0;
}


inline void *operator new(unsigned int, void *p) { return p; }

struct S_001D3F60_Zero {
    int x;
    S_001D3F60_Zero() { x = 0; }
};

struct S_001D3F60_Sub {
    int x;
    __forceinline void reset(void)
    {
        x = 0;
    }
};

struct C_001D3F60 : C_001D3F50 {
    int f0;
    union {
        int f4;
        S_001D3F60_Sub sub4;
    };
    int f8;
    C_001D3F60 *func_001D3F60(void);
};

extern int D_0028F474;
extern int D_00010000;
extern int D_00020000;
extern int D_00040000;
extern int D_00080000;
extern char D_00278068[];
extern char D_0028F0A8[];
extern char D_0028F510[];
extern int D_0026D8D0;
extern char D_0028F130[];

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
int __stdcall func_001DEF8D(const char *name);
int __stdcall func_001DE51E(void *path, void *find);
int __stdcall func_001DE625(int handle, void *find);
int __stdcall func_001DE66C(int handle);
int __stdcall func_001DE2BB(void *a, void *b, int c, int d, void *e, int f);
void __cdecl func_001DDE3E(char *buf, const char *fmt, ...);
void __cdecl func_001DDE51(char *buf, const char *fmt, ...);
int func_001EA426(const char *a, const char *b);
unsigned __stdcall func_0026EBC5(void *type);
int __stdcall func_0026EBE7(void *type, unsigned *insertions, unsigned *removals);
int __stdcall func_0026ED5B(int port, int slot, char *letter);
int __stdcall func_0026EE8D(int port, int slot);

struct S_001D4200_Find {
    char pad0[0x140];
    char name[0x104];
    char alt[0x100];
};

struct C_001D4200 {
    int unk0;
    char unk4[4];
    int unk8;
    int func_001D4010(int a);
    unsigned func_001D4060(int a);
    int func_001D40E0(int a);
    int func_001D4170(int a);
    int func_001D41D0(int a);
    int func_001D4200(char *out);
    int func_001D4300(unsigned a);
    int func_001D4380(char *out);
    int func_001D4440(const char *a, const char *b, const void *data, unsigned int size);
    int func_001D4720(const char *a, const char *b);
    int func_001D4590(const char *a, const char *b, void *data, unsigned int size);
};
int __stdcall func_001DD15A(int h, void *buf, unsigned int size, unsigned int *got, void *ovl);

int __stdcall func_001DEFD8(const char *name);
int __stdcall func_001DCC3C(const char *path, unsigned int access, unsigned int share, void *sa,
                            unsigned int create, unsigned int attr, void *tmpl);
int __stdcall func_001DD247(int h, const void *buf, unsigned int size, unsigned int *written, void *ovl);
int __stdcall func_001DF361(int a);
int __stdcall func_001DF2EA(int ctx, const void *data, unsigned int len);
int __stdcall func_001DF304(int ctx, void *out);
int __stdcall func_001DD13C(int h);

void __stdcall func_0025ADD0(void *p);
void __stdcall func_0025AA70(void *p);
void __stdcall func_0025AC10(void *p, int a, void *b);
void __stdcall func_00201100(void *p);
void *func_001E8A44(int size);
void *__stdcall func_001FCF20(int w, int h, int levels, int depth, int usage, int format, int type);

struct C_001C3D80 {
    void func_001C3D80(void);
};
extern C_001C3D80 *D_002F07B8;

struct C_001625D0 {
    void func_001625D0(void);
};

struct C_00157920 {
    void func_00157920(void);
};

/* object released through virtual slot 2 */
struct S_001D3AB0_Res {
    virtual void v0();
    virtual void v1();
    virtual void Release();
    char pad4[4];
    int f8;
    int fC;
    char pad10[0xa4 - 0x10];
    int fA4;
    int fA8;
    char padAC[0xb8 - 0xac];
    void *fB8;
    S_001D3AB0_Res *func_001D6AD0(void *param);
};

struct S_001D3C30_Stream {
    unsigned int f0;
    unsigned int f4;
    int f8;
    int fC;
};

struct S_001D3CC0_Entry {
    int f0;
    void *f4;
    int f8;
    int fC;
};

/* resource manager: lookup by name, create through slot 7, set through slot 6 */
struct S_001D3CC0_Mgr {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5();
    virtual void Set(int idx, void *data);
    virtual int Create(char *name, int a);
    char pad4[0x10];
    S_001D3CC0_Entry *f14;
    int func_001AC7B0(char *name, int a);
    void func_0014A8A0(void);
    void func_00142D20(void);
};

struct S_001D3CC0_C {
    char pad0[0x30];
    int f30;
};

struct S_001D3CC0_B {
    char pad0[0xb4];
    S_001D3CC0_C *fB4;
};

struct S_001D3CC0_A {
    int f0;
    S_001D3CC0_B *f4;
};

extern S_001D3CC0_A *D_002A8490;
extern S_001D3CC0_Mgr *D_002A751C;
extern S_001D3CC0_Mgr *D_002A6D84;
extern char D_0028C1F0[];
extern char D_0028F4E8[];
extern char D_002ABC60[];
extern char D_002F0958[];

void __stdcall func_0025BA60(int a, int b);
void __stdcall func_0025B9C0(int a);
void __stdcall func_00258240(void (__stdcall *f)(int), int a);
void *__stdcall func_001FF3C0(int size);
void func_0014A7B0(char *dst, char *src);

#include <xmmintrin.h>

extern float D_002ABC88, D_002ABC8C;
extern int D_0020C6E0, D_0020C6E4, D_0020C6DC, D_0020C6EC, D_0020C6F0, D_0020CA50;
extern int D_00040300, D_00040304, D_00040344, D_00040348;

struct S_001D3860_Slot6C { void func_0014A650(void *p); };
struct S_001D3860_Slot70 { void func_00142D00(void *p); };
struct S_001D3860_G {
    char pad0[0x6c];
    S_001D3860_Slot6C *f6c;
    S_001D3860_Slot70 *f70;
};
extern S_001D3860_G *D_002EFDB8;

void __fastcall func_001FD020(void *p, int v);
void __fastcall func_001FEC30(int n, void *p);
void __stdcall func_00200390(int index, int value);
void *__stdcall func_001FF410(void *buffer, int flags);
void __stdcall func_001FEE00(int stream, void *data, int stride);
void __stdcall func_00200A90(int a, int b, int c);

__declspec(align(16)) struct S_001D3860_Mat {
    float m[16];
    __forceinline void identity(void)
    {
        __m128 z = _mm_setzero_ps();
        ((__m128 *)m)[0] = z;
        ((__m128 *)m)[1] = z;
        ((__m128 *)m)[2] = z;
        ((__m128 *)m)[3] = z;
        m[0] = 1.0f;
        m[5] = 1.0f;
        m[10] = 1.0f;
        m[15] = 1.0f;
    }
};

struct S_001D3860_Coords {
    float f[6];
    S_001D3860_Mat * volatile pm;
    int x[6];
    int w, h;
};

/* the quad vertex func_001D3860 fills */
struct S_001D3860_Vtx {
    float x, y, z;
    unsigned int color;
    float u, v;
};

struct S_001D3860_Locals {
    volatile float f[6];
    S_001D3860_Mat * volatile pm;
    int x[6];
    int w, h;
};

/* XboxMediaControl */
struct C_001D3AB0 {
    void *vtbl;
    char pad4[0x38];
    float f3C;
    float f40;
    S_001D3C30_Stream *unk44;
    int unk48;
    int unk4C;
    int unk50;
    int unk54;
    int unk58;
    int unk5C;
    int unk60;
    int unk64;
    int unk68;
    int unk6C;
    S_001D3AB0_Res *unk70;
    void *unk74;
    void *unk78;
    void *unk7C;
    int func_001D3CC0(char *name);
    void func_001D3B20(char *name);
    void func_001D3800(void);
    int func_001D3860(void);
    void func_001D37C0(void);
    void func_001D3AB0(void);
    void func_001D3C30(void);
};


extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
int C_001D3AB0::func_001D3860(void)
{
    C_001D3AB0 *p = this;
    C_001D3AB0 * volatile q = p;
    _ReadWriteBarrier();
    S_001D3860_Coords c;
    S_001D3860_Mat mat;
    
    
    
    volatile float *out;

    c.w = p->unk70->f8;
    c.h = p->unk70->fC;
    c.x[0] = (int)((float)p->unk54 * D_002ABC88);
    c.x[2] = (int)((float)p->unk5C * D_002ABC88);
    c.x[1] = (int)((float)p->unk58 * D_002ABC8C);
    c.x[3] = (int)((float)p->unk60 * D_002ABC8C);
    _ReadWriteBarrier();
    D_0020C6E0 = 3;
    D_0020C6E4 = 3;
    _ReadWriteBarrier();
    int state = D_0020C6DC | 1;
    D_0020C6EC = 1;
    D_0020C6DC = state;
    D_0020C6F0 = 1;
    func_001FD020(&D_00040304, p->unk64);
    func_001FD020(&D_00040344, q->unk68);
    func_001FD020(&D_00040348, q->unk6C);
    D_0020C6DC |= 0x2000;
    D_0020CA50 = 0;
    func_001FD020(&D_00040300, 0);
    func_00200390(0, (int)q->unk70->fB8);
    c.pm = &mat;
    c.f[0] = (float)c.x[0];
    c.f[3] = (float)c.x[2];
    c.f[4] = (float)c.x[1];
    c.f[1] = (float)c.x[3];
    c.f[5] = (float)c.w;
    c.f[2] = (float)c.h;
    _ReadWriteBarrier();
    c.pm->identity();
    out = (float *)func_001FF410(q->unk7C, 0);
    out[0] = c.f[0]; out[1] = c.f[1];
    out[5] = c.f[2]; out[6] = c.f[0]; out[7] = c.f[4];
    out[12] = c.f[3]; out[13] = c.f[1];
    out[16] = c.f[5]; out[17] = c.f[2]; out[18] = c.f[3];
    ((volatile int *)out)[3] = -1; ((int *)out)[9] = -1;
    ((int *)out)[15] = -1; ((int *)out)[21] = -1;
    out[2] = 0; out[4] = 0; out[8] = 0; out[10] = 0;
    out[11] = 0; out[14] = 0; out[19] = c.f[4];
    out[20] = 0; out[22] = c.f[5]; out[23] = 0;
    D_002EFDB8->f6c->func_0014A650(q->unk74);
    D_002EFDB8->f70->func_00142D00(q->unk78);
    func_001FEC30(0x22, &mat);
    func_001FEE00(0, q->unk7C, 0x18);
    func_00200A90(6, 0, 4);
    return 1;
}
void C_001D3AB0::func_001D3AB0(void)
{
    vtbl = &D_0028F474;
    unk48 = 0;
    D_002F07B8->func_001C3D80();
    if (unk44 != 0) {
        func_0025ADD0(unk44);
        unk44 = 0;
        if (unk70 != 0) {
            unk70->Release();
            unk70 = 0;
        }
    }
    if (unk44 != 0) {
        func_0025ADD0(unk44);
        unk44 = 0;
        if (unk70 != 0) {
            unk70->Release();
            unk70 = 0;
        }
    }
    if (unk7C != 0) {
        func_00201100(unk7C);
    }
    ((C_001625D0 *)this)->func_001625D0();
}

void C_001D3AB0::func_001D3B20(char *name)
{
    S_001D3C30_Stream *__stdcall func_00259AF0(char *name, void *flags);
    int z = 0;
    S_001D3AB0_Res *obj;
    unsigned int w;
    unsigned int h;

    if (unk48 != 0) {
        unk48 = 0;
        D_002F07B8->func_001C3D80();
        if (unk44 != 0) {
            func_0025ADD0(unk44);
            unk44 = 0;
            if (unk70 != 0) {
                unk70->Release();
                unk70 = 0;
            }
        }
    }
    unk44 = func_00259AF0(name, &D_00080000);
    if (unk44 != 0) {
        if (unk70 != 0) {
            unk70->Release();
            unk70 = 0;
        }
        w = unk44->f0;
        h = unk44->f4;
        void *mem = func_001E8A44(0x110);
        if (mem != 0) {
            obj = ((S_001D3AB0_Res *)mem)->func_001D6AD0((void *)z);
        } else {
            obj = 0;
        }
        unk70 = obj;
        obj->fB8 = func_001FCF20(w, h, 1, 1, 0, 0x12, 3);
        unk70->f8 = w;
        unk70->fC = h;
        unk70->fA4 = 0x12;
        unk70->fA8 = 1;
        unk5C = (int)((float)unk44->f0 * f3C) + unk54;
        unk60 = (int)((float)unk44->f4 * f40) + unk58;
    }
}

void C_001D3AB0::func_001D3C30(void)
{
    if (unk48 != 0) {
        func_001D3800();
        if (unk50 == 0 && unk70 != 0) {
            func_001D3860();
        }
        func_0025AA70(unk44);
        if (unk44->fC == unk44->f8 - 1) {
            if (unk4C != 0) {
                func_0025AC10(unk44, 1, &D_00080000);
                unk48 = 1;
            } else {
                func_001D37C0();
            }
        }
    }
    ((C_00157920 *)this)->func_00157920();
}

undefined4 C_001D3CA0::func_001D3CA0(byte param_1)
{
  int func_001D3AB0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001D3AB0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int C_001D3AB0::func_001D3CC0(char *name)
{
    int idx;

    unk70 = 0;
    func_0025BA60(0x160, 0);
    func_0025BA60(3, 1);
    if (D_002A8490->f4 != 0) {
        func_00258240(func_0025B9C0, D_002A8490->f4->fB4->f30);
    }
    if (name != 0) {
        func_001D3B20(name);
    }
    if (unk7C == 0) {
        unk7C = func_001FF3C0(0x60);
    }
    if (unk74 == 0) {
        idx = D_002A751C->func_001AC7B0(D_0028C1F0, 0);
        if (idx != -1) {
            unk74 = D_002A751C->f14[idx].f4;
        }
        if (unk74 == 0) {
            idx = D_002A751C->Create(D_0028C1F0, 0);
            func_0014A7B0(D_002F0958, D_002ABC60);
            D_002A751C->Set(idx, D_002F0958);
            D_002A751C->func_0014A8A0();
            unk74 = D_002A751C->f14[idx].f4;
        }
    }
    if (unk78 == 0) {
        idx = D_002A6D84->func_001AC7B0(D_0028F4E8, 0);
        if (idx != -1) {
            unk78 = D_002A6D84->f14[idx].f4;
        }
        if (unk78 == 0) {
            idx = D_002A6D84->Create(D_0028F4E8, 0);
            D_002A6D84->Set(idx, 0);
            D_002A6D84->func_00142D20();
            unk78 = D_002A6D84->f14[idx].f4;
        }
    }
    unk4C = 0;
    return 1;
}

C_001D3E30* C_001D3E30::func_001D3E30(void) {
    unk0 = 0;
    unk60 = 0;
    unk64 = 0;
    unk83 = 0;
    unkA2 = 0;
    unkC1 = 0;
    unk1F = 0;
    unk5C = 0;
    return this;
}

void C_001D3E60::func_001D3E60(int a0) {
    int func_001E8920(...);
    func_001E8920(this, a0, 30);
}

void C_001D3E30::func_001D3E80(const char *s)
{
    int func_001E8920(...);
    func_001E8920(&unk64, s, 30);
}

void C_001D3E30::func_001D3EA0(int n, const char *a, const char *b, const char *c)
{
    int func_001E8920(...);

    unk60 = n;
    if (n > 0) {
        func_001E8920(&unk83, a, 30);
    }
    if (unk60 > 1) {
        func_001E8920(&unkA2, b, 30);
    } else {
        func_001E8920(&unkA2, a, 30);
    }
    if (unk60 > 2) {
        func_001E8920(&unkC1, c, 30);
    } else {
        func_001E8920(&unkC1, a, 30);
    }
}

void C_001D3E30::func_001D3F20(const char *s, int n)
{
    strcpy(&unk1F, s);
    unk5C = n * 2;
}

C_001D3F50* C_001D3F50::func_001D3F50(void) {
    return this;
}

C_001D3F60 *C_001D3F60::func_001D3F60(void)
{
    int func_001D3F50(...);
    func_001D3F50();
    f8 = 0;
    f0 = -1;
    memset(&f4, 0, sizeof(f4));
    return this;
}

int C_001D3F90::func_001D3F90(unsigned int *a, unsigned int *b, unsigned int *c)
{
    S_001D3F90_Size total;
    S_001D3F90_Size totalFree;
    S_001D3F90_Size avail;
    unsigned int v;

    func_001DE942(f4, &avail, &total, &totalFree);
    if (a != 0) {
        v = total.lo;
        if (v > 0x7fffffff) {
            v = 0x7fffffff;
        }
        *a = v >> 10;
    }
    if (b != 0) {
        v = totalFree.lo;
        if (v > 0x7fffffff) {
            v = 0x7fffffff;
        }
        *b = v >> 10;
    }
    if (c != 0) {
        v = avail.lo;
        if (v > 0x7fffffff) {
            v = 0x7fffffff;
        }
        *c = v >> 10;
    }
    return 1;
}

int C_001D4200::func_001D4010(int x)
{
    switch (x) {
    case 0:
        return 0;
    case 1:
    case 5:
        return 1;
    case 2:
    case 6:
        return 2;
    case 3:
    case 7:
        return 3;
    case 4:
        return 0;
    default:
        return 0;
    }
}

unsigned C_001D4200::func_001D4060(int a)
{
    switch (a) {
    case 0:
        return 1;
    case 1:
        return 2;
    case 2:
        return 4;
    case 3:
        return 8;
    case 4:
        return (unsigned)&D_00010000;
    case 5:
        return (unsigned)&D_00020000;
    case 6:
        return (unsigned)&D_00040000;
    case 7:
        return (unsigned)&D_00080000;
    }
    return 0;
}

static __forceinline int SlotLower(int a)
{
    return a >= 4;
}

int C_001D4200::func_001D40E0(int a)
{
    char letter;
    int port;

    if (a == 8) {
        unk0 = a;
        strcpy(unk4, "u:\\");
        return 1;
    }
    if ((func_001D4060((short)a) & func_0026EBC5(&D_0026D8D0)) != 0) {
        port = func_001D4010(a);
        if (func_0026ED5B(port, a >= 4, &letter) >= 0) {
            func_001ADCC0(unk4, 4, D_0028F130, letter);
            unk0 = a;
            return 1;
        }
    }
    return 0;
}

#pragma auto_inline(off)
int C_001D4200::func_001D4170(int a)
{
    if (a == 8) {
        memset(unk4, 0, sizeof(unk4));
        unk0 = -1;
        return 1;
    }
    if (func_0026EE8D(func_001D4010(a), a >= 4) >= 0) {
        memset(unk4, 0, sizeof(unk4));
        unk0 = -1;
        return 1;
    }
    return 0;
}
#pragma auto_inline(on)
int C_001D4200::func_001D41D0(int a)
{
    int r;

    if (unk0 != -1) {
        r = func_001D4170(unk0);
        if (r == 0) {
            return r;
        }
    }
    return func_001D40E0(a) != 0;
}

int C_001D4200::func_001D4200(char *out)
{
    int func_001E8920(...);
    S_001D4200_Find find;
    char buf[0x80];
    int found;
    int ret;
    int h;

    h = func_001DE51E(&unk4, &find);
    ret = 0;
    if (h != -1) {
        found = 0;
        do {
            func_001DDE51(buf, D_0028F0A8, find.alt);
            if (func_001EA426(buf, out + 0x1f) == 0) {
                func_001E8920(out, find.name, 30);
                found = 1;
            }
        } while (!found && func_001DE625(h, &find) != 0);
        func_001DE66C(h);
        ret = found;
    }
    return ret;
}

int __stdcall func_001D42A0(const char *a, const char *b)
{
    char buf[0x104];
    int attr;

    func_001ADCC0(buf, 0x104, D_00278068, a, b);
    attr = func_001DEF8D(buf);
    if (attr != -1 && (attr & 0x10) == 0) {
        return 1;
    }
    return 0;
}

int C_001D4200::func_001D4300(unsigned a)
{
    unsigned removed;
    unsigned mask;
    unsigned cur;

    if (a == 8) {
        return 1;
    }
    mask = func_001D4060(a);
    if (func_0026EBE7(&D_0026D8D0, &a, &removed) != 0) {
        if ((a & mask) != 0) {
            return 2;
        }
        if ((removed & mask) != 0) {
            return 0;
        }
    }
    cur = func_0026EBC5(&D_0026D8D0);
    unk8 = cur;
    return (cur | mask) == cur;
}

int C_001D4200::func_001D4380(char *out)
{
    int func_001E8920(...);
    char bufs[0x30c];
    char *bufB = bufs;
    char *bufA = bufs + 0x104;
    int r;
    int h;

    if (unk0 != -1) {
        r = func_001D4300(unk0);
        if (r == 2) {
            h = unk0;
            if (h == -1 || func_001D4170(h) != 0) {
                func_001D40E0(h);
            }
        } else if (r != 1) {
            func_001D4170(unk0);
            return 0;
        }
        func_001DDE3E(bufA, D_0028F510, out + 0x1f);
        if (func_001DE2BB(&unk4, bufA, 4, 0, bufB, 0x104) == 0) {
            func_001E8920(out, bufB, 30);
            return 1;
        }
    }
    return 0;
}

int C_001D4200::func_001D4440(const char *a, const char *b, const void *data, unsigned int size)
{
 char path[0x104];
 unsigned int sig[5];
 unsigned int written;
 int h, ctx;
 if(unk0==-1) goto invalid;
 {
  int r=func_001D4300(unk0);
  if(r==2) { int e=unk0; if(e==-1 || func_001D4170(e)) func_001D40E0(e); }
  else if(r!=1) {func_001D4170(unk0); invalid: return 0;}
 }
 func_001ADCC0(path,0x104,D_00278068,a,b);
 h=func_001DCC3C(path,0x401f0000,0,0,2,0x80,0);
 if(h==-1) return 0;
 if(func_001DD247(h,data,size,&written,0)) {
  ctx=func_001DF361(0);
  if(ctx!=-1) {
   if(!func_001DF2EA(ctx,data,size)) {
    if(!func_001DF304(ctx,sig)) {
     if(func_001DD247(h,sig,0x14,&written,0)) {func_001DD13C(h); return 1;}
     goto close;
    }
    func_001DF304(ctx,0);
    goto close;
   }
   func_001DF304(ctx,0);
   close:
   ;
  }
 }
 func_001DD13C(h);
 return 0;
}

int C_001D4200::func_001D4590(const char *a, const char *b, void * volatile data, unsigned int size)
{
 char path[0x104];
 unsigned int got;
 unsigned char want[20], have[20];
 int h, ctx;
 if(unk0==-1) goto invalid;
 {
  int r=func_001D4300(unk0);
  if(r==2) { int e=unk0; if(e==-1 || func_001D4170(e)) func_001D40E0(e); }
  else if(r!=1) {func_001D4170(unk0); invalid: return 0;}
 }
 func_001ADCC0(path,0x104,D_00278068,a,b);
 h=func_001DCC3C(path,0x801f0000,0,0,3,0x80,0);
 if(h!=-1) {
  got=0;
  if(func_001DD15A(h,data,size,&got,0) && func_001DD15A(h,want,20,&got,0)) {
   ctx=func_001DF361(0);
   if(ctx!=-1) {
    if(!func_001DF2EA(ctx,data,size) && !func_001DF304(ctx,have)) {
     if(memcmp(have,want,20)!=0) goto zero;
     func_001DD13C(h); return 1;
    }
    func_001DF304(ctx,0);
    zero:
    memset(data,0,size);
   } else goto zero;
  } else goto zero;
  func_001DD13C(h);
 }
 return 0;
}

int C_001D4200::func_001D4720(const char *a, const char *b)
{
    char buf[0x104];
    int r;
    int h;

    if (unk0 != -1) {
        r = func_001D4300(unk0);
        if (r == 2) {
            h = unk0;
            if (h == -1 || func_001D4170(h) != 0) {
                func_001D40E0(h);
            }
        } else if (r != 1) {
            func_001D4170(unk0);
            return 0;
        }
        func_001ADCC0(buf, 0x104, D_00278068, a, b);
        return func_001DEFD8(buf) != 0;
    }
    return 0;
}

