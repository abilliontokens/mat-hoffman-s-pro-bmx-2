/* 10 functions from 0x0018DE60 to 0x0018EB70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "asm_helpers.h"
struct C_0018E720 {
    undefined4 func_0018E720(byte param_1);
};

struct C_0018E640 {
    int unk0;
    char *next;
    char *func_0018E640(const char *delim);
};

extern "C" int strcmp(const char *s1, const char *s2);

struct C_00191400 {
    void *func_00191400(void);
};

#pragma pack(push, 4)
struct C_0018DA90_Result {
    double pad0[8];
    int f40;
};
#pragma pack(pop)

struct C_0018E0E0_Entry {
    char pad0[4];
    char name[0x40];
    int f44;
    char type;
    char pad49[3];
    int kind;
};

struct C_0018E0E0_Arg {
    char pad0[0x20];
    C_0018E0E0_Entry *f20;
    int f24;
};

struct C_0018DE60_Entry {
    int idx;
    char name[0x40];
    int f44;
    int type;
    int kind;
};

struct C_0018DE60_Arg {
    char pad0[0x20];
    C_0018DE60_Entry *f20;
};

template <class T> inline const T &min_0018DE60(const T &a, const T &b)
{
    return (b < a) ? b : a;
}

extern char *D_002A96A4[];
int func_001E91F4(const char *s);

struct C_0018E0E0 {
    int func_0018D900(int a);
    int func_0018DA00(int a, const char *name);
    void func_0018DE60(int a, C_0018DE60_Arg *arg, int idx, int kind, const char *name, int type);
    C_0018DA90_Result func_0018DA90(int kind, int idx, const char *name, unsigned int *out);
    void func_0018E0E0(C_0018E0E0_Arg *arg, int idx);
};

void *func_001E8A44(int size);
extern "C" int strlen(const char *s);
void func_001E8920(void *dst, const void *src, int n);

struct C_00191470 {
    char f0[0x18];
    unsigned int f18;
    int f1C;
    void func_00191510(const char *name, unsigned int flags);
};

struct C_002EFE08 {
    char pad0[0x12C];
    int f12C;
    int f130;
    int f134;
    int f138;
    int f13C;
    int f140;
    int f144;
    int f148;
};
extern C_002EFE08 *D_002EFE08;

/* named value holder: name[0x18], flags, value; a nested holder at 0x150 */
struct C_0018E250 {
    char f0[0x18];
    unsigned int f18;
    int f1C;
    char pad20[0x130];
    C_00191470 f150;
    void func_0018E250(const char *name, unsigned int flags);
};

struct Vec4_0018EA50 {
    float x, y, z, w;
    int func_001915A0(int a, int b, int *out);
};

static __forceinline int StrLen_0018E3E0(const char *s)
{
    const char *p = s + 1;

    do {
    } while (*s++);
    return s - p;
}

static __forceinline int Min_0018E3E0(int a, int b)
{
    return b > a ? a : b;
}

/* named value slot: flags (type in byte 1), pointer to the stored value, linked list of slots */
struct Node_0018EA50 {
    unsigned int flags;
    int f4;
    int state;
    void *f0C;
    Node_0018EA50 *next;
    char pad14[4];
    int f18;
    int f1C;
    char *f20;
    char f24[0x100];
    int f124;
    int f128;
    int f12C;
    int f130;
    int f134;
    char f138;
    char pad139[7];
    Vec4_0018EA50 v;
    char pad150[0x40];
    void func_0018E3E0(int a, int b);
};

struct C_0018EA50 {
    char pad0[0x14C];
    Node_0018EA50 *f14c;
    void func_0018EA50(int a, int b);
};

struct C_0018E1D0_Entry {
    char name[0x20];
    char pad20[0x18];
};

struct C_0018E740_Out {
    char pad0[0x38];
    int f38;
};

struct C_0018E1D0 {
    char pad0[0x19];
    u8 type;
    char pad1A[6];
    int f20;
    int f24;
    int f28;
    char pad2C[0x100];
    int f12C;
    int f130;
    int f134;
    int f138;
    char pad13C[4];
    int f140;
    char pad144[0xC];
    C_00191400 f150;
    char pad151[0x13];
    C_0018E1D0_Entry *entries;
    int count;
    void *func_0018E1D0(void);
    int func_0018E740(C_0018E740_Out *out, const char *name);
    int func_0018CC00(const char *name);
};


/* "name.value" record: 0x40-byte name followed by a lookup id */
struct C_0018E7D0_Rec {
    char name[0x40];
    int f40;
};

struct C_0018E7D0_Ent {
    int used;
    C_0018E7D0_Rec rec;
    char pad48[0x18];
};

extern char D_0028A9F4[];
extern char D_0027CEF0[];
char *func_001E95A4(char *s, const char *delim);

struct C_0018E7D0 {
    char pad0[0x158];
    C_0018E7D0_Ent *named;
    int func_0018D970(const char *name);
    int func_0018DA00(int index, const char *name);
    C_0018E7D0_Rec func_0018DA90(int kind, int idx, const char *name, unsigned int *out);
    int func_0018E7D0(int kind, C_0018E7D0_Rec *buf, int *out);
};

void C_0018E0E0::func_0018DE60(int a, C_0018DE60_Arg *arg, int idx, int kind, const char *name, int type)
{
    C_0018E0E0 *volatile self = this;
    unsigned int out;
    C_0018DA90_Result res;
    int r;
    int i;
    char *s;

    (*(C_0018DE60_Arg *volatile *)&arg)->f20[*(volatile int *)&idx].idx = *(volatile int *)&idx;
    (*(C_0018DE60_Arg *volatile *)&arg)->f20[*(volatile int *)&idx].kind = kind;
    (*(C_0018DE60_Arg *volatile *)&arg)->f20[*(volatile int *)&idx].type = type;
    int len = strlen(name);
    int max = 0x3f;
    int n = AsmMinI(max, len);
    func_001E8920((*(C_0018DE60_Arg *volatile *)&arg)->f20[*(volatile int *)&idx].name, name, n);
    (*(C_0018DE60_Arg *volatile *)&arg)->f20[*(volatile int *)&idx].name[n] = 0;
    if (name[0] == '$')
        return;
    if ((char)type == 1
        && (kind == 13 || kind == 14 || kind == 10 || kind == 11 || kind == 12
            || kind == 2 || kind == 19 || kind == 20 || kind == 21)) {
        r = self->func_0018D900(a);
        if (r != -1) {
            out = 0;
            res = self->func_0018DA90(1, r, name, &out);
            if (res.f40 != -1)
                (*(C_0018DE60_Arg *volatile *)&arg)->f20[*(volatile int *)&idx].f44 = res.f40;
            else
                (*(C_0018DE60_Arg *volatile *)&arg)->f20[*(volatile int *)&idx].f44 = -1;
        }
    }
    if (kind == 15) {
        for (i = 0; (s = D_002A96A4[i]) != 0; i++) {
            if (strcmp(name, s) == 0) {
                (*(C_0018DE60_Arg *volatile *)&arg)->f20[*(volatile int *)&idx].f44 = i + 1;
                return;
            }
        }
    } else if (kind == 3) {
        r = self->func_0018D900(a);
        if (r == -1)
            return;
        r = self->func_0018DA00(r, name);
        if (r == -1)
            (*(C_0018DE60_Arg *volatile *)&arg)->f20[*(volatile int *)&idx].f44 = -1;
        else
            (*(C_0018DE60_Arg *volatile *)&arg)->f20[*(volatile int *)&idx].f44 = r;
    } else if (kind == 16 || kind == 17 || kind == 18) {
        (*(C_0018DE60_Arg *volatile *)&arg)->f20[*(volatile int *)&idx].f44 = func_001E91F4(name);
    }
}

void C_0018E0E0::func_0018E0E0(C_0018E0E0_Arg *arg, int idx)
{
    int i;
    unsigned int x;
    C_0018DA90_Result r;

    i = 0;
    while (i < arg->f24) {
        if (arg->f20[i].type == 2) {
            int kind = arg->f20[i].kind;
            char c = arg->f20[i].name[0];
            const char *name = arg->f20[i].name;
            if (c != '$'
                && (kind == 13 || kind == 14 || kind == 10 || kind == 11 || kind == 12
                    || kind == 2 || kind == 19 || kind == 20 || kind == 21)) {
                r = func_0018DA90(2, idx, name, &x);
                if (r.f40 != -1) {
                    arg->f20[i].f44 = r.f40;
                }
            }
        }
        i++;
    }
}

void *C_0018E1D0::func_0018E1D0()
{
    void *r = 0;

    switch (type) {
    case 1:
        r = &f20;
        break;
    case 2:
        return &f24;
    case 3:
        return &f28;
    case 4:
        return &f138;
    case 5:
        return &f140;
    case 6:
        return &f12C;
    case 7:
        return &f130;
    case 8:
        return &f134;
    case 9:
        return f150.func_00191400();
    }
    return r;
}

void C_0018E250::func_0018E250(const char * volatile name, unsigned int flags)
{
    const char *s = name;
    C_0018E250 * volatile self;
    int len;
    int lim;
    int k;
    unsigned int f;
    int v;

    self = this;
    len = strlen(s);
    lim = 0x17;
    k = AsmMinI(lim, len);
    func_001E8920((void *)self, name, k);
    ((volatile char *)self)[k] = 0;
    self->f18 = *(volatile unsigned int *)&flags;
    f = *(volatile unsigned int *)&flags;

    switch ((f >> 8) & 0xff) {
    case 1:
        v = D_002EFE08->f12C;
        self->f1C = v;
        break;
    case 2:
        v = D_002EFE08->f130;
        self->f1C = v;
        break;
    case 3:
        v = D_002EFE08->f134;
        self->f1C = v;
        break;
    case 6:
        v = D_002EFE08->f140;
        self->f1C = v;
        break;
    case 7:
        v = D_002EFE08->f144;
        self->f1C = v;
        break;
    case 8:
        v = D_002EFE08->f148;
        self->f1C = v;
        break;
    case 4:
        v = D_002EFE08->f138;
        self->f1C = v;
        break;
    case 5:
        v = D_002EFE08->f13C;
        self->f1C = v;
        break;
    case 9:
        self->f150.func_00191510(name, f);
        self->f1C = self->f150.f1C;
        break;
    }
}

void Node_0018EA50::func_0018E3E0(int a, int b)
{
    int len;
    int cap;
    int min;
    int v;

    flags = a;
    switch ((this->flags >> 8) & 0xff) {
    case 1:
        this->f18 = *(int *)b;
            this->f0C = &this->f18;
        v = D_002EFE08->f12C;
        this->f4 = v;
        break;
    case 2:
        this->f1C = *(int *)b;
            this->f0C = &this->f1C;
        v = D_002EFE08->f130;
        this->f4 = v;
        break;
    case 3: {
        const char *s = *(const char **)b;

        len = strlen(s);
        cap = 0xff;
        min = AsmMinI(cap, len);
        func_001E8920(this->f24, s, min);
        this->f24[min] = 0;
            this->f20 = this->f24;
            this->f0C = &this->f20;
        v = D_002EFE08->f134;
        this->f4 = v;
        break;
    }
    case 6:
        this->f124 = *(int *)b;
            this->f0C = &this->f124;
        v = D_002EFE08->f140;
        this->f4 = v;
        break;
    case 7:
        this->f128 = *(int *)b;
            this->f0C = &this->f128;
        v = D_002EFE08->f144;
        this->f4 = v;
        break;
    case 8:
        this->f12C = *(int *)b;
            this->f0C = &this->f12C;
        v = D_002EFE08->f148;
        this->f4 = v;
        break;
    case 4: {
        *(__int64 *)&f130 = *(__int64 *)b;
            this->f0C = &this->f130;
        v = D_002EFE08->f138;
        this->f4 = v;
        break;
    }
    case 5:
        this->f138 = *(char *)b;
            this->f0C = &this->f138;
        v = D_002EFE08->f13C;
        this->f4 = v;
        break;
    case 9:
        v = this->v.func_001915A0(a, b, &this->f4);
        this->f0C = (void *)v;
        break;
    }
}

char *C_0018E640::func_0018E640(const char *delim)
{
    char *str;
    const char *ctrl = delim;
    unsigned char map[32];
    char *token;
    int count;

    for (count = 0; count < 32; count++)
        map[count] = 0;

    do {
        map[*ctrl >> 3] |= (1 << (*ctrl & 7));
    } while (*ctrl++);

    str = next;
    while ((map[*str >> 3] & (1 << (*str & 7))) && *str)
        str++;
    token = str;
    for (; *str; str++)
        if (map[*str >> 3] & (1 << (*str & 7))) {
            *str++ = 0;
            break;
        }
    next = str;
    if (token == str)
        return 0;
    return token;
}

undefined4 C_0018E720::func_0018E720(byte param_1)
{
  int func_0018CA20(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0018CA20();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int C_0018E1D0::func_0018E740(C_0018E740_Out *out, const char *name)
{
    int i;

    for (i = 0; i < count; i++) {
        if (strcmp(entries[i].name, name) == 0) {
            out->f38 = i;
            return 1;
        }
    }
    out->f38 = func_0018CC00(name);
    return 0;
}

int C_0018E7D0::func_0018E7D0(int kind, C_0018E7D0_Rec *buf, int *out)
{
    C_0018E7D0_Rec rec;
    char tmp[0x100];
    char *tok;
    char *name;
    int idx;
    int val;
    int n;
    int cap;
    unsigned int unused;

    rec = *buf;
    cap = 0xff;
    n = AsmMinI(cap, StrLen_0018E3E0(rec.name));
    func_001E8920(tmp, rec.name, n);
    tmp[n] = 0;
    tok = func_001E95A4(tmp, D_0028A9F4);
    idx = func_0018D970(tok);
    if (idx == -1) {
        return 0;
    }
    val = named[idx].rec.f40;
    name = func_001E95A4(0, D_0027CEF0);
    switch (kind) {
    case 0:
        rec = func_0018DA90(1, val, name, &unused);
        if (rec.f40 == -1) {
            rec = func_0018DA90(2, idx, name, &unused);
            if (rec.f40 == -1) {
                return 0;
            }
        }
        cap = 0x3f;
        n = AsmMinI(cap, StrLen_0018E3E0(name));
        func_001E8920(rec.name, name, n);
        break;
    case 1:
        n = func_0018DA00(val, name);
        if (n == -1) {
            return 0;
        }
        rec.f40 = n;
        cap = 0x3f;
        n = AsmMinI(cap, StrLen_0018E3E0(name));
        func_001E8920(rec.name, name, n);
        break;
    case 2:
        cap = 0x3f;
        n = AsmMinI(cap, StrLen_0018E3E0(name));
        func_001E8920(rec.name, name, n);
        break;
    }
    rec.name[n] = 0;
    *out = idx;
    *buf = rec;
    return 1;
}

void C_0018EA50::func_0018EA50(int a, int b)
{
    Node_0018EA50 *n;
    Node_0018EA50 *p;

    if (f14c->state == 1) {
        f14c->func_0018E3E0(a, b);
        f14c->state = 0;
        if (f14c->next == 0) {
            p = (Node_0018EA50 *)func_001E8A44(0x190);
            if (p != 0) {
                p->v.x = p->v.y = p->v.z = 0;
                p->v.w = 1.0f;
            } else {
                p = 0;
            }
            f14c->next = p;
            f14c->next->next = 0;
        }
        f14c->next->state = 1;
        return;
    }
    n = f14c->next;
    while (n->state != 1) {
        n = n->next;
    }
    n->func_0018E3E0(a, b);
    n->state = 0;
    if (n->next == 0) {
        p = (Node_0018EA50 *)func_001E8A44(0x190);
        if (p != 0) {
            p->v.x = p->v.y = p->v.z = 0;
            p->v.w = 1.0f;
        } else {
            p = 0;
        }
        n->next = p;
        n->next->next = 0;
    }
    n->next->state = 1;
}

