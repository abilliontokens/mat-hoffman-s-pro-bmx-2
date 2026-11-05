/* 20 functions from 0x001F4B08 to 0x001F58D5, found by Ghidra. */
#include "common.h"

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

extern char D_002FB000[0x101];
extern char D_002FB120[0x18];
extern int D_002FB104;
extern int D_002FAFF0;
extern int D_002FAFE8;

/* CRT run-time error message table */
struct S_002AEF98 {
    int num;
    const char *msg;
};
extern S_002AEF98 D_002AEF98[0x12];

/* CRT FILE */
struct S_001F4_FILE {
    char *ptr;
    int cnt;
    char *base;
    int flag;
    int file;
    int charbuf;
    int bufsiz;
    char *tmpfname;
};

unsigned int func_001F4BC8(unsigned int newv, unsigned int mask)
{
    unsigned int func_001F4B96(unsigned int newv, unsigned int mask);

    return func_001F4B96(newv, mask & 0xfff7ffff);
}

#pragma intrinsic(memset)
void func_001F4BDE(void)
{
    memset(D_002FB000, 0, 0x101);
    memset(D_002FB120, 0, 0x18);
    D_002FB104 = 0;
    D_002FAFF0 = 0;
    D_002FAFE8 = 0;
}
void func_001F4E30(void) {
    int func_001EB302(...);
    func_001EB302(13);
}

void func_001F4E8B(int rterrnum)
{
    void __stdcall func_001DF5F4(const char *msg);
    unsigned int i;

    for (i = 0; i < 0x12; i++) {
        if (rterrnum == D_002AEF98[i].num) {
            break;
        }
    }
    if (rterrnum == D_002AEF98[i].num) {
        func_001DF5F4(D_002AEF98[i].msg);
    }
}

void func_001F4EB7(void)
{
    extern void (*D_002F6A68)(void);
    void func_001F4E8B(int rterrnum);

    func_001F4E8B(0xfc);
    if (D_002F6A68 != 0) {
        D_002F6A68();
    }
    func_001F4E8B(0xff);
}

