/* 24 functions from 0x001ED0FC to 0x001EDD36, found by Ghidra. */
#include "common.h"

void func_001E9DE9(void *p);
int func_001ED8A7(int ch, void *stream);

struct S_001EDC7E {
    int f0;
    int f4;
    int f8;
    u8 fC;
    u8 fD;
    char padE[0xA];
    int f18;
};

/* The CRT's per-file-handle record: D_002FB260[fh >> 5][fh & 0x1f]. */
struct S_ioinfo {
    int osfhnd;
    unsigned char osfile : 8;
    char pipech;
    char pad6[0x22];
};

#pragma optimize("y", off)
void func_001ED0FC(unsigned int *param_1, int param_2)
{
    int func_001F5059(...);
    int func_001F4848(...);
    unsigned int uVar3;
    unsigned int uVar1;
    int iVar2;
    int locals[6];
    uVar3 = 0;
    uVar1 = func_001F5059(&locals[0], &locals[5], param_2, 0, 0, 0, 0);
    if (uVar1 & 4) {
        uVar3 = 0x200;
        locals[3] = 0;
        locals[4] = 0;
    } else {
        iVar2 = func_001F4848(&locals[0], &locals[3]);
        if (((uVar1 & 2) != 0) || (iVar2 == 1)) {
            uVar3 = 0x80;
        }
        if (((uVar1 & 1) != 0) || (iVar2 == 2)) {
            uVar3 = uVar3 | 0x100;
        }
    }
    *param_1 = uVar3;
    param_1[1] = locals[5] - param_2;
    param_1[4] = locals[3];
    param_1[5] = locals[4];
}
#pragma optimize("", on)
void func_001ED402(void) {
    int func_001EB302(...);
    func_001EB302(1);
}

int func_001ED40B(int fh)
{
    int func_001EE6CE(...);
    int __stdcall func_001DD13C(int);
    int func_001DD603(...);
    int func_001EE685(...);
    void func_001ED087(unsigned int);
    extern int *D_002FB260[];
    int err;
    if (func_001EE6CE(fh) != -1) {
        if (fh == 1 || fh == 2) {
            int other = func_001EE6CE(2);
            if (func_001EE6CE(1) == other) {
                goto zero_err;
            }
        }
        if (func_001DD13C(func_001EE6CE(fh))) {
            goto zero_err;
        }
        err = func_001DD603();
        goto done;
    }
zero_err:
    err = 0;
done:
    func_001EE685(fh);
    *(unsigned char *)((unsigned char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 4) &= ~0xff;
    if (err != 0) {
        func_001ED087(err);
        return -1;
    }
    return 0;
}

int func_001ED48C(int fh)
{
    void __SEH_prolog(void *, int);
    int func_001EE70F(int);
    int *func_001ED075(void);
    int *func_001ED07E(void);
    void __SEH_epilog(void);
    void func_001ED503(void);
    int func_001ED40B(int);
    extern int D_002954F0;
    extern unsigned int D_002FB240;
    extern int *D_002FB260[];
    int result;
    __SEH_prolog(&D_002954F0, 0xc);
    if ((unsigned int)fh < D_002FB240 && (*(unsigned char *)((unsigned char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 4) & 1) != 0) {
        func_001EE70F(fh);
        if ((*(unsigned char *)((unsigned char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 4) & 1) == 0) {
            *func_001ED075() = 9;
            result = -1;
        } else {
            result = func_001ED40B(fh);
        }
        func_001ED503();
        return result;
    }
    *func_001ED075() = 9;
    *func_001ED07E() = 0;
    __SEH_epilog();
    return -1;
}

void func_001ED503(int fh)
{
    int func_001EE782(...);
    func_001EE782(fh);
}

int func_001ED50B(void)
{
    int *func_001ED075(void);
    int *func_001ED07E(void);
    void __SEH_epilog(void);
    *func_001ED075() = 9;
    *func_001ED07E() = 0;
    __SEH_epilog();
    return -1;
}

void func_001ED527(int *param_1)
{
    int func_001E8390(...);
    if ((param_1[3] & 0x83) != 0 && (param_1[3] & 8) != 0) {
        func_001E8390(param_1[2]);
        *(unsigned short *)(param_1 + 3) &= 0xfbf7;
        param_1[0] = 0;
        param_1[2] = 0;
        param_1[1] = 0;
    }
}

int func_001ED7FC(int fh, void *buffer, unsigned cnt)
{
    int func_001EE70F(int);
    int func_001ED633(int, void *, unsigned);
    int func_001EE782(int);
    int *func_001ED075(void);
    int *func_001ED07E(void);
    extern unsigned int D_002FB240;
    extern int *D_002FB260[];
    int retval;
    if ((unsigned)fh >= D_002FB240 || (*(unsigned char *)((unsigned char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 4) & 1) == 0) {
        *func_001ED075() = 9;
        *func_001ED07E() = 0;
        return -1;
    }
    func_001EE70F(fh);
    __try {
        if (*(unsigned char *)((unsigned char *)D_002FB260[fh >> 5] + (fh & 0x1f) * 0x28 + 4) & 1) {
            retval = func_001ED633(fh, buffer, cnt);
        } else {
            *func_001ED075() = 9;
            *func_001ED07E() = 0;
            retval = -1;
        }
    }
    __finally {
        func_001EE782(fh);
    }
    return retval;
}

int func_001EDBF6(int *param_1)
{
    int func_001F57FF(...);
    int func_001E8AA5(...);
    extern int D_002AE690;
    extern int D_002AE6B0;
    extern int D_002F6858;
    extern int *D_002F69FC[];
    int **slot;
    int idx;
    if (func_001F57FF(param_1[4]) == 0) {
        return 0;
    }
    if (param_1 == &D_002AE690) {
        idx = 0;
    } else if (param_1 == &D_002AE6B0) {
        idx = 1;
    } else {
        return 0;
    }
    D_002F6858++;
    if ((*(unsigned short *)(param_1 + 3) & 0x10c) != 0) {
        return 0;
    }
    slot = &D_002F69FC[idx];
    if (*slot == 0) {
        *slot = (int *)func_001E8AA5(0x1000);
        if (*slot == 0) {
            param_1[0] = param_1[2] = (int)(param_1 + 5);
            param_1[1] = param_1[6] = 2;
            goto done;
        }
    }
    param_1[0] = param_1[2] = (int)*slot;
    param_1[1] = param_1[6] = 0x1000;
done:
    *(unsigned short *)(param_1 + 3) |= 0x1102;
    return 1;
}

void func_001EDC7E(int a, S_001EDC7E *p) {
    if (a != 0 && (p->fD & 0x10) != 0) {
        func_001E9DE9(p);
        p->fD &= 0xEE;
        p->f18 &= 0;
        p->f0 &= 0;
        p->f8 &= 0;
    }
}

int func_001EDCA8(int ch, S_001EDC7E *stream, int *pcnt) {
    int c;
    if ((stream->fC & 0x40) == 0 || stream->f8 != 0) {
        if (--stream->f4 < 0) {
            c = func_001ED8A7(ch, stream);
        } else {
            *(char *)stream->f0 = (char)ch;
            stream->f0++;
            c = (unsigned char)ch;
        }
        if (c == -1) {
            *pcnt = -1;
            return -1;
        }
    }
    (*pcnt)++;
    return 0;
}

void func_001EDCDB(int *pcnt, int ch, int n, S_001EDC7E *stream) {
    while (n > 0) {
        n--;
        func_001EDCA8(ch, stream, pcnt);
        if (*pcnt == -1) break;
    }
}

void func_001EDCFF(char *str, int len, S_001EDC7E *stream, int *pcnt)
{
    if ((stream->fC & 0x40) && stream->f8 == 0) {
        *pcnt += len;
        return;
    }
    while (len > 0) {
        len--;
        func_001EDCA8(*str, stream, pcnt);
        str++;
        if (*pcnt == -1) break;
    }
}

