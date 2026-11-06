/* 16 functions from 0x00140680 to 0x001414A0, found by Ghidra. */
#include "common.h"
extern int D_00284F8C;
extern char D_0028502C[];
extern char D_002850C4[];
extern char D_00010000;
extern char D_00020000;
extern char D_00030000;
extern char D_002789B8[];
char *func_001E95A4(char *s, const char *delim);

extern "C" int memcmp(const void *a, const void *b, unsigned int n);
void func_001E891B(void *p);
void *func_001E8A44(unsigned int size);
int func_001E9576(const char *s, char **end, int base);
double func_001E931E(const char *s, char **end);

struct VObj {
    virtual void destroyObject(int flags);
};

extern "C" int strcmp(const char *a, const char *b);

struct C_00140680 {
    VObj *a;
    VObj *b;
    C_00140680() { a = 0; b = 0; }
    ~C_00140680();
    static void *operator new[](unsigned int size) { return func_001E8A44(size); }
    void func_001402C0(int p1, int p2);
    void *func_00140680(unsigned int flags);
};

/* the same function, called without letting the compiler inline it */
struct C_00140680Array {
    void *func_00140680(unsigned int flags);
};

void *operator new[](unsigned int size);

struct C_0013FD50 {
    VObj *func_0013FD50(void *owner);
};

struct C_00168BE0 {
    void func_00168BE0(const char *key, const char *def, char *buf, int size);
};

struct DXMesh {
    void *vtbl;
    char pad04[0x38];
    C_00140680 *f3c;
    int f40;
    int f44;
    VObj *f48;
    void func_00162690(int p1, int p2, int p3, int *p4, int p5);
    void func_00162660();
    DXMesh *func_00140710(int p1, int p2, int count, int *p4, int p5);
    void *func_001407D0(unsigned int flags);
};

void *C_00140680::func_00140680(unsigned int flags)
{
    if (flags & 2) {
        int *base = (int *)this - 1;
        int i = *base;
        C_00140680 *p = this + i;
        while (--i >= 0) {
            p--;
            if (p->a) p->a->destroyObject(1);
            if (p->b) p->b->destroyObject(1);
        }
        if (flags & 1) func_001E891B(base);
        return base;
    }
    if (a) a->destroyObject(1);
    if (b) b->destroyObject(1);
    if (flags & 1) func_001E891B(this);
    return this;
}

DXMesh *DXMesh::func_00140710(int p1, int p2, int count, int *p4, int p5)
{
    func_00162690(p1, p2, count, p4, p5);
    f44 = count;
    f40 = count;
    f3c = new C_00140680[count];
    for (int j = 0; j < f44; j++) {
        f3c[j].func_001402C0(p1, p4[j]);
    }
    void *m = func_001E8A44(0x1b0);
    f48 = m ? ((C_0013FD50 *)m)->func_0013FD50(this) : 0;
    return this;
}

void *DXMesh::func_001407D0(unsigned int flags)
{
    vtbl = (void *)&D_00284F8C;
    if (f3c) ((C_00140680Array *)f3c)->func_00140680(3);
    if (f48) f48->destroyObject(1);
    func_00162660();
    if (flags & 1) func_001E891B(this);
    return this;
}

int func_00140820(C_00168BE0 *cfg, const char *key, int def, int &out)
{
    char *end;
    char buf[64];
    cfg->func_00168BE0(key, "undefined", buf, 64);
    if (strcmp(buf, "undefined") == 0) {
        out = def;
    } else {
        *(float *)&out = (float)func_001E931E(key, &end);
    }
    return out;
}

int func_00140890(C_00168BE0 *cfg, const char *key, int def, int &out)
{
    char *end;
    char buf[64];
    cfg->func_00168BE0(key, "undefined", buf, 64);
    if (strcmp(buf, "undefined") == 0) {
        out = def;
    } else {
        out = func_001E9576(buf, &end, 0);
    }
    return out;
}

int func_00140900(C_00168BE0 *cfg, const char *key, int def, int &out)
{
    char buf[64];
    cfg->func_00168BE0(key, "undefined", buf, 64);
    if (strcmp(buf, "undefined") == 0) {
        out = def;
    } else if (strcmp(buf, "TRUE") == 0) {
        out = 1;
    } else if (strcmp(buf, "FALSE") == 0) {
        out = 0;
    }
    return out;
}

int func_001E958D(const char *s, char **end, int base);
int func_001409A0(C_00168BE0 *cfg, const char *key, int def, int &out)
{
    char *end;
    char buf[64];
    cfg->func_00168BE0(key, "undefined", buf, 64);
    if (strcmp(buf, "undefined") == 0) {
        out = def;
    } else {
        out = func_001E958D(buf, &end, 0);
    }
    return out;
}

int func_00140A10(C_00168BE0 *cfg, const char *key, int def, int &out)
{
    char buf[128];
    char *tok;
    cfg->func_00168BE0(key, "undefined", buf, 128);
    if (strcmp(buf, "undefined") == 0) {
        out = def;
    } else {
        out = 0;
        tok = func_001E95A4(buf, D_002850C4);
        while (tok != 0) {
            if (strcmp(tok, "D3DTSIGN_ASIGNED") == 0) {
                out |= 0x10000000;
            } else if (strcmp(tok, "D3DTSIGN_AUNSIGNED") == 0) {
                out |= 0;
            } else if (strcmp(tok, "D3DTSIGN_RSIGNED") == 0) {
                out |= 0x20000000;
            } else if (strcmp(tok, "D3DTSIGN_RUNSIGNED") == 0) {
                out |= 0;
            } else if (strcmp(tok, "D3DTSIGN_GSIGNED") == 0) {
                out |= 0x40000000;
            } else if (strcmp(tok, "D3DTSIGN_GUNSIGNED") == 0) {
                out |= 0;
            } else if (strcmp(tok, "D3DTSIGN_BSIGNED") == 0) {
                out |= 0x80000000;
            }
            tok = func_001E95A4(0, D_002850C4);
        }
    }
    return out;
}

