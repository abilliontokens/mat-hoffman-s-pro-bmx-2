/* 15 functions from 0x0014A610 to 0x0014B260, found by Ghidra. */
#include "common.h"
struct C_0014A630 {
    int unk0;
    int unk4;
    int unk8;
    void func_0014A630(void);
};

struct C_0014A610 {
    int unk0;
    int unk4;
    int unk8;
    C_0014A610* func_0014A610(void);
    void func_0014A650(C_0014A610 *src);
};

struct VSEntry {
    int f0;
    int f4;
    int f8;
    char fC;
    char fD;
};

struct VSEntry2 {
    int f0;
    int f4;
    int f8;
    int fC;
};

struct C_0014A520 {
    C_0014A520 *func_0014A520(int a);
    void func_0014A560(int a, int b);
};

struct C_0014A8A0 {
    char pad0[8];
    int f8;
    char padC[8];
    VSEntry2 *f14;
    void func_0014A8A0(void);
    void func_0014A910(int param_1);
    void func_0014A9C0(void);
    void func_001AC790(int param_1);
};

struct C_00012140 {
    void func_0014A540(void);
};

struct C_0014AA40 {
    int unk0;
    void func_0014A9C0(void);
    void func_001AC830(void);
    void *func_0014AA40(int flags);
};

struct C_0014A960 {
    int unk0;
    void func_001AC3A0(void);
    void func_001AC680(int a, int b);
    void *func_0014A960(void);
};

struct C_0014A870 {
    int unk0;
    void func_001AC3D0();
    void *func_0014A870(int flags);
};

void *func_001E8A44(int size);
void __stdcall func_001FF220(int v);
void __stdcall func_001FEEF0(int a, int b);
void __stdcall func_001FEB90(int a, int b);
int func_0014A6C0(int type);
int func_0014A7B0(VSEntry *entries, unsigned int *tokens);


C_0014A610* C_0014A610::func_0014A610(void) {
    unk0 = 0;
    unk4 = 0;
    unk8 = -1;
    return this;
}

void C_0014A630::func_0014A630(void) {
    unk0 = 0;
    unk4 = 0;
    unk8 = -1;
}

void C_0014A610::func_0014A650(C_0014A610 *src)
{
    if (src == 0) {
        func_001FF220((int)src);
        unk0 = 0;
        unk4 = 0;
        unk8 = 0;
        return;
    }
    if (unk4 != src->unk8 || unk8 != 0) {
        func_001FEEF0(src->unk8, 0);
    }
    int v = 0;
    if (unk0 != src->unk4) {
        v = src->unk4;
    }
    if (v != 0 || unk8 != 0) {
        func_001FEB90(v, 0);
    }
    unk0 = src->unk4;
    unk4 = src->unk8;
    unk8 = 0;
}

int func_0014A7B0(VSEntry *entries, unsigned int *tokens)
{
    for (int i = 0; i < 16; i++) {
        entries[i].f0 = 0;
        entries[i].f4 = 0;
        entries[i].f8 = 2;
        entries[i].fC = 0;
        entries[i].fD = 0;
    }
    int count = 0;
    int offset = 0;
    int index = 0;
    while (*tokens != 0xffffffff) {
        unsigned int tok = *tokens;
        unsigned int op = tok >> 29;
        if (op == 1) {
            index = tok & 0xf;
            offset = 0;
        } else if (op == 2) {
            if (tok & 0x10000000) {
                offset += ((tok >> 16) & 0xf) * 4;
            } else if (tok & 0x18000000) {
                offset += (tok >> 16) & 0xf;
            } else {
                VSEntry *e = &entries[tok & 0x1f];
                e->f0 = index;
                e->f4 = offset;
                e->f8 = (tok >> 16) & 0xff;
                e->fC = 0;
                e->fD = 0;
                offset += func_0014A6C0(e->f8);
                count++;
            }
        }
        tokens++;
    }
    return count;
}

void *C_0014A870::func_0014A870(int flags) {
    extern int D_00286870;
    void func_001E891B(void *);
    unk0 = (int)&D_00286870;
    func_001AC3D0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_0014A8A0::func_0014A8A0(void)
{
    for (int i = 0; i < f8; i++) {
        if (f14[i].fC > 0 && f14[i].f4 == 0) {
            C_0014A520 *p = (C_0014A520 *)func_001E8A44(0xc);
            p = p != 0 ? p->func_0014A520(f14[i].f8) : 0;
            p->func_0014A560(f14[i].f0, i);
            f14[i].f4 = (int)p;
        }
    }
}

void C_0014A8A0::func_0014A910(int param_1)
{
    void func_001E891B(int);
    int value;
    func_001AC790(param_1);
    if (f14[param_1].fC == 0) {
        value = f14[param_1].f4;
        if (value != 0) {
            ((C_00012140 *)value)->func_0014A540();
            func_001E891B(value);
            f14[param_1].f4 = 0;
        }
    }
}

void *C_0014A960::func_0014A960(void) {
    extern int D_00286904;
    extern int D_00286870;
    extern int D_002868F0;
    extern int D_002868DC;
    extern int D_002868C8;
    extern int D_002868B4;
    func_001AC3A0();
    unk0 = (int)&D_00286870;
    func_001AC680((int)&D_00286904, -0x54);
    func_001AC680((int)&D_002868F0, -0x53);
    func_001AC680((int)&D_002868DC, -0x52);
    func_001AC680((int)&D_002868C8, -0x51);
    func_001AC680((int)&D_002868B4, -0x40);
    return this;
}

void C_0014A8A0::func_0014A9C0(void) {
    void func_001E8390(void *);
    void func_001E891B(void *);
    int i = 0;
    if (i < f8) {
        do {
            int v = f14[i].f4;
            if (v != 0) {
                ((C_00012140 *)v)->func_0014A540();
                func_001E891B((void *)v);
                f14[i].f4 = 0;
            }
            int w = f14[i].f0;
            if (w != 0) {
                func_001E8390((void *)w);
                f14[i].f0 = 0;
            }
            f14[i].fC = 0;
            i++;
        } while (i < f8);
    }
    f8 = 0;
}

void *C_0014AA40::func_0014AA40(int flags) {
    extern int D_00286894;
    void func_001E891B(void *);
    unk0 = (int)&D_00286894;
    func_0014A9C0();
    func_001AC830();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

