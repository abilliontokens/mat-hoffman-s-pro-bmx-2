/* 1 function from 0x000A4D30 to 0x000A74B0, found by Ghidra. */
#include "common.h"
#define I4(p, o) (*(int *)((char *)(p) + (o)))
#define P4(p, o) (*(char **)((char *)(p) + (o)))
extern char D_002A5348;
extern char D_0027C118;
extern char D_002769F8;
extern char D_0027C104, D_0027C0EC, D_0027C0D4, D_0027C0B8, D_0027C098, D_0027C078, D_0027C068, D_0027C058, D_0027C03C, D_0027C028, D_0027C014, D_0027C000, D_0027BFE0, D_0027BFC0, D_0027BFA0, D_0027BF88, D_0027BF74, D_0027BF60, D_0027BF44;
extern char D_0027BF3C, D_0027BF34, D_0027BF2C, D_0027BF24, D_0027BF18, D_0027BF0C, D_0027BF00, D_0027BEF4, D_0027BEE8, D_0027BEDC, D_0027BED0, D_0027BEC0, D_0027BEB0, D_0027BEA0, D_0027BE90, D_0027BE80, D_0027BE70, D_0027BE5C, D_0027BE40, D_0027BE30, D_0027BE1C, D_0027BE00, D_0027BDF0, D_0027BDDC, D_0027BDC0, D_0027BDAC, D_0027BD98, D_0027BD78, D_0027BD68, D_0027BD54, D_0027BD38, D_0027BD28, D_0027BD10, D_0027BCF4, D_0027BCE4, D_0027BCD0;
extern char D_0027BCC8, D_0027BCC0, D_0027BCB8, D_0027BCB0, D_0027BCA8, D_0027BCA0, D_0027BC98, D_00276980, D_0027BC8C, D_0027BC7C, D_0027BC68, D_0027BC54, D_0027BC40, D_0027BC30, D_0027BC18, D_0027BC08, D_0027BBF8, D_0027BBE8, D_0027BBD8, D_0027BBC8, D_0027BBB8, D_0027BBA8, D_0027BB98;
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
struct Ser_000A4D30 {
    char pad[0x6dc];
    void func_00168280();
    int func_00169490(char *path, int z);
    void func_001691E0();
    int func_00169710(char *name);
    void func_00168C20(char *name, int value, void *ptr);
    void func_00168A10(char *name, void *ptr);
    void func_00168B90(char *name, void *ptr);
    void func_00168550(char *name, void *ptr, int n);
};
struct S_000A4D30 {
    char pad0[0x7a90];
    int func_000A4D30();
};

int S_000A4D30::func_000A4D30()
{
    char *self = (char *)this;
    char buf[0x104];
    Ser_000A4D30 ser;
    int v30 = 0;
    int v34 = 0;
    int v58 = 0;
    char namebuf[0x20];
    func_001ADCC0(buf, 0x104, &D_0027C118, &D_002A5348);
    ser.func_00168280();
    if (ser.func_00169490(buf, 0) == 0) {
        ser.func_001691E0();
        return 0;
    }
    ser.func_00169710(&D_002769F8);
    ser.func_00168A10(&D_0027C104, &v30);
    ser.func_00168A10(&D_0027C0EC, self + 0x39f0);
    ser.func_00168A10(&D_0027C0D4, self + 0x39f4);
    ser.func_00168A10(&D_0027C0B8, self + 0x39f8);
    ser.func_00168A10(&D_0027C098, self + 0x39fc);
    ser.func_00168A10(&D_0027C078, self + 0x3a00);
    ser.func_00168A10(&D_0027C068, &v34);
    ser.func_00168A10(&D_0027C058, &v58);
    ser.func_00168A10(&D_0027C03C, self + 0x6348);
    ser.func_00168B90(&D_0027C028, self + 4);
    ser.func_00168B90(&D_0027C014, self);
    ser.func_00168B90(&D_0027C000, self + 0xc);
    ser.func_00168B90(&D_0027BFE0, self + 8);
    ser.func_00168B90(&D_0027BFC0, self + 0x10);
    ser.func_00168B90(&D_0027BFA0, self + 0x14);
    ser.func_00168B90(&D_0027BF88, self + 0x6344);
    ser.func_00168A10(&D_0027BF74, self + 0x634c);
    ser.func_00168A10(&D_0027BF60, self + 0x66c4);
    ser.func_00168B90(&D_0027BF44, self + 0x6350);
    (void)namebuf;
    ser.func_001691E0();
    return 1;
}
