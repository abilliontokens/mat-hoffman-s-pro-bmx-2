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

int func_001E958D(const char *s, char **end, int base);

int func_00140B60(C_00168BE0 *cfg, const char *key, int def, int &out)
{
    char buf[256];
    char *tok;
    cfg->func_00168BE0(key, "undefined", buf, 256);
    out = 0;
    if (strcmp(buf, "undefined") == 0) {
        out = def;
    } else {
        tok = func_001E95A4(buf, D_002789B8);
        if (strcmp(tok, "0") != 0) {
            if (strcmp(tok, "1") == 0) {
                out |= 1;
            } else if (strcmp(tok, "2") == 0) {
                out |= 2;
            } else if (strcmp(tok, "3") == 0) {
                out |= 3;
            }
        }
        if (func_001E95A4(0, D_002789B8)) {
            tok = func_001E95A4(0, D_002789B8);
            if (strcmp(tok, "D3DTSS_TCI_PASSTHRU") != 0) {
                if (strcmp(tok, "D3DTSS_TCI_CAMERASPACENORMAL") == 0) {
                    out |= (int)&D_00010000;
                } else if (strcmp(tok, "D3DTSS_TCI_CAMERASPACEPOSITION") == 0) {
                    out |= (int)&D_00020000;
                } else if (strcmp(tok, "D3DTSS_TCI_CAMERASPACEREFLECTIONVECTOR") == 0) {
                    out |= (int)&D_00030000;
                }
            }
            func_001E95A4(0, D_002789B8);
        }
    }
    return out;
}

