/* 14 functions from 0x001C26B0 to 0x001C36B0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
extern float D_00275544;
u32 func_001DC974(void);
void *__stdcall func_001FF410(void *buffer, int flags);

struct C_00199650 {
    void func_00199650(void *p);
};

struct UIWidgetStaticUserRotate {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    char pad4[0x28];
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    char pad40[0x28];
    C_00199650 *f68;
    int f6c;
    char pad70[0x28];
    int f98;
    int f9c;
    int fA0;
    int fA4;
    char padA8[0x138];
    int f1E0;
    int f1E4;
    int f1E8;
    char pad1EC[0x54];
    float f240;
    u32 f244;
    void func_001C0B00(int p);
    void func_001C0B70(int p);
    void func_001C0BE0(int p);
    void func_00157A00(int p);
    int func_001C13A0(void);
    int func_001C1490(void);
    void func_001C2F90(int p);
    void func_001C32E0(void);
    void func_001C33A0(void);

    void SyncOn(void)
    {
        f2c = 1;
        if (f30 == 0 || f34 == 0) {
            if (f30 != 0) {
                v7();
            }
            if (f34 != 0) {
                v5();
            }
        }
    }

    void SyncOff(void)
    {
        f2c = 0;
        if (f38 == 0 || f3c == 0) {
            if (f38 != 0) {
                v7();
            }
            if (f3c != 0) {
                v5();
            }
        }
    }
};

struct C_001C35B0 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    void *f14;
    void func_001C35B0(void *src, int index, unsigned int count);
};

struct C_001C2F70 {
    undefined4 func_001C2F70(void);
};

extern int D_0028DF04;
extern int D_0028D804;
extern int D_0028DFE4;
void func_001E891B(void *p);

struct DelObj_001C34D0 {
    virtual void Destroy(int a0);
};

/* UIWidgetIcon */
struct C_001C34D0 {
    void *vtbl;
    char pad4[0x68 - 4];
    DelObj_001C34D0 *f68;
    void func_00157660(void);
    void *func_001C34D0(int flags);
};

struct C_001D57E0 {
    void func_001D57E0(void);
};

/* UIWidgetSelectableIcon */
struct C_001C3510 {
    void *vtbl;
    char pad4[0x68 - 4];
    char f68[0x64];
    char fCC[1];
    void func_00157660(void);
    void *func_001C3510(int flags);
};

/* DXVertexBuffer */
struct DXVertexBuffer {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    DXVertexBuffer *func_001C3550(int type, int count);
};

struct UIWidgetMovementControl {
    void func_001C0DD0(int slot, int value, int key);
    void func_001C1030(int slot, int value, int key);
    void func_001C3000(int p1, int p2, int value, int id);
    void func_001C3170(int p1, int p2, int value, int id);
};


undefined4 C_001C2F70::func_001C2F70(void)
{
  int __stdcall func_001C04D0(int);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x6c) != 0) {
    func_001C04D0((int)(*(int *)(in_ECX + 0x6c)));
  }
  return 1;
}

void UIWidgetMovementControl::func_001C3000(int p1, int p2, int value, int id)
{
    switch (id) {
    case 0x2c: func_001C0DD0(0, value, 10); break;
    case 0x2d: func_001C0DD0(1, value, 11); break;
    case 0x2e: func_001C0DD0(2, value, 8); break;
    case 0x2f: func_001C0DD0(3, value, 9); break;
    case 0x30: func_001C0DD0(4, value, 2); break;
    case 0x31: func_001C0DD0(5, value, 1); break;
    case 0x32: func_001C0DD0(6, value, 3); break;
    case 0x33: func_001C0DD0(7, value, 0); break;
    case 0x34: func_001C0DD0(8, value, 6); break;
    case 0x35: func_001C0DD0(9, value, 5); break;
    case 0x36: func_001C0DD0(10, value, 14); break;
    case 0x37: func_001C0DD0(11, value, 7); break;
    case 0x38: func_001C0DD0(12, value, 4); break;
    case 0x39: func_001C0DD0(13, value, 15); break;
    case 0x3a: func_001C0DD0(14, value, 13); break;
    case 0x3b: func_001C0DD0(15, value, 12); break;
    }
}

void UIWidgetMovementControl::func_001C3170(int p1, int p2, int value, int id)
{
    switch (id) {
    case 0x2c: func_001C1030(0, value, 10); break;
    case 0x2d: func_001C1030(1, value, 11); break;
    case 0x2e: func_001C1030(2, value, 8); break;
    case 0x2f: func_001C1030(3, value, 9); break;
    case 0x30: func_001C1030(4, value, 2); break;
    case 0x31: func_001C1030(5, value, 1); break;
    case 0x32: func_001C1030(6, value, 3); break;
    case 0x33: func_001C1030(7, value, 0); break;
    case 0x34: func_001C1030(8, value, 6); break;
    case 0x35: func_001C1030(9, value, 5); break;
    case 0x36: func_001C1030(10, value, 14); break;
    case 0x37: func_001C1030(11, value, 7); break;
    case 0x38: func_001C1030(12, value, 4); break;
    case 0x39: func_001C1030(13, value, 15); break;
    case 0x3a: func_001C1030(14, value, 13); break;
    case 0x3b: func_001C1030(15, value, 12); break;
    }
}

void C_001C35B0::func_001C35B0(void *src, int index, unsigned int count)
{
    char *dst = (char *)func_001FF410(f14, 0) + fC * index;

    memcpy(dst, src, count);
}

