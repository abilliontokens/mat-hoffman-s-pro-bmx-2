/* 31 functions from 0x001AFCC0 to 0x001B0A20, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

extern int D_0028C5BC;

struct S_002A8490 {
    char pad0[0x124];
    int unk124;
    char pad128[0x110];
    int unk238;
};
extern S_002A8490 *D_002A8490;

struct C_001AF530 {
    void func_001AF530(int i);
};

struct V_001AFEC0 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
};

struct C_001AFEC0 {
    int (*cb)(int user, C_001AFEC0 *self);
    int user;
    int unk8;
    C_001AF530 *items[4];
    V_001AFEC0 *unk1C;
    V_001AFEC0 *unk20;
    int unk24;
    void UpdateItems() {
        int i;
        for (i = 0; i < 4; i++) {
            if (items[i]) {
                items[i]->func_001AF530(i);
            }
        }
        if (unk1C) {
            unk1C->vf2();
        }
        if (unk20) {
            unk20->vf2();
        }
    }
    int func_001AFEC0();
};

struct C_0001DFE0 {
    void func_0001DFE0();
};

/* ShaderDescriptor */
struct C_001AFF50 {
    void *vtbl;
    int unk4;
    short unk8;
    char unkA;
    char padB;
    int unkC;
    int unk10;
    int unk14;
    C_001AFF50 *func_001AFF50();
};

struct S_001AFF80_val {
    char pad0[0xc];
    float value;
};

struct S_001AFF80_set {
    char pad0[0xc];
    S_001AFF80_val *vals[1];
};

struct S_001AFF80_entry {
    S_001AFF80_set *set;
    int pad4;
};

struct S_001AFF80_list {
    int count;
    int pad4;
    S_001AFF80_entry entries[1];
};

static inline void FloatToInt(int *out, float f) { *out = _mm_cvtt_ss2si(_mm_load_ss(&f)); }

struct C_001AFF80 {
    char pad0[0xc];
    S_001AFF80_set *unkC;
    S_001AFF80_list *unk10;
    int func_001AFF80(int idx);
};

struct C_001B01B0 {
    int unk0;
    C_001B01B0 *func_001B01B0(void);
};
struct C_001B01C0 {
    int unk0;
    void func_001B01C0(void);
};

struct C_001B01A0 {
    int unk0;
    void func_001B01A0(void);
};


int C_001AFEC0::func_001AFEC0()
{
    int i;
    if (D_002A8490->unk238 == unk8) {
        return 1;
    }
    if (D_002A8490->unk124 != 0 && unk24 == 0) {
        return 1;
    }
    if (cb == 0 || cb(user, this) != 0) {
        for (i = 0; i < 4; i++) {
            if (items[i]) {
                items[i]->func_001AF530(i);
            }
        }
        if (unk1C) {
            unk1C->vf2();
        }
        if (unk20) {
            unk20->vf2();
        }
    }
    unk8 = D_002A8490->unk238;
    return 1;
}

C_001AFF50 *C_001AFF50::func_001AFF50()
{
    ((C_0001DFE0 *)this)->func_0001DFE0();
    unk14 = 0;
    unkC = 0;
    unk10 = 0;
    unk8 = 0;
    unkA = 0;
    vtbl = (void *)&D_0028C5BC;
    return this;
}

int C_001AFF80::func_001AFF80(int idx)
{
    int r;
    int i;
    if (unk10) {
        for (i = 0; i < unk10->count; i++) {
            if (unk10->entries[i].set && unk10->entries[i].set->vals[idx]) {
                FloatToInt(&r, unk10->entries[i].set->vals[idx]->value);
                return r;
            }
        }
    } else if (unkC && unkC->vals[idx]) {
        FloatToInt(&r, unkC->vals[idx]->value);
        return r;
    }
    return 0;
}

void C_001B01A0::func_001B01A0(void) {
    extern int D_0028C5E0;
    unk0 = (int)&D_0028C5E0;
}

C_001B01B0 *C_001B01B0::func_001B01B0(void)
{
    extern int D_0028C5EC;
    unk0 = (int)&D_0028C5EC;
    return this;
}

void C_001B01C0::func_001B01C0(void) {
    extern int D_0028C5EC;
    unk0 = (int)&D_0028C5EC;
}

