/* 24 functions from 0x00161C70 to 0x00162B70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00162720 {
    void func_00162720(undefined4 param_1);
};

struct C_001625D0 {
    int unk0;
    void func_001625D0(void);
};

void func_001E891B(void *p);

struct PositionElement {
    char pad[0x18];
    void func_0015B680();
};

struct LinearPositionController {
    void *func_001629A0(unsigned char flags);
};

extern int D_00287B94;
extern int D_002A8314;
extern int D_002ED708;
extern int D_002EEF28[];
extern float D_002ED710[];
extern float D_00287B6C;
extern float D_00275460;
extern float D_00275544;
extern float D_002755EC;
int func_00162020(float *a, float *b, int c);
int func_0014F6E0(void *a, void *b, void *c);
void func_001622C0(float *m, void *arg);

struct C_001625E0 {
    void *vtbl;
    void *func_001625E0(int flags);
};

struct C_00161F80 {
    void func_00161D90();
    float func_00161F80(float param);
};


void C_001625D0::func_001625D0(void) {
    extern int D_00287B94;
    int func_00157660(...);
    unk0 = (int)&D_00287B94;
    func_00157660();
}

void C_00162720::func_00162720(undefined4 param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x34) = param_1;
  *(undefined4 *)(in_ECX + 0x30) = 2;
  *(byte *)(in_ECX + 0x39) = *(byte *)(in_ECX + 0x39) | 1;
  return;
}

void *LinearPositionController::func_001629A0(unsigned char flags)
{
    if (flags & 2) {
        int count = ((int *)this)[-1];
        char *base = (char *)this - 4;
        PositionElement *p = (PositionElement *)((char *)this + count * 0x18);
        int n = count - 1;
        if (n >= 0) {
            int k = n + 1;
            do {
                p = (PositionElement *)((char *)p - 0x18);
                p->func_0015B680();
            } while (--k);
        }
        if (flags & 1)
            func_001E891B(base);
        return base;
    }
    ((PositionElement *)this)->func_0015B680();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

