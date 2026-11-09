/* 30 functions from 0x000A84A0 to 0x000A91C0, found by Ghidra. */
#include "common.h"

extern int D_0027C310;
extern "C" int strcmp(const char *s1, const char *s2);

struct C_001B59E0 {
    void func_001B59E0();
};

/* the stream the grind trigger list is read from */
struct S_GrindsStream {
    int func_00169710(void *name);
    void func_00168C20(void *key, int def, int *out);
};

/* a grind trigger entry: 0x408 bytes, loaded through its first virtual method */
struct S_GrindElem {
    virtual int v0(S_GrindsStream *stream, int index, int a, int b, int *mgrData);
    S_GrindElem *func_000A8360();
};

/* Grinds */
struct C_000A85C0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    S_GrindElem **f28;
    int func_000A85C0(S_GrindsStream *stream, int a1, int a2, int a3);
};

extern char D_0027C280[];
extern char D_0027C26C[];
extern char D_0027C25C[];
void *func_001E8A44(int size);
void *func_001E83E8(void *block, unsigned int size);

struct C_000A8D70 {
    void *vtbl;
    C_000A8D70 *func_000A8D70();
};

extern int D_0027C2C0;
extern int D_0027C304;
extern char D_0027C2B4[];
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);

struct C_00168550 {
    void func_00168550(char *key, char *dst, int size);
};

struct C_001B5A00 {
    void func_001B5A00(void *a, void *b);
};

/* the stream/config reader passed to the trigger actions' load methods */
struct S_TriggerStream {
    void func_00168C20(void *key, int def, void *dst);
    void func_00168C50(void *key, int def, void *dst);
    void func_00168CB0(void *key, void *def, void *dst);
    void func_00168BE0(void *key, void *def, void *dst, int size);
};

/* BikeRumbleTriggerAction */
struct C_000A89F0 {
    void *vtbl;
    char pad4[0x108];
    int unk10C;
    C_000A89F0 *func_000A89F0();
    void func_001B5A00(void *a, void *b);
    void func_000A8A10(S_TriggerStream *stream, void *b);
};

/* BikeWarningTriggerAction */
struct C_000A8C90 {
    void *vtbl;
    char pad4[0x108];
    char unk10C[3][0x3c];
    C_000A8C90 *func_000A8C90();
    void func_000A8CC0(C_00168550 *a, void *b);
};

int __stdcall func_001BBAA0(void *a, void *b);
extern char D_000A8D40;

/* the object the trigger registers its callback with */
struct S_000A8D90_Mgr {
    int func_001BBAA0(void *owner, void *cb);
};

/* BikeShutdownTriggerAction */
struct C_000A8D90 {
    void *vtbl;
    int func_000A8D90(void *a, S_000A8D90_Mgr *b);
};

struct C_000A8BC0 {
    void *vtbl;
    char pad4[0x108];
    unsigned char unk10C;
    C_000A8BC0 *func_000A8BC0();
};

struct C_000A88A0_Item {
    unsigned char unk0;
    char pad1[0x3B];
};

struct C_000A88A0_Vec {
    float z;
    float y;
    float x;
    float w;
    float &operator[](int i) { return (&z)[i]; }
};

struct C_000A88A0 {
    void *vtbl;
    char pad4[0x108];
    C_000A88A0_Item items[3];
    C_000A88A0_Vec unk1C0;
    C_000A88A0 *func_000A88A0();
    void func_000A8920(S_TriggerStream *a, void *b);
};

/* entry of the list at f4E0: the owner id is at +0x1E0 */
struct S_000A8710_Item {
    char pad0[0x1e0];
    int f1E0;
};

struct S_000A8710_List {
    char pad0[0x24];
    int count;
    char pad28[0x1a8 - 0x28];
    S_000A8710_Item *items[1];
};

struct S_000A8710_Node {
    char pad0[0x4e0];
    S_000A8710_List *f4E0;
};

struct S_000A8710_Arg0 {
    char pad0[0x64];
    int f64;
};

struct S_000A8710_Arg2 {
    char pad0[0x10c];
    char name[0x3c];
    int f148;
};

void __stdcall func_00118410(void *name, int b, float c);

/* the game manager (D_002A8490->f2A4) */
struct S_000A8A60_Mgr {
    char pad0[0x64];
    S_000A8710_Node *f64;
    char pad68[0x124 - 0x68];
    int f124;
    char pad128[0x1c8 - 0x128];
    int f1C8;
    void func_000323C0(C_000A88A0_Vec v, void *a, void *b);
    void func_000324C0(int a);
};

struct S_000A8A60_Global {
    char pad0[0x2a4];
    S_000A8A60_Mgr *f2A4;
};

extern S_000A8A60_Global *D_002A8490;

struct C_000A8B70 {
    int func_000A8B70(void *param1, void *param2);
};

struct Obj_00168550 {
    void func_00168550(void *param1, void *param2, int param3);
};

struct C_000A8BE0 {
    char pad0[0x10C];
    unsigned char unk10C;
    void func_001B5A00(void *param1, void *param2);
    void func_000A8BE0(void *param1, void *param2);
};

struct C_000A84A0 {
    void *vtbl;
    int count;
    char pad8[8];
    void (__cdecl **funcs)(void *, void *, void *, void *);
    void **args;
    char pad18[8];
    void *field20;
    int count2;
    void **items2;
    void func_000A84A0(void *param1, void *param2);
};

struct C_000A84F0 {
    char pad0[0x24];
    int count;
    void **items;
    void func_000A84F0();
};

struct C_000A8520 {
    char pad0[0x24];
    int count;
    char **items;
    int func_000A8520(char *param);
};

/* PipTriggerAction */
struct C_000A9030 {
    void *vtbl;
    char pad4[0x108];
    unsigned char unk10C;
    C_000A9030 *func_000A9030();
    void func_001B5A00(void *a, void *b);
    void func_000A9050(S_TriggerStream *stream, void *b);
};

/* BikeWreckTriggerAction */
struct C_000A8AF0 {
    void *vtbl;
    char pad4[0x108];
    C_000A88A0_Item items[3];
    C_000A88A0_Vec unk1C0;
    C_000A8AF0 *func_000A8AF0();
};

/* CameraTriggerAction */
struct C_000A8DB0 {
    void *vtbl;
    char pad4[0x108];
    int unk10C;
    C_000A8DB0 *func_000A8DB0();
};

struct C_000A8DD0_P1 {
    void func_00168C20(void *key, int v, void *dst);
};

/* CameraTriggerAction */
struct C_000A8DD0 {
    char pad0[0x10c];
    int unk10C;
    void func_001B5A00(void *a, void *b);
    void func_000A8DD0(C_000A8DD0_P1 *a, void *b);
};

/* AddPointsTriggerAction */
struct C_000A90B0 {
    void *vtbl;
    char pad4[0x108];
    int unk10C;
    C_000A90B0 *func_000A90B0();
    void func_001B5A00(void *a, void *b);
    void func_000A90D0(S_TriggerStream *stream, void *b);
};

struct C_00157660 {
    void func_00157660(void);
};

/* the cyclers an entry of ColorCyclers owns */
struct S_ColorCycler {
    char pad0[0x108];
    void *unk108;
    char pad10C[8];
    void *unk114;
    void *unk118;
    void *unk11C;
};

/* ColorCyclers */
struct C_000A9120 {
    void *vtbl;
    char pad4[0x20];
    int count;
    S_ColorCycler **items;
    void func_000A9120(void);
};

void func_001E891B(void *p);

/* ScriptTriggerAction */
struct C_000A8E20 {
    void *vtbl;
    char pad4[0x108];
    unsigned char unk10C;
    char pad10D[0x148 - 0x10D];
    unsigned char unk148;
    C_000A8E20 *func_000A8E20();
};

struct C_000A8E40_P1 {
    void func_00168BE0(void *k1, void *k2, void *dst, int size);
};

/* ScriptTriggerAction */
struct C_000A8E40 {
    void *vtbl;
    char pad4[0x108];
    char unk10C[0x3c];
    char unk148[0x3c];
    void func_000A8E40(void *a, void *b);
};

struct C_000A8EB0_Vec {
    float z;
    float y;
    float x;
    float w;
    float &operator[](int i) { return (&z)[i]; }
};

/* BirdTriggerAction */
struct C_000A8EB0 {
    void *vtbl;
    char pad4[0x108];
    C_000A8EB0_Vec vec10C;
    int unk11C;
    int unk120;
    C_000A8EB0 *func_000A8EB0();
    void func_001B5A00(void *a, void *b);
    void func_000A8F20(S_TriggerStream *stream, void *b);
};

/* CustomTriggerAction */
struct C_000A8FA0 {
    void *vtbl;
    char pad4[0x108];
    int unk10C;
    char unk110[0x104];
    C_000A8FA0 *func_000A8FA0();
    void func_001B5A00(void *a, void *b);
    void func_000A8FC0(S_TriggerStream *stream, void *b);
};

void C_000A84A0::func_000A84A0(void *param1, void *param2)
{
    int i;
    i = 0;
    field20 = param1;
    if (0 < count) {
        do {
            funcs[i](param1, this, args[i], param2);
            i = i + 1;
        } while (i < count);
    }
}

void C_000A84F0::func_000A84F0()
{
    int i;
    i = 0;
    if (0 < count) {
        do {
            *(int *)((char *)items[i] + 0x18) = 0;
            i = i + 1;
        } while (i < count);
    }
}

int strcmp(const char *s1, const char *s2);
int C_000A8520::func_000A8520(char *param)
{
    int i;
    int j;
    char *p;
    i = 0;
    if (0 < count) {
        do {
            j = 0;
            p = items[i] + 0x128;
            do {
                if (strcmp(p, param) == 0) {
                    return i;
                }
                j = j + 1;
                p = p + 0x78;
            } while (j < 6);
            i = i + 1;
        } while (i < count);
    }
    return -1;
}

int C_000A85C0::func_000A85C0(S_GrindsStream *stream, int a2, int a3, int a4)
{
    int count;
    int i;
    int end;
    int start;
    char buf[0x104];
    S_GrindElem *e;

    stream->func_00169710(D_0027C280);
    stream->func_00168C20(D_0027C26C, 0, &count);
    if (count > 0) {
        if (f28 != 0) {
            start = f24;
            f24 = start + count;
            end = f24;
            f28 = (S_GrindElem **)func_001E83E8(f28, f24 * 4);
        } else {
            start = 0;
            f24 = count;
            end = f24;
            f28 = (S_GrindElem **)func_001E8A44(f24 * 4);
        }
        for (i = start; i < end; i++) {
            e = (S_GrindElem *)func_001E8A44(0x408);
            if (e != 0) {
                e = e->func_000A8360();
            } else {
                e = 0;
            }
            f28[i] = e;
            func_001ADCC0(buf, 0x104, D_0027C25C, i - start + 1);
            if (stream->func_00169710(buf) != 0) {
                f28[i]->v0(stream, i - start + 1, a2, a4, &D_002A8490->f2A4->f124);
            }
        }
    }
    return 1;
}

void func_000A8710(S_000A8710_Arg0 *a0, int a1, S_000A8710_Arg2 *a2, int volatile a3)
{
    S_000A8710_List *list;
    S_000A8710_Item **it;
    int count;
    int found;
    int i;
    int id;

    if (a3 != 0) {
        int tmp = a3;
        id = a0->f64;
        list = D_002A8490->f2A4->f64->f4E0;
        count = list->count;
        found = 0;
        i = 0;
        if (0 < count) {
            it = list->items;
            do {
                if (found) {
                    break;
                }
                if ((*it)->f1E0 == id) {
                    found = 1;
                }
                i++;
                it++;
            } while (i < count);
        }
        func_00118410(a2->name, -1, (float)a2->f148);
    }
}

C_000A88A0 *C_000A88A0::func_000A88A0() {
    extern int D_0027C2A0;
    extern float D_002A2734;
    extern float D_002A2738;
    extern float D_002A273C;
    extern float D_002A2740;
    int i;
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C2A0;
    unk1C0[2] = 0.0f;
    unk1C0[1] = 0.0f;
    unk1C0[0] = 0.0f;
    unk1C0[3] = 1.0f;
    for (i = 0; i < 3; i++) {
        items[i].unk0 = 0;
    }
    unk1C0[0] = D_002A2734;
    unk1C0[1] = D_002A2738;
    unk1C0[2] = D_002A273C;
    unk1C0[3] = D_002A2740;
    return this;
}

extern char D_0027C2A8[];
void C_000A88A0::func_000A8920(S_TriggerStream *a, void *b)
{
    extern float D_002A2734;
    char buf[0x3c];
    int i;
    for (i = 0; i < 3; i++) {
        func_001ADCC0(buf, 0x3c, D_0027C2B4, i + 1);
        ((C_00168550 *)a)->func_00168550(buf, (char *)&items[i], 0x3b);
    }
    a->func_00168CB0(D_0027C2A8, &D_002A2734, &unk1C0);
    ((C_001B5A00 *)this)->func_001B5A00(a, b);
}

C_000A89F0 *C_000A89F0::func_000A89F0()
{
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C2C0;
    unk10C = 0;
    return this;
}

void C_000A89F0::func_000A8A10(S_TriggerStream *stream, void *b)
{
    extern int D_0027C2C8;
    stream->func_00168C50(&D_0027C2C8, 0, &unk10C);
    func_001B5A00(stream, b);
}

/* 0xA8A40 and 0xA8A60: the analysis merged them into func_000A8A10 */
struct C_000A8A40 {
    int func_000A8A40(void *param1, void *param2);
};

int C_000A8A40::func_000A8A40(void *param1, void *param2) {
    extern int D_000A89C0;
    int __stdcall func_001BBAA0(void *, void *);
    void *self = this;
    if (param2 != 0) {
        func_001BBAA0(self, &D_000A89C0);
    }
    return 1;
}

/* the callback a wreck trigger registers (D_000A8A60): it makes the game
   manager play the effect for one of the trigger's active items */
extern S_000A8A60_Global *D_002A8490;
int func_00011260(int lo, int hi);

void __cdecl func_000A8A60(void *a0, void *unused, C_000A88A0 *obj, int flag)
{
    int i;
    int r;

    if (flag != 0 && D_002A8490->f2A4->f1C8 == 0) {
        i = 0;
        do {
            r = func_00011260(0, 2);
            i++;
        } while (obj->items[r].unk0 == 0 && i < 10);
        D_002A8490->f2A4->func_000323C0(obj->unk1C0, a0, &obj->items[r]);
    }
}

C_000A8AF0 *C_000A8AF0::func_000A8AF0() {
    extern int D_0027C2DC;
    extern float D_002A2734;
    extern float D_002A2738;
    extern float D_002A273C;
    extern float D_002A2740;
    int i;
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C2DC;
    unk1C0[2] = 0.0f;
    unk1C0[1] = 0.0f;
    unk1C0[0] = 0.0f;
    unk1C0[3] = 1.0f;
    for (i = 0; i < 3; i++) {
        items[i].unk0 = 0;
    }
    unk1C0[0] = D_002A2734;
    unk1C0[1] = D_002A2738;
    unk1C0[2] = D_002A273C;
    unk1C0[3] = D_002A2740;
    return this;
}

int C_000A8B70::func_000A8B70(void *param1, void *param2) {
    extern int D_000A8A60;
    if (param2 == 0) return 1;
    ((S_000A8D90_Mgr *)param2)->func_001BBAA0(this, &D_000A8A60);
    return 1;
}

C_000A8BC0 *C_000A8BC0::func_000A8BC0() {
    extern int D_0027C2E8;
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C2E8;
    unk10C = 0;
    return this;
}

void C_000A8BE0::func_000A8BE0(void *param1, void *param2) {
    extern int D_0027C2F0;
    ((Obj_00168550 *)param1)->func_00168550(&D_0027C2F0, &unk10C, 0x3B);
    func_001B5A00(param1, param2);
}

C_000A8C90 *C_000A8C90::func_000A8C90()
{
    int i;
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C304;
    for (i = 0; i < 3; i++) {
        unk10C[i][0] = 0;
    }
    return this;
}

void C_000A8C90::func_000A8CC0(C_00168550 *a, void *b)
{
    char buf[0x3c];
    int i;
    for (i = 0; i < 3; i++) {
        func_001ADCC0(buf, 0x3c, D_0027C2B4, i + 1);
        a->func_00168550(buf, unk10C[i], 0x3b);
    }
    ((C_001B5A00 *)this)->func_001B5A00(a, b);
}

C_000A8D70 *C_000A8D70::func_000A8D70()
{
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C310;
    return this;
}

int __stdcall func_001BBAA0(void *a, void *b);
extern char D_000A8D40;
int C_000A8D90::func_000A8D90(void *a, S_000A8D90_Mgr *b)
{
    if (b) {
        b->func_001BBAA0(this, &D_000A8D40);
    }
    return 1;
}

C_000A8DB0 *C_000A8DB0::func_000A8DB0() {
    extern int D_0027C31C;
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C31C;
    unk10C = -1;
    return this;
}

void C_000A8DD0::func_000A8DD0(C_000A8DD0_P1 *a, void *b) {
    extern int D_0027C324;
    a->func_00168C20(&D_0027C324, -1, &unk10C);
    func_001B5A00(a, b);
}

C_000A8E20 *C_000A8E20::func_000A8E20() {
    extern int D_0027C334;
    ((C_001B59E0 *)this)->func_001B59E0();
    unk10C = 0;
    unk148 = 0;
    vtbl = (void *)&D_0027C334;
    return this;
}

void C_000A8E40::func_000A8E40(void *a, void *b) {
    extern int D_0027C35C;
    extern int D_0027C368;
    extern int D_0027C33C;
    extern int D_0027C348;
    ((C_000A8E40_P1 *)a)->func_00168BE0(&D_0027C35C, &D_0027C368, &unk10C, 0x3b);
    ((C_000A8E40_P1 *)a)->func_00168BE0(&D_0027C33C, &D_0027C348, &unk148, 0x3b);
    ((C_001B5A00 *)this)->func_001B5A00(a, b);
}

C_000A8EB0 *C_000A8EB0::func_000A8EB0() {
    extern int D_0027C380;
    extern float D_002A2734;
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C380;
    vec10C[3] = 1.0f;
    vec10C[2] = 0.0f;
    vec10C[1] = 0.0f;
    vec10C[0] = 0.0f;
    vec10C = *(C_000A8EB0_Vec *)&D_002A2734;
    unk11C = 0;
    unk120 = 0;
    return this;
}

void C_000A8EB0::func_000A8F20(S_TriggerStream *stream, void *b)
{
    extern int D_0027C3A8;
    extern int D_0027C398;
    extern int D_0027C388;
    extern float D_002A2734;
    stream->func_00168CB0(&D_0027C3A8, &D_002A2734, &vec10C);
    stream->func_00168C50(&D_0027C398, 0, &unk11C);
    stream->func_00168C50(&D_0027C388, 0, &unk120);
    func_001B5A00(stream, b);
}

C_000A8FA0 *C_000A8FA0::func_000A8FA0() {
    extern int D_0027C3BC;
    ((C_001B59E0 *)this)->func_001B59E0();
    unk10C = 0;
    unk110[0] = 0;
    vtbl = (void *)&D_0027C3BC;
    return this;
}

void C_000A8FA0::func_000A8FC0(S_TriggerStream *stream, void *b)
{
    extern int D_0027C3D4;
    extern int D_0027C3C4;
    extern int D_00275630;
    stream->func_00168C20(&D_0027C3D4, 0, &unk10C);
    stream->func_00168BE0(&D_0027C3C4, &D_00275630, unk110, 0x104);
    func_001B5A00(stream, b);
}

C_000A9030 *C_000A9030::func_000A9030() {
    extern int D_0027C3E4;
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C3E4;
    unk10C = 0;
    return this;
}

void C_000A9030::func_000A9050(S_TriggerStream *stream, void *b)
{
    extern int D_0027C3EC;
    extern int D_0027C3F8;
    stream->func_00168BE0(&D_0027C3EC, &D_0027C3F8, &unk10C, 0x3b);
    func_001B5A00(stream, b);
}

C_000A90B0 *C_000A90B0::func_000A90B0() {
    extern int D_0027C410;
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C410;
    unk10C = 0;
    return this;
}

void C_000A90B0::func_000A90D0(S_TriggerStream *stream, void *b)
{
    extern int D_0027823C;
    unsigned char *p = (unsigned char *)this + 0x10c;
    stream->func_00168C20(&D_0027823C, 0, (void *)p);
    func_001B5A00(stream, b);
}

void C_000A9120::func_000A9120(void)
{
    extern int D_0027C41C;
    int i;

    vtbl = (void *)&D_0027C41C;
    if (items) {
        for (i = 0; i < count; i++) {
            func_001E891B(items[i]->unk114);
            func_001E891B(items[i]->unk118);
            func_001E891B(items[i]->unk11C);
            func_001E891B(items[i]->unk108);
            func_001E891B(items[i]);
        }
        func_001E891B(items);
    }
    ((C_00157660 *)this)->func_00157660();
}

