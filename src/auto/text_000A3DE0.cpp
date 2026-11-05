/* 9 functions from 0x000A3DE0 to 0x000A4D30, found by Ghidra. */
#include "common.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(int size);

extern char D_002A60B0[];
extern char D_002A5EA0[];
extern char D_002A46E8[];
extern char D_002A4C10[];
extern char D_002A5660[];
extern char D_002A4A00[];
extern char D_00276F28[];
extern char D_0027B208[];
extern char D_0027B1FC[];
extern char D_0027B1E4[];
extern char D_0027B1CC[];
extern char D_0027B1C0[];
extern char D_002A2734[];
extern char D_002A2764[];

struct C_000A4080_Stream {
    int func_00169710(const char *name);
    void func_00168CB0(char *buf, const char *key, void *dst);
    void func_00168C20(const char *key, int def, void *dst);
};

struct BmxPlayerStart {
    char pad0[0x24];
    char unk24[0x80];
    char unkA4[0x80];
    int unk124;
    int func_000A4080(C_000A4080_Stream *stream);
};

struct C_000A4150_flags {
    char pad0[0x180];
    u8 unk180;
};

struct C_000A4150_obj {
    void *vtbl;
    C_000A4150_flags *unk4;
    C_000A4150_obj *func_00164440(int a, int b);
    void func_001673B0(char *path, int a, int b, int c, int d);
};

struct C_000A4150 {
    C_000A4150_obj *unk0;
    int func_000A4150(char *a1);
    int func_000A4400(char *a1);
};

struct C_000A4500_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    void func_00108370();
    void func_001083E0();
};

struct C_000A4500 {
    char pad0[0x1A8];
    C_000A4500_Obj *unk1A8[8];
    int unk1C8[8];
    void func_000A4500(int param_1, int param_2);
};

struct C_000A43E0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    C_000A43E0* func_000A43E0(void);
};


int BmxPlayerStart::func_000A4080(C_000A4080_Stream *stream)
{
    char buf[0x104];
    char *p;
    int i;
    int n;

    if (!stream->func_00169710(D_0027B1FC)) {
        return 0;
    }
    i = 1;
    p = unkA4;
    n = 8;
    do {
        func_001ADCC0(buf, 0x104, D_0027B1E4, i);
        stream->func_00168CB0(buf, D_002A2734, p - 0x80);
        func_001ADCC0(buf, 0x104, D_0027B1CC, i);
        stream->func_00168CB0(buf, D_002A2764, p);
        i++;
        p += 0x10;
    } while (--n);
    stream->func_00168C20(D_0027B1C0, 0, &unk124);
    return 1;
}

int C_000A4150::func_000A4150(char *a1) {
    char buf[0x104];
    C_000A4150_obj *obj;

    func_001ADCC0(D_002A60B0, 0x104, D_00276F28, D_002A5660);
    func_001ADCC0(D_002A5EA0, 0x104, D_00276F28, D_002A5660);
    func_001ADCC0(D_002A46E8, 0x104, D_00276F28, D_002A5660);
    func_001ADCC0(D_002A4C10, 0x104, D_00276F28, D_002A5660);
    if (!unk0) {
        obj = (C_000A4150_obj *)func_001E8A44(0x244);
        unk0 = obj ? obj->func_00164440(1, 1) : 0;
        func_001ADCC0(buf, 0x104, D_0027B208, D_002A5660, a1);
        unk0->func_001673B0(buf, 0, 1, 1, 1);
        unk0->unk4->unk180 |= 8;
        unk0->unk4->unk180 |= 0x10;
    }
    return 1;
}

C_000A43E0* C_000A43E0::func_000A43E0(void) {
    unk0 = 0;
    unk4 = 1;
    unk8 = 1;
    unkC = 1;
    return this;
}

int C_000A4150::func_000A4400(char *a1) {
    char buf[0x104];
    C_000A4150_obj *obj;

    func_001ADCC0(D_002A60B0, 0x104, D_00276F28, D_002A4A00);
    func_001ADCC0(D_002A5EA0, 0x104, D_00276F28, D_002A4A00);
    func_001ADCC0(D_002A46E8, 0x104, D_00276F28, D_002A4A00);
    func_001ADCC0(D_002A4C10, 0x104, D_00276F28, D_002A4A00);
    if (!unk0) {
        obj = (C_000A4150_obj *)func_001E8A44(0x244);
        unk0 = obj ? obj->func_00164440(1, 1) : 0;
        func_001ADCC0(buf, 0x104, D_0027B208, D_002A4A00, a1);
        unk0->func_001673B0(buf, 0, 1, 1, 1);
        unk0->unk4->unk180 |= 8;
        unk0->unk4->unk180 |= 0x10;
    }
    return 1;
}

void C_000A4500::func_000A4500(int param_1, int param_2)
{
    if (param_1 == 0) {
        if (unk1C8[param_2] == 0) {
            unk1A8[param_2]->func_00108370();
            unk1A8[param_2]->v4();
            unk1C8[param_2] = 1;
        }
    } else if (unk1C8[param_2] != 0) {
        unk1A8[param_2]->func_001083E0();
        unk1A8[param_2]->v6();
        unk1C8[param_2] = 0;
    }
}

