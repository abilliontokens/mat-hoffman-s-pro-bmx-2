/* 29 functions from 0x001F306F to 0x001F3B78, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
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
    char pad4[8];
    void func_001F31D2(int param_1);
    C_001F325D(int param_1);
    C_001F325D *func_001F325D(int param_1);
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


void *func_001F306F(void *param_1, int param_2) {
    extern char *D_002F6A28;
    extern int D_0027D1D8;
    extern int D_00295CA0;
    int func_001EFCF7(void *, int, void *);
    int func_001EFD19(void *, void *, void *);
    int func_001F23B8(void *, void *, int, void *, int);
    int func_001F2F3F(void *, void *);
    S8_001F local;
    unsigned short v2;
    int v3;
    int v4[2];
    local.func_001EF11B(param_2);
    char c = *D_002F6A28;
    if (c == 0) {
        func_001EFCF7(param_1, 2, &local);
    } else if (c == '?') {
        D_002F6A28++;
        v2 &= 0xfe00;
        v3 = 0;
        int result = func_001F23B8(v4, &local, 0, &v3, 0);
        local.func_001EEF4F(result);
        func_001F2F3F(param_1, &local);
    } else if (c == 'X') {
        D_002F6A28++;
        if (local.func_001EF1E7() == 0) {
            func_001EFD19(param_1, &D_00295CA0, &local);
            return param_1;
        }
        ((C_001F306F_P1 *)param_1)->func_001EF759(&D_0027D1D8);
        return param_1;
    } else {
        func_001F2F3F(param_1, &local);
    }
    return param_1;
}

void *func_001F311D(void *param_1, int param_2) {
    extern C_001EEE62 *D_002F6A04;
    void *func_001F306F(void *, int);
    int func_001EF0B4(void *);
    C_001F311D_A localA;
    int localB[2];
    int localC[2];
    int localD[2];
    S8_001F *node = 0;
    void *mem = D_002F6A04->func_001EEE62(8, 0);
    if (mem != 0) {
        S8_001F *obj = (S8_001F *)mem;
        obj->unk0 = 0;
        *(unsigned short *)&obj->unk4 &= 0xfe00;
        node = obj;
    }
    func_001F306F(localB, (int)node);
    func_001EF0B4(&localA);
    C_001F311D_Ret *ret = localA.func_001EFD3B(localD, 0x20, localC, param_2);
    int result = ret->func_001EFAB5();
    node->func_001EEF4F(result);
    ((C_001F311D_P1 *)param_1)->func_001EEEE6(localB);
    return param_1;
}

#pragma optimize("y", on)
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

#pragma optimize("y", on)
C_001F325D *C_001F325D::func_001F325D(int param_1) {
    extern int D_00295F1C;
    void __stdcall func_001F31D2(int);
    func_001F31D2(param_1);
    unk0 = (int)&D_00295F1C;
    return this;
}
#pragma optimize("", on)
void C_001F3275::func_001F3275(void) {
    extern int D_00295F1C;
    int func_001F3221(...);
    unk0 = (int)&D_00295F1C;
    func_001F3221();
}
