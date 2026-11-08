/* 1 function from 0x000A4D30 to 0x000A74B0, found by Ghidra. */
#include "common.h"
#define I4(p, o) (*(int *)((char *)(p) + (o)))
#define P4(p, o) (*(char **)((char *)(p) + (o)))
extern char D_002A5348;
extern char D_00010000;
extern char D_0027C118;
extern char D_002769F8;
extern char D_0027C104, D_0027C0EC, D_0027C0D4, D_0027C0B8, D_0027C098, D_0027C078, D_0027C068, D_0027C058, D_0027C03C, D_0027C028, D_0027C014, D_0027C000, D_0027BFE0, D_0027BFC0, D_0027BFA0, D_0027BF88, D_0027BF74, D_0027BF60, D_0027BF44;
extern char D_0027BF3C, D_0027BF34, D_0027BF2C, D_0027BF24, D_0027BF18, D_0027BF0C, D_0027BF00, D_0027BEF4, D_0027BEE8, D_0027BEDC, D_0027BED0, D_0027BEC0, D_0027BEB0, D_0027BEA0, D_0027BE90, D_0027BE80, D_0027BE70, D_0027BE5C, D_0027BE40, D_0027BE30, D_0027BE1C, D_0027BE00, D_0027BDF0, D_0027BDDC, D_0027BDC0, D_0027BDAC, D_0027BD98, D_0027BD78, D_0027BD68, D_0027BD54, D_0027BD38, D_0027BD28, D_0027BD10, D_0027BCF4, D_0027BCE4, D_0027BCD0;
extern char D_0027BCC8, D_0027BCC0, D_0027BCB8, D_0027BCB0, D_0027BCA8, D_0027BCA0, D_0027BC98, D_00276980, D_0027BC8C, D_0027BC7C, D_0027BC68, D_0027BC54, D_0027BC40, D_0027BC30, D_0027BC18, D_0027BC08, D_0027BBF8, D_0027BBE8, D_0027BBD8, D_0027BBC8, D_0027BBB8, D_0027BBA8, D_0027BB98;
extern char D_0027BB88, D_0027BB78, D_0027BB64, D_0027BB50, D_0027BB38, D_0027BB24, D_0027BB0C, D_0027BAF4, D_00276844, D_0027BAE8;
extern "C" int __cdecl memcmp(const void *, const void *, unsigned int);
#pragma intrinsic(memcmp)
extern "C" int __cdecl strcmp(const char *, const char *);
#pragma intrinsic(strcmp)
int func_001EA426(const char *, const char *);
extern "C" char *__cdecl strcpy(char *, const char *);
extern char D_0027B6AC, D_0027B690, D_0027B674, D_0027B658, D_0027B638, D_0027B618, D_0027B5F4, D_0027B5D0, D_0027B5AC, D_0027B588, D_0027B580, D_0027B578, D_0027B564, D_0027B550, D_0027B544, D_0027B538, D_0027B528;
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
struct Ser_000A4D30 {
    char pad[0x4cc];
    void func_00168280();
    int func_00169490(char *path, int z);
    void func_001691E0();
    int func_00169710(char *name);
    void func_00168BE0(char *key, char *value, char *dest, int size);
    void func_00168C20(char *name, int value, void *ptr);
    void func_00168A10(char *name, void *ptr);
    void func_00168B90(char *name, void *ptr);
    void func_00168550(char *name, void *ptr, int n);
};
struct BindingNames_000A4D30 {
    char squareSpecial[0x104];
    char circleSpecial[0x104];
    char circle[0x104];
    char square[0x104];
};
struct S_000A4D30 {
    char pad0[0x7a90];
    void func_000A4AF0(int key, char *name);
    int func_000A4D30();
};

int S_000A4D30::func_000A4D30()
{
    char *self = (char *)this;
    int hi, low, mid, group, rider, key, found, n;
    char buf[0x104];
    Ser_000A4D30 ser;
    int v34;
    int v30;
    int v58;
    char namebuf[30];
    char keyname[0x104];
    char value[0x104];
    char circle[0x104], square[0x104], circleSpecial[0x104], squareSpecial[0x104];
    func_001ADCC0(buf, 0x104, &D_0027C118, &D_002A5348);
    ser.func_00168280();
    if (ser.func_00169490(buf, 0) == 0) {
        ser.func_001691E0();
        return 0;
    }
    v58 = v34 = v30 = 0;
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
    ser.func_00168550(&D_0027BF3C, self + 0x6358, -1);
    ser.func_00168550(&D_0027BF34, self + 0x638a, -1);
    ser.func_00168550(&D_0027BF2C, self + 0x63bc, -1);
    ser.func_00168550(&D_0027BF24, self + 0x63ee, -1);
    ser.func_00168550(&D_0027BF18, self + 0x6420, -1);
    ser.func_00168550(&D_0027BF0C, self + 0x6484, -1);
    ser.func_00168550(&D_0027BF00, self + 0x6452, -1);
    ser.func_00168550(&D_0027BEF4, self + 0x2cf4, -1);
    ser.func_00168550(&D_0027BEE8, self + 0x2d26, -1);
    ser.func_00168550(&D_0027BEDC, self + 0x2d58, -1);
    ser.func_00168550(&D_0027BED0, self + 0x2d8a, -1);
    ser.func_00168550(&D_0027BEC0, self + 0x2dbc, -1);
    ser.func_00168550(&D_0027BEB0, self + 0x64b6, -1);
    ser.func_00168A10(&D_0027BEA0, self + 0x64e8);
    ser.func_00168550(&D_0027BE90, self + 0x64ec, -1);
    ser.func_00168A10(&D_0027BE80, self + 0x6520);
    ser.func_00168550(&D_0027BE70, self + 0x6524, -1);
    ser.func_00168A10(&D_0027BE5C, self + 0x6558);
    ser.func_00168B90(&D_0027BE40, self + 0x655c);
    ser.func_00168550(&D_0027BE30, self + 0x6560, -1);
    ser.func_00168A10(&D_0027BE1C, self + 0x6594);
    ser.func_00168B90(&D_0027BE00, self + 0x6598);
    ser.func_00168550(&D_0027BDF0, self + 0x659c, -1);
    ser.func_00168A10(&D_0027BDDC, self + 0x65d0);
    ser.func_00168B90(&D_0027BDC0, self + 0x65d4);
    ser.func_00168550(&D_0027BDAC, self + 0x65d8, -1);
    ser.func_00168A10(&D_0027BD98, self + 0x660c);
    ser.func_00168B90(&D_0027BD78, self + 0x6610);
    ser.func_00168550(&D_0027BD68, self + 0x6614, -1);
    ser.func_00168A10(&D_0027BD54, self + 0x6648);
    ser.func_00168B90(&D_0027BD38, self + 0x664c);
    ser.func_00168550(&D_0027BD28, self + 0x6650, -1);
    ser.func_00168A10(&D_0027BD10, self + 0x6684);
    ser.func_00168B90(&D_0027BCF4, self + 0x6688);
    ser.func_00168550(&D_0027BCE4, self + 0x668c, -1);
    ser.func_00168A10(&D_0027BCD0, self + 0x66c0);
    for (int i = 0; i < 5; ++i) {
        func_001ADCC0(namebuf, 30, &D_0027BCC8, i + 1);
        ser.func_00168B90(namebuf, self + 0x7a68 + i * 4);
    }
    ser.func_00168B90(&D_0027BCC0, self + 0x7a7c);
    ser.func_00168B90(&D_0027BCB8, self + 0x7a80);
    ser.func_00168B90(&D_0027BCB0, self + 0x7a84);
    ser.func_00168B90(&D_0027BCA8, self + 0x7a88);
    ser.func_00168B90(&D_0027BCA0, self + 0x7a8c);
    for (int j = 0; j < v30; ++j) {
        func_001ADCC0(namebuf, 30, &D_0027BC98, j + 1);
        if (ser.func_00169710(namebuf)) {
            ser.func_00168550(&D_00276980, self + 0x1c + j * 50, -1);
            ser.func_00168550(&D_0027BC8C, self + 0xdc8 + j * 50, -1);
            ser.func_00168A10(&D_0027BC7C, self + 0x1b74 + j * 4);
            ser.func_00168B90(&D_0027BC68, self + 0x1c8c + j * 4);
            ser.func_00168B90(&D_0027BC54, self + 0x1da4 + j * 4);
            ser.func_00168B90(&D_0027BC40, self + 0x1ebc + j * 4);
            ser.func_00168A10(&D_0027BC30, self + 0x1fd4 + j * 4);
            ser.func_00168A10(&D_0027BC18, self + 0x20ec + j * 4);
            ser.func_00168C20(&D_0027BC08, 0, self + 0x2434 + j * 4);
            ser.func_00168C20(&D_0027BBF8, 1, self + 0x254c + j * 4);
            ser.func_00168C20(&D_0027BBE8, 0, self + 0x2664 + j * 4);
            ser.func_00168C20(&D_0027BBD8, 0, self + 0x277c + j * 4);
            ser.func_00168C20(&D_0027BBC8, 1, self + 0x2894 + j * 4);
            ser.func_00168C20(&D_0027BBB8, 0, self + 0x29ac + j * 4);
            ser.func_00168C20(&D_0027BBA8, 0, self + 0x2ac4 + j * 4);
            ser.func_00168C20(&D_0027BB98, 1, self + 0x2bdc + j * 4);
        }
    }
    I4(self, 0x18) = v30;
    for (group = 0; group < 5; ++group) {
        for (n = 0; n < I4(self, 0x39f0 + group * 4); ++n) {
            switch (group) {
            case 0: func_001ADCC0(namebuf, 30, &D_0027BB88, n + 1); break;
            case 1: func_001ADCC0(namebuf, 30, &D_0027BB78, n + 1); break;
            case 2: func_001ADCC0(namebuf, 30, &D_0027BB64, n + 1); break;
            case 3: func_001ADCC0(namebuf, 30, &D_0027BB50, n + 1); break;
            case 4: func_001ADCC0(namebuf, 30, &D_0027BB38, n + 1); break;
            }
            if (ser.func_00169710(namebuf)) {
                int index = group * 16 + n;
                ser.func_00168550(&D_00276980, self + 0x3a04 + index * 50, -1);
                ser.func_00168550(&D_0027BC8C, self + 0x49a4 + index * 50, -1);
                ser.func_00168A10(&D_0027BC7C, self + 0x5944 + (group * 16 + n) * 4);
                ser.func_00168B90(&D_0027BC68, self + 0x5a84 + (group * 16 + n) * 4);
                ser.func_00168A10(&D_0027BC30, self + 0x5bc4 + (group * 16 + n) * 4);
                for (int k = 0; k < 3; ++k) {
                    func_001ADCC0(namebuf, 30, &D_0027BB24, k + 1);
                    ser.func_00168B90(namebuf, self + 0x5d04 + index * 4 + k * 0x140);
                }
            }
        }
    }
    for (rider = 0; rider < 2; ++rider) {
        if (rider == 0) ser.func_00169710(&D_0027BB0C);
        else ser.func_00169710(&D_0027BAF4);
        for (hi = -1; hi < 8; ++hi) {
            for (mid = hi == -1 ? -1 : 0; mid < 8; ++mid) {
                for (low = 0; low < 8; ++low) {
                    int lowBits = 1 << low;
                    int midBits = mid < 0 ? 0 : 0x100 << mid;
                    int highBits = hi < 0 ? 0 : (int)&D_00010000 << hi;
                    key = highBits | midBits | lowBits;
                    func_000A4AF0(key, keyname);
                    ser.func_00168BE0(keyname, &D_00276844, value, -1);
                    if (strcmp(value, "None") != 0) {
                        found = 0;
                        for (n = 0; n < I4(self, 0x18); ++n) {
                            if (found) break;
                            if (func_001EA426(self + 0xdc8 + n * 50, value) == 0) {
                                I4(self, 0x2204 + n * 4) = key;
                                found = 1;
                                I4(self, 0x231c + n * 4) = rider == 0;
                                if (strcmp(self + 0xdc8 + n * 50, "TableTop") == 0)
                                    I4(self, 0x6354) = key;
                            }
                        }
                    }
                }
            }
        }
    }

    for (rider = 0; rider < 16; ++rider) {
        int count = 0;
        switch (rider) {
        case 0:
            strcpy(circle, "MatCircle");
            strcpy(square, "MatSquare");
            strcpy(circleSpecial, "MatCircleSpecial");
            strcpy(squareSpecial, "MatSquareSpecial");
            break;
        case 1:
            strcpy(circle, "GirlCircle");
            strcpy(square, "GirlSquare");
            strcpy(circleSpecial, "GirlCircleSpecial");
            strcpy(squareSpecial, "GirlSquareSpecial");
            break;
        case 2:
            strcpy(circle, "JoeCircle");
            strcpy(square, "JoeSquare");
            strcpy(circleSpecial, "JoeCircleSpecial");
            strcpy(squareSpecial, "JoeSquareSpecial");
            break;
        case 3:
            strcpy(circle, "MimeCircle");
            strcpy(square, "MimeSquare");
            strcpy(circleSpecial, "MimeCircleSpecial");
            strcpy(squareSpecial, "MimeSquareSpecial");
            break;
        case 4:
            strcpy(circle, "RickCircle");
            strcpy(square, "RickSquare");
            strcpy(circleSpecial, "RickCircleSpecial");
            strcpy(squareSpecial, "RickSquareSpecial");
            break;
        case 5:
            strcpy(circle, "MikeCircle");
            strcpy(square, "MikeSquare");
            strcpy(circleSpecial, "MikeCircleSpecial");
            strcpy(squareSpecial, "MikeSquareSpecial");
            break;
        case 6:
            strcpy(circle, "DayCircle");
            strcpy(square, "DaySquare");
            strcpy(circleSpecial, "DayCircleSpecial");
            strcpy(squareSpecial, "DaySquareSpecial");
            break;
        case 7:
            strcpy(circle, "SimonCircle");
            strcpy(square, "SimonSquare");
            strcpy(circleSpecial, "SimonCircleSpecial");
            strcpy(squareSpecial, "SimonSquareSpecial");
            break;
        case 8:
            strcpy(circle, "FireGodCircle");
            strcpy(square, "FireGodSquare");
            strcpy(circleSpecial, "FireGodCircleSpecial");
            strcpy(squareSpecial, "FireGodSquareSpecial");
            break;
        case 10:
            strcpy(circle, "CoryCircle");
            strcpy(square, "CorySquare");
            strcpy(circleSpecial, "CoryCircleSpecial");
            strcpy(squareSpecial, "CorySquareSpecial");
            break;
        case 9:
            strcpy(circle, "KevinCircle");
            strcpy(square, "KevinSquare");
            strcpy(circleSpecial, "KevinCircleSpecial");
            strcpy(squareSpecial, "KevinSquareSpecial");
            break;
        case 11:
            strcpy(circle, "RubenCircle");
            strcpy(square, "RubenSquare");
            strcpy(circleSpecial, "RubenCircleSpecial");
            strcpy(squareSpecial, "RubenSquareSpecial");
            break;
        case 12:
            strcpy(circle, "BigFootCircle");
            strcpy(square, "BigFootSquare");
            strcpy(circleSpecial, "BigFootCircleSpecial");
            strcpy(squareSpecial, "BigFootSquareSpecial");
            break;
        case 14:
            strcpy(circle, "NateCircle");
            strcpy(square, "NateSquare");
            strcpy(circleSpecial, "NateCircleSpecial");
            strcpy(squareSpecial, "NateSquareSpecial");
            break;
        case 13:
            strcpy(circle, "SethCircle");
            strcpy(square, "SethSquare");
            strcpy(circleSpecial, "SethCircleSpecial");
            strcpy(squareSpecial, "SethSquareSpecial");
            break;
        case 15:
            strcpy(circle, "ChadCircle");
            strcpy(square, "ChadSquare");
            strcpy(circleSpecial, "ChadCircleSpecial");
            strcpy(squareSpecial, "ChadSquareSpecial");
            break;
        }
        ser.func_00169710(circle);
        for (hi = -1; hi < 8; ++hi) {
            for (mid = hi == -1 ? -1 : 0; mid < 8; ++mid) {
                for (low = 0; low < 8; ++low) {
                    int lowBits = 1 << low;
                    int midBits = mid < 0 ? 0 : 0x100 << mid;
                    int highBits = hi < 0 ? 0 : (int)&D_00010000 << hi;
                    key = highBits | midBits | lowBits;
                    func_000A4AF0(key, keyname);
                    ser.func_00168BE0(keyname, &D_00276844, value, -1);
                    if (strcmp(value, "None") != 0) {
                        found = 0;
                        for (n = 0; n < I4(self, 0x18); ++n) {
                            if (found) break;
                            if (func_001EA426(self + 0xdc8 + n * 50, value) == 0) {
                                                                found = 1;
                                I4(self, 0x2ff0 + (count + rider * 8) * 4) = n;
                                I4(self, 0x2df0 + (count + rider * 8) * 4) = key;
                                I4(self, 0x31f0 + (count + rider * 8) * 4) = 1;
                                ++count;
                            }
                        }
                    }
                }
            }
        }
        ser.func_00169710(circleSpecial);
        for (hi = -1; hi < 8; ++hi) {
            for (mid = hi == -1 ? -1 : 0; mid < 8; ++mid) {
                for (low = 0; low < 8; ++low) {
                    int lowBits = 1 << low;
                    int midBits = mid < 0 ? 0 : 0x100 << mid;
                    int highBits = hi < 0 ? 0 : (int)&D_00010000 << hi;
                    key = highBits | midBits | lowBits;
                    func_000A4AF0(key, keyname);
                    ser.func_00168BE0(keyname, &D_00276844, value, -1);
                    if (strcmp(value, "None") != 0) {
                        found = 0;
                        for (n = 0; n < I4(self, 0x18); ++n) {
                            if (found) break;
                            if (func_001EA426(self + 0xdc8 + n * 50, value) == 0) {
                                                                found = 1;
                                I4(self, 0x35f0 + (count + rider * 8) * 4) = n;
                                I4(self, 0x33f0 + (count + rider * 8) * 4) = key;
                                I4(self, 0x37f0 + (count + rider * 8) * 4) = 1;
                                ++count;
                            }
                        }
                    }
                }
            }
        }
        ser.func_00169710(square);
        for (hi = -1; hi < 8; ++hi) {
            for (mid = hi == -1 ? -1 : 0; mid < 8; ++mid) {
                for (low = 0; low < 8; ++low) {
                    int lowBits = 1 << low;
                    int midBits = mid < 0 ? 0 : 0x100 << mid;
                    int highBits = hi < 0 ? 0 : (int)&D_00010000 << hi;
                    key = highBits | midBits | lowBits;
                    func_000A4AF0(key, keyname);
                    ser.func_00168BE0(keyname, &D_00276844, value, -1);
                    if (strcmp(value, "None") != 0) {
                        found = 0;
                        for (n = 0; n < I4(self, 0x18); ++n) {
                            if (found) break;
                            if (func_001EA426(self + 0xdc8 + n * 50, value) == 0) {
                                                                found = 1;
                                I4(self, 0x2ff0 + (count + rider * 8) * 4) = n;
                                I4(self, 0x2df0 + (count + rider * 8) * 4) = key;
                                I4(self, 0x31f0 + (count + rider * 8) * 4) = 0;
                                ++count;
                            }
                        }
                    }
                }
            }
        }
        ser.func_00169710(squareSpecial);
        for (hi = -1; hi < 8; ++hi) {
            for (mid = hi == -1 ? -1 : 0; mid < 8; ++mid) {
                for (low = 0; low < 8; ++low) {
                    int lowBits = 1 << low;
                    int midBits = mid < 0 ? 0 : 0x100 << mid;
                    int highBits = hi < 0 ? 0 : (int)&D_00010000 << hi;
                    key = highBits | midBits | lowBits;
                    func_000A4AF0(key, keyname);
                    ser.func_00168BE0(keyname, &D_00276844, value, -1);
                    if (strcmp(value, "None") != 0) {
                        found = 0;
                        for (n = 0; n < I4(self, 0x18); ++n) {
                            if (found) break;
                            if (func_001EA426(self + 0xdc8 + n * 50, value) == 0) {
                                                                found = 1;
                                I4(self, 0x35f0 + (count + rider * 8) * 4) = n;
                                I4(self, 0x33f0 + (count + rider * 8) * 4) = key;
                                I4(self, 0x37f0 + (count + rider * 8) * 4) = 0;
                                ++count;
                            }
                        }
                    }
                }
            }
        }
    }
    for (group = 0; group < 5; ++group) {
        for (rider = 0; rider < 2; ++rider) {
            switch (group) {
            case 0: if (rider == 0) { if (ser.func_00169710(&D_0027B6AC)) break; continue; } else { if (ser.func_00169710(&D_0027B690)) break; continue; } break;
            case 1: if (rider == 0) { if (ser.func_00169710(&D_0027B674)) break; continue; } else { if (ser.func_00169710(&D_0027B658)) break; continue; } break;
            case 2: if (rider == 0) { if (ser.func_00169710(&D_0027B638)) break; continue; } else { if (ser.func_00169710(&D_0027B618)) break; continue; } break;
            case 3: if (rider == 0) { if (ser.func_00169710(&D_0027B5F4)) break; continue; } else { if (ser.func_00169710(&D_0027B5D0)) break; continue; } break;
            case 4: if (rider == 0) { if (ser.func_00169710(&D_0027B5AC)) break; continue; } else { if (ser.func_00169710(&D_0027B588)) break; continue; } break;
            }
            for (hi = -1; hi < 8; ++hi) {
                for (mid = hi == -1 ? -1 : 0; mid < 8; ++mid) {
                    for (low = 0; low < 8; ++low) {
                        int lowBits = 1 << low;
                    int midBits = mid < 0 ? 0 : 0x100 << mid;
                    int highBits = hi < 0 ? 0 : (int)&D_00010000 << hi;
                    key = highBits | midBits | lowBits;
                        func_000A4AF0(key, keyname);
                        ser.func_00168BE0(keyname, &D_00276844, value, -1);
                        if (strcmp(value, "None") != 0) {
                            found = 0;
                            for (n = 0; n < I4(self, 0x39f0 + group * 4); ++n) {
                                if (found) break;
                                int index = group * 16 + n;
                                if (func_001EA426(self + 0x49a4 + index * 50, value) == 0) {
                                    found = 1;
                                    I4(self, 0x60c4 + (group * 16 + n) * 4) = key;
                                    I4(self, 0x6204 + (group * 16 + n) * 4) = rider == 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for (n = 0; n < v34; ++n) {
        func_001ADCC0(namebuf, 30, &D_0027B580, n + 1);
        if (ser.func_00169710(namebuf)) {
            ser.func_00168550(&D_00276980, self + 0x66c8 + n * 50, -1);
            ser.func_00168550(&D_0027BC8C, self + 0x6858 + n * 50, -1);
            ser.func_00168A10(&D_0027BC7C, self + 0x69e8 + n * 4);
            ser.func_00168B90(&D_0027BC68, self + 0x6a08 + n * 4);
            ser.func_00168C20(&D_0027BC08, 1, self + 0x6a28 + n * 4);
            ser.func_00168C20(&D_0027BBF8, 1, self + 0x6a48 + n * 4);
            ser.func_00168C20(&D_0027BBE8, 1, self + 0x6a68 + n * 4);
            ser.func_00168C20(&D_0027BBD8, 1, self + 0x6a88 + n * 4);
            ser.func_00168C20(&D_0027BBC8, 1, self + 0x6aa8 + n * 4);
            ser.func_00168C20(&D_0027BBB8, 1, self + 0x6ac8 + n * 4);
            ser.func_00168C20(&D_0027BBA8, 1, self + 0x6ae8 + n * 4);
            ser.func_00168C20(&D_0027BB98, 1, self + 0x6b08 + n * 4);
        }
        func_001ADCC0(namebuf, 30, &D_0027B578, n + 1);
        if (ser.func_00169710(namebuf)) {
            ser.func_00168550(&D_00276980, self + 0x6b28 + n * 50, -1);
            ser.func_00168550(&D_0027BC8C, self + 0x6cb8 + n * 50, -1);
            ser.func_00168550(&D_0027B564, self + 0x6e48 + n * 50, -1);
            ser.func_00168550(&D_0027B550, self + 0x6fd8 + n * 50, -1);
            ser.func_00168B90(&D_0027B544, self + 0x77e8 + n * 4);
            ser.func_00168A10(&D_0027BC7C, self + 0x77a8 + n * 4);
            ser.func_00168B90(&D_0027BC68, self + 0x77c8 + n * 4);
            ser.func_00168C20(&D_0027BC08, 1, self + 0x7808 + n * 4);
            ser.func_00168C20(&D_0027BBF8, 1, self + 0x7828 + n * 4);
            ser.func_00168C20(&D_0027BBE8, 1, self + 0x7848 + n * 4);
            ser.func_00168C20(&D_0027BBD8, 1, self + 0x7868 + n * 4);
            ser.func_00168C20(&D_0027BBC8, 1, self + 0x7888 + n * 4);
            ser.func_00168C20(&D_0027BBB8, 1, self + 0x78a8 + n * 4);
            ser.func_00168C20(&D_0027BBA8, 1, self + 0x78c8 + n * 4);
            ser.func_00168C20(&D_0027BB98, 1, self + 0x78e8 + n * 4);
        }
        func_001ADCC0(namebuf, 30, &D_0027B538, n + 1);
        if (ser.func_00169710(namebuf)) {
            ser.func_00168550(&D_00276980, self + 0x7168 + n * 50, -1);
            ser.func_00168550(&D_0027BC8C, self + 0x72f8 + n * 50, -1);
            ser.func_00168550(&D_0027B550, self + 0x7488 + n * 50, -1);
            ser.func_00168550(&D_0027B528, self + 0x7618 + n * 50, -1);
            ser.func_00168B90(&D_0027B544, self + 0x7948 + n * 4);
            ser.func_00168A10(&D_0027BC7C, self + 0x7908 + n * 4);
            ser.func_00168B90(&D_0027BC68, self + 0x7928 + n * 4);
            ser.func_00168C20(&D_0027BC08, 1, self + 0x7968 + n * 4);
            ser.func_00168C20(&D_0027BBF8, 1, self + 0x7988 + n * 4);
            ser.func_00168C20(&D_0027BBE8, 1, self + 0x79a8 + n * 4);
            ser.func_00168C20(&D_0027BBD8, 1, self + 0x79c8 + n * 4);
            ser.func_00168C20(&D_0027BBC8, 1, self + 0x79e8 + n * 4);
            ser.func_00168C20(&D_0027BBB8, 1, self + 0x7a08 + n * 4);
            ser.func_00168C20(&D_0027BBA8, 1, self + 0x7a28 + n * 4);
            ser.func_00168C20(&D_0027BB98, 1, self + 0x7a48 + n * 4);
        }
    }
    ser.func_001691E0();
    return 1;
}
