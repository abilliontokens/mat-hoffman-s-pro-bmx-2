/* 40 functions from 0x0001C2E0 to 0x0001D280, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <string.h>
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

struct S_0001C610_V4 {
    float x;
    float y;
    float z;
    float w;
};

static __forceinline float cross_0001C610(float *a, float *b, int i, int j) {
    return b[j] * a[i] - b[i] * a[j];
}

static __forceinline float dot3_0001C680(float x, float y, float z, float *p) {
    return x * p[0] + y * p[1] + z * p[2];
}

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
void *func_001E8A44(int size);

struct C_0001D0B0 {
    char pad0[4];
    void *f4;
    int f8;
    int fC;
    unsigned char f10;
    int func_0001D0B0(int count, int p2);
};

struct C_00157660 {
    void func_00157660(void);
};

/* object with a deleting destructor in vtable slot 0 */
struct S_0001D200_Obj {
    virtual void d0(int flags);
};

struct S_0001D200_Slot {
    void func_001A13F0(void);
};

/* AuralScape */
struct C_0001D200 {
    void *vtbl;
    char pad4[0x30];
    void *f34;
    char pad38[0x28];
    S_0001D200_Slot *slots[4];
    char pad70[4];
    void *f74;
    char pad78[0x10];
    void *f88;
    char pad8C[0x10];
    void *f9C;
    char padA0[0x14];
    S_0001D200_Obj *fB4;
    void func_0001D200(void);
};
extern int D_00275DFC;
char *func_001E8AC0(const char *s, int c);
int func_00135C70(int a, int b, int c, int d);

struct C_0001CD60 {
    int func_00157BF0(int a, int b);
    void func_0001CD60(int a, int b);
};

struct C_0001CC00;

struct S_0001CC00_Slot {
    S_0001CC00_Slot *func_001D5350(void);
    int func_001A2510(C_0001CC00 *owner, int a, int b);
    void func_001A13F0(void);
    int func_001A15F0(int *p);
    int func_001A1580(float *a, float *b);
    int func_001A1650(int *p);
};

struct C_0001CC00 {
    char pad0[0x2C];
    int unk2C;
    char pad30[0x14];
    int unk44;
    char pad48[0x10];
    int unk58;
    char pad5C[4];
    S_0001CC00_Slot *slots[1];
    int func_0001CC00(int idx, int a, int b);
    int func_0001CC80(int idx);
    void func_0001CCE0(int idx, int *a, float *b, float *c, int *d);
};

struct C_0001CA30 {
    void *vtbl;
    int f4;
    void *f8;
    int fC;
    int f10;
    unsigned char f14;
    char pad15[3];
    int f18;
    void *f1C;
    int f20;
    int f24;
    unsigned char f28;
    char pad29[3];
    unsigned char f2C;
    char pad2D[3];
    C_0001CA30 *func_0001C9F0(void);
    void func_0001CA30(void);
    void *func_0001CAB0(unsigned char flags);
};

struct S_0001CBC0_Item {
    char pad0[0x90];
    float f90;
};

static __forceinline void clear_bit0_0001C9F0(unsigned char *p) {
    *p &= 0xfe;
}

static __forceinline float vec3_abs(float x) {
    int i = *(int *)&x & 0x7fffffff;
    return *(float *)&i;
}

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

S_0001C610_V4 func_0001C610(float *a, float *b) {
    S_0001C610_V4 r;

    r.x = cross_0001C610(a, b, 1, 2);
    r.y = cross_0001C610(a, b, 2, 0);
    r.z = cross_0001C610(a, b, 0, 1);
    r.w = 1.0f;
    return r;
}

void func_0001C680(S_0001C610_V4 *out, float x, float y, float z, float w, float *m) {
    S_0001C610_V4 r;

    r.x = dot3_0001C680(x, y, z, m);
    r.y = dot3_0001C680(x, y, z, m + 4);
    r.z = dot3_0001C680(x, y, z, m + 8);
    r.w = 1.0f;
    *out = r;
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

void *C_0001C8F0::func_0001C8F0(int a)
{
    extern int D_00275C0C;
    func_00157600(a);
    f24 |= 1;
    f28 = 0;
    f2C = 0;
    vtbl = (void *)&D_00275C0C;
    return this;
}

void C_0001C920::func_0001C920(void) {
    extern int D_00275C0C;
    int func_00157660(...);
    unk0 = (int)&D_00275C0C;
    func_00157660();
}

void *C_0001C930::func_0001C930(void)
{
    extern int D_00275C94;
    func_0001DFE0();
    f10C = 0;
    f110 = 0;
    f114 = 0;
    f118 = 0;
    f11C = 0;
    f120 = 0;
    f8 = 0;
    vtbl = (void *)&D_00275C94;
    return this;
}

void C_0001C970::func_0001C970(void) {
    extern int D_00275C94;
    int func_0001DFF0(...);
    unk0 = (int)&D_00275C94;
    func_0001DFF0();
}

void *C_0001C980::func_0001C980(int a)
{
    extern int D_00275CFC;
    func_00157600(a);
    vtbl = (void *)&D_00275CFC;
    f24 = 1;
    f28 = 0;
    return this;
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

C_0001CA30 *C_0001CA30::func_0001C9F0(void)
{
    extern int D_00275DAC;
    vtbl = (void *)&D_00275DAC;
    f8 = 0;
    f4 = 0;
    fC = 0;
    f10 = 0;
    f14 &= 0xfe;
    f1C = 0;
    f18 = 0;
    f20 = 0;
    f24 = 0;
    f28 = 0;
    f2C = 0;
    return this;
}

void C_0001CA30::func_0001CA30(void)
{
    extern int D_00275DAC;
    vtbl = (void *)&D_00275DAC;
    func_001E891B(f1C);
    func_001E891B(f8);
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

void *C_0001CA30::func_0001CAB0(unsigned char flags)
{
    extern int D_00275DAC;
    vtbl = (void *)&D_00275DAC;
    func_001E891B(f1C);
    func_001E891B(f8);
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

float func_0001CAF0(float *a, float *b)
{
    float dx, dy, dz;

    dx = vec3_abs(a[0] - b[0]);
    dy = vec3_abs(a[1] - b[1]);
    dz = vec3_abs(a[2] - b[2]);
    return sqrtf(dx * dx + dy * dy + dz * dz);
}

void func_0001CB80(char *s) {
    char *dot = func_001E8AC0(s, '.');
    if (dot != 0) {
        memset(dot, 0, strlen(dot));
    }
}

int func_0001CBC0(S_0001CBC0_Item **a, S_0001CBC0_Item **b)
{
    return (*a)->f90 > (*b)->f90 ? -1 : 1;
}

int C_0001CBF0::func_0001CBF0(void) {
    return ++unk44 - 1;
}

int C_0001CC00::func_0001CC00(int idx, int a, int b) {
    void *mem = func_001E8A44(8);
    S_0001CC00_Slot *obj = mem != 0 ? ((S_0001CC00_Slot *)mem)->func_001D5350() : 0;
    slots[idx] = obj;
    if (obj != 0 && obj->func_001A2510(this, a, b) != 0) {
        unk58++;
        unk2C = 0;
        return 1;
    }
    S_0001CC00_Slot *p = slots[idx];
    if (p != 0) {
        p->func_001A13F0();
        func_001E891B(p);
    }
    slots[idx] = 0;
    return 0;
}

int C_0001CC00::func_0001CC80(int idx) {
    S_0001CC00_Slot *s = slots[idx];
    if (s != 0) {
        s->func_001A13F0();
        func_001E891B(s);
        slots[idx] = 0;
        unk58--;
        unk44--;
        unk2C = 0;
        return 1;
    }
    return 0;
}

void C_0001CC00::func_0001CCE0(int idx, int *a, float *b, float *c, int *d)
{
    if (slots[idx] != 0) {
        if (a != 0) {
            slots[idx]->func_001A15F0(a);
            unk2C++;
        }
        if (b != 0 && c != 0) {
            slots[idx]->func_001A1580(b, c);
        }
        if (d != 0) {
            slots[idx]->func_001A1650(d);
        }
    }
}

void C_0001CD40::func_0001CD40(void) {
    unk5C = 0;
}

void C_0001CD50::func_0001CD50(void) {
    unk5C = 1;
}

void C_0001CD60::func_0001CD60(int a, int b) {
    func_00135C70(0x1f, 0, a, 0x30);
    func_00157BF0(a, b);
}

int C_0001D0B0::func_0001D0B0(int count, int p2)
{
    void *p = func_001E8A44(count * 4);

    f10 |= 1;
    fC = count;
    f4 = p;
    f8 = p2;
    return p != 0;
}

void C_0001D200::func_0001D200(void)
{
    int i;
    S_0001D200_Slot *s;

    vtbl = (void *)&D_00275DFC;
    for (i = 0; i < 4; i++) {
        s = slots[i];
        if (s != 0) {
            s->func_001A13F0();
            func_001E891B(s);
        }
    }
    if (fB4 != 0) {
        fB4->d0(1);
    }
    func_001E891B(f9C);
    func_001E891B(f88);
    func_001E891B(f74);
    func_001E891B(f34);
    ((C_00157660 *)this)->func_00157660();
}

