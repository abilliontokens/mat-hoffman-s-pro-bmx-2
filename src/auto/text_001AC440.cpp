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
    int func_001AC7B0(const char *name);
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

extern int D_0028C0E0;
void func_001E8390(void *p);
void *func_001E8AA5(unsigned int size);


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
    char *p = (char *)func_001E8AA5(strlen(name) + 1);
    entries[index].name = p;
    strcpy(p, name);
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

char *__fastcall func_001ACCF0(int flag, int *sign, unsigned value, char *end, int *len)
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

