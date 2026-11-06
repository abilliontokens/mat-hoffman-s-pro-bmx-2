/* 1 function from 0x0010A3B0 to 0x0010C090, found by Ghidra. */
#include "common.h"
extern char D_00275678[];
struct TexMgr_0010A3B0 {
    int func_00162B20(char* name, int flag);
};
extern TexMgr_0010A3B0* D_002EF7D0;
int func_001ADCC0(char* buf, int size, const char* fmt, ...);
char *func_001E8AF0(const char *s, const char *pat);
extern char D_00276F28[], D_00282B50[], D_00282B54[];
struct Owner_0010A3B0 {
    char pad0[0x52c];
    char *f52c;
};
struct Hud_0010A3B0 {
    char pad0[0x24];
    Owner_0010A3B0 *f24;
    char pad28[0x1658 - 0x28];
    int f1658[103];
    int f17f4[103];
    int f1990[70];
    int f1aa8[70];
    int f1bc0[5][16];
    int f1d00[5][16];
    void func_001056E0();
    void func_0010A3B0();
};
#define HI(o) (*(int*)((char*)this + (o)))
#define LOAD_TEX(o, name) \
    func_001ADCC0(buf, 0x100, D_00275678, prefix, name); \
    HI(o) = D_002EF7D0->func_00162B20(buf, 1)
#define LOAD_ALL_TEX \
    LOAD_TEX(0x1658, D_00283000); \
    LOAD_TEX(0x165c, D_00282FF8); \
    LOAD_TEX(0x1660, D_00282FF0); \
    LOAD_TEX(0x1664, D_00282FE8); \
    LOAD_TEX(0x1668, D_00282FD8); \
    LOAD_TEX(0x166c, D_00282FCC); \
    LOAD_TEX(0x1670, D_00282FC0); \
    LOAD_TEX(0x1674, D_00282FB4); \
    LOAD_TEX(0x1678, D_00282FA8); \
    LOAD_TEX(0x167c, D_00282F9C); \
    LOAD_TEX(0x1680, D_00282F90); \
    LOAD_TEX(0x1684, D_00282F84); \
    LOAD_TEX(0x1688, D_00282F7C); \
    LOAD_TEX(0x168c, D_00282F74); \
    LOAD_TEX(0x1690, D_00282F68); \
    LOAD_TEX(0x1694, D_00282F58); \
    LOAD_TEX(0x1698, D_00282F48); \
    LOAD_TEX(0x16b8, D_00282F40); \
    LOAD_TEX(0x16c0, D_00282F34); \
    LOAD_TEX(0x16bc, D_00282F28); \
    LOAD_TEX(0x16c4, D_00282F20); \
    LOAD_TEX(0x16a0, D_0027FD38); \
    LOAD_TEX(0x16a4, D_00282F10); \
    LOAD_TEX(0x16a8, D_00282F00); \
    LOAD_TEX(0x169c, D_00282EF4); \
    LOAD_TEX(0x16ac, D_00282EEC); \
    LOAD_TEX(0x16b0, D_00282EE0); \
    LOAD_TEX(0x16b4, D_00282ED4); \
    LOAD_TEX(0x16d0, D_00282ECC); \
    LOAD_TEX(0x16d4, D_00282EC4); \
    LOAD_TEX(0x16d8, D_00282EB4); \
    LOAD_TEX(0x16dc, D_00282EA0); \
    LOAD_TEX(0x16c8, D_00282E90); \
    LOAD_TEX(0x16cc, D_00282E80); \
    LOAD_TEX(0x16e0, D_00282E78); \
    LOAD_TEX(0x16e4, D_00282E6C); \
    LOAD_TEX(0x16e8, D_00282E58); \
    LOAD_TEX(0x16ec, D_00282E44); \
    LOAD_TEX(0x16f8, D_00282E38); \
    LOAD_TEX(0x16fc, D_0027A520); \
    LOAD_TEX(0x16f0, D_00282E28); \
    LOAD_TEX(0x16f4, D_00282E1C); \
    LOAD_TEX(0x1700, D_00282E0C); \
    LOAD_TEX(0x1704, D_00282DFC); \
    LOAD_TEX(0x1708, D_0027CA78); \
    LOAD_TEX(0x170c, D_00282DF0); \
    LOAD_TEX(0x1710, D_00282DDC); \
    LOAD_TEX(0x17f4, D_00282DD4); \
    LOAD_TEX(0x17f8, D_00282DC8); \
    LOAD_TEX(0x17fc, D_00282DBC); \
    LOAD_TEX(0x1854, D_00282DB0); \
    LOAD_TEX(0x1858, D_00282DA4); \
    LOAD_TEX(0x185c, D_00282D98); \
    LOAD_TEX(0x1800, D_00282D90); \
    LOAD_TEX(0x1804, D_00282D80); \
    LOAD_TEX(0x1808, D_00282D74); \
    LOAD_TEX(0x180c, D_00282D68); \
    LOAD_TEX(0x1810, D_00282D5C); \
    LOAD_TEX(0x1814, D_00282D50); \
    LOAD_TEX(0x1818, D_00282D44); \
    LOAD_TEX(0x181c, D_00282D38); \
    LOAD_TEX(0x1820, D_00282D2C); \
    LOAD_TEX(0x1828, D_00282D20); \
    LOAD_TEX(0x1824, D_00282D14); \
    LOAD_TEX(0x182c, D_00282D08); \
    LOAD_TEX(0x1830, D_00282CF8); \
    LOAD_TEX(0x1834, D_00282CE8); \
    LOAD_TEX(0x183c, D_00282CDC); \
    LOAD_TEX(0x1840, D_00282CCC); \
    LOAD_TEX(0x1844, D_00282CBC); \
    LOAD_TEX(0x1838, D_00282CB0); \
    LOAD_TEX(0x1848, D_00282CA8); \
    LOAD_TEX(0x184c, D_00282C9C); \
    LOAD_TEX(0x1850, D_00282C90); \
    LOAD_TEX(0x1860, D_00282C84); \
    LOAD_TEX(0x186c, D_00282C78); \
    LOAD_TEX(0x1870, D_00282C6C); \
    LOAD_TEX(0x1874, D_00282C5C); \
    LOAD_TEX(0x1878, D_00282C48); \
    LOAD_TEX(0x1864, D_00282C38); \
    LOAD_TEX(0x1868, D_00282C24); \
    LOAD_TEX(0x1880, D_00282C14); \
    LOAD_TEX(0x1884, D_00282C00); \
    LOAD_TEX(0x1888, D_00282BEC); \
    LOAD_TEX(0x1894, D_00282BDC); \
    LOAD_TEX(0x1898, D_00282BD4); \
    LOAD_TEX(0x188c, D_00282BC0); \
    LOAD_TEX(0x1890, D_00282BB4); \
    LOAD_TEX(0x189c, D_00282BA4); \
    LOAD_TEX(0x18a0, D_00282B94); \
    LOAD_TEX(0x18a4, D_00282B8C); \
    LOAD_TEX(0x18a8, D_00282B7C); \
    LOAD_TEX(0x18ac, D_00282B64)
#define HA(base, i) (((int *)((char *)this + (base)))[i])
#define NAME_LOOP10(i0, chk, ld) \
    for (i = i0, j = 0; i < i0 + 8; i++, j++) { \
        const char *src = f24->f52c + j * 0x32 + chk; \
        char *dst = name; \
        char c; \
        do { \
            c = *src++; \
            *dst++ = c; \
        } while (c != 0); \
        if (func_001E8AF0(name, D_00282B54) == 0) { \
            func_001ADCC0(buf, 0x100, D_00276F28, f24->f52c + j * 0x32 + ld); \
            f1658[i] = D_002EF7D0->func_00162B20(buf, 1); \
            func_001ADCC0(buf, 0x100, D_00282B50, f24->f52c + j * 0x32 + ld); \
            f1658[i + 103] = D_002EF7D0->func_00162B20(buf, 1); \
        } \
    }
#define NAME_LOOP9(end, chk, ld) \
    for (j = 0; i < end; i++, j++) { \
        const char *src = f24->f52c + j * 0x32 + chk; \
        char *dst = name; \
        char c; \
        do { \
            c = *src++; \
            *dst++ = c; \
        } while (c != 0); \
        if (func_001E8AF0(name, D_00282B54) == 0) { \
            func_001ADCC0(buf, 0x100, D_00276F28, f24->f52c + j * 0x32 + ld); \
            f1658[i] = D_002EF7D0->func_00162B20(buf, 1); \
            func_001ADCC0(buf, 0x100, D_00282B50, f24->f52c + j * 0x32 + ld); \
            f17f4[i] = D_002EF7D0->func_00162B20(buf, 1); \
        } \
    }
#define NAME_LOOP8(i0, chk, ld) \
    for (i = i0 * 4, j = 0; i < i0 * 4 + 0x20; i += 4, j++) { \
        const char *src = f24->f52c + j * 0x32 + chk; \
        char *dst = name; \
        char c; \
        do { \
            c = *src++; \
            *dst++ = c; \
        } while (c != 0); \
        if (func_001E8AF0(name, D_00282B54) == 0) { \
            func_001ADCC0(buf, 0x100, D_00276F28, f24->f52c + j * 0x32 + ld); \
            HI(i + 0x1658) = D_002EF7D0->func_00162B20(buf, 1); \
            func_001ADCC0(buf, 0x100, D_00282B50, f24->f52c + j * 0x32 + ld); \
            HI(i + 0x17f4) = D_002EF7D0->func_00162B20(buf, 1); \
        } \
    }
#define NAME_LOOP7(i0, chk, ld) \
    for (j = 0; j < 8; j++) { \
        const char *src = f24->f52c + j * 0x32 + chk; \
        char *dst = name; \
        char c; \
        do { \
            c = *src++; \
            *dst++ = c; \
        } while (c != 0); \
        if (func_001E8AF0(name, D_00282B54) == 0) { \
            func_001ADCC0(buf, 0x100, D_00276F28, f24->f52c + j * 0x32 + ld); \
            f1658[j + i0] = D_002EF7D0->func_00162B20(buf, 1); \
            func_001ADCC0(buf, 0x100, D_00282B50, f24->f52c + j * 0x32 + ld); \
            f17f4[j + i0] = D_002EF7D0->func_00162B20(buf, 1); \
        } \
    }
#define NAME_LOOP6(i0, chk, ld) \
    for (i = i0, j = 0; i < i0 + 8; i++, j += 0x32) { \
        const char *src = f24->f52c + j + chk; \
        char *dst = name; \
        char c; \
        do { \
            c = *src++; \
            *dst++ = c; \
        } while (c != 0); \
        if (func_001E8AF0(name, D_00282B54) == 0) { \
            func_001ADCC0(buf, 0x100, D_00276F28, f24->f52c + j + ld); \
            f1658[i] = D_002EF7D0->func_00162B20(buf, 1); \
            func_001ADCC0(buf, 0x100, D_00282B50, f24->f52c + j + ld); \
            f17f4[i] = D_002EF7D0->func_00162B20(buf, 1); \
        } \
    }
#define NAME_LOOP5(i0, chk, ld) \
    for (i = i0, j = 0; i < i0 + 8; i++, j++) { \
        const char *src = f24->f52c + j * 0x32 + chk; \
        char *dst = name; \
        char c; \
        do { \
            c = *src++; \
            *dst++ = c; \
        } while (c != 0); \
        if (func_001E8AF0(name, D_00282B54) == 0) { \
            func_001ADCC0(buf, 0x100, D_00276F28, f24->f52c + j * 0x32 + ld); \
            f1658[i] = D_002EF7D0->func_00162B20(buf, 1); \
            func_001ADCC0(buf, 0x100, D_00282B50, f24->f52c + j * 0x32 + ld); \
            f17f4[i] = D_002EF7D0->func_00162B20(buf, 1); \
        } \
    }
#define NAME_LOOP11(i0, chk, ld) \
    for (i = i0, j = 0; i < i0 + 8; i++, j++) { \
        const char *src = f24->f52c + j * 0x32 + chk; \
        char *dst = name; \
        char c; \
        do { \
            c = *src++; \
            *dst++ = c; \
        } while (c != 0); \
        if (func_001E8AF0(name, D_00282B54) == 0) { \
            func_001ADCC0(buf, 0x100, D_00276F28, f24->f52c + (i - i0) * 0x32 + ld); \
            f1658[i] = D_002EF7D0->func_00162B20(buf, 1); \
            func_001ADCC0(buf, 0x100, D_00282B50, f24->f52c + (i - i0) * 0x32 + ld); \
            f17f4[i] = D_002EF7D0->func_00162B20(buf, 1); \
        } \
    }
#define NAME_LOOP4(end, chk, ld) \
    for (j = 0; i < end; i += 4, j += 0x32) { \
        char *dst = name; \
        const char *src = f24->f52c + j + chk; \
        while ((*dst++ = *src++) != 0) \
            ; \
        if (func_001E8AF0(name, D_00282B54) == 0) { \
            func_001ADCC0(buf, 0x100, D_00276F28, f24->f52c + j + ld); \
            HI(i + 0x1658) = D_002EF7D0->func_00162B20(buf, 1); \
            func_001ADCC0(buf, 0x100, D_00282B50, f24->f52c + j + ld); \
            HI(i + 0x17f4) = D_002EF7D0->func_00162B20(buf, 1); \
        } \
    }
#define NAME_LOOP3(i0, chk, ld) \
    for (i = i0; i < i0 + 8; i++) { \
        char *dst = name; \
        const char *src = f24->f52c + (i - i0) * 0x32 + chk; \
        while ((*dst++ = *src++) != 0) \
            ; \
        if (func_001E8AF0(name, D_00282B54) == 0) { \
            func_001ADCC0(buf, 0x100, D_00276F28, f24->f52c + (i - i0) * 0x32 + ld); \
            HA(0x1658, i) = D_002EF7D0->func_00162B20(buf, 1); \
            func_001ADCC0(buf, 0x100, D_00282B50, f24->f52c + (i - i0) * 0x32 + ld); \
            HA(0x17f4, i) = D_002EF7D0->func_00162B20(buf, 1); \
        } \
    }
#define NAME_LOOP2(i0, chk, ld) \
    for (i = i0, j = 0; i < i0 + 8; i++, j++) { \
        char *dst = name; \
        const char *src = f24->f52c + j * 0x32 + chk; \
        while ((*dst++ = *src++) != 0) \
            ; \
        if (func_001E8AF0(name, D_00282B54) == 0) { \
            func_001ADCC0(buf, 0x100, D_00276F28, f24->f52c + j * 0x32 + ld); \
            HA(0x1658, i) = D_002EF7D0->func_00162B20(buf, 1); \
            func_001ADCC0(buf, 0x100, D_00282B50, f24->f52c + j * 0x32 + ld); \
            HA(0x17f4, i) = D_002EF7D0->func_00162B20(buf, 1); \
        } \
    }
#define NAME_LOOP(lo, hi, chk, ld) \
    for (i = lo, j = 0; i < hi; i += 4, j += 0x32) { \
        char *dst = name; \
        const char *src = f24->f52c + j + chk; \
        while ((*dst++ = *src++) != 0) \
            ; \
        if (func_001E8AF0(name, D_00282B54) == 0) { \
            func_001ADCC0(buf, 0x100, D_00276F28, f24->f52c + j + ld); \
            HI(i + 0x1658) = D_002EF7D0->func_00162B20(buf, 1); \
            func_001ADCC0(buf, 0x100, D_00282B50, f24->f52c + j + ld); \
            HI(i + 0x17f4) = D_002EF7D0->func_00162B20(buf, 1); \
        } \
    }

extern char D_00283000[], D_00282FF8[], D_00282FF0[], D_00282FE8[], D_00282FD8[], D_00282FCC[], D_00282FC0[], D_00282FB4[], D_00282FA8[], D_00282F9C[], D_00282F90[], D_00282F84[], D_00282F7C[], D_00282F74[], D_00282F68[], D_00282F58[], D_00282F48[], D_00282F40[], D_00282F34[], D_00282F28[], D_00282F20[], D_0027FD38[], D_00282F10[], D_00282F00[], D_00282EF4[], D_00282EEC[], D_00282EE0[], D_00282ED4[], D_00282ECC[], D_00282EC4[], D_00282EB4[], D_00282EA0[], D_00282E90[];
extern char D_00282E80[], D_00282E78[], D_00282E6C[], D_00282E58[], D_00282E44[], D_00282E38[], D_0027A520[], D_00282E28[], D_00282E1C[], D_00282E0C[], D_00282DFC[], D_0027CA78[], D_00282DF0[], D_00282DDC[], D_00282DD4[], D_00282DC8[], D_00282DBC[], D_00282DB0[], D_00282DA4[], D_00282D98[], D_00282D90[], D_00282D80[], D_00282D74[], D_00282D68[], D_00282D5C[], D_00282D50[], D_00282D44[], D_00282D38[], D_00282D2C[], D_00282D20[], D_00282D14[], D_00282D08[], D_00282CF8[];
extern char D_00282CE8[], D_00282CDC[], D_00282CCC[], D_00282CBC[], D_00282CB0[], D_00282CA8[], D_00282C9C[], D_00282C90[], D_00282C84[], D_00282C78[], D_00282C6C[], D_00282C5C[], D_00282C48[], D_00282C38[], D_00282C24[], D_00282C14[], D_00282C00[], D_00282BEC[], D_00282BDC[], D_00282BD4[], D_00282BC0[], D_00282BB4[], D_00282BA4[], D_00282B94[], D_00282B8C[], D_00282B7C[], D_00282B64[];
void Hud_0010A3B0::func_0010A3B0()
{
    char prefix[5];
    char buf[256];
    char name[52];
    int i, j, k, r;
    prefix[0] = 0;
    LOAD_ALL_TEX;
    NAME_LOOP5(47, 0x6858, 0x6858)
    for (k = 0; k < *(int *)(f24->f52c + 0x18); k++) {
        func_001ADCC0(buf, 0x100, D_00276F28, f24->f52c + k * 0x32 + 0xdc8);
        f1990[k] = D_002EF7D0->func_00162B20(buf, 1);
        func_001ADCC0(buf, 0x100, D_00282B50, f24->f52c + k * 0x32 + 0xdc8);
        f1aa8[k] = D_002EF7D0->func_00162B20(buf, 1);
    }
    for (r = 0; r < 5; r++) {
        for (k = 0; k < *(int *)(f24->f52c + 0x39f0 + r * 4); k++) {
            func_001ADCC0(buf, 0x100, D_00276F28, f24->f52c + 0x49a4 + r * 0x320 + k * 0x32);
            f1bc0[r][k] = D_002EF7D0->func_00162B20(buf, 1);
            func_001ADCC0(buf, 0x100, D_00282B50, f24->f52c + 0x49a4 + r * 0x320 + k * 0x32);
            f1d00[r][k] = D_002EF7D0->func_00162B20(buf, 1);
        }
    }
    NAME_LOOP5(55, 0x6cb8, 0x6cb8)
    NAME_LOOP5(63, 0x6cb8, 0x6e48)
    NAME_LOOP5(71, 0x6cb8, 0x6fd8)
    NAME_LOOP5(79, 0x72f8, 0x72f8)
    NAME_LOOP5(87, 0x72f8, 0x7488)
    NAME_LOOP5(95, 0x72f8, 0x7618)
    func_001056E0();
}
