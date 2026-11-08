/* 5 functions from 0x0007BAD0 to 0x0007CA00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
struct C_00026500 { int func_00026500(char *s, int a); };
extern C_00026500 *D_002A7CB8;
extern char D_00278AF0[];
extern unsigned int D_002B9048;
extern int D_002B9044;

struct S_7C690_Rect { int x, y, w, h, zmin, zmax; };
struct S_7C690_Viewport {
    char pad0[0x1e0];
    S_7C690_Rect rect;
    void func_0012B2B0(void *a, void *b);
};
struct S_7C690_Device {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(int a);
    virtual void v8();
    S_7C690_Viewport *f4;
};
extern S_7C690_Device *D_002EFDB8;

struct S_7C690_Data {
    char pad0[0x6b8];
    char *f6b8;
    char pad6bc[0x6c8 - 0x6bc];
    char *f6c8;
    char pad6cc[0x6d8 - 0x6cc];
    char *f6d8;
    char pad6dc[0x790 - 0x6dc];
    int f790;
    char pad794[0x7b8 - 0x794];
    int f7b8;
    char pad7bc[4];
    int f7c0;
    char pad7c4[4];
    int f7c8;
    char pad7cc[0x848 - 0x7cc];
    char *f848;
    char pad84c[0xff0 - 0x84c];
    char *ff0;
    int pad_ff4;
    int ff8;
};
struct S_7C690_Mgr { char pad0[4]; S_7C690_Data *f4; };
struct S_7C690_C020 { int func_0005C020(void *a); };
struct S_7C690_E { char pad0[0x48]; int f48; char pad4c[0x2c0 - 0x4c]; S_7C690_C020 *f2c0; char pad2c4[0x14]; void *f2d8; };
struct S_7C690_Global {
    char pad0[0x270];
    int f270;
    int f274;
    char pad278[0x2e0 - 0x278];
    S_7C690_E *f2e0;
    int pad2e4;
    S_7C690_Mgr *f2e8;
};
extern S_7C690_Global *D_002A8490;
extern char D_00275630[], D_00275678[], D_00279030[], D_00279028[], D_00277038[];

struct S_7C690_Obj90 { char pad0[0x90]; int f90; };
struct S_7C690_Text {
    void func_0005E840(int a);
    void func_001D6600();
};
struct S_7C690_TextB {
    void func_0005E840(int a);
    void func_001D6600();
};

struct ResultsScreen {
    char pad0[0x100];
    S_7C690_Text *f100;
    char pad104[8];
    S_7C690_Obj90 *f10C;
    char pad110[0x40];
    int f150;
    S_7C690_TextB *f154;
    void func_000682B0();
    void func_00067DA0();
    void func_00157960();
    int func_0007C690();
};

struct S_7C2C0_W {
    char pad0[0x48];
    int color;
    char pad4c[2];
    u8 flags;
    void func_0005E840(char *s);
    void func_001D6600();
    inline void SetColorVar(int c) { if (color != c) { flags |= 8; color = ((color ^ c) & 0xffffff) ^ color; } }
    inline void SetColorConst(unsigned c) { if ((unsigned)color != c) { flags |= 8; color = (color & c) | (c & 0xffffff); } }
};
struct S_7C2C0_T { char pad0[0x24]; int count; char **names; };
struct S_7C2C0_U { char pad0[0x534]; S_7C2C0_T *f534; char pad538[0x30]; int f568; char **f56c; };
struct S_7BAD0_Player {
    char name[0x1a8];
    int f1a8;
    int func_00096740();
};
struct S_7BAD0_Grp {
    int func_00097710(int g);
    S_7BAD0_Player **func_00097740(int g);
    int func_000976A0();
};
struct S_7C2C0_V { char pad0[0x64]; S_7C2C0_U *f64; char pad68[0x1c0 - 0x68]; S_7BAD0_Grp *f1c0; };
int func_001ADCC0(char *buf, int n, char *fmt, ...);
int func_001AC330(char *dst, char *fmt, ...);

struct C_0007C2C0 {
    char pad0[0x13c];
    S_7C2C0_W *f13c[0x10];
    char pad17c[0x1d0 - 0x17c];
    S_7C2C0_V *f1d0;
    char pad1d4[0x208 - 0x1d4];
    S_7C2C0_W *f208;
    char pad20c[0x244 - 0x20c];
    int f244;
    int f248;
    int f24c;
    int func_00064580(int a, char *s, int c);
    undefined4 func_0007C2C0();
    void func_0007BAD0();
    inline int AddLine(int si, char *text, unsigned color)
    {
        if (si >= 0 && si < 0x10) {
            f13c[si]->func_0005E840(text);
            f13c[si]->SetColorConst(color);
            f13c[si]->func_001D6600();
        }
        return si + 1;
    }
};

struct C_0007C670 {
    undefined4 func_0007C670(byte param_1);
};

struct C_0007C9E0 {
    undefined4 func_0007C9E0(byte param_1);
};


void C_0007C2C0::func_0007BAD0()
{
    char bigbuf[0x104];
    char buf[0x32];
    char bufB[4];
    char bufA[4];
    int numA = 0;
    int numB = 0;
    int si;
    int i, n, color;
    S_7BAD0_Player **arr;

    si = f244;
    func_001ADCC0(buf, 0x32, D_002A8490->f2e8->f4->f6b8, D_00279030);
    si = func_00064580(si, buf, 0xffbfa35a);
    si = func_00064580(si, D_00275630, 0xffcccccc);
    n = f1d0->f1c0->func_00097710(0);
    arr = f1d0->f1c0->func_00097740(0);
    for (i = 0; i < n; i++) {
        if (arr[i]->f1a8 == 0) {
            color = arr[i]->func_00096740() ? 0xff5eff5e : 0xffcccccc;
            if (si >= 0 && si < 0x10) {
                f13c[si]->func_0005E840((char *)arr[i]);
                f13c[si]->SetColorVar(color);
                f13c[si]->func_001D6600();
            }
            si++;
        } else {
            numA++;
            if (arr[i]->func_00096740())
                numB++;
        }
    }
    func_001ADCC0(buf, 0x32, D_00275678, D_002A8490->f2e8->f4->f6c8, D_00279030);
    si = AddLine(si, D_00275630, 0xffcccccc);
    si = AddLine(si, buf, 0xffbfa35a);
    si = AddLine(si, D_00275630, 0xffcccccc);
    if (f1d0->f1c0->func_000976A0() > 0) {
        n = f1d0->f1c0->func_00097710(1);
        arr = f1d0->f1c0->func_00097740(1);
        for (i = 0; i < n; i++) {
            if (arr[i]->f1a8 == 0) {
                color = arr[i]->func_00096740() ? 0xff5eff5e : 0xffcccccc;
                if (si >= 0 && si < 0x10) {
                    f13c[si]->func_0005E840((char *)arr[i]);
                    f13c[si]->SetColorVar(color);
                    f13c[si]->func_001D6600();
                }
                si++;
            } else {
                numA++;
                if (arr[i]->func_00096740())
                    numB++;
            }
        }
    } else {
        si = AddLine(si, D_00279028, 0xffdd3737);
    }
    func_001ADCC0(buf, 0x32, D_00275678, D_002A8490->f2e8->f4->f6d8, D_00279030);
    si = AddLine(si, D_00275630, 0xffcccccc);
    si = AddLine(si, buf, 0xffbfa35a);
    si = AddLine(si, D_00275630, 0xffcccccc);
    if (f1d0->f1c0->func_000976A0() > 1) {
        n = f1d0->f1c0->func_00097710(2);
        arr = f1d0->f1c0->func_00097740(2);
        for (i = 0; i < n; i++) {
            if (arr[i]->f1a8 == 0) {
                color = arr[i]->func_00096740() ? 0xff5eff5e : 0xffcccccc;
                if (si >= 0 && si < 0x10) {
                    f13c[si]->func_0005E840((char *)arr[i]);
                    f13c[si]->SetColorVar(color);
                    f13c[si]->func_001D6600();
                }
                si++;
            } else {
                numA++;
                if (arr[i]->func_00096740())
                    numB++;
            }
        }
    } else {
        si = AddLine(si, D_00279028, 0xffdd3737);
    }
    func_001ADCC0(buf, 0x32, D_00275678, D_002A8490->f2e8->f4->ff0, D_00279030);
    si = AddLine(si, D_00275630, 0xffcccccc);
    si = AddLine(si, buf, 0xffbfa35a);
    si = AddLine(si, D_00275630, 0xffcccccc);
    func_001ADCC0(bufA, 4, D_00277038, numB);
    func_001ADCC0(bufB, 4, D_00277038, numA);
    func_001AC330(bigbuf, D_002A8490->f2e8->f4->f848, bufA, bufB);
    si = AddLine(si, bigbuf, 0xffcccccc);
    f248 = si - f244;
    if (si > 0x10)
        f208->func_001D6600();
}

undefined4 C_0007C2C0::func_0007C2C0()
{
    char buf[0x32];
    S_7C2C0_U *u;
    S_7C2C0_T *t;
    int n, j, count, si, color, idx;
    S_7C2C0_W *w;

    n = D_002A8490->f2e0->f2c0->func_0005C020(D_002A8490->f2e0->f2d8);
    u = f1d0->f64;
    count = u->f568;
    si = f244;
    func_001ADCC0(buf, 0x32, D_00275678, (char *)D_002A8490->f2e8->f4->f790, D_00279030);
    j = func_00064580(si, buf, 0xffbfa35a);
    si = func_00064580(j, D_00275630, 0xffcccccc);
    for (j = 0; j < count; j++) {
        idx = D_002A8490->f2e0->f48 * 100 + j;
        color = ((int *)((char *)n + 0x678))[idx];
        color = color ? 0xcccccc : 0xbfa35a;
        if (strncmp(u->f56c[j] + 0x24, D_00275630, 1) == 0)
            continue;
        if (si < 0 || si >= 0x10)
            continue;
        w = f13c[si];
        w->func_0005E840(u->f56c[j] + 0x24);
        w->SetColorVar(color);
        w->func_001D6600();
        si++;
    }
    t = f1d0->f64->f534;
    count = t->count;
    func_001ADCC0(buf, 0x104, D_00275678, (char *)D_002A8490->f2e8->f4->ff8, D_00279030);
    si = AddLine(si, D_00275630, 0xffcccccc);
    si = AddLine(si, buf, 0xffbfa35a);
    si = AddLine(si, D_00275630, 0xffcccccc);
    for (j = 0; j < count; j++) {
        idx = D_002A8490->f2e0->f48 * 100 + j;
        color = ((int *)((char *)n + 0x1318))[idx];
        color = color ? 0xcccccc : 0xbfa35a;
        if (strncmp(t->names[j] + 0x24, D_00275630, 1) == 0)
            continue;
        if (si < 0 || si >= 0x10)
            continue;
        w = f13c[si];
        w->func_0005E840(t->names[j] + 0x24);
        w->SetColorVar(color);
        w->func_001D6600();
        si++;
    }
    f24c = si - f244;
    if (si > 0x10)
        f208->func_001D6600();
    return 0;
}

undefined4 C_0007C670::func_0007C670(byte param_1)
{
  int func_00066DC0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00066DC0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int ResultsScreen::func_0007C690()
{
    S_7C690_Rect vp;
    S_7C690_Rect old;
    S_7C690_Viewport *dev;

    if ((D_002B9048 & 1) == 0) {
        D_002B9048 |= 1;
        D_002B9044 = D_002A7CB8->func_00026500(D_00278AF0, 0);
    }
    if (D_002A8490->f274 < D_002A8490->f270 - 1)
        return 1;
    D_002EFDB8->v8();
    D_002EFDB8->v7(1);
    dev = D_002EFDB8->f4;
    if (f10C->f90 > 1) {
        vp = dev->rect;
        vp.x = 0;
        vp.y = 0;
        vp.w = 0x280;
        vp.h = 0x1c0;
        dev->func_0012B2B0(&vp, &old);
    }
    func_000682B0();
    func_00067DA0();
    if (f150) {
        f100->func_0005E840(D_002A8490->f2e8->f4->f7b8);
        f154->func_0005E840(D_002A8490->f2e8->f4->f7c0);
        f154->func_001D6600();
    } else {
        f100->func_0005E840(D_002A8490->f2e8->f4->f7c8);
        f100->func_001D6600();
    }
    func_00157960();
    if (f10C->f90 > 1) {
        dev->func_0012B2B0(&old, 0);
    }
    return 1;
}

undefined4 C_0007C9E0::func_0007C9E0(byte param_1)
{
  int func_000688C0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_000688C0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

