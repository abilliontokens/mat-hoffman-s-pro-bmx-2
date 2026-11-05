/* 14 functions from 0x001AB670 to 0x001AC440, found by Ghidra. */
#include "common.h"
extern int D_0028BFC4;
extern int D_0028C03C;
extern int D_0028C0BC;

void func_001E8390(void *p);
void func_001E891B(void *p);
void *func_001E8A44(int size);

struct StateObject {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2(int a);
};

struct C_001AC150 {
    int **field_00;
    int *field_04;
    int field_08;
    int field_0C;
    void func_001AC150(int count);
    void func_001AC1A0(int n);
};

struct SpringCollisionModel {
    void *vtbl;
    char pad_04[0x80];
    void *field_84;
    char pad_88[0x8];
    void *field_90;
    void func_00157660();
    void *func_001AB7B0(unsigned int flags);
};

struct StateMachine {
    void *vtbl;
    char pad_04[0x20];
    int field_24;
    int field_28;
    char field_2C[1];
    void func_00157600(int a);
    void func_00157660();
    void func_001D3F50();
    void func_00157A00(int a);
    StateMachine *func_001AC080();
    void func_001AC0A0(int a, const char *name);
    void func_001AC0D0(int a);
    void *func_001AC120(unsigned int flags);
};

struct StringTable {
    void *vtbl;
    int field_04;
    int field_08;
    int field_0C;
    int field_10;
    void *field_14;
    void *field_18;
    int field_1C;
    void func_0001DFE0();
    StringTable *func_001AC3A0();
};

extern "C" char *strcpy(char *, const char *);
void *SpringCollisionModel::func_001AB7B0(unsigned int flags)
{
    vtbl = (void *)&D_0028BFC4;
    if (field_84) func_001E8390(field_84);
    if (field_90) func_001E8390(field_90);
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

StateMachine *StateMachine::func_001AC080()
{
    func_00157600(1);
    field_24 = 0;
    field_28 = 0;
    vtbl = (void *)&D_0028C03C;
    return this;
}

void StateMachine::func_001AC0A0(int a, const char *name)
{
    strcpy(field_2C, name);
    field_28 = a;
    func_001D3F50();
}

void StateMachine::func_001AC0D0(int a)
{
    if (field_28 != 0) {
        if (field_24 != 0) {
            ((StateObject *)field_24)->vf1();
        }
        field_24 = field_28;
        ((StateObject *)field_28)->vf0();
        field_28 = 0;
    }
    if (field_24 != 0) {
        ((StateObject *)field_24)->vf2(a);
    }
    func_00157A00(a);
}

void *StateMachine::func_001AC120(unsigned int flags)
{
    vtbl = (void *)&D_0028C03C;
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

void C_001AC150::func_001AC150(int count)
{
    int *p = (int *)func_001E8A44(count * 4);
    for (int i = 0; i < field_08; i++) {
        p[i] = field_04[i];
    }
    func_001E891B(field_04);
    field_04 = p;
    field_08 = count;
}

void C_001AC150::func_001AC1A0(int n)
{
    if (field_08 < n) {
        func_001AC150((n / 10 + 1) * 10);
    }
    while (field_0C < n) {
        (*field_00)++;
        field_04[field_0C] = *(*field_00 - 1);
        field_0C++;
    }
}

StringTable *StringTable::func_001AC3A0()
{
    func_0001DFE0();
    field_08 = 0;
    field_0C = 0;
    field_10 = 0;
    field_14 = 0;
    field_18 = 0;
    field_1C = 0;
    vtbl = (void *)&D_0028C0BC;
    return this;
}
