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
static __declspec(noinline) char *cvt_probe(int *sign, char *buf, double arg, int ndigits, int *decpt, int eflag);


int DynamicStringTable::func_001AC440(const char *name)
{
    char path[260];
    int size, unused;
    int j, k;
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
    capacity = count;
    j = 0;
    while (j < unk1C) {
        k = 0;
        while (k < count) {
            const char *other = ((StringTableEntry *)unk18)[j].name;
            const char *current = entries[k].name;
            if (!func_001EA426(current, other)) {
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
char *func_001AC940(double value, int ndec, int *decpt, int flag)
{
    char buf[0x50];
    char *p = buf + 0x50;
    char *q;
    char *end;
    int n = 0;
    double ipart;
    double frac;

    if (ndec > 0x4e) ndec = 0x4e;
    if (value < 0) value = -value;
    frac = func_001EA2BA(value, &ipart);
    if (ipart != 0) {
        while (p > buf) {
            if (ipart == 0) break;
            frac = func_001EA2BA(ipart * D_00286D30, &ipart);
            *--p = (char)('0' - (int)((frac + D_0028C110) * D_0028C108));
            n++;
        }
    }
    if (value > 0) {
        double x = value * D_0028C100;
        if (x <= D_002766B8) {
            do { x *= D_0028C100; p--; } while (x < D_002766B8);
            frac = x;
            n = (int)(p - buf);
        }
    }
    end = buf + ndec;
    if (flag == 0) {
        end += n;
        *decpt = n;
        if (end < buf) { buf[0] = 0; return buf; }
    }
    q = buf;
    while (q <= end) {
        if (q >= buf + 0x50) break;
        frac = func_001EA2BA(value * D_0028C100, &ipart);
        *q++ = (char)('0' + (int)ipart);
    }
    if (end < buf + 0x50) {
        char c = (char)(*end + 5);
        *end = c;
        if (c > '9') {
            *end = '0';
            while (end > buf) {
                end--;
                if ((*end)++ < '9') break;
                *end = '0';
            }
            if (end <= buf) {
                *end = '1';
                (*decpt)++;
            }
        }
    } else {
        buf[0x4f] = 0;
    }
    return buf;
}

static __declspec(noinline) char *cvt_probe(int *sign, char *buf, double arg, int ndigits, int *decpt, int eflag)
{
    char *p = buf;
    char *p1;
    double fi, fj;
    int dp = 0;

    if (ndigits >= 0x4f)
        ndigits = 0x4e;
    *sign = 0;
    if (arg < D_002766A8) {
        *sign = 1;
        arg = -arg;
    }
    arg = func_001EA2BA(arg, &fi);
    if (fi != D_002766A8) {
        p1 = buf + 0x50;
        while (p1 > buf && fi != D_002766A8) {
            fj = func_001EA2BA(fi * D_00286D30, &fi);
            *--p1 = '0' - (int)((fj + D_0028C110) * D_0028C108);
            dp++;
        }
        while (p1 < buf + 0x50)
            *p++ = *p1++;
    } else if (arg > D_002766A8) {
        while ((fj = arg * D_0028C100) < D_002766B8) {
            arg = fj;
            dp--;
        }
    }
    p1 = buf + ndigits;
    if (eflag == 0)
        p1 += dp;
    *decpt = dp;
    if (p1 < buf) {
        buf[0] = 0;
        return buf;
    }
    while (p <= p1 && p < buf + 0x50) {
        arg *= D_0028C100;
        arg = func_001EA2BA(arg, &fj);
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

char *func_001ACCF0(int flag, int *sign, unsigned value, char *end, int *len)
{
    char *p = end;
    if (flag) {
        *sign = 0;
    } else {
        int neg = value < 0;
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

char *func_001AC940(double value, int ndec, int *decpt, int flag);
int func_001EA211(int c);
char *func_001ACD40(int ndec, char fmt, double value, int alt, int *sign, char *buf, int *outlen)
{
    int decpt;
    char expbuf[10];
    char digits[0x50];
    char *src;
    char *p;
    int esign;
    int len;

    src = func_001AC940(value, fmt == 'f' ? ndec : ndec + 1, &decpt, fmt != 'f');
    if (func_001EA211(*src)) {
        strcpy(buf, src);
        *outlen = strlen(buf);
        *sign = 0;
        return buf;
    }
    if (fmt == 'f') {
        if (decpt > 0) {
            int n = decpt;
            p = buf;
            do {
                *p++ = *src++;
            } while (--n);
            decpt = -1;
            if (ndec > 0 || alt)
                *p++ = '.';
        } else {
            p = buf;
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
        }
    } else {
        p = buf;
        *p++ = *src++;
        if (ndec > 0 || alt)
            *p++ = '.';
    }
    while (*src)
        *p++ = *src++;
    if (fmt != 'f') {
        *p++ = fmt;
        if (decpt == 1) {
            *p++ = '+';
            *p++ = '0';
            *p++ = '0';
        } else {
            src = func_001ACCF0(0, &esign, decpt - 1, expbuf + 10, &decpt);
            *p++ = esign ? '-' : '+';
            if (decpt == 1)
                *p++ = '0';
            for (len = 0; len < decpt; len++)
                *p++ = *src++;
        }
    }
    *outlen = p - buf;
    return buf;
}

void __fastcall func_001ACF30(unsigned int value, int unused, char fmt, int *outlen)
{
    char *end;
    int shift;
    char *digits = D_0028C118;
    char *p = end;
    unsigned int mask;
    if (fmt == 'X') {
        digits = D_0028C12C;
    }
    mask = (1 << shift) - 1;
    do {
        p--;
        *p = digits[value & mask];
        value >>= shift;
    } while (value != 0);
    *outlen = end - p;
}

void __fastcall func_001ACF80(int shift, int value, char fmt, int *outlen)
{
    char *end;
    register char *p = end;
    register int mask = (1 << shift) - 1;
    register char *digits = fmt == 'X' ? D_0028C154 : D_0028C140;

    if ((unsigned int)value > 0xffffffff) {
        func_001ACF30(value, 0, fmt, outlen);
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

