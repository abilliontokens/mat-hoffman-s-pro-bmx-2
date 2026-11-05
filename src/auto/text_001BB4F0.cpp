/* 16 functions from 0x001BB4F0 to 0x001BC310, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001BC020 {
    undefined4 func_001BC020(byte param_1);
};

extern int D_0028D244;
extern int D_0028D2BC;

void func_001E891B(void *p);
void func_001BB4F0();

struct C_001BB5F0 {
    void *vtbl;
    void func_00157660();
    void *func_001BB5F0(unsigned int flags);
};

extern int D_002AADF8;

int func_00011260(int lo, int hi);
int func_00135C70(int param_1, int param_2, int *param_3, int param_4);

struct C_001BBAA0 {
    char pad0[0x21];
    u8 unk21;                         /* 0x21 */
    char pad22[0x6E];
    int unk90;                        /* 0x90 */
    int unk94;                        /* 0x94 */
    int unk98;                        /* 0x98 */
    int *unk9C;                       /* 0x9C */
    int unkA0[5];                     /* 0xA0 */
    void **unkB4;                     /* 0xB4 */
    void **unkB8;                     /* 0xB8 */
    char padBC[0x14];
    int unkD0;                        /* 0xD0 */
    char padD4[0x218];
    u8 unk2EC;                        /* 0x2EC */
    void func_001BBA60(void);
    __declspec(noinline) void func_001BBAA0(void *a, void *b);
    void func_001BBE20(int a);
};

struct S_001BBDD0_2E4 {
    char pad0[0xA6];
    u8 unkA6;
};

struct C_001BBDD0 {
    char pad0[0x2E4];
    S_001BBDD0_2E4 *unk2E4;           /* 0x2E4 */
    int func_00157BF0(int *a, int b);
    void func_001BBDD0(int *a, int b);
};

struct S_001BBF90_Arg {
    char pad0[0x60];
    C_001BBAA0 *unk60;
};

struct C_001BB620 {
    char pad0[0xe8];
    int unkE8;
    int unkEC;
    char padF0[0x20];
    int unk110;
    int unk114;
    void func_001D3F50();
    void func_001BB620(void *a1, void *a2, int a3, int a4);
};

struct C_001BB860 {
    void *vtbl;
    char pad4[0xb0];
    void *unkB4;
    void *unkB8;
    void *unkBC;
    void *unkC0;
    void *unkC4;
    void *unkC8;
    void *unkCC;
    void func_00157660();
    void func_001BB860();
};

struct C_001334E0 {
    void func_001334E0(int a);
    void func_001334F0(void *a);
};

struct C_001BB900 {
    char pad0[0x2e4];
    void *unk2e4;
    int func_001BB900(void *a1);
};


void *C_001BB5F0::func_001BB5F0(unsigned int flags)
{
    vtbl = &D_0028D244;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001BB620::func_001BB620(void *a1, void *a2, int a3, int a4)
{
    unkE8 = (int)a1;
    unkEC = (int)a2;
    ((C_001BBAA0 *)a1)->func_001BBAA0(this, (void *)&func_001BB4F0);
    ((C_001BBAA0 *)unkEC)->func_001BBAA0(this, (void *)&func_001BB4F0);
    unk110 = a3;
    unk114 = a4;
    func_001D3F50();
}

void C_001BB860::func_001BB860()
{
    vtbl = &D_0028D2BC;
    if (unkB4) func_001E891B(unkB4);
    if (unkB8) func_001E891B(unkB8);
    if (unkBC) func_001E891B(unkBC);
    if (unkC0) func_001E891B(unkC0);
    if (unkC8) func_001E891B(unkC8);
    if (unkC4) func_001E891B(unkC4);
    if (unkCC) func_001E891B(unkCC);
    func_00157660();
}

int C_001BB900::func_001BB900(void *a1)
{
    if (a1) {
        ((C_001334E0 *)unk2e4)->func_001334E0(1);
        ((C_001334E0 *)unk2e4)->func_001334F0(a1);
        ((C_001334E0 *)a1)->func_001334F0(unk2e4);
        return 1;
    }
    return 0;
}

void C_001BBAA0::func_001BBA60(void)
{
    int i;
    if (unk9C != 0) {
        for (i = 0; i < 5; i++) {
            if (unkA0[i] == -1082130432) {
                unkA0[i] = *unk9C;
                return;
            }
        }
    }
}

void C_001BBDD0::func_001BBDD0(int *a, int b)
{
    if (func_00135C70(0x14, 0, a, 0x80) != 0 && unk2E4 != 0) {
        unk2E4->unkA6 = unk2E4->unkA6 == 0;
    }
    func_00157BF0(a, b);
}

void func_001BBF90(S_001BBF90_Arg *a, int b)
{
    C_001BBAA0 *p;
    if (D_002AADF8 != 0) {
        p = a->unk60;
        if (p->unk21 & 1) {
            u8 flags = p->unk2EC | 0x20;
            p->unk2EC = flags;
            if ((!(flags & 8) || !(flags & 0x10)) &&
                (p->unk90 == 100 || (!(flags & 0x40) && func_00011260(1, 100) <= p->unk90))) {
                p->unkD0++;
                p->unk2EC |= 0x10;
                p->func_001BBE20(b);
                p->func_001BBA60();
            }
        }
    }
}

undefined4 C_001BC020::func_001BC020(byte param_1)
{
  int func_001BB860(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001BB860();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
