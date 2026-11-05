/* 40 functions from 0x0001C2E0 to 0x0001D280, found by Ghidra. */
#include "common.h"
#include <math.h>
struct C_0001C710 {
    char pad0[0x130];
    float unk130;
    float unk134;
    float unk138;
    void func_0001C710(float a0, float a1, float a2, int a3);
};

struct C_0001CA50 {
    int unk0;
    void func_0001DFF0(void);
    void *func_0001CA50(int flags);
};

struct C_0001C5B0 {
    float x;
    float y;
    float z;
    C_0001C5B0 *func_0001C5B0(float *p);
};

static __forceinline void vec3_set(float *out, float x, float y, float z) {
    out[3] = 1.0f;
    out[0] = x;
    out[1] = y;
    out[2] = z;
}

struct C_0001C540 {
    char pad0[0x10];
    int unk10;
    int unk14;
    void func_0001C540(void);
};

struct C_0001CBF0 {
    char pad0[0x44];
    int unk44;
    int func_0001CBF0(void);
};

extern float D_00275544;

struct C_0001CD50 {
    char pad0[0x5C];
    int unk5C;
    void func_0001CD50(void);
};

struct C_0001CD40 {
    char pad0[0x5C];
    int unk5C;
    void func_0001CD40(void);
};

struct C_0001C9B0 {
    int unk0;
    void func_0001C9B0(void);
};

struct C_0001C970 {
    int unk0;
    void func_0001C970(void);
};

struct C_0001C920 {
    int unk0;
    void func_0001C920(void);
};

struct C_0001C9C0 {
    int unk0;
    void func_00157660(void);
    void *func_0001C9C0(int flags);
};

struct C_0001CA80 {
    int unk0;
    void func_00157660(void);
    void *func_0001CA80(int flags);
};

struct C_0001C520 {
    int unk0;
    char pad4[0x14];
    int unk18;
    int unk1C;
    void func_0001E050(void);
    C_0001C520 *func_0001C520(void);
};

struct C_0013B210 {
    void func_0013B210(void *);
};

struct C_0001C550 {
    int unk0;
    void func_0001C290(void);
    void func_0001DFF0(void);
    void *func_0001C550(int flags);
};

void func_001E891B(void *p);

struct C_0001CA30 {
    void *vtbl;
    char pad4[4];
    void *f8;
    char padC[0x10];
    void *f1C;
    void func_0001CA30(void);
};

struct C_0001C8F0 {
    void *vtbl;
    char pad4[0x20];
    unsigned char f24;
    char pad25[3];
    int f28;
    int f2C;
    void *func_0001C8F0(int a);
    void func_00157600(int a);
};

struct C_0001C930 {
    void *vtbl;
    char pad4[4];
    unsigned char f8;
    char pad9[0x103];
    int f10C;
    int f110;
    int f114;
    int f118;
    int f11C;
    int f120;
    void *func_0001C930(void);
    void func_0001DFE0(void);
};

struct C_0001C980 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    void *func_0001C980(int a);
    void func_00157600(int a);
};

struct C_0001C4C0_Item {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void func_0001C4C0(int *);
};

struct C_0001C4C0 {
    char pad0[0x18];
    int unk18;
    C_0001C4C0_Item **unk1C;
    void func_0001C4C0(int *);
};


void C_0001C4C0::func_0001C4C0(int *param_1) {
    int local[3];
    int i = 0;
    if (i < unk18) {
        do {
            C_0001C4C0_Item *item = unk1C[i];
            if (item != 0) {
                item->func_0001C4C0(local);
                param_1[0] = local[0];
                param_1[1] += local[1];
                param_1[2] += local[2];
            }
            i++;
        } while (i < unk18);
    }
}

C_0001C520 *C_0001C520::func_0001C520(void) {
    extern int D_00275BD0;
    func_0001E050();
    unk18 = 0;
    unk1C = 0;
    unk0 = (int)&D_00275BD0;
    return this;
}

void C_0001C540::func_0001C540(void) {
    unk10 = 0;
    unk14 = 2139095039;
}

void *C_0001C550::func_0001C550(int flags) {
    extern int D_00275BD0;
    extern C_0013B210 *D_002BEAAC;
    void func_001E891B(void *);
    unk0 = (int)&D_00275BD0;
    func_0001C290();
    D_002BEAAC->func_0013B210(this);
    func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

float func_0001C590(float x) {
    int i = *(int *)&x & 0x7fffffff;
    return *(float *)&i;
}

C_0001C5B0 *C_0001C5B0::func_0001C5B0(float *p) {
    x = x - p[0];
    y = y - p[1];
    z = z - p[2];
    return this;
}

void func_0001C5E0(float *out, float s, float *in) {
    vec3_set(out, s * in[0], s * in[1], s * in[2]);
}

void func_0001C610(float *out, float *a, float *b) {
    vec3_set(out, b[2] * a[1] - b[1] * a[2], b[0] * a[2] - b[2] * a[0], b[1] * a[0] - b[0] * a[1]);
}

void func_0001C680(float *out, float x, float y, float z, int unused, float *m) {
    vec3_set(out, y * m[1] + z * m[2] + x * m[0], y * m[5] + z * m[6] + x * m[4], y * m[9] + z * m[10] + x * m[8]);
}

void C_0001C710::func_0001C710(float a0, float a1, float a2, int a3) {
    unk130 = a0 + unk130;
    unk134 = a1 + unk134;
    unk138 = a2 + unk138;
}

float func_0001C870(float a, float b, float c, float d, float e) {
    float r;

    if (d == b) {
        return D_00275544;
    }
    r = (a - b) * (e - c) / (d - b) + c;
    if (e <= c) {
        if (r < e) {
            return e;
        }
        if (c < r) {
            return c;
        }
    } else {
        if (e < r) {
            return e;
        }
        if (r < c) {
            return c;
        }
    }
    return r;
}

void C_0001C920::func_0001C920(void) {
    extern int D_00275C0C;
    int func_00157660(...);
    unk0 = (int)&D_00275C0C;
    func_00157660();
}

void C_0001C970::func_0001C970(void) {
    extern int D_00275C94;
    int func_0001DFF0(...);
    unk0 = (int)&D_00275C94;
    func_0001DFF0();
}

void C_0001C9B0::func_0001C9B0(void) {
    extern int D_00275CFC;
    int func_00157660(...);
    unk0 = (int)&D_00275CFC;
    func_00157660();
}

void *C_0001C9C0::func_0001C9C0(int flags) {
    extern int D_00275C0C;
    void func_001E891B(void *);
    unk0 = (int)&D_00275C0C;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_0001CA50::func_0001CA50(int flags) {
    extern int D_00275C94;
    void func_001E891B(void *);
    unk0 = (int)&D_00275C94;
    func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_0001CA80::func_0001CA80(int flags) {
    extern int D_00275CFC;
    void func_001E891B(void *);
    unk0 = (int)&D_00275CFC;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int C_0001CBF0::func_0001CBF0(void) {
    return ++unk44 - 1;
}

void C_0001CD40::func_0001CD40(void) {
    unk5C = 0;
}

void C_0001CD50::func_0001CD50(void) {
    unk5C = 1;
}

