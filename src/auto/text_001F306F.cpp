/* 29 functions from 0x001F306F to 0x001F3B78, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct D8_001F3805 {
    u32 lo;
    u32 hi;
};

struct ExceptionRaw_001F3805 {
    int type;
    char *name;
    D8_001F3805 arg1;
    D8_001F3805 arg2;
    D8_001F3805 retval;
};

extern double D_002766A8;
extern char D_0007FFFF;
extern char D_000FFFFF;

struct Exception_001F3805 {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};

struct C_001F3237 {
    undefined * func_001F3237(void);
};

struct C_001F3275 {
    int unk0;
    void func_001F3275(void);
};

struct C_001F325D_Base {
    C_001F325D_Base(int param_1);
};

struct C_001F325D : C_001F325D_Base {
    int unk0;
    char *unk4;
    int unk8;
    C_001F325D *func_001F31D2(int param_1);
    C_001F325D(int param_1);
    C_001F325D *func_001F325D(int param_1);
};

struct C_001F3280 {
    int unk0;
    char *unk4;
    int unk8;
    C_001F3280 *func_001F3280(int param_1);
};

struct C_001F3244 {
    int unk0;
    char *unk4;
    int unk8;
    C_001F3244 *func_001F3244(char *param_1);
};

struct C_001F3221 {
    int unk0;
    void *unk4;
    int unk8;
    void func_001F3221();
};

struct C_001F3298 : C_001F325D {
    C_001F3298(int param_1);
};

struct C_001F32B0 {
    int unk0;
    char *unk4;
    int unk8;
    void *func_001F32B0(unsigned int flags);
};

struct C_001F32CC {
    int unk0;
    char *unk4;
    int unk8;
    void *func_001F32CC(unsigned int flags);
};

struct S_001F32E8 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
};

struct S_001F3321_Flags {
    unsigned int Inexact : 1;
    unsigned int Underflow : 1;
    unsigned int Overflow : 1;
    unsigned int ZeroDivide : 1;
    unsigned int InvalidOperation : 1;
};

struct S_001F3321_Bits {
    unsigned int RoundingMode : 2;
    unsigned int Precision : 3;
    unsigned int Operation : 12;
};

struct S_001F3321_Rec {
    union {
        unsigned int bits;
        S_001F3321_Bits Bits;
    };
    unsigned int cause;
    union {
        unsigned int enable;
        S_001F3321_Flags Enable;
    };
    unsigned int status;
    double op1;
    char pad18[8];
    unsigned int op1flags;
    char pad24[0xC];
    double op2;
    char pad38[8];
    unsigned int op2flags;
    char pad44[0xC];
    double result;
    char pad58[8];
    unsigned int resflags;
};

struct C_001F318D {
    int unk0;
    char *unk4;
    int unk8;
    C_001F318D *func_001F318D(char **param_1);
};

struct S8_001F {
    int unk0;
    int unk4;
    S8_001F *func_001EF11B(int param_1);
    int func_001EF1E7(void);
    S8_001F *func_001EEF4F(int param_1);
};

struct C_001F306F_P1 {
    void func_001EF759(void *param_1);
};

struct C_001F306F_Ctx {
    int unk0[2];
    int unk8;
    unsigned short unkC;
    char padE[2];
    S8_001F unk10;
};

struct C_001F311D_Ret {
    int func_001EFAB5(void);
};

struct C_001F311D_A {
    char pad0[8];
    C_001F311D_Ret *func_001EFD3B(void *param_1, int param_2, void *param_3, int param_4);
};

struct C_001F311D_P1 {
    void func_001EEEE6(void *param_1);
};

struct C_001EEE62 {
    void *func_001EEE62(int param_1, int param_2);
};

struct C_001F311D_Ctx {
    int unk0[2];
    int unk8[2];
    int unk10[2];
    C_001F311D_A unk18;
};


#pragma optimize("s", on)
void *func_001F306F(void *param_1, int param_2) {
    extern char *D_002F6A28;
    extern int D_0027D1D8;
    extern int D_00295CA0;
    int func_001EFCF7(void *, int, void *);
    int func_001EFD19(void *, void *, void *);
    int func_001F23B8(void *, void *, int, void *, int);
    int func_001F2F3F(void *, void *);
    C_001F306F_Ctx ctx;
    ctx.unk10.func_001EF11B(param_2);
    char c = *D_002F6A28;
    switch (c) {
    case 0:
        func_001EFCF7(param_1, 2, &ctx.unk10);
        break;
    case '?':
        D_002F6A28++;
        ctx.unkC &= 0xfe00;
        ctx.unk8 = 0;
        ctx.unk10.func_001EEF4F(func_001F23B8(&ctx, &ctx.unk10, 0, &ctx.unk8, 0));
    default:
        func_001F2F3F(param_1, &ctx.unk10);
        break;
    case 'X':
        D_002F6A28++;
        if (ctx.unk10.func_001EF1E7() != 0) {
            ((C_001F306F_P1 *)param_1)->func_001EF759(&D_0027D1D8);
        } else {
            func_001EFD19(param_1, &D_00295CA0, &ctx.unk10);
        }
        return param_1;
    }
    return param_1;
}
#pragma optimize("s", on)
void *func_001F311D(void *param_1, int param_2) {
    extern C_001EEE62 *D_002F6A04;
    void *func_001F306F(void *, int);
    int func_001EF0B4(void *);
    C_001F311D_Ctx ctx;
    S8_001F *node = 0;
    S8_001F *obj = (S8_001F *)D_002F6A04->func_001EEE62(8, (int)node);
    if (obj != node) {
        obj->unk0 = 0;
        *(unsigned short *)&obj->unk4 &= 0xfe00;
        node = obj;
    }
    func_001F306F(ctx.unk10, (int)node);
    func_001EF0B4(&ctx.unk18);
    C_001F311D_Ret *ret = ctx.unk18.func_001EFD3B(ctx.unk0, 0x20, ctx.unk8, param_2);
    int result = ret->func_001EFAB5();
    node->func_001EEF4F(result);
    ((C_001F311D_P1 *)param_1)->func_001EEEE6(ctx.unk10);
    return param_1;
}
#pragma optimize("sy", on)
C_001F318D *C_001F318D::func_001F318D(char **param_1) {
    extern int D_00295F00;
    char *func_001E8AA5(int);
    unk0 = (int)&D_00295F00;
    char *src = *param_1;
    char *p = src;
    char *base = p + 1;
    char c;
    do {
        c = *p;
        p++;
    } while (c != 0);
    unk4 = func_001E8AA5((int)(p + (1 - (int)base)));
    if (unk4 != 0) {
        char *s = *param_1;
        char *d = unk4;
        char ch;
        do {
            ch = *s;
            s++;
            *d = ch;
            d++;
        } while (ch != 0);
    }
    unk8 = 1;
    return this;
}

#pragma optimize("sy", on)
C_001F325D *C_001F325D::func_001F31D2(int param_1) {
    extern int D_00295F00;
    char *func_001E8AA5(int);
    unk0 = (int)&D_00295F00;
    unk8 = *(int *)(param_1 + 8);
    char *src = *(char **)(param_1 + 4);
    int n = *(int *)(param_1 + 8);
    if (n != 0) {
        char *p = src;
        char *base = p + 1;
        char c;
        do {
            c = *p;
            p++;
        } while (c != 0);
        unk4 = func_001E8AA5((int)(p + (1 - (int)base)));
        if (unk4 != 0) {
            char *s = *(char **)(param_1 + 4);
            char *d = unk4;
            char ch;
            do {
                ch = *s;
                s++;
                *d = ch;
                d++;
            } while (ch != 0);
        }
    } else {
        unk4 = src;
    }
    return this;
}
#pragma optimize("", on)

#pragma optimize("sy", on)
void C_001F3221::func_001F3221() {
    extern int D_00295F00;
    void func_001E8390(void *);
    unk0 = (int)&D_00295F00;
    if (unk8 != 0) {
        func_001E8390(unk4);
    }
}
#pragma optimize("", on)

#pragma optimize("", on)
undefined * C_001F3237::func_001F3237(void)
{
  extern undefined D_00295F08;
  int in_ECX = (int)this;
  undefined *puVar1;
  
  puVar1 = *(undefined **)(in_ECX + 4);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = ((undefined *)&D_00295F08);
  }
  return puVar1;
}

#pragma optimize("sy", on)
C_001F3244 *C_001F3244::func_001F3244(char *param_1) {
    extern int D_00295F1C;
    ((C_001F318D *)this)->func_001F318D(&param_1);
    unk0 = (int)&D_00295F1C;
    return this;
}
#pragma optimize("", on)

#pragma optimize("sy", on)
C_001F325D *C_001F325D::func_001F325D(int param_1) {
    extern int D_00295F1C;
    void __stdcall func_001F31D2(int);
    func_001F31D2(param_1);
    unk0 = (int)&D_00295F1C;
    return this;
}
#pragma optimize("", on)

#pragma optimize("y", on)
C_001F325D::C_001F325D(int param_1) : C_001F325D_Base(param_1) {
    extern int D_00295F1C;
    unk0 = (int)&D_00295F1C;
}
#pragma optimize("", on)
void C_001F3275::func_001F3275(void) {
    extern int D_00295F1C;
    int func_001F3221(...);
    unk0 = (int)&D_00295F1C;
    func_001F3221();
}

#pragma optimize("sy", on)
C_001F3280 *C_001F3280::func_001F3280(int param_1) {
    extern int D_00295F24;
    void __stdcall func_001F3244(int);
    func_001F3244(param_1);
    unk0 = (int)&D_00295F24;
    return this;
}

#pragma optimize("sy", on)
#pragma optimize("", on)
#pragma optimize("sy", on)
void *C_001F32B0::func_001F32B0(unsigned int flags) {
    void func_001E891B(void *);
    void func_001F3221();
    func_001F3221();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

#pragma optimize("sy", on)
#pragma optimize("", on)
#pragma optimize("sy", on)
void *C_001F32CC::func_001F32CC(unsigned int flags) {
    void func_001E891B(void *);
    void func_001F3275();
    func_001F3275();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

#pragma optimize("sy", on)
#pragma optimize("", on)
#pragma optimize("sy", on)
void __stdcall func_001F32E8(int param_1, int param_2) {
    extern S_001F32E8 D_00295F2C;
    void __stdcall func_001DE759(int, int, int, int *);
    S_001F32E8 s = D_00295F2C;
    s.f18 = param_1;
    s.f1C = param_2;
    func_001DE759(s.f0, s.f4, s.f10, &s.f14);
}

#pragma optimize("s", on)
void func_001F3321(S_001F3321_Rec *rec, unsigned int *pcw, unsigned int code, int op, double *a, double *res)
{
    int func_001F3AE0(void);
    void func_001F3AED(void);
    void __stdcall func_001DE759(int, int, int, int *);
    unsigned char flags;
    int fsw;

    rec->cause = 0;
    rec->enable = 0;
    rec->status = 0;
    flags = (unsigned char)code;
    if (flags & 0x10) {
        rec->cause |= 1;
        code = 0xc000008f;
    }
    if (flags & 2) {
        rec->cause |= 2;
        code = 0xc0000093;
    }
    if (flags & 1) {
        rec->cause |= 4;
        code = 0xc0000091;
    }
    if (flags & 4) {
        rec->cause |= 8;
        code = 0xc000008e;
    }
    if (flags & 8) {
        rec->cause |= 0x10;
        code = 0xc0000090;
    }
    rec->Enable.InvalidOperation = !(*pcw & 1);
    rec->Enable.ZeroDivide = !(*pcw & 4);
    rec->Enable.Overflow = !(*pcw & 8);
    rec->Enable.Underflow = !(*pcw & 0x10);
    rec->Enable.Inexact = !(*pcw & 0x20);
    fsw = func_001F3AE0();
    if (fsw & 1) {
        rec->status |= 0x10;
    }
    if (fsw & 4) {
        rec->status |= 8;
    }
    if (fsw & 8) {
        rec->status |= 4;
    }
    if (fsw & 0x10) {
        rec->status |= 2;
    }
    if (fsw & 0x20) {
        rec->status |= 1;
    }
    switch (*pcw & 0xc00) {
    case 0:
        rec->bits &= 0xfffffffc;
        break;
    case 0x800:
        rec->bits = (rec->bits & 0xfffffffe) | 2;
        break;
    case 0x400:
        rec->bits = (rec->bits & 0xfffffffd) | 1;
        break;
    case 0xc00:
        rec->bits |= 3;
        break;
    }
    switch (*pcw & 0x300) {
    case 0:
        rec->bits = (rec->bits & 0xffffffeb) | 8;
        break;
    case 0x200:
        rec->bits = (rec->bits & 0xffffffe7) | 4;
        break;
    case 0x300:
        rec->bits &= 0xffffffe3;
        break;
    }
    rec->Bits.Operation = op;
    rec->op1flags |= 1;
    rec->op1flags = (rec->op1flags & 0xffffffe3) | 2;
    rec->op1 = *a;
    rec->resflags |= 1;
    rec->resflags = (rec->resflags & 0xffffffe3) | 2;
    rec->result = *res;
    func_001F3AED();
    func_001DE759(code, 0, 1, (int *)&rec);
    if (rec->enable & 0x10) {
        *pcw &= 0xfffffffe;
    }
    if (rec->enable & 8) {
        *pcw &= 0xfffffffb;
    }
    if (rec->enable & 4) {
        *pcw &= 0xfffffff7;
    }
    if (rec->enable & 2) {
        *pcw &= 0xffffffef;
    }
    if (rec->enable & 1) {
        *pcw &= 0xffffffdf;
    }
    switch (rec->bits & 3) {
    case 0:
        *pcw &= 0xfffff3ff;
        break;
    case 2:
        *pcw = (*pcw & 0xfffffbff) | 0x800;
        break;
    case 1:
        *pcw = (*pcw & 0xfffff7ff) | 0x400;
        break;
    case 3:
        ((unsigned char *)pcw)[1] |= 0xc;
        break;
    }
    switch ((rec->bits >> 2) & 7) {
    case 0:
        *pcw = (*pcw & 0xfffff3ff) | 0x300;
        break;
    case 1:
        *pcw = (*pcw & 0xfffff3ff) | 0x200;
        break;
    case 2:
        *pcw &= 0xfffff3ff;
        break;
    }
    *res = rec->result;
}
double func_001F3A2E(double x, int *expptr);
void func_001F3B1F(unsigned int flags);
#pragma optimize("s", on)
int func_001F35C5(unsigned int flags, double *presult, unsigned int cw)
{
    extern double D_002AED58;
    extern double D_002AED68;
    int sticky = 1;
    unsigned int result;
    int exp;
    int e;
    double ld;
    union {
        double d;
        unsigned long w[2];
        unsigned char b[8];
        unsigned short s[4];
    } m;

    result = flags & 0x1f;
    if ((flags & 8) && (cw & 1)) {
        func_001F3B1F(1);
        result &= ~8;
    } else if ((flags & 4) && (cw & 4)) {
        func_001F3B1F(4);
        result &= ~4;
    } else if ((flags & 1) && (cw & 8)) {
        func_001F3B1F(8);
        switch (cw & 0xc00) {
        case 0:
            *presult = (*presult > D_002766A8) ? D_002AED58 : -D_002AED58;
            break;
        case 0x400:
            *presult = (*presult > D_002766A8) ? D_002AED68 : -D_002AED58;
            break;
        case 0x800:
            *presult = (*presult > D_002766A8) ? D_002AED58 : -D_002AED68;
            break;
        case 0xc00:
            *presult = (*presult > D_002766A8) ? D_002AED68 : -D_002AED68;
            break;
        }
        result &= ~1;
    } else if ((flags & 2) && (cw & 0x10)) {
        sticky = 0;
        if (flags & 0x10) {
            sticky = 1;
        }
        if (*presult != D_002766A8) {
            ld = func_001F3A2E(*presult, &exp);
            m.d = ld;
            e = exp - 0x600;
            if (e < -0x432) {
                ld = ld * D_002766A8;
                sticky = 1;
            } else {
                int neg;
                if (ld < D_002766A8) {
                    neg = 1;
                } else {
                    neg = 0;
                }
                m.s[3] = (m.s[3] & 0xf) | 0x10;
                if (e < -0x3fd) {
                    int n = -0x3fd - e;
                    do {
                        if ((m.w[0] & 1) && !sticky) {
                            sticky = 1;
                        }
                        m.w[0] >>= 1;
                        if (m.w[1] & 1) {
                            m.b[3] |= 0x80;
                        }
                        m.w[1] >>= 1;
                    } while (--n);
                }
                ld = neg ? -m.d : m.d;
            }
            *presult = ld;
        } else {
            sticky = 1;
        }
        if (sticky) {
            func_001F3B1F(0x10);
        }
        result &= ~2;
    }
    if ((flags & 0x10) && (cw & 0x20)) {
        func_001F3B1F(0x20);
        result &= ~0x10;
    }
    return result == 0;
}
#pragma optimize("sy", on)
void func_001F37B0(int code) {
    int *func_001ED075(void);
    switch (code) {
    case 1:
        *func_001ED075() = 0x21;
        break;
    case 2:
    case 3:
        *func_001ED075() = 0x22;
        break;
    }
}

#pragma optimize("sy", on)
int func_001F37D8(int status) {
    u8 bits = (u8)status;
    int mode;

    if (bits & 0x20) {
        mode = 5;
    } else if (bits & 0x08) {
        mode = 1;
    } else if (bits & 0x04) {
        mode = 2;
    } else if (bits & 0x01) {
        mode = 3;
    } else if (bits & 0x02) {
        mode = 4;
    } else {
        mode = 0;
    }
    return mode;
}
double func_001F3805(int type, int fnid, D8_001F3805 arg1, D8_001F3805 arg2, D8_001F3805 retval, u32 cw) {
    extern int D_002AEC70[];
    extern char *D_002AEC74[];
    extern u8 D_0000FFFF[];
    int func_001F3AFB(u32, u32);
    int func_001F59D9(ExceptionRaw_001F3805 *);
    void func_001F37B0(int);
    ExceptionRaw_001F3805 e;
    char *name;
    int i;

    for (i = 0; i < 0x1d; i++) {
        if (D_002AEC70[i * 2] == fnid) {
            name = D_002AEC74[i * 2];
            goto found;
        }
    }
    name = 0;
found:
    e.name = name;
    if (name != 0) {
        e.arg1 = arg1;
        e.arg2 = arg2;
        e.type = type;
        e.retval = retval;
        func_001F3AFB(cw, (u32)D_0000FFFF);
        if (func_001F59D9(&e) == 0) {
            func_001F37B0(type);
        }
        return *(double *)&e.retval;
    }
    func_001F3AFB(cw, (u32)D_0000FFFF);
    func_001F37B0(type);
    return *(double *)&retval;
}

double func_001F38A3(int param_1, double param_2, int param_3) {
    extern int D_002AF030;
    extern char D_0000FFFF;
    double func_001F3805(int, int, double, double, double, int);
    int *func_001ED075(void);
    void func_001F3AFB(int, int);
    if (D_002AF030 == 0) {
        return func_001F3805(1, param_1, param_2, 0.0, param_2, param_3);
    }
    *func_001ED075() = 0x21;
    func_001F3AFB(param_3, (int)&D_0000FFFF);
    return param_2;
}

double func_001F38F6(int param_1, int param_2, double param_3, double param_4, int param_5) {
    extern int D_002AF030;
    extern char D_0000FFFF;
    int func_001F35C5(int, double *, int);
    void func_001F3321(void *, int *, int, int, double *, double *);
    int func_001F37D8(int);
    double func_001F3805(int, int, double, double, double, int);
    void func_001F37B0(int);
    void func_001F3AFB(int, int);
    struct __declspec(align(16)) S_001F38F6 {
        char pad0[0x40];
        int f40;
        char pad44[0x2c];
    };
    S_001F38F6 rec;
    int r;
    if (func_001F35C5(param_1, &param_4, param_5) == 0) {
        rec.f40 &= ~1;
        func_001F3321(&rec, &param_5, param_1, param_2, &param_3, &param_4);
    }
    r = func_001F37D8(param_1);
    if (D_002AF030 == 0 && r != 0) {
        return func_001F3805(r, param_2, param_3, 0.0, param_4, param_5);
    }
    func_001F37B0(r);
    func_001F3AFB(param_5, (int)&D_0000FFFF);
    return param_4;
}

double func_001F3996(double x)
{
    return (double)(__int64)x;
}

#pragma optimize("s", on)
double func_001F39A9(double x, int exp)
{
    double retval = x;

    *((unsigned short *)&retval + 3) = (*((unsigned short *)&x + 3) & 0x800f) | ((exp + 0x3fe) << 4);
    return retval;
}

#pragma optimize("s", on)
int func_001F39D3(double x)
{
    unsigned long lo = ((unsigned long *)&x)[0];
    unsigned long hi = ((unsigned long *)&x)[1];

    if (hi == 0x7ff00000) {
        if (lo == 0) {
            return 1;
        }
    } else if (hi == 0xfff00000) {
        if (lo == 0) {
            return 2;
        }
    }
    if ((*((unsigned short *)&x + 3) & 0x7ff8) == 0x7ff8) {
        return 3;
    }
    if ((*((unsigned short *)&x + 3) & 0x7ff8) == 0x7ff0 && ((hi & (unsigned long)&D_0007FFFF) != 0 || lo != 0)) {
        return 4;
    }
    return 0;
}

#pragma optimize("s", on)
double func_001F3A2E(double x, int *expptr)
{
    int exp;
    int neg;
    double result;

    if (x == D_002766A8) {
        result = 0.0;
        exp = 0;
    } else if ((*((unsigned short *)&x + 3) & 0x7ff0) == 0 &&
               ((*((unsigned long *)&x + 1) & (unsigned long)&D_000FFFFF) != 0 || *(unsigned long *)&x != 0)) {
        exp = -1021;
        neg = x < D_002766A8 ? 1 : 0;
        while ((*((unsigned char *)&x + 6) & 0x10) == 0) {
            *((unsigned long *)&x + 1) <<= 1;
            if (*((unsigned char *)&x + 3) & 0x80) {
                *((unsigned long *)&x + 1) |= 1;
            }
            *(unsigned long *)&x <<= 1;
            exp--;
        }
        *((unsigned char *)&x + 6) &= 0xef;
        if (neg != 0) {
            *((unsigned char *)&x + 7) |= 0x80;
        }
        result = func_001F39A9(x, 0);
    } else {
        result = func_001F39A9(x, 0);
        exp = ((*((unsigned short *)&x + 3) & 0x7ff0) >> 4) - 0x3fe;
    }
    *expptr = exp;
    return result;
}

int func_001F3AE0(void)
{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}

int func_001F3AED(void)
{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}

#pragma optimize("", on)

#pragma optimize("", on)

extern long double D_002AED80;
extern long double D_002AED8C;
#pragma auto_inline(off)
void func_001F3B1F(unsigned int flags)
{
    volatile double d;
    volatile int i;
    volatile double z = 0.0;

    if (flags & 1) {
        i = (int)D_002AED80;
    }
    if (flags & 8) {
        d = (double)D_002AED80;
    }
    if (flags & 0x10) {
        d = (double)D_002AED8C;
    }
    if (flags & 4) {
        d = 1.0 / z;
    }
    if (flags & 0x20) {
        d = 3.14159265358979323846;
    }
}
#pragma auto_inline(on)

#pragma optimize("", on)

#pragma optimize("", on)

#pragma optimize("", on)

#pragma optimize("sy", on)
C_001F3298::C_001F3298(int param_1) : C_001F325D(param_1) {
    extern int D_00295F24;
    unk0 = (int)&D_00295F24;
}
#pragma optimize("", on)

#pragma optimize("", on)

