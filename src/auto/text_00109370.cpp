/* 17 functions from 0x00109370 to 0x00109F80, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001094B0 {
    undefined4 func_001094B0(void);
};

/* fixed-size queue of 0x14 entries, parallel arrays */
struct C_00109520 {
    int count;
    int a[0x14];
    int b[0x14];
    int c[0x14];
    int d[0x14];
    int e[0x14];
    int func_00109520(int p1, int p2);
    void func_00109550(int p);
    int func_00109580(int idx);
    int func_00109C70(C_00109520 *src);
    void func_001095A0(int idx, char *dst);

    int GetB(int idx) { if (idx >= count) return 0; return b[idx]; }
    int GetC(int idx) { if (idx >= count) return 0; return c[idx]; }
    int GetD(int idx) { if (idx >= count) return 0; return d[idx]; }
    int GetE(int idx) { if (idx >= count) return -1; return e[idx]; }
    void SetD(int p) { if (count >= 1) d[count - 1] = p; }
    void SetE(int p) { if (count >= 1) e[count - 1] = p; }
};

struct C_00109F30 {
    char pad0[0xA40];
    int fA40;
    char padA44[4];
    int fA48;
    int fA4C;
    char padA50[4];
    int fA54;
    int fA58;
    int fA5C;
    C_001094B0 *fA60;
    C_001094B0 *fA64;
    char padA68[0x5F0];
    int f1058;
    int f105C;
    void func_00109F30(void);
};

struct C_001093A0 {
    undefined4 func_001093A0(int param_1);
};

struct C_00109390 {
    undefined4 func_00109390(int param_1);
};

struct C_00109380 {
    undefined4 func_00109380(int param_1);
};

struct C_00109370 {
    int func_00109370(void);
};

struct C_00109570 {
    int unk0;
    int func_00109570(void);
};

struct C_00109400 {
    char pad0[0x34];
    int f34;
    char pad38[0x320];
    int f358[1];
    void func_00109400(int param_1);
};

struct C_001093B0 {
    char pad0[0x34];
    int f34;
    int f38[200];
    int f358[200];
    int func_001093B0(int a, int b);
};

struct C_00109420 {
    int v[0x100];
    int func_00109420(void);
};

struct C_001094F0 {
    int v[0x55];
    int func_001094F0(int a, int b);
};

extern int D_00282AE4;
extern char D_00282AD8[], D_00282AD4[], D_00276F28[], D_00277A70[], D_0027D158[];
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);

struct S_001095A0_Player {
    char pad0[0x52C];
    char *f52C;
};

struct S_001095A0_Mgr {
    char pad0[0x64];
    S_001095A0_Player *f64;
};

struct S_001095A0_Root {
    char pad0[0x2A4];
    S_001095A0_Mgr *f2A4;
};

extern S_001095A0_Root *D_002A8490;

static inline void StrCopy_001095A0(char *d, const char *s)
{
    char c;
    do {
        c = *s;
        s++;
        *d = c;
        d++;
    } while (c != '\0');
}

void func_001E891B(void *p);
void func_001E8390(void *p);

struct C_00136300 {
    void func_00136300(void);
};

struct C_00109D40_V {
    virtual void v0();
    virtual void v1();
    virtual void Release();
};

struct C_00109D40 {
    void *vtbl;
    char pad4[0x950];
    void *f954;
    char pad958[0x90];
    C_00136300 *f9E8[4];
    char pad9F8[0x68];
    void *fA60;
    void *fA64;
    char padA68[0x61C];
    void *f1084;
    char pad1088[0x1BC];
    C_00109D40_V *f1244;
    char pad1248[0x35C];
    C_00109D40_V *f15A4;
    C_00109D40_V *f15A8;
    char pad15AC[8];
    void *f15B4[7];
    void *f15D0;
    void *f15D4;
    char pad15D8[0xA74];
    void *f204C[4];
    void func_00026A90(void);
    void func_00109D40(void);
};

int C_00109370::func_00109370(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x34) + 1;
}

undefined4 C_00109380::func_00109380(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0x38 + param_1 * 4);
}

undefined4 C_00109390::func_00109390(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0x1c8 + param_1 * 4);
}

undefined4 C_001093A0::func_001093A0(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0x358 + param_1 * 4);
}

int C_001093B0::func_001093B0(int a, int b)
{
    int i;

    for (i = 0; i < f34; i++) {
        if (f38[i] == a && f358[i] == b) {
            return 1;
        }
    }
    return 0;
}

void C_00109400::func_00109400(int param_1)
{
    if (f34 >= 0) {
        f358[f34] = param_1;
    }
}

int C_00109420::func_00109420(void)
{
    int i;

    for (;;) {
        if (v[0] <= 0 || v[11] != -1) {
            return 0;
        }
        v[11] = v[1];
        v[12] = v[6];
        for (i = v[0] - 1; i > 0; i--) {
            v[i] = v[i + 1];
            v[i + 5] = v[i + 6];
        }
        v[v[0]] = -1;
        v[v[0] + 5] = 0;
        v[0]--;
        if (v[11] < 1000 || v[0] <= 0) {
            break;
        }
        v[11] = -1;
        v[12] = 0;
    }
    if (v[11] < 1000) {
        v[14 + ++v[13]] = v[11];
    }
    return 1;
}

undefined4 C_001094B0::func_001094B0(void)
{
  undefined4* in_ECX = (undefined4*)this;
  undefined4 *puVar1;
  int iVar2;
  
  *in_ECX = 0;
  iVar2 = 0x14;
  puVar1 = in_ECX;
  do {
    puVar1[0x15] = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[0x29] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x51] = 0xffffffff;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  return *in_ECX;
}

int C_001094F0::func_001094F0(int a, int b)
{
    if (v[0] >= 0x14) {
        return 0;
    }
    v[v[0] + 0x14] = a;
    v[v[0]] = b;
    return 1;
}

int C_00109520::func_00109520(int p1, int p2) {
    if (count >= 0x14) {
        return 0;
    }
    b[count] = p1;
    a[count] = p2;
    count++;
    return 1;
}

void C_00109520::func_00109550(int p) {
    if (count < 0x14 && count >= 1) {
        c[count - 1] = p;
    }
}

int C_00109570::func_00109570(void) {
    return unk0;
}

int C_00109520::func_00109580(int idx) {
    if (idx >= count) {
        return -1;
    }
    return a[idx];
}

void C_00109520::func_001095A0(int idx, char *dst)
{
    char out[0x104];
    char s2[0x104];
    char s3[0x104];
    char tmp[0x104];
    char name[0x104];
    int v;
    int dd;
    int off;
    char *p;
    char ch;

    off = 0;
    if (idx >= count) {
        return;
    }
    v = b[idx];
    switch (a[idx]) {
    case 11:
        StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x64b6);
        break;
    case 12:
        StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x64ec);
        break;
    case 13:
        StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x63ee);
        break;
    case 8:
        StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x7168 + v * 0x32);
        break;
    case 9:
        StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x6b28 + v * 0x32);
        break;
    case 10:
        StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x66c8 + v * 0x32);
        break;
    case 0:
        StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x1c + v * 0x32);
        break;
    case 6:
        StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x668c);
        break;
    case 7:
        StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x6650);
        break;
    case 1:
        if (v < 0) {
            StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x6524);
        } else {
            StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x3a04 + v * 0x32);
        }
        break;
    case 2:
        if (v < 0) {
            StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x6614);
        } else {
            StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x3d24 + v * 0x32);
        }
        break;
    case 3:
        if (v < 0) {
            StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x6560);
        } else {
            StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x4044 + v * 0x32);
        }
        break;
    case 4:
        if (v < 0) {
            StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x65d8);
        } else {
            StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x4364 + v * 0x32);
        }
        break;
    case 5:
        if (v < 0) {
            StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x659c);
        } else {
            StrCopy_001095A0(name, D_002A8490->f2A4->f64->f52C + 0x4684 + v * 0x32);
        }
        break;
    default:
        name[0] = 0;
        break;
    }
    s2[0] = 0;
    if (c[idx] != 0) {
        switch (c[idx]) {
        case 1:
            func_001ADCC0(tmp, 0x104, D_00282AD8, 0xb4);
            break;
        case 2:
            func_001ADCC0(tmp, 0x104, D_00282AD8, 0x168);
            break;
        case 3:
            func_001ADCC0(tmp, 0x104, D_00282AD8, 0x21c);
            break;
        case 4:
            func_001ADCC0(tmp, 0x104, D_00282AD8, 0x2d0);
            break;
        case 5:
            func_001ADCC0(tmp, 0x104, D_00282AD8, 0x384);
            break;
        case 6:
            func_001ADCC0(tmp, 0x104, D_00282AD4, D_002A8490->f2A4->f64->f52C + 0x6420);
            break;
        case 7:
            func_001ADCC0(tmp, 0x104, D_00282AD4, D_002A8490->f2A4->f64->f52C + 0x63bc);
            break;
        }
        dd = d[count - 1];
        if (dd == 0) {
            func_001ADCC0(s2, 0x104, D_00276F28, tmp);
        } else if (dd == 2) {
            func_001ADCC0(s2, 0x104, D_00277A70, D_002A8490->f2A4->f64->f52C + 0x6452, tmp);
        } else if (dd == 1) {
            func_001ADCC0(s2, 0x104, D_00277A70, D_002A8490->f2A4->f64->f52C + 0x6484, tmp);
        }
    }
    s3[0] = 0;
    if (e[idx] != -1) {
        switch (e[idx]) {
        case 0:
            func_001ADCC0(s3, 0x104, D_00282AD4, D_002A8490->f2A4->f64->f52C + 0x2cf4);
            break;
        case 2:
            func_001ADCC0(s3, 0x104, D_00282AD4, D_002A8490->f2A4->f64->f52C + 0x2d26);
            break;
        case 3:
            func_001ADCC0(s3, 0x104, D_00282AD4, D_002A8490->f2A4->f64->f52C + 0x2d58);
            break;
        case 5:
            func_001ADCC0(s3, 0x104, D_00282AD4, D_002A8490->f2A4->f64->f52C + 0x2d8a);
            break;
        case 6:
            func_001ADCC0(s3, 0x104, D_00282AD4, D_002A8490->f2A4->f64->f52C + 0x2dbc);
            break;
        }
    }
    out[0] = 0;
    func_001ADCC0(out, 0x104, D_0027D158, s2, s3, name);
    p = out;
    off = dst - out;
    do {
        ch = *p;
        *(p + off) = ch;
        p++;
    } while (ch != '\0');
}

int C_00109520::func_00109C70(C_00109520 *src)
{
    int i;
    int n;
    int vb;
    int va;

    ((C_001094B0 *)this)->func_001094B0();
    n = src->count;
    for (i = 0; i < n; i++) {
        vb = src->GetB(i);
        va = src->func_00109580(i);
        func_00109520(vb, va);
        func_00109550(src->GetC(i));
        SetD(src->GetD(i));
        SetE(src->GetE(i));
    }
    return 1;
}

void C_00109D40::func_00109D40(void)
{
    C_00136300 *p;

    vtbl = &D_00282AE4;
    p = f9E8[0]; if (p) { p->func_00136300(); func_001E891B(p); }
    p = f9E8[1]; if (p) { p->func_00136300(); func_001E891B(p); }
    p = f9E8[2]; if (p) { p->func_00136300(); func_001E891B(p); }
    p = f9E8[3]; if (p) { p->func_00136300(); func_001E891B(p); }
    if (f204C[0]) func_001E891B(f204C[0]);
    if (f204C[1]) func_001E891B(f204C[1]);
    if (f204C[2]) func_001E891B(f204C[2]);
    if (f204C[3]) func_001E891B(f204C[3]);
    if (f1084) func_001E891B(f1084);
    if (f15A4) f15A4->Release();
    if (f15A8) f15A8->Release();
    if (f1244) f1244->Release();
    if (f954) func_001E891B(f954);
    if (f15D4) func_001E891B(f15D4);
    if (f15B4[0]) func_001E8390(f15B4[0]);
    if (f15B4[1]) func_001E8390(f15B4[1]);
    if (f15B4[2]) func_001E8390(f15B4[2]);
    if (f15B4[3]) func_001E8390(f15B4[3]);
    if (f15B4[4]) func_001E8390(f15B4[4]);
    if (f15B4[5]) func_001E8390(f15B4[5]);
    if (f15D0) func_001E8390(f15D0);
    if (f15B4[6]) func_001E8390(f15B4[6]);
    if (fA60) func_001E891B(fA60);
    if (fA64) func_001E891B(fA64);
    func_00026A90();
}

void C_00109F30::func_00109F30(void) {
    fA40 = 0;
    fA48 = 0;
    fA4C = 0;
    fA54 = 0;
    f1058 = 0;
    f105C = 0;
    fA58 = 0;
    fA5C = 0;
    fA60->func_001094B0();
    fA64->func_001094B0();
}

