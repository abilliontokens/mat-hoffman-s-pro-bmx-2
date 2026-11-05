/* 29 functions from 0x001F306F to 0x001F3B78, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
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

