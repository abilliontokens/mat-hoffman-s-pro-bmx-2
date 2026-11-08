/* 7 functions from 0x001B82A0 to 0x001B8920, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

extern int D_0028CF94;
extern int D_0028D04C;

void func_001E891B(void *p);
int func_001E8AF0(int a, void *b);

extern char D_0028D034[];
extern char D_0028D020[];
extern char D_0028D00C[];
extern int D_0028CF84;

void *func_001E83E8(void *p, int size);
void *func_001E8A44(int size);
int func_001ADCC0(char *buf, int size, const char *fmt, ...);

struct C_00169710 {
    int func_00169710(char *name);
    int func_00168C20(char *name, int a, int *out);
};

struct C_001B82D0_item {
    void *vtbl;
    int f4;
    int f8;
    char padc[0xc];
    C_001B82D0_item() {
        vtbl = (void *)&D_0028CF84;
        f4 = 0;
        f8 = 0;
    }
};

struct C_001B82D0_itemv {
    virtual void Load(C_00169710 *r);
};

struct C_00157600 {
    void func_00157600(void *param);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_001B83F0_item {
    int f0;
    int *f4;
    char pad8[8];
    int f10;
};

struct C_001B8480_item {
    char pad0[0x158];
    void *f158;
};

struct C_001B82A0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    C_001B83F0_item **f28;
    C_001B82A0 *func_001B82A0(void *param);
    int func_001B83F0(void *param);
    int func_001B82D0(C_00169710 *r);
};

struct C_001B8450 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    C_001B8480_item **f28;
    C_001B8450 *func_001B8450(void *param);
    void func_001B8480(void);
};

struct C_001B84E0_quat {
    float x;
    float y;
    float z;
    float w;
    void Reset(void) {
        z = 0.0f;
        y = 0.0f;
        x = 0.0f;
        w = 1.0f;
    }
};

struct C_001B84E0 {
    char pad0[0x118];
    C_001B84E0_quat q[4];
    C_001B84E0 *func_001B84E0(void);
};

extern char D_0027C588[];

struct Ctor_001B8550 {
    void *func_00143580(int a);
};

struct V4_001B8550 { int a, b, c, d; };

struct Voice_001B8550 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34();
    virtual int v35(char *buf, int a, int b);
    char pad4[0x24];
    char name[0x104];
    void func_00199600(V4_001B8550 v);
    void func_00198F50(void **a, void **b, int c, int d, int e);
    void func_0019ABA0(int a, int b);
};

struct Play_001B8550 {
    void func_001577A0(Voice_001B8550 *v, int a);
};

struct Wrap_001B8550 {
    char pad0[4];
    void *f4;
};

struct Entry1_001B8550 {
    char pad0[4];
    int f4;
    char pad8[0x1a4 - 8];
    Wrap_001B8550 *f1A4;
};

struct Entry2_001B8550 {
    char pad0[4];
    int f4;
    void *f8;
};

struct List_001B8550 {
    char pad0[0x24];
    int f24;
    void **f28;
};

struct Arg_001B8550 {
    char pad0[0x348];
    int f348;
    char pad34C[0x3a8 - 0x34c];
    struct Play_001B8550 **f3A8;
    List_001B8550 *f3AC;
    char pad3B0[0x4a8 - 0x3b0];
    int *f4A8;
};

struct Item_001B8550 {
    char pad0[0x104];
    int f104;
    char pad108[0x128 - 0x108];
    V4_001B8550 f128;
    void *f138;
    char pad13C[0x148 - 0x13c];
    void *f148;
    char pad14C[0x158 - 0x14c];
    void **f158;
};

struct C_001B8550 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    Item_001B8550 **f28;
    void func_001B8550(Arg_001B8550 *arg);
};

static __forceinline int Min_001B8550(int a, int b) { return a < b ? a : b; }

void func_0014FF00(int a, const char *b, int c, char *d, int e);
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);
extern "C" char *func_001E8AC0(const char *s, int c);
extern "C" int func_001EA426(const char *a, const char *b);
extern "C" int strlen(const char *s);

struct Clamp_001B8550 {
    volatile int limit;
    volatile int len;
    volatile int n;
};
extern "C" void *memset(void *dst, int c, unsigned int n);
#pragma intrinsic(memset)

C_001B82A0 *C_001B82A0::func_001B82A0(void *param) {
    ((C_00157600 *)this)->func_00157600(param);
    f24 = 0;
    f28 = 0;
    vtbl = (void *)&D_0028CF94;
    return this;
}

int C_001B82A0::func_001B82D0(C_00169710 *stream)
{
    int count;
    int i;
    int end;
    int start;
    char buf[0x104];
    C_001B82D0_item *e;

    if (stream->func_00169710(D_0028D034) == 0) {
        return 0;
    }
    stream->func_00168C20(D_0028D020, 0, &count);
    if (count > 0) {
        if (f28 != 0) {
            start = f24;
            f24 = start + count;
            end = f24;
            f28 = (C_001B83F0_item **)func_001E83E8(f28, f24 * 4);
        } else {
            start = 0;
            f24 = count;
            end = f24;
            f28 = (C_001B83F0_item **)func_001E8A44(f24 * 4);
        }
        for (i = start; i < end; i++) {
            func_001ADCC0(buf, 0x104, D_0028D00C, i - start + 1);
            if (stream->func_00169710(buf) != 0) {
                e = (C_001B82D0_item *)func_001E8A44(0x18);
                if (e != 0) {
                    e->vtbl = (void *)&D_0028CF84;
                    e->f4 = 0;
                    e->f8 = 0;
                } else {
                    e = 0;
                }
                f28[i] = (C_001B83F0_item *)e;
                ((C_001B82D0_itemv *)f28[i])->Load(stream);
            }
        }
    }
    return 1;
}

int C_001B82A0::func_001B83F0(void *param) {
    int i;

    for (i = 0; i < f24; i++) {
        if (func_001E8AF0(*f28[i]->f4 + 0x6c, param) != 0 && f28[i]->f10 == 1)
            return *f28[i]->f4;
    }
    return 0;
}

C_001B8450 *C_001B8450::func_001B8450(void *param) {
    ((C_00157600 *)this)->func_00157600(param);
    f24 = 0;
    f28 = 0;
    vtbl = (void *)&D_0028D04C;
    return this;
}

void C_001B8450::func_001B8480(void) {
    int i;

    vtbl = (void *)&D_0028D04C;
    if (f28) {
        for (i = 0; i < f24; i++) {
            func_001E891B(f28[i]->f158);
            func_001E891B(f28[i]);
        }
        func_001E891B(f28);
    }
    ((C_00157660 *)this)->func_00157660();
}

C_001B84E0 *C_001B84E0::func_001B84E0(void) {
    q[0].Reset();
    q[1].Reset();
    q[2].Reset();
    q[3].Reset();
    return this;
}

void C_001B8550::func_001B8550(Arg_001B8550 *arg)
{
    char buf[0x104];
    int i, j, k, m;
    int limit, len, n;
    Voice_001B8550 *voice;
    Entry1_001B8550 *e;
    Entry2_001B8550 *e2;
    char *dot;
    void *mem;

    if (this->f24 != 0) {
        for (i = 0; i < this->f24; i++) {
            k = 0;
            if (this->f28[i]->f104 == 0) {
                func_001ADCC0(buf, 0x104, D_0027C588, this->f28[i]);
                mem = func_001E8A44(0x1e0);
                voice = mem ? (Voice_001B8550 *)((Ctor_001B8550 *)mem)->func_00143580(1) : 0;
                this->f28[i]->f158[0] = voice;
                voice = (Voice_001B8550 *)this->f28[i]->f158[0];
                if (voice->v35(buf, 0, 1) == 0) {
                    continue;
                }
                len = strlen(buf);
                limit = 0x7f;
                n = AsmMinI(limit, len);
                func_001E8920(voice->name, buf, n);
                voice->name[n] = 0;
                voice->func_00199600(this->f28[i]->f128);
                voice->func_00198F50(&this->f28[i]->f138, &this->f28[i]->f148, 1, 0, 0);
                voice->func_0019ABA0(arg->f4A8[arg->f348], 1);
                arg->f3A8[arg->f348]->func_001577A0(voice, 0);
                this->f28[i]->f104 = 1;
            } else {
                for (j = 0; j < arg->f3AC->f24; j++) {
                    e = (Entry1_001B8550 *)arg->f3AC->f28[j];
                    if (e == 0 || e->f4 != 1) {
                        continue;
                    }
                    func_0014FF00((int)((char *)e->f1A4->f4 + 0x28), 0, 0, buf, 0);
                    if (func_001EA426(buf, (char *)this->f28[i]) != 0) {
                        continue;
                    }
                    this->f28[i]->f158[k] = e->f1A4->f4;
                    k++;
                    if (k >= this->f28[i]->f104) {
                        break;
                    }
                }
                if (k != 0) {
                    continue;
                }
                for (m = 0; m < ((List_001B8550 *)arg->f3A8[0])->f24; m++) {
                    e2 = (Entry2_001B8550 *)((List_001B8550 *)arg->f3A8[0])->f28[m];
                    if (e2 == 0 || e2->f4 != 1 || e2->f8 == 0) {
                        continue;
                    }
                    int len2, lim2, n2;
                    len2 = strlen((char *)e2->f8 + 0x28);
                    lim2 = 0x103;
                    n2 = AsmMinI(lim2, len2);
                    func_001E8920(buf, (char *)e2->f8 + 0x28, n2);
                    buf[n2] = 0;
                    dot = func_001E8AC0(buf, '.');
                    if (dot != 0) {
                        memset(dot, 0, strlen(dot));
                    }
                    if (func_001EA426(buf, (char *)this->f28[i]) == 0) {
                        this->f28[i]->f158[k] = e2->f8;
                        k++;
                        if (k >= this->f28[i]->f104) {
                            break;
                        }
                    }
                }
            }
        }
    }
}

