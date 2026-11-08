/* 10 functions from 0x00149620 to 0x0014A610, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
extern int D_0028684C;
extern int D_00275FB4;
extern int D_002BF0E0;
extern int D_00286830;

int __stdcall func_00201100(int param_1);
int __stdcall func_001FCE50(int param_1, int param_2);
void *func_001E8AA5(unsigned int size);

extern int D_002A74D0;
extern float D_00275460;
extern int D_0020C6DC;
extern int D_0020C720;
extern int D_0020C920;

struct S_149ED0_Slot6C { void func_0014A650(void *p); };
struct S_149ED0_Slot70 { void func_00142D00(void *p); };
struct S_149ED0_G {
    char pad0[0x6c];
    S_149ED0_Slot6C *f6c;
    S_149ED0_Slot70 *f70;
};
extern S_149ED0_G *D_002EFDB8;

struct V_149ED0 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
};

struct C_0013B210 {
    int func_0013C9F0(int param_1, int *param_2);
    void func_0013AF40(int param_1, int param_2, int *param_3);
    void func_0013C8A0(int param_1, void *param_2, int param_3, int param_4);
    void func_0013C110(int param_1);
};
extern C_0013B210 *D_002BEAAC;

struct C_00149E70 {
    char pad0[0x48];
    int unk48;
    int unk4C;
    int unk50;
    int unk54;
    int func_00149E70(int param_1, int param_2, int param_3);
};

struct C_0001DFE0 {
    void *vtbl;
    int unk4;
    void func_0001DFE0();
    void func_0001DFF0();
};

struct C_0014A540;
struct C_00012140 {
    void func_00012140();
};

struct Vec4f_149620 {
    float x;
    float y;
    float z;
    float w;
};

struct L_149ED0 {
    Vec4f_149620 t;
    float u;
    float vv;
    int h1;
    Vec4f_149620 m[4];
    int h2;
    Vec4f_149620 v0;
    V_149ED0 vtx2;
};

union U_149ED0 {
    V_149ED0 vtx;
    Vec4f_149620 t;
};

struct V_149ED0B {
    Vec4f_149620 pos;
    float u;
    float v;
};

struct C_0014A3A0 : C_0001DFE0 {
    int unk8[8];
    int unk28[8];
    int unk48;
    int unk4C;
    int unk50;
    int unk54;
    int unk58;
    Vec4f_149620 unk5C[4];
    int unk9C[8];
    int unkBC[8];
    int unkDC;
    int unkE0;
    int unkE4;
    C_0014A540 *unkE8;
    C_00012140 *unkEC;
    int unkF0;
    C_0014A3A0 *func_0014A3A0();
    void func_0014A420();
    int func_00149ED0(int param_1, int param_2);
    int func_00149620(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6);
};

struct C_0014A560 {
    char pad0[8];
    void *unk8;
    int func_0014A560(int param_1, int param_2);
};

struct C_0014A360 {
    undefined4 func_0014A360(int param_1);
};

struct C_0014A540 {
    void func_0014A540(void);
};

struct C_0014A500 {
    undefined4 func_0014A500(byte param_1);
};

struct C_0014A520 {
    int unk0;
    int unk4;
    int unk8;
    C_0014A520* func_0014A520(int a0);
};


int C_0014A3A0::func_00149620(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
{
    void *__stdcall func_001FF3C0(int size);
    void *__stdcall func_001FF410(void *buffer, int flags);
    int __stdcall func_001FCF20(int a0, int a1, int a2, int a3, int a4, int a5, int a6);
    int func_0014A7B0(void *entries, unsigned int *tokens);
    void *func_001E8A44(int size);
    Vec4f_149620 *q;
    Vec4f_149620 t;
    unsigned int tokens[4];
    int i;
    int hr;
    C_0014A560 *obj;
    void *alloc;

    unkF0 = param_1;
    unkDC = (int)func_001FF3C0(0x80);
    q = (Vec4f_149620 *)func_001FF410((void *)unkDC, 0x10);
    t.x = -1.0f; t.y = -1.0f; t.z = 0.0f; t.w = 1.0f; q[0] = t;
    t.x = 1.0f; t.y = -1.0f; t.z = 0.0f; t.w = 1.0f; q[2] = t;
    t.x = 1.0f; t.y = 1.0f; t.z = 0.0f; t.w = 1.0f; q[4] = t;
    t.x = -1.0f; t.y = 1.0f; t.z = 0.0f; t.w = 1.0f; q[6] = t;
    t.x = 0.0f; t.y = 1.0f; t.z = 0.0f; t.w = 1.0f; q[1] = t;
    t.x = 1.0f; t.y = 1.0f; t.z = 0.0f; t.w = 1.0f; q[3] = t;
    t.x = 1.0f; t.y = 0.0f; t.z = 0.0f; t.w = 1.0f; q[5] = t;
    t.x = 0.0f; t.y = 0.0f; t.z = 0.0f; t.w = 1.0f; q[7] = t;

    unkE4 = (int)func_001FF3C0(0x80);
    q = (Vec4f_149620 *)func_001FF410((void *)unkE4, 0x10);
    t.x = -1.0f; t.y = -1.0f; t.z = 0.0f; t.w = 1.0f; q[0] = t;
    t.x = 1.0f; t.y = -1.0f; t.z = 0.0f; t.w = 1.0f; q[2] = t;
    t.x = 1.0f; t.y = 1.0f; t.z = 0.0f; t.w = 1.0f; q[4] = t;
    t.x = -1.0f; t.y = 1.0f; t.z = 0.0f; t.w = 1.0f; q[6] = t;
    t.x = 0.0f; t.y = 0.0f; t.z = 0.0f; t.w = 1.0f; q[1] = t;
    t.x = 640.0f; t.y = 0.0f; t.z = 0.0f; t.w = 1.0f; q[3] = t;
    t.x = 640.0f; t.y = 480.0f; t.z = 0.0f; t.w = 1.0f; q[5] = t;
    t.x = 0.0f; t.y = 480.0f; t.z = 0.0f; t.w = 1.0f; q[7] = t;

    unkE0 = (int)func_001FF3C0(0x80);
    q = (Vec4f_149620 *)func_001FF410((void *)unkE0, 0x10);
    t.x = -1.0f; t.y = -1.0f; t.z = 0.0f; t.w = 1.0f; q[0] = t;
    t.x = -0.7f; t.y = -1.0f; t.z = 0.0f; t.w = 1.0f; q[2] = t;
    t.x = -0.7f; t.y = -0.7f; t.z = 0.0f; t.w = 1.0f; q[4] = t;
    t.x = -1.0f; t.y = -0.7f; t.z = 0.0f; t.w = 1.0f; q[6] = t;
    t.x = 0.0f; t.y = 1.0f; t.z = 0.0f; t.w = 1.0f; q[1] = t;
    t.x = 1.0f; t.y = 1.0f; t.z = 0.0f; t.w = 1.0f; q[3] = t;
    t.x = 1.0f; t.y = 0.0f; t.z = 0.0f; t.w = 1.0f; q[5] = t;
    t.x = 0.0f; t.y = 0.0f; t.z = 0.0f; t.w = 1.0f; q[7] = t;

    t.x = -1.0f; t.y = -1.0f; t.z = 0.0f; t.w = 0.0f; unk5C[0] = t;
    t.x = 1.0f; t.y = -1.0f; t.z = 0.0f; t.w = 0.0f; unk5C[1] = t;
    t.x = 1.0f; t.y = 1.0f; t.z = 0.0f; t.w = 0.0f; unk5C[2] = t;
    t.x = -1.0f; t.y = 1.0f; t.z = 0.0f; t.w = 0.0f; unk5C[3] = t;

    unk58 = param_5;
    for (i = 0; i < unk58; i++) {
        unk9C[i] = param_2;
        unkBC[i] = param_3;
        unk8[i] = func_001FCF20(param_2, param_3, 1, 1, 1, param_4, 3);
        hr = unk8[i] != 0 ? 0 : 0x8007000e;
        if (hr < 0) {
            return 0;
        }
        unk28[i] = func_001FCE50(unk8[i], 0);
        hr = unk28[i] != 0 ? 0 : 0x8007000e;
        if (hr < 0) {
            return 0;
        }
        if (param_6 != 0) {
            param_2 /= 2;
            param_3 /= 2;
        }
    }
    tokens[0] = 0x20000000;
    tokens[1] = 0x40420000;
    tokens[2] = 0x40420001;
    tokens[3] = 0xffffffff;
    func_0014A7B0(&D_002BF0E0, tokens);
    alloc = func_001E8A44(0xc);
    obj = alloc ? (C_0014A560 *)((C_0014A520 *)alloc)->func_0014A520((int)&D_002BF0E0) : 0;
    obj->func_0014A560((int)&D_00286830, 0);
    unkE8 = (C_0014A540 *)obj;
    return 1;
}

int C_00149E70::func_00149E70(int param_1, int param_2, int param_3)
{
    int hr;
    if (unk4C != 0) {
        func_00201100(unk4C);
    }
    unk48 = param_1;
    unk50 = param_2;
    unk54 = param_3;
    unk4C = 0;
    unk4C = func_001FCE50(param_1, 0);
    hr = unk4C != 0 ? 0 : 0x8007000e;
    return hr >= 0;
}

int C_0014A3A0::func_00149ED0(int param_1, int param_2)
{
    void __stdcall func_001FFB30(void *p);
    int __stdcall func_001FFE40(int a);
    int func_00200210();
    void __stdcall func_001FD450(int a);
    void __stdcall func_001FEFE0(int a);
    int __fastcall func_001FEBD0(int n, void *p);
    void *__stdcall func_001FF410(void *buffer, int flags);
    void __stdcall func_001FF940(int a, int b);
    void __stdcall func_00200230(void *p);
    void __stdcall func_00200390(int index, int value);
    void __stdcall func_00200A90(int a, int b, int c);
    void __stdcall func_001FF4E0(int a, int b, int c, int d, float e, int f);
    void __stdcall func_001FEE00(int a, void *b, int c);

    int h1;
    Vec4f_149620 m[4];
    int h2;
    Vec4f_149620 v0;
    V_149ED0 vtx2;
    int i;
    unsigned int *p;
    float f1;
    float f2;

    if (D_002A74D0 != 0) {
        func_001FFB30(&vtx2);
        h1 = func_001FFE40(0);
        h2 = func_00200210();
        func_001FD450(0);
    }

    p = (unsigned int *)m;
    i = 4;
    do {
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p += 4;
        i--;
    } while (i != 0);

    f1 = D_00275460 / (float)unk50;
    m[0] = unk5C[0];
    m[1] = unk5C[1];
    m[2] = unk5C[2];
    m[3] = unk5C[3];
    f2 = D_00275460 / (float)unk54;
    m[0].x *= f1; m[0].y *= f2;
    m[1].x *= f1; m[1].y *= f2;
    m[2].x *= f1; m[2].y *= f2;
    m[3].x *= f1; m[3].y *= f2;
    func_001FEFE0(1);

    v0.x = 0; v0.y = 0; v0.z = 0; v0.w = 1.0f;
    func_001FEBD0(0, &v0);
    for (i = 0; i < 4; i++)
        func_001FEBD0(0x22 + i, &m[i]);

    D_002EFDB8->f6c->func_0014A650(unkE8);
    D_002EFDB8->f70->func_00142D00(unkEC);

    if (param_2 != 0) {
        Vec4f_149620 t;
        Vec4f_149620 *q = (Vec4f_149620 *)func_001FF410((void *)unkE4, 0x10);
        t.x = 0; t.y = 0; t.z = 0; t.w = 1.0f; q[1] = t;
        t.x = (float)unk50; t.y = 0; t.z = 0; t.w = 1.0f; q[3] = t;
        t.x = (float)unk50; t.y = (float)unk54; t.z = 0; t.w = 1.0f; q[5] = t;
        t.x = 0; t.y = (float)unk54; t.z = 0; t.w = 1.0f; q[7] = t;
        func_001FEE00(0, (void *)unkE4, 0x20);
    } else {
        func_001FEE00(0, (void *)unkDC, 0x20);
    }

    for (i = 0; i < 4; i++) {
        (&D_0020C720)[i * 0x20 - 0x10] = 3;
        (&D_0020C720)[i * 0x20 - 0xf] = 3;
        (&D_0020C720)[i * 0x20 - 0xd] = 2;
        (&D_0020C720)[i * 0x20 - 0xc] = 2;
        (&D_0020C720)[i * 0x20 - 0xb] = 1;
        (&D_0020C720)[i * 0x20 - 9] = 0;
        (&D_0020C720)[i * 0x20 - 7] = 0;
        (&D_0020C720)[i * 0x20 - 6] = 0;
        (&D_0020C720)[i * 0x20 - 5] = 0;
        (&D_0020C720)[i * 0x20 - 4] = 1;
        (&D_0020C720)[i * 0x20] = 1;
        (&D_0020C720)[i * 0x20 + 5] = 0;
        D_0020C6DC |= (1 << i) | 0xc00;
    }

    if (param_1 == -1)
        param_1 = unk58;
    if (param_1 > unk58)
        param_1 = unk58;

    {
        V_149ED0 vtx;
        for (i = 0; i < param_1; i++) {
            vtx.f0 = 0;
            vtx.f4 = 0;
            vtx.f8 = unk9C[i];
            vtx.fC = unkBC[i];
            vtx.f10 = 0;
            vtx.f14 = 0x3f800000;
            func_001FF940(unk28[i], 0);
            func_00200230(&vtx);
            func_001FF4E0(0, 0, 0xf0, 0xfff020f0, 1.0f, 0);
            if (i == 0) {
                func_00200390(0, unk48);
                func_00200390(1, unk48);
                func_00200390(2, unk48);
                func_00200390(3, unk48);
            } else {
                func_00200390(0, unk8[i - 1]);
                func_00200390(1, unk8[i - 1]);
                func_00200390(2, unk8[i - 1]);
                func_00200390(3, unk8[i - 1]);
            }
            func_00200A90(8, 0, 4);
        }
    }

    if (D_002A74D0 != 0) {
        func_001FF940(h1, h2);
        func_00201100(h1);
        if (h2 != 0)
            func_00201100(h2);
        func_00200230(&vtx2);
    }
    func_00200390(0, 0);
    func_00200390(1, 0);
    func_00200390(2, 0);
    func_00200390(3, 0);
    return unk8[param_1 - 1];
}

undefined4 C_0014A360::func_0014A360(int param_1)
{
  int __stdcall func_00149ED0(int, int);
  int __stdcall func_001FFF40(int, int, int, int, int);
  int in_ECX = (int)this;
  
  func_00149ED0((int)(param_1), (int)(0));
  if (*(int *)(in_ECX + 0x4c) != 0) {
    func_001FFF40((int)(*(undefined4 *)(in_ECX + 0x24 + param_1 * 4)), (int)(0), (int)(0), (int)(*(int *)(in_ECX + 0x4c)), (int)(0));
    return 1;
  }
  return 0;
}

C_0014A3A0 *C_0014A3A0::func_0014A3A0()
{
    unsigned int *p;
    int i;
    func_0001DFE0();
    vtbl = &D_0028684C;
    p = (unsigned int *)unk5C;
    i = 4;
    do {
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p += 4;
        i--;
    } while (i != 0);
    i = 0;
    unkEC = 0;
    unkE8 = 0;
    unk48 = 0;
    unk4C = 0;
    unk54 = 0;
    unk50 = 0;
    unkDC = 0;
    if (0 < unk58) {
        int *q = unk8;
        do {
            if (*q != 0) {
                *q = 0;
                q[8] = 0;
            }
            i++;
            q++;
        } while (i < unk58);
    }
    return this;
}

void C_0014A3A0::func_0014A420()
{
    int func_001E891B(...);
    int i;
    C_0014A540 *filter;
    C_00012140 *matrix;
    vtbl = &D_0028684C;
    if (unkDC != 0) {
        func_00201100(unkDC);
    }
    unkDC = 0;
    if (unkE4 != 0) {
        func_00201100(unkE4);
    }
    unkE4 = 0;
    if (unkE0 != 0) {
        func_00201100(unkE0);
    }
    unkE0 = 0;
    for (i = 0; i < unk58; i++) {
        if (unk8[i] != 0) {
            func_00201100(unk8[i]);
        }
        if (unk28[i] != 0) {
            func_00201100(unk28[i]);
        }
    }
    if (unk4C != 0) {
        func_00201100(unk4C);
    }
    filter = unkE8;
    if (filter != 0) {
        filter->func_0014A540();
        func_001E891B(filter);
        unkE8 = 0;
    }
    matrix = unkEC;
    if (matrix != 0) {
        matrix->func_00012140();
        func_001E891B(matrix);
        unkEC = 0;
    }
    func_0001DFF0();
}

undefined4 C_0014A500::func_0014A500(byte param_1)
{
  int func_0014A420(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0014A420();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

#pragma auto_inline(off)
C_0014A520* C_0014A520::func_0014A520(int a0) {
    unk0 = 0;
    unk4 = a0;
    unk8 = 0;
    return this;
}
#pragma auto_inline(on)

#pragma auto_inline(off)
void C_0014A540::func_0014A540(void)
{
  int func_001E8390(...);
  int in_ECX = (int)this;
  
      if (*(int *)(in_ECX + 8) != 0) {
      func_001E8390(*(int *)(in_ECX + 8));
      *(undefined4 *)(in_ECX + 8) = 0;
    }
    return;
}
#pragma auto_inline(on)


int C_0014A560::func_0014A560(int param_1, int param_2)
{
    int id;
    int words;
    id = D_002BEAAC->func_0013C9F0(param_1, &D_00275FB4);
    if (id == -1) {
        return 0;
    }
    D_002BEAAC->func_0013AF40(id, 0, &param_1);
    words = (param_1 + 3) / 4;
    unk8 = func_001E8AA5(words * 4);
    if (unk8 == 0) {
        D_002BEAAC->func_0013C110(id);
        return 0;
    }
    ((int *)unk8)[words - 1] = 0;
    D_002BEAAC->func_0013C8A0(id, unk8, param_1, 1);
    D_002BEAAC->func_0013C110(id);
    return 1;
}

