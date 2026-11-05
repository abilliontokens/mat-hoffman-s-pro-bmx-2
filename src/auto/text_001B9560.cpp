/* 10 functions from 0x001B9560 to 0x001BA560, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_0028D11C;

void *func_001E8A44(int size);
void func_001E891B(void *p);

struct C_001B9C70 {
    int *data;
    int size;
    int f08;
    int f0C;
    int f10;
    int f14;
    int func_001B9C70(int n);
};

struct C_00157600 {
    void func_00157600(void *param);
};

extern int D_0028D110;
extern char D_0028D1B0[];
extern char D_0028D1A0[];
extern char D_0028D190[];
void *func_001E83E8(void *block, unsigned int size);
int func_001ADCC0(char *buf, int size, const char *fmt, ...);

struct S_001B9B50_Stream {
    int func_00169710(void *name);
    void func_00168C20(void *key, int def, int *out);
};

struct S_001B9B50_Elem {
    void *vtbl;
    int f4;
    int f8;
};

struct S_001B9B50_ElemV {
    virtual void v0(S_001B9B50_Stream *stream);
};

struct C_001B9B20 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    S_001B9B50_Elem **f28;
    C_001B9B20 *func_001B9B20(void *param);
    int func_001B9B50(S_001B9B50_Stream *stream);
};

struct C_001B9D40 {
    undefined4 func_001B9D40(byte param_1);
};

struct C_001BA3B0 {
    undefined4 func_001BA3B0(byte param_1);
};


C_001B9B20 *C_001B9B20::func_001B9B20(void *param) {
    ((C_00157600 *)this)->func_00157600(param);
    f24 = 0;
    f28 = 0;
    vtbl = (void *)&D_0028D11C;
    return this;
}

int C_001B9B20::func_001B9B50(S_001B9B50_Stream *stream)
{
    int count;
    int i;
    int end;
    int start;
    char buf[0x104];
    S_001B9B50_Elem *e;

    if (stream->func_00169710(D_0028D1B0) == 0) {
        return 0;
    }
    stream->func_00168C20(D_0028D1A0, 0, &count);
    if (count > 0) {
        if (f28 != 0) {
            start = f24;
            f24 = start + count;
            end = f24;
            f28 = (S_001B9B50_Elem **)func_001E83E8(f28, f24 * 4);
        } else {
            start = 0;
            f24 = count;
            end = f24;
            f28 = (S_001B9B50_Elem **)func_001E8A44(f24 * 4);
        }
        for (i = start; i < end; i++) {
            func_001ADCC0(buf, 0x104, D_0028D190, i - start + 1);
            if (stream->func_00169710(buf) != 0) {
                e = (S_001B9B50_Elem *)func_001E8A44(0x10);
                if (e != 0) {
                    e->vtbl = (void *)&D_0028D110;
                    e->f4 = 0;
                    e->f8 = 0;
                } else {
                    e = 0;
                }
                f28[i] = e;
                ((S_001B9B50_ElemV *)f28[i])->v0(stream);
            }
        }
    }
    return 1;
}

undefined4 C_001B9D40::func_001B9D40(byte param_1)
{
  int func_001B4F90(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001B4F90();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_001BA3B0::func_001BA3B0(byte param_1)
{
  int func_001B5860(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_001B5860();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void func_001BA540(undefined4 param_1, undefined4 param_2, int param_3, int param_4)
{
  if (param_4 != 0) {
    **(undefined4 **)(param_3 + 0x288) = 1;
  }
  return;
}
