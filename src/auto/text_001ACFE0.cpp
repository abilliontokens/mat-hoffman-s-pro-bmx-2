/* 7 functions from 0x001ACFE0 to 0x001ADFD0, found by Ghidra. */
#include "common.h"

extern int D_0028C1D0;
extern int D_0028C1DC;
extern int D_0028C1F0;
extern int D_002AA2D4;
extern int D_002EFFD0;
extern u16 D_001ADCB0;
extern int D_002AA470;
extern int D_0028C1B0;
extern int D_002ABE74;

struct S_001ACFE0_Range {
    char *cur;
    char *end;
};

int func_001ACFE0(const u16 *fmt, S_001ACFE0_Range *range, const char *a, void *b);
int func_001EA23F(int c);
int func_001EA268(int c);
int func_001E8BB0(const char *a, const char *b, int n);
extern char D_0028C17C[];
extern char D_0028C174[];
extern char D_0028C168[];
extern char D_0028C118[];
extern char D_0028C12C[];
char *func_001ACD40(int ndec, char fmt, double value, int alt, int *sign, char *buf, int *outlen);
char *func_001ACB40(double value, int ndec, char *buf, int alt);
char *func_001E9260(const char *s, int c);

static char *func_001ACCF0(int flag, int *sign, unsigned value, char *end, int *len)
{
    char *p = end;
    if (flag) {
        *sign = 0;
    } else {
        int neg = (int)value < 0;
        *sign = neg;
        if (neg)
            value = -value;
    }
    do {
        unsigned q = value / 10;
        p--;
        *p = (char)(value - q * 10) + '0';
        value = q;
    } while (value);
    *len = (int)(end - p);
    return p;
}

struct S_func_001ADD80_arg0 {
    char pad0[0x6c];
    int unk6c;
    int unk70;
    int unk74;
    int unk78;
};

struct C_00144640 {
    C_00144640 *func_00144640();
    virtual void v0();
    virtual void v1(int a, int b);
    int unk4;
    int unk8;
    u8 unkC;
    char padD[3];
    void *unk10;
};

struct C_002A829C_Y {
    char pad0[0x18];
    s16 unk18;
};

struct C_002A829C_X {
    char pad0[0x54];
    C_002A829C_Y *unk54;
};

struct C_002A829C_Entry {
    int unk0;
    C_002A829C_X *unk4;
    char pad8[8];
};

struct C_002A829C {
    void func_00161680(void);
    char pad0[0x14];
    C_002A829C_Entry *unk14;
};

extern C_002A829C *D_002A829C;

struct C_002AA6C0 {
    void func_001B2640(void);
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int a, int b);
    virtual int v7(int a, int b);
};

extern C_002AA6C0 *D_002AA6C0;

int __stdcall func_001FCF20(int a, int b, int c, int d, int e, int f, int g);
int __stdcall func_001FCE50(int a, int b);
void *__stdcall func_001FF3C0(int size);
void *func_001E8A44(int size);
int func_0014A7B0(int *entries, int *tokens);

struct C_0014A520 {
    C_0014A520 *func_0014A520(int a);
    void func_0014A560(int a, int b);
};

struct C_00142C70 {
    C_00142C70 *func_00142C70(void);
    void func_00142C80(int a, int b);
};

struct SpriteTweak {
    void *vtbl;
    C_00144640 *unk4;
    int unk8;
    int unkC;
    C_0014A520 *unk10;
    C_00142C70 *unk14;
    int unk18;
    int unk1C;
    int unk20;
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    float unk3C;
    float unk40;
    int unk44;
    float unk48;
    int unk4C;
    float unk50;
    int unk54;
    int unk58;
    int unk5C;
    int unk60;
    char unk64;
    int unk68;
    SpriteTweak *func_001ADEB0(void);
    void func_001ADDF0(int a);
    void func_001ADF30(int a, int b);
};

int func_001ACFE0(const u16 *fn_, S_001ACFE0_Range *range, int fmt_, void *args_)
{
    typedef int (*OutFn)(S_001ACFE0_Range *);
    OutFn fn = (OutFn)(void *)fn_;
    const char *fmt = (const char *)fmt_;
    unsigned *args = (unsigned *)args_;
    char *out = range->cur;
    char *end = range->end;
    int count = 0;
    char buf[512];
    char sign;
    char pad;
    int left, plus, space, hash, width, prec, hasWidth, hasPrec, lenmod;
    char *str;
    int len;
    int i;

    for (;;) {
        char c = *fmt;
        if (c == 0) {
            range->cur = out;
            return count;
        }
        if (c != '%') {
            if (end <= out) {
                range->cur = out;
                if (fn(range) != 0) return -1;
                out = range->cur;
                end = range->end;
            }
            *out++ = c;
            count++;
            fmt++;
            continue;
        }
        left = 1;
        plus = 0;
        space = 0;
        hash = 0;
        width = 0;
        prec = 0;
        hasWidth = 0;
        hasPrec = 0;
        lenmod = 3;
        sign = 0;
        pad = ' ';
        fmt++;
        if (func_001EA23F((unsigned char)*fmt) == 0) {
            for (;;) {
                if (*fmt == '-') { left = 0; fmt++; }
                else if (*fmt == '+') { plus = 1; fmt++; }
                else if (*fmt == '#') { hash = 1; fmt++; }
                else if (*fmt == ' ') { space = 1; fmt++; }
                else if (*fmt == '0') { pad = '0'; fmt++; }
                else break;
            }
            if (func_001EA268((unsigned char)*fmt) != 0) {
                width = *fmt - '0';
                fmt++;
                hasWidth = 1;
                while (func_001EA268((unsigned char)*fmt) != 0) {
                    width = width * 10 + (*fmt - '0');
                    fmt++;
                }
            } else if (*fmt == '*') {
                width = (int)*args++;
                fmt++;
                hasWidth = 1;
                if (width < 0) {
                    width = -width;
                    left = 0;
                }
            }
            if (*fmt == '.') {
                fmt++;
                hasPrec = 1;
                if (func_001EA268((unsigned char)*fmt) != 0) {
                    prec = *fmt - '0';
                    fmt++;
                    while (func_001EA268((unsigned char)*fmt) != 0) {
                        prec = prec * 10 + (*fmt - '0');
                        fmt++;
                    }
                } else if (*fmt == '*') {
                    prec = (int)*args++;
                    fmt++;
                    if (prec < 0) prec = 0;
                } else {
                    prec = 0;
                }
            }
        }
        if (func_001E8BB0(fmt, D_0028C17C, 3) == 0) {
            fmt += 3;
            lenmod = 0;
        } else if (*fmt == 'q') {
            fmt++;
            lenmod = 0;
        } else if (*fmt == 'l') {
            fmt++;
            lenmod = 1;
        } else if (*fmt == 'h') {
            fmt++;
            lenmod = 2;
        }
        c = *fmt;
        str = buf + sizeof(buf) - 1;
        len = 0;
        *str = 0;
        switch (c) {
        case 0:
            range->cur = out;
            return count;
        case '%':
            buf[0] = '%';
            str = buf;
            len = 1;
            pad = ' ';
            break;
        case 'c':
            buf[0] = (char)*args++;
            str = buf;
            len = 1;
            pad = ' ';
            break;
        case 's':
            str = (char *)*args++;
            if (str == 0) {
                str = D_0028C174;
                len = 6;
            } else {
                len = 0;
                while (str[len] != 0) len++;
                if (hasPrec && prec < len) len = prec;
            }
            pad = ' ';
            break;
        case 'd':
        case 'i': {
            int v;
            unsigned uv;
            if (lenmod == 2) v = (short)*args++;
            else v = (int)*args++;
            if (v < 0) {
                sign = '-';
                uv = (unsigned)-v;
            } else {
                uv = (unsigned)v;
                if (plus) sign = '+';
                else if (space) sign = ' ';
            }
            if (uv == 0) {
                *--str = '0';
                len = 1;
            } else {
                while (uv != 0) {
                    *--str = (char)('0' + (int)(uv % 10));
                    uv /= 10;
                    len++;
                }
            }
            if (hasPrec) {
                while (len < prec) {
                    *--str = '0';
                    len++;
                }
            }
            break;
        }
        case 'u': {
            unsigned uv = *args++;
            if (uv == 0) {
                *--str = '0';
                len = 1;
            } else {
                while (uv != 0) {
                    *--str = (char)('0' + (int)(uv % 10));
                    uv /= 10;
                    len++;
                }
            }
            if (hasPrec) {
                while (len < prec) {
                    *--str = '0';
                    len++;
                }
            }
            break;
        }
        case 'x':
        case 'X':
        case 'o': {
            unsigned uv = *args++;
            unsigned base = (c == 'o') ? 8u : 16u;
            const char *digits = (c == 'X') ? "0123456789ABCDEF" : "0123456789abcdef";
            if (uv == 0) {
                *--str = '0';
                len = 1;
            } else {
                while (uv != 0) {
                    *--str = digits[uv % base];
                    uv /= base;
                    len++;
                }
            }
            if (hasPrec) {
                while (len < prec) {
                    *--str = '0';
                    len++;
                }
            }
            break;
        }
        case 'n':
            *(int *)*args++ = count;
            fmt++;
            continue;
        default:
            buf[0] = '%';
            buf[1] = c;
            str = buf;
            len = 2;
            pad = ' ';
            break;
        }
        if (sign != 0) {
            *--str = sign;
            len++;
        }
        if (hasWidth && left && len < width) {
            for (i = 0; i < width - len; i++) {
                if (end <= out) {
                    range->cur = out;
                    if (fn(range) != 0) return -1;
                    out = range->cur;
                    end = range->end;
                }
                *out++ = pad;
                count++;
            }
        }
        for (i = 0; i < len; i++) {
            if (end <= out) {
                range->cur = out;
                if (fn(range) != 0) return -1;
                out = range->cur;
                end = range->end;
            }
            *out++ = str[i];
            count++;
        }
        if (hasWidth && !left) {
            for (i = 0; i < width - len; i++) {
                if (end <= out) {
                    range->cur = out;
                    if (fn(range) != 0) return -1;
                    out = range->cur;
                    end = range->end;
                }
                *out++ = pad;
                count++;
            }
        }
        fmt++;
    }
}

int func_001ADCC0(char *buf, int count, int a3, int a4)
{
    S_001ACFE0_Range range;
    int n;

    if (count == 0) {
        return 0;
    }
    range.cur = buf;
    range.end = buf + count - 1;
    n = func_001ACFE0(&D_001ADCB0, &range, (const char *)a3, &a4);
    *range.cur = 0;
    if (n == -1) {
        n = count;
    }
    return n;
}

int func_001ADD20(char *buf, int count, int a3, void *a4)
{
    S_001ACFE0_Range range;
    int n;

    if (count == 0) {
        return 0;
    }
    range.cur = buf;
    range.end = buf + count - 1;
    n = func_001ACFE0(&D_001ADCB0, &range, (const char *)a3, a4);
    *range.cur = 0;
    if (n == -1) {
        n = count;
    }
    return n;
}

void func_001ADD80(S_func_001ADD80_arg0 *r)
{
    if (r == 0) {
        return;
    }
    if (r->unk6c < 0 || r->unk74 < 0) {
        r->unk6c = 0;
        r->unk74 = 0x10;
    }
    if (r->unk6c > 0x280 || r->unk74 > 0x280) {
        r->unk6c = 0x270;
        r->unk74 = 0x280;
    }
    if (r->unk70 < 0 || r->unk78 < 0) {
        r->unk70 = 0;
        r->unk78 = 0x10;
    }
    if (r->unk70 > 0x1c0 || r->unk78 > 0x1c0) {
        r->unk70 = 0x1b0;
        r->unk78 = 0x1c0;
    }
}

void SpriteTweak::func_001ADDF0(int a)
{
    C_00144640 *p = (C_00144640 *)func_001E8A44(0x14);
    C_00144640 *q;
    int saved;

    unk4 = p != 0 ? p->func_00144640() : 0;
    unk4->v1(a, D_002AA470);
    D_002A829C->func_00161680();
    unk8 = D_002A829C->unk14[unk4->unk4].unk4->unk54->unk18;
    unkC = D_002AA6C0->v7((int)&D_0028C1B0, 0);
    D_002AA6C0->v6(unkC, 0);
    saved = D_002ABE74;
    D_002ABE74 = 0;
    D_002AA6C0->func_001B2640();
    D_002ABE74 = saved;
    q = unk4;
    q->unk10 = this;
    q->unkC &= 0xfe;
}

SpriteTweak *SpriteTweak::func_001ADEB0(void)
{
    unk4 = 0;
    vtbl = &D_0028C1D0;
    unk40 = 1.0f;
    unk3C = 1.0f;
    unk50 = 1.0f;
    unk48 = 1.0f;
    unk38 = 0;
    unk34 = 0;
    unk4C = 0;
    unk44 = 0;
    unk68 = 0;
    unk64 = (char)0xff;
    unk60 = 0x80808080;
    unk5C = 0x80808080;
    unk58 = 0x80808080;
    unk54 = 0x80808080;
    unk10 = 0;
    unk14 = 0;
    unk1C = func_001FCF20(0x280, 0x1e0, 1, 1, 1, 0x12, 3);
    unk20 = func_001FCE50(unk1C, 0);
    return this;
}

void SpriteTweak::func_001ADF30(int a, int b)
{
    func_001ADDF0(a);
    unk18 = b;
    unk28 = (int)func_001FF3C0(0x60);
    func_0014A7B0(&D_002EFFD0, &D_002AA2D4);
    C_0014A520 *p = (C_0014A520 *)func_001E8A44(0xc);
    p = p != 0 ? p->func_0014A520((int)&D_002EFFD0) : 0;
    unk10 = p;
    p->func_0014A560((int)&D_0028C1F0, 0);
    C_00142C70 *q = (C_00142C70 *)func_001E8A44(0xf0);
    q = q != 0 ? q->func_00142C70() : 0;
    unk14 = q;
    q->func_00142C80((int)&D_0028C1DC, 0);
}

