/* 2 functions from 0x0005C720 to 0x0005D6A0, found by Ghidra. */
#include "common.h"

struct IniFile_5C720 {
    IniFile_5C720 *func_00168280(void);
    void func_001691E0(void);
    int func_00169490(char *buf, int flag);
    void func_00169710(const char *s);
    void func_00168A10(const char *key, int *out);
};
extern char D_00278328[];
extern char D_002A5348[];
extern char D_00275678[];
extern char D_00278244[];
extern char D_00278234[];
extern char D_00278228[];
extern char D_0027821C[];
extern char D_00278210[];
extern char D_00278204[];
extern char D_002781FC[];
extern char D_002781F4[];
extern char D_00278310[];
extern char D_002782F8[];
extern char D_002782E0[];
extern char D_002782C8[];
extern char D_002782BC[];
extern char D_002782B4[];

int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(unsigned int size);
void func_001E891B(void *p);

struct C_0005C720_Ini {
    C_0005C720_Ini *func_00168280(void);
    void func_001691E0(void);
    int func_00169490(char *buf, int flag);
    void func_00169710(const char *s);
    void func_00168A10(const char *key, int *out);
};

struct C_0005C720_Files {
    int func_0013B1A0(const char *key);
};
extern C_0005C720_Files *D_002BEAAC;

struct C_0005C720 {
    char pad0[0x328];
    int total;
    int sums[8];
    int a[8];
    int c[8];
    void func_0005C720(void);
};
