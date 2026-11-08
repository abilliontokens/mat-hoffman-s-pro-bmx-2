/* 16 functions from 0x001AC440 to 0x001ACFE0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
struct C_001AC900 {
    undefined4 func_001AC900(byte param_1);
};

struct C_001AC790 {
    void func_001AC790(int param_1);
};

extern char D_0028C118[];
extern char D_0028C12C[];
extern char D_0028C140[];
extern char D_0028C154[];

void *func_001E8A44(unsigned int size);
void func_001E891B(void *p);
int func_001EA426(const char *a, const char *b);

struct StringTableEntry {
    const char *name;
    int value;
    int data;
    int refCount;
};

struct StringTable {
    void *vtbl;
    int unk4;
    int count;
    int capacity;
    int unk10;
    StringTableEntry *entries;
    int func_001AC680(const char *name, int value);
    void func_001AC750(int index, int data);
    int func_001AC7B0(const char *name, int unused);
};

struct DynamicStringTable {
    void *vtbl;
    int unk4;
    int count;
    int capacity;
    int unk10;
    StringTableEntry *entries;
    int unk18;
    int unk1C;
    int func_001AC440(const char *name);
    void func_001AC830();
    void *func_001AC920(int flags);
    DynamicStringTable *func_001AC800();
    int func_001AC870(const char *name, int value);
    int func_001AC680(const char *name, int value);
    void func_001AC3D0();
};

struct C_0001DFE0 {
    void func_0001DFE0();
};

struct StringTableFileManager {
    int func_0013C9F0(const char *, const char *);
    int func_0013AF40(int, int *, int *);
    int func_0013C8A0(int, void *, int, int);
    int func_0013C110(int);
};
extern StringTableFileManager *D_002BEAAC;
extern char D_00275FB4[];
int func_001E8D25(int);
void func_001F65C5(char *);
extern int D_0028C0E0;
void func_001E8390(void *p);
void *func_001E8AA5(unsigned int size);
extern double D_002766A8, D_00286D30, D_0028C110, D_0028C108, D_0028C100, D_002766B8;
double func_001EA2BA(double, double *);
int func_001E8858(double);


int DynamicStringTable::func_001AC440(const char *name)
{
    char path[260];
    int size, unused;
    int j, k;
    int bound;
    if (entries) func_001E891B(entries);
    if (unk10) func_001E8390((void *)unk10);
    strcpy(path, name);
    for (char *p = path; *p; ++p) *p = (char)func_001E8D25(*p);
    int file = D_002BEAAC->func_0013C9F0(path, D_00275FB4);
    if (file == -1) return 0;
    D_002BEAAC->func_0013AF40(file, &unused, &size);
    unk10 = (int)func_001E8AA5(size + 1);
    ((char *)unk10)[size] = 0;
    D_002BEAAC->func_0013C8A0(file, (void *)unk10, size, 1);
    D_002BEAAC->func_0013C110(file);
    func_001F65C5((char *)unk10);
    int inWord = 0;
    count = 0;
    for (int i = 0; i < size; ++i) {
        char *p = (char *)unk10 + i;
        if (*p == 13) { *p = 0; inWord = false; }
        else if (*p == 10) { *p = 0; inWord = false; }
        else if (*p == 32) { *p = 0; inWord = false; }
        else if (!inWord) { int n = count + 1; inWord = true; count = n; }
    }
    if (count > 0) {
        entries = (StringTableEntry *)func_001E8A44(count * 16);
        int n = 0;
        inWord = false;
        for (int i = 0; i < size; ++i) {
            if (!((char *)unk10)[i]) inWord = false;
            else if (!inWord) {
                inWord = true;
                entries[n].value = 0;
                entries[n].data = 0;
                entries[n].name = (char *)unk10 + i;
                entries[n].refCount = 0;
                ++n;
            }
        }
    }
    bound = *(volatile int *)&unk1C;
    capacity = count;
    j = 0;
    if (bound > 0) {
        do {
            k = 0;
            while (k < count) {
                if (!func_001EA426(entries[k].name, ((StringTableEntry *)unk18)[j].name)) {
                    StringTableEntry *src = &((StringTableEntry *)unk18)[j];
                    StringTableEntry *dst = &entries[k];
                    dst->name = src->name;
                    dst->value = src->value;
                    dst->data = src->data;
                    dst->refCount = src->refCount;
                }
                k++;
            }
            j++;
        } while (j < unk1C);
    }
    return count;
}

int StringTable::func_001AC680(const char *name, int value)
{
    if (entries == 0) {
        entries = (StringTableEntry *)func_001E8A44(0x100);
        capacity = 16;
        count = 0;
    } else if (count >= capacity) {
        StringTableEntry *newEntries = (StringTableEntry *)func_001E8A44((capacity + 16) * sizeof(StringTableEntry));
        memcpy(newEntries, entries, capacity * sizeof(StringTableEntry));
        func_001E891B(entries);
        entries = newEntries;
        capacity += 16;
    }
    entries[count].name = name;
    entries[count].value = value;
    entries[count].data = 0;
    entries[count].refCount = 0;
    return ++count - 1;
}

void StringTable::func_001AC750(int index, int data)
{
    entries[index].refCount++;
    entries[index].data = data;
}

void C_001AC790::func_001AC790(int param_1)
{
  int in_ECX = (int)this;
  int *piVar1;
  
  piVar1 = (int *)(param_1 * 0x10 + 0xc + *(int *)(in_ECX + 0x14));
  *piVar1 = *piVar1 + -1;
  return;
}

int StringTable::func_001AC7B0(const char *name, int unused)
{
    int i;
    for (i = 0; i < count; i++) {
        if (func_001EA426(name, entries[i].name) == 0) {
            return i;
        }
    }
    return -1;
}

DynamicStringTable *DynamicStringTable::func_001AC800()
{
    ((C_0001DFE0 *)this)->func_0001DFE0();
    count = 0;
    capacity = 0;
    unk10 = 0;
    entries = 0;
    unk18 = 0;
    unk1C = 0;
    vtbl = &D_0028C0E0;
    return this;
}

void DynamicStringTable::func_001AC830()
{
    vtbl = &D_0028C0E0;
    for (int i = 0; i < count; i++) {
        if (entries[i].name)
            func_001E8390((void *)entries[i].name);
    }
    func_001AC3D0();
}

int DynamicStringTable::func_001AC870(const char *name, int value)
{
    for (int i = 0; i < count; i++) {
        if (func_001EA426(name, entries[i].name) == 0)
            return i;
    }
    int index = func_001AC680(name, value);
    entries[index].name = (char *)func_001E8AA5(strlen(name) + 1);
    strcpy((char *)entries[index].name, name);
    return index;
}

undefined4 C_001AC900::func_001AC900(byte param_1)
{
  int func_001AC3D0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001AC3D0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void *DynamicStringTable::func_001AC920(int flags)
{
    func_001AC830();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

double func_001EA2BA(double value, double *ipart);
static __declspec(noinline) char *func_001AC940(int *sign, char *buf, double arg, int ndigits, int *decpt, int eflag)
{
    char *p;
    char *p1;
    double fi, fj;
    int dp;

    if (ndigits >= 0x4f)
        ndigits = 0x4e;
    dp = 0;
    *sign = 0;
    p = buf;
    if (arg < 0.0) {
        *sign = 1;
        arg = -arg;
    }
    arg = func_001EA2BA(arg, &fi);
    if (fi != 0.0) {
        p1 = buf + 0x50;
        while (p1 > buf && fi != 0.0) {
            fj = func_001EA2BA(fi * 0.1, &fi);
            *--p1 = '0' - (int)((fj + 0.03) * -10.0);
            dp++;
        }
        while (p1 < buf + 0x50)
            *p++ = *p1++;
    } else if (arg > 0.0) {
        while ((fj = arg * 10.0) < 1.0) {
            arg = fj;
            dp--;
        }
    }
    p1 = ndigits + buf;
    if (eflag == 0)
        p1 += dp;
    *decpt = dp;
    if (p1 < buf) {
        buf[0] = 0;
        return buf;
    }
    while (p <= p1 && p < buf + 0x50) {
        arg = func_001EA2BA(arg * 10.0, &fj);
        *p++ = (int)fj + '0';
    }
    if (p1 >= buf + 0x50) {
        buf[0x4f] = 0;
        return buf;
    }
    p = p1;
    *p1 += 5;
    while (*p1 > '9') {
        *p1 = '0';
        if (p1 > buf) {
            ++*--p1;
        } else {
            *p1 = '1';
            ++*decpt;
            if (eflag == 0) {
                if (p > buf)
                    *p = '0';
                p++;
            }
        }
    }
    *p = 0;
    return buf;
}

char *func_001ACB40(double value, int digits, char *out, int alternate)
{
    int decimal, sign;
    char buffer[80];
    char *p = func_001AC940(&sign, buffer, value, digits, &decimal, 1);
    char *s = out;
    if (sign) *s++ = '-';
    for (int i = digits - 1; i > 0; --i) {
        if (p[i] != '0') break;
        --digits;
    }
    if (decimal >= 0) { if (decimal - digits > 4) goto scientific; }
    else if (decimal < -3) goto scientific;
    {
        if (decimal <= 0) {
            if (*p != '0') *s++ = '.';
            while (decimal < 0) {
                *s++ = '0';
                decimal++;
            }
        }
        int j;
        for (j = 1; j <= digits; ++j) {
            *s++ = *p++;
            if (j == decimal) *s++ = '.';
        }
        if (digits < decimal) {
            decimal -= digits;
            memset(s, '0', decimal);
            s += decimal;
            *s++ = '.';
        }
    goto finish;
    }
    scientific: {
        --decimal;
        *s++ = *p++;
        *s++ = '.';
        for (int k = 1; k < digits; k++)
            *s++ = *p++;
        *s++ = 'e';
        if (decimal < 0) { decimal = -decimal; *s = '-'; }
        else *s = '+';
        ++s;
        int rem = decimal % 100;
        int q = decimal / 100;
        if (q > 0) *s++ = (char)q + '0';
        q = decimal / 10;
        int last = decimal % 10;
        if (q > 0) *s++ = (char)(rem / 10) + '0';
        *s++ = (char)last + '0';
    }
finish:
    if (s[-1] == '.' && !*(volatile int *)&alternate) {
        s[-1] = 0;
    } else {
        *s = 0;
    }
    return out;
}

static __declspec(noinline) char *func_001ACCF0(int flag, int *sign, unsigned value, char *end, int *len)
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

int func_001EA211(int c);
static __declspec(noinline) char *func_001ACD40(int ndec, char fmt, double value, int alt, int *sign, char *buf, int *outlen)
{
    int decpt;
    char expbuf[10];
    char digits[0x50];
    char *src;
    char *p = buf;
    int esign;

    if (fmt == 'f')
        src = func_001AC940(sign, digits, value, ndec, &decpt, 0);
    else
        src = func_001AC940(sign, digits, value, ndec + 1, &decpt, 1);
    if (func_001EA211(*src)) {
        strcpy(buf, src);
        *outlen = strlen(buf);
        *sign = 0;
        return buf;
    }
    if (fmt == 'f') {
        if (decpt <= 0) {
            *p++ = '0';
            if (ndec > 0) {
                *p++ = '.';
                if (decpt < 0) {
                    int n = -decpt;
                    memset(p, '0', n);
                    p += n;
                    decpt += n;
                }
                decpt++;
            } else if (alt) {
                *p++ = '.';
            }
        } else {
            int n = decpt;
            do {
                *p++ = *src++;
            } while (--n);
            decpt = -1;
            if (ndec > 0 || alt)
                *p++ = '.';
        }
    } else {
        *p++ = *src++;
        if (ndec > 0 || alt)
            *p++ = '.';
    }
    while (*src)
        *p++ = *src++;
    if (fmt != 'f') {
        int d;
        *p++ = fmt;
        if ((d = decpt - 1) != 0) {
            src = func_001ACCF0(0, &esign, d, expbuf + 10, &decpt);
            *p++ = esign ? '-' : '+';
            if (decpt == 1)
                *p++ = '0';
            else if (decpt == 0)
                goto done;
            do {
                *p++ = *src++;
            } while (--decpt);
        } else {
            *p++ = '+';
            *p++ = '0';
            *p++ = '0';
        }
    }
done:
    *outlen = p - buf;
    return buf;
}

/* Stand-in for the printf engine (_func_001ACFE0, in text_001ACFE0.cpp), the only caller of the
   static func_001ACD40: gives it a caller in this unit so it keeps its register convention. */
char *call_001ACD40(int ndec, char fmt, double value, int alt, int *sign, char *buf, int *outlen)
{
    return func_001ACD40(ndec, fmt, value, alt, sign, buf, outlen);
}

void __cdecl func_001ACF30(char fmt, int *outlen)
{
 char *end; register unsigned int value; register int shift;
 char *p = end;
 unsigned int mask = (1U << shift) - 1;
 char *digits = fmt == 'X' ? D_0028C12C : D_0028C118;
 do { char c = digits[value & mask]; --p; *p = c; value = value >> shift; } while (value != 0);
 *outlen = end - p;
}

void __fastcall func_001ACF80(int shift, int value, char fmt, int *outlen)
{
    char *end;
    register char *p = end;
    register int mask = (1 << shift) - 1;
    register char *digits = fmt == 'X' ? D_0028C154 : D_0028C140;

    if ((unsigned int)value <= 0xffffffff) {
        func_001ACF30(fmt, outlen);
        return;
    }
    do {
        register char c = digits[value & mask];
        p--;
        *p = c;
        value >>= shift;
    } while (value != 0);
    *outlen = end - p;
}

