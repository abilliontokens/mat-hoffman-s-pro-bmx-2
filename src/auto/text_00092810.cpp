/* 21 functions from 0x00092810 to 0x00093620, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>

struct C_00092870 {
    undefined4 func_00092870(byte param_1);
};

struct C_000928E0 {
    char pad0[0x254];
    int unk254;
    int func_000928E0(void);
};

struct C_001B1980 {
    void func_001B1980(void);
    void func_001B1A30(float x, float y, float z);
    void func_001B19A0(int v);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, float a11, float a12, int a13);
};

struct C_00157600 {
    void func_00157600(int a);
};

struct C_001D4300 {
    int func_001D4300(int a);
    void func_001D41D0(int a);
    int func_001D4200(void *s);
    void func_001D7D00(void);
    int func_001D4720(void *a, void *b);
    int func_001D4440(int a, int b, int c, int d);
    int func_001D3F90(int a, int b, int *out);
    int func_001D42A0(const char *path, const char *name);
    int func_001D4590(char *out, const char *title, int a, int size);
    int func_001D4380(void *s);
};

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);
extern char D_0027A140;

extern char D_0027A144;

struct C_00092BE0_Str {
    char pad0[0xe0];
    C_00092BE0_Str *func_001D3E30(void);
    void func_001D3F20(char *name, int len);
    char *func_001D3F50(void);
    void func_001D3E60(void *s);
    void func_001D3E80(void *s);
    void func_001D3EA0(int n, void *a, void *b, void *c);
};

extern char D_0027A1A4;
extern char D_0027A198;
extern char D_0027A188;
extern char D_0027A178;
extern char D_0027A168;
extern char D_0027A158;
int __stdcall func_001DD0A9(void *a, char *b, int c);

extern char D_0027A150;
extern char D_00279100;

struct S_00092E30_Slot {
    int w[8];
};

struct S_00092E30_Rec {
    int f0;
    int f4;
    int f8;
};

struct S_00092E30_Mgr {
    char pad0[0x814];
    S_00092E30_Slot f814[16];
    S_00092E30_Rec fA14[16];
    S_00092E30_Mgr *func_001D3F50(void);
    int *func_0005C020(int idx);
    void func_0005B730(void);
    void func_0005B880(void);
    void func_0005B7C0(void);
    void func_0005B8D0(void);
    void func_0005C3A0(int a);
};

struct S_00092A10_Sub {
    char pad0[0xc];
    int fc;
    char pad10[0x2b0];
    S_00092E30_Mgr *f2c0;
    char pad2c4[4];
    int f2c8;
    C_001D4300 *f2cc;
    char pad2d0[8];
    int f2d8;
};

extern char D_00279100;
extern char D_0027A130;
extern char D_0027A140;
extern char D_0027A1B0;
extern char D_0027A1CC;

struct S_00093140_Obj {
    float func_0018C210(void);
};

struct C_0018C780 {
    void func_0018C780(int a, void *b, int c);
    S_00093140_Obj **func_0018C160(void *name);
};

extern int D_0028F5DC;
extern int D_0028F5E0;
extern int D_0028F5E4;
extern int D_0028F5E8;
extern int D_0028F5EC;

struct S_00092A10_Root {
    char pad0[0x2e0];
    S_00092A10_Sub *f2e0;
    char pad2e4[8];
    C_0018C780 *f2ec;
};

extern char D_0027958C;
extern "C" void *func_001E8A44(unsigned int size);

struct C_001B12C0 {
    C_001B12C0 *func_001B12C0(int a);
    void func_001B13A0(void *a, void *b, int c, int d);
    void func_001B2270(int color);
};

extern S_00092A10_Root *D_002A8490;
extern int D_0027A0C4;
extern float D_00275AEC;

struct S_000929A0_Clamp {
    char pad0[0x10];
    float f10;
    float f14;
};

struct S_000929A0_Mid {
    int unk0;
};

S_000929A0_Clamp *__fastcall func_0018C070(S_000929A0_Mid *self);

struct C_00092890 {
    void *vtbl;
    char pad4[0x20];
    C_001B1980 *f24[8];
    int f44;
    int f48;
    char f4c;
    char pad4d[0x17];
    int f64;
    int f68;
    char pad6c[0x10];
    int f7c;
    char pad80[0xd0];
    char f150;
    char pad151[0x103];
    char f254;
    void func_0008BCD0(void);
    void func_0008C480(void);
    void func_0008CC50(void);
    C_00092890 *func_00092890(int a);
    void func_00093120(void);
    void func_00093140(float a1, float a2, int a3, int count, int a5, int a6, float a7);
    C_00092890 *func_00092810(int a0, int a1, int a2, int a3);
    int func_00092BE0(void);
    int func_00092C70(void);
    int func_00092B40(int idx);
    int func_00092E30(int idx);
    int func_00092AC0(void);
    int func_00093300(int a);
    int func_000930D0(void);
    int func_00092EF0(void);
    void func_00092D10(void);
    void *func_000928F0(void);
    void func_000928F0(int probe);
    void func_000929A0(void);
    void func_001578D0(void);
    void func_001577A0(void *o, int a);
    void *func_001D3F50(void);
};

struct C_000928D0 {
    char pad0[0x150];
    int unk150;
    int func_000928D0(void);
};


C_00092890 *C_00092890::func_00092810(int a0, int a1, int a2, int a3)
{
    f64 = a0;
    f7c = a1;
    f68 = a2;
    if (a2 != 0) {
        func_0008BCD0();
    } else if (D_002A8490->f2e0->fc == 2) {
        func_0008C480();
    } else {
        func_0008CC50();
    }
    return this;
}

undefined4 C_00092870::func_00092870(byte param_1)
{
  int func_0008D910(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0008D910();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_00092890 *C_00092890::func_00092890(int a)
{
    ((C_00157600 *)this)->func_00157600(a);
    vtbl = &D_0027A0C4;
    for (int i = 0; i < 8; i++) {
        f24[i] = 0;
    }
    f44 = 0;
    f48 = 0;
    f4c = 0;
    f150 = 0;
    f254 = 0;
    return this;
}

int C_000928D0::func_000928D0(void) {
    return (int)&unk150;
}

int C_000928E0::func_000928E0(void) {
    return (int)&unk254;
}

void *C_00092890::func_000928F0(void)
{
    void *name = &D_0027958C;
    C_001B1980 **p;
    int i;

    D_002A8490->f2ec->func_0018C780(1, &name, 0);
    D_002A8490->f2ec->func_0018C160(&D_0027958C);
    p = f24;
    i = 8;
    do {
        C_001B12C0 *o = (C_001B12C0 *)func_001E8A44(0x184);
        if (o != 0) {
            o = o->func_001B12C0(1);
        } else {
            o = 0;
        }
        *p = (C_001B1980 *)o;
        o->func_001B13A0(&D_0027958C, &D_0027958C, 0, 0x28);
        ((C_001B12C0 *)*p)->func_001B2270(0xffcccccc);
        func_001577A0(*p, -1);
        p++;
    } while (--i);
    return func_001D3F50();
}

int func_00092A10(void)
{
    if (D_002A8490->f2e0->f2cc->func_001D4300(8) != 0) {
        D_002A8490->f2e0->f2cc->func_001D41D0(8);
        return 1;
    }
    return 0;
}

int __stdcall func_00092A50(int *out)
{
    int r = D_002A8490->f2e0->f2cc->func_001D4300(8);

    D_002A8490->f2e0->f2cc->func_001D3F90(0, 0, out);
    if (out != 0) {
        *out = *out / 16;
    }
    if (r == -1 || r == -2) {
        return 0;
    }
    return 1;
}

int C_00092890::func_00092AC0(void)
{
    char *d = &f4c;

    if (*d != 0) {
        return 1;
    }
    {
        C_00092BE0_Str s;
        char *p;
        char *q;
        char c;

        s.func_001D3E30();
        s.func_001D3F20(&D_0027A130, 0xd);
        if (D_002A8490->f2e0->f2cc->func_001D4200(&s) != 0) {
            p = s.func_001D3F50();
            q = d;
            do {
                c = *p;
                p++;
                *q = c;
                q++;
            } while (c != 0);
            return 1;
        }
    }
    return 0;
}

int C_00092890::func_00092B40(int idx)
{
    char buf[0x104];

    if (func_00092AC0() != 0) {
        if (idx == -1) {
            func_001ADCC0(buf, 0x104, &D_0027A140, D_002A8490->f2e0->f2d8);
        } else {
            func_001ADCC0(buf, 0x104, &D_0027A140, idx);
        }
        if (D_002A8490->f2e0->f2cc->func_001D42A0(&f4c, buf) != 0) {
            return func_00092AC0();
        }
    }
    return 0;
}

int C_00092890::func_00092BE0(void)
{
    C_00092BE0_Str s;

    if (f150 == 0) {
        s.func_001D3E30();
        s.func_001D3F20(&D_0027A144, 0xd);
        if (D_002A8490->f2e0->f2cc->func_001D4200(&s) != 0) {
            strcpy(&f150, s.func_001D3F50());
        } else {
            return 0;
        }
    }
    return 1;
}

int C_00092890::func_00092C70(void)
{
    C_00092BE0_Str s;
    char *d = &f254;

    if (f254 == 0) {
        char *p;
        char c;
        char *q;

        s.func_001D3E30();
        s.func_001D3F20(&D_0027A150, 0xd);
        s.func_001D3E60(&D_00279100);
        if (D_002A8490->f2e0->f2cc->func_001D4200(&s) != 0) {
            p = s.func_001D3F50();
            q = d;
            do {
                c = *p;
                p++;
                *q = c;
                q++;
            } while (c != 0);
        } else {
            return 0;
        }
    }
    return 1;
}

void C_00092890::func_00092D10(void)
{
    char buf[0x104];
    C_00092BE0_Str s;

    if (D_002A8490->f2e0->f2cc->func_001D4300(8) == 1) {
        D_002A8490->f2e0->f2cc->func_001D41D0(8);
        if (func_00092C70() == 0) {
            s.func_001D3E30();
            s.func_001D3E60(&f254);
            s.func_001D3E80(&D_0027A1A4);
            s.func_001D3EA0(3, &D_0027A178, &D_0027A188, &D_0027A198);
            s.func_001D3F20(&D_0027A150, 0xd);
            if (D_002A8490->f2e0->f2cc->func_001D4380(&s) != 0) {
                strcpy(&f254, s.func_001D3F50());
                func_001ADCC0(buf, 0x104, &D_0027A168, &f254);
                func_001DD0A9(&D_0027A158, buf, 0);
            }
        }
    }
}

int C_00092890::func_00092E30(int idx)
{
    char buf[0x104];
    S_00092E30_Mgr *mgr;
    S_00092E30_Rec *rec;
    S_00092E30_Slot *slot;

    if (func_00092B40(idx) != 0) {
        func_001ADCC0(buf, 0x104, &D_0027A140, idx);
        D_002A8490->f2e0->f2cc->func_001D4720(&f4c, buf);
    }
    mgr = D_002A8490->f2e0->f2c0->func_001D3F50();
    rec = &mgr->fA14[idx];
    slot = &mgr->f814[idx];
    rec->f0 = 0;
    rec->f4 = 0;
    memset(slot, 0, 0x1c);
    *D_002A8490->f2e0->f2c0->func_0005C020(idx) = 1;
    return 1;
}

int C_00092890::func_00092EF0(void)
{
    C_00092BE0_Str s;
    char buf[0x104];

    if (func_00092AC0() == 0) {
        return 0;
    }
    s.func_001D3E30();
    s.func_001D3E60(&f4c);
    s.func_001D3F20(&D_0027A130, 0xd);
    if (D_002A8490->f2e0->f2cc->func_001D4200(&s) == 0) {
        return 0;
    }
    int r = D_002A8490->f2e0->f2cc->func_001D4590(&f4c, &D_0027A1B0,
                                                   (int)D_002A8490->f2e0->f2c0->func_001D3F50(), 0xd80);
    if (r == -1 || r == 0) {
        return 0;
    }
    D_002A8490->f2e0->f2c0->func_0005B7C0();
    D_002A8490->f2e0->f2c0->func_0005B8D0();
    D_002A8490->f2e0->f2c0->func_0005C3A0(-1);
    for (int i = 0; i < 10; i++) {
        func_001ADCC0(buf, 0x104, &D_0027A140, i);
        if (D_002A8490->f2e0->f2cc->func_001D4200(&s) != 0) {
            D_002A8490->f2e0->f2cc->func_001D4590(&f4c, buf,
                                                  (int)D_002A8490->f2e0->f2c0->func_0005C020(i), 0x1f98);
        }
    }
    if (func_00092C70() != 0) {
        if (D_002A8490->f2e0->f2cc->func_001D4590(&f254, &D_00279100,
                                                  D_002A8490->f2e0->f2c8, 0x1a8) == 0) {
            return 0;
        }
    }
    return 1;
}

int C_00092890::func_000930D0(void)
{
    if (func_00092C70() != 0) {
        if (D_002A8490->f2e0->f2cc->func_001D4590(&f254, &D_00279100,
                                                  D_002A8490->f2e0->f2c8, 0x1a8) == 0) {
            return 0;
        }
    }
    return 1;
}

void C_00092890::func_00093120(void)
{
    for (int i = 0; i < 8; i++) {
        f24[i]->func_001B1980();
    }
}

void C_00092890::func_00093140(float a1, float a2, int a3, int count, int a5, int a6, float a7)
{
    S_00093140_Obj **p;
    S_00093140_Obj *obj;
    int i;
    int sel;

    p = D_002A8490->f2ec->func_0018C160(&D_0027958C);
    if (p != 0) {
        obj = *p;
    } else {
        obj = 0;
    }
    for (i = 0; i < count; i++) {
        f24[i]->func_001B1980();
        f24[i]->func_001B1A30(a1, obj->func_0018C210() * i + a2, 0);
        sel = (a3 == D_0028F5E0) ? D_0028F5E0
            : (a3 == D_0028F5E4) ? D_0028F5E4
            : (a3 == D_0028F5E8) ? D_0028F5E8
            : (a3 == D_0028F5EC) ? D_0028F5EC
            : D_0028F5DC;
        f24[i]->func_001B19A0(sel);
        if (a5 != 0) {
            f24[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.15f, 0, a7, 0, 0);
        } else if (a6 != 0) {
            f24[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0, 1.15f, 0, a7, 0, 0);
        } else {
            f24[i]->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
        }
    }
}

void __stdcall func_00093280(int a0) {
}

int __stdcall func_00093290(int a0)
{
    int result = 0;
    int r = D_002A8490->f2e0->f2cc->func_001D4300(8);

    if (r == -1 || r == -2) {
        D_002A8490->f2e0->f2cc->func_001D41D0(0);
        D_002A8490->f2e0->f2cc->func_001D7D00();
        result = 1;
    }
    return result;
}

int C_00092890::func_00093300(int a)
{
    C_00092BE0_Str s;
    char buf[0x104];
    char *p, *q;
    char c;
    s.func_001D3E30();
    s.func_001D3E60(&f4c);
    s.func_001D3F20(&D_0027A130, 0xd);
    if (func_00092AC0() == 0) {
        s.func_001D3E80(&D_0027A1A4);
        s.func_001D3EA0(3, &D_0027A178, &D_0027A188, &D_0027A198);
        if (!D_002A8490->f2e0->f2cc->func_001D4380(&s)) return 0;
        p = s.func_001D3F50();
        q = &f4c;
        do { c = *p++; *q++ = c; } while(c);
        func_001ADCC0(buf, 0x104, &D_0027A168, &f4c);
        func_001DD0A9(&D_0027A1CC, buf, 0);
    }
    if (D_002A8490->f2e0->f2cc->func_001D4200(&s)) {
        if (D_002A8490->f2e0->f2cc->func_001D42A0(s.func_001D3F50(), &D_0027A1B0)) {
            if (!D_002A8490->f2e0->f2cc->func_001D4720(s.func_001D3F50(), &D_0027A1B0)) return 0;
        }
        D_002A8490->f2e0->f2c0->func_0005B730();
        D_002A8490->f2e0->f2c0->func_0005B880();
        if (!D_002A8490->f2e0->f2cc->func_001D4440((int)s.func_001D3F50(), (int)&D_0027A1B0,
            (int)D_002A8490->f2e0->f2c0->func_001D3F50(), 0xd80)) return 0;
        for(int i=0;i<10;i++) {
            if (*D_002A8490->f2e0->f2c0->func_0005C020(i) == 0) {
                func_001ADCC0(buf,0x104,&D_0027A140,i);
                if(D_002A8490->f2e0->f2cc->func_001D42A0(s.func_001D3F50(),buf)) {
                    if(!D_002A8490->f2e0->f2cc->func_001D4720(s.func_001D3F50(),buf)) return 0;
                    if(!D_002A8490->f2e0->f2cc->func_001D4440((int)s.func_001D3F50(),(int)buf,(int)D_002A8490->f2e0->f2c0->func_0005C020(i),0x1f98)) return 0;
                } else {
                    if(!D_002A8490->f2e0->f2cc->func_001D4440((int)s.func_001D3F50(),(int)buf,(int)D_002A8490->f2e0->f2c0->func_0005C020(i),0x1f98)) return 0;
                }
            }
        }
    }
    return 1;
}

