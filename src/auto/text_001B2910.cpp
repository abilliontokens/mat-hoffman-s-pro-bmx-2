/* 11 functions from 0x001B2910 to 0x001B35D0, found by Ghidra. */
#include "common.h"

/* image header read field by field from a file (a TGA-like header), then its pixel buffer at f14 */
struct S_001B3560 {
    unsigned char f0;
    unsigned char f1;
    unsigned char f2;
    char pad3;
    unsigned short f4;
    unsigned short f6;
    unsigned char f8;
    char pad9;
    unsigned short fA;
    unsigned short fC;
    short fE;
    short f10;
    unsigned char kind;
    unsigned char f13;
    void *f14;
    int f18;
    char f1c;
    char pad1d[0x120 - 0x1d];
    int f120;
    int f124;
};

#pragma pack(push, 1)
struct S_001B2CD0_Px {
    unsigned short lo;
    unsigned char hi;
};
#pragma pack(pop)

struct C_001B33A0_Loader {
    int func_0013C8A0(int handle, void *buf, int size, int count);
};
extern C_001B33A0_Loader *D_002BEAAC;
void *func_001E8AA5(int size);

int func_001B2910(int param_1);
S_001B3560 *func_001B33A0(int a, int b);
int func_001B2CD0(S_001B3560 *item, int a);
int func_001B2F10(S_001B3560 *item, int a);
int func_001B3150(S_001B3560 *item, int a);
void func_001E8390(void *ptr);

int func_001B2910(int param_1)
{
    if (param_1 <= 0x22b) {
        if (param_1 != 0x22b) {
            switch (param_1) {
            case 0:
            case 1:
            case 8:
            case 0xb:
            case 0xc:
            case 0x13:
            case 0x19:
            case 0x1b:
            case 0x1f:
                return 8;
            case 2:
            case 3:
            case 4:
            case 5:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x16:
            case 0x17:
            case 0x1a:
            case 0x1c:
            case 0x20:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2c:
            case 0x2d:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x35:
            case 0x37:
            case 0x38:
            case 0x39:
            case 0x3d:
            case 0x3e:
            case 0x65:
                break;
            case 6:
            case 7:
            case 0x12:
            case 0x1d:
            case 0x1e:
            case 0x24:
            case 0x25:
            case 0x2a:
            case 0x2b:
            case 0x2e:
            case 0x2f:
            case 0x3a:
            case 0x3b:
            case 0x3c:
            case 0x3f:
            case 0x40:
            case 0x41:
            ret20:
                return 0x20;
            case 0x64:
                return 0;
            default:
                return 0;
            }
        }
    } else {
        switch (param_1) {
        case 0x22b8:
            goto ret20;
        case 0x235:
        case 0x613:
        case 0x115c:
            return 0x10;
        case 0x378:
            return 0x18;
        }
        return 0;
    }
    return 0x10;
}

extern "C" char D_0000F800, D_0000FF00, D_0000F000;
void func_001B29F0(int format, int *a, int *r, int *g, int *b)
{
    switch (format) {
    case 0x14c: *a = 0; *r = 0xe0; *g = 0x1c; *b = 3; break;
    case 8: *a = 0; *r = 0; *g = 0; *b = 0; break;
    case 0x235: *a = 0; *r = (int)&D_0000F800; *g = 0x7e0; *b = 0x1f; break;
    case 0x378: *a = 0; *r = 0xff0000; *g = (int)&D_0000FF00; *b = 0xff; break;
    case 0x613: *a = 0x8000; *r = 0x7c00; *g = 0x3e0; *b = 0x1f; break;
    case 0x22b8: *a = 0xff000000; *r = 0xff0000; *g = (int)&D_0000FF00; *b = 0xff; break;
    case 0x208c: *a = (int)&D_0000FF00; *r = 0xe0; *g = 0x1c; *b = 3; break;
    case 0x115c: *a = (int)&D_0000F000; *r = 0xf00; *g = 0xf0; *b = 0xf; break;
    }
}

int func_001B2B90(int param_1)
{
    switch (param_1) {
    case 6:
    case 7:
    case 0x12:
    case 0x1e:
        return 0x20;
    case 2:
    case 3:
    case 4:
    case 5:
        return 0x10;
    case 0x19:
        return 8;
    default:
        return -1;
    }
}

int func_001B2BF0(int param_1)
{
    switch (param_1) {
    case 8:
        return 0x19;
    case 0x235:
        return 5;
    case 0x613:
        return 2;
    case 0x115c:
        return 4;
    case 0x22b8:
        return 6;
    default:
        return -1;
    }
}

int func_001B2C40(int param_1)
{
    switch (param_1) {
    case 6:
    case 7:
    case 0x12:
        return 0x22b8;
    case 5:
        return 0x235;
    case 2:
    case 3:
        return 0x613;
    case 4:
        return 0x115c;
    case 0x19:
        return 8;
    default:
        return -1;
    }
}

int func_001B2CB0(int param_1)
{
    return func_001B2910(param_1) / 8;
}

extern "C" void *memcpy(void *d, const void *s, unsigned int n);
int func_001B2CD0(S_001B3560 *item, int a)
{
    unsigned int size;
    int pixels;
    unsigned char *p;
    unsigned char *end;
    int count;

    pixels = item->fE * item->f10;
    size = pixels * 3;
    if (size > (unsigned int)item->f18) {
        if (item->f14 != 0) {
            func_001E8390(item->f14);
        }
        item->f14 = 0;
        item->f18 = 0;
    }
    if (item->f14 == 0) {
        item->f14 = func_001E8AA5(size);
        if (item->f14 == 0) {
            return 0;
        }
        item->f18 = size;
    }
    p = (unsigned char *)item->f14;
    end = p + size;
    if (item->f2 == 2) {
        if (D_002BEAAC->func_0013C8A0(a, p, 3, pixels) != pixels) {
            return 0;
        }
    } else if (p < end) {
        do {
            unsigned char hdr;
            D_002BEAAC->func_0013C8A0(a, &hdr, 1, 1);
            count = hdr;
            if (count & 0x80) {
                S_001B2CD0_Px px;
                count &= 0x7f;
                if (D_002BEAAC->func_0013C8A0(a, &px, 3, 1) != 1) {
                    return 0;
                }
                do {
                    *(S_001B2CD0_Px *)p = px;
                    p += 3;
                } while (count-- != 0);
            } else {
                count++;
                if (D_002BEAAC->func_0013C8A0(a, p, 3, count) != count) {
                    return 0;
                }
                p += count * 3;
            }
        } while (p < end);
    }
    if (!(item->f13 & 0x20)) {
        int stride;
        int i;
        unsigned char *top = (unsigned char *)item->f14;
        unsigned char *bot = top + (item->f10 - 1) * item->fE * 3;
        unsigned char *tmp;

        if (item->f120 != 0 && (unsigned int)item->f124 < (unsigned int)(item->fE * 3)) {
            func_001E8390((void *)item->f120);
            item->f124 = 0;
            item->f120 = 0;
        }
        if (item->f120 == 0) {
            item->f120 = (int)func_001E8AA5(item->fE * 3);
            if (item->f120 == 0) {
                return 0;
            }
            item->f124 = item->fE * 3;
        }
        tmp = (unsigned char *)item->f120;
        for (i = 0; i < item->f10 / 2; i++) {
            stride = item->fE * 3;
            memcpy(tmp, top, stride);
            stride = item->fE * 3;
            memcpy(top, bot, stride);
            stride = item->fE * 3;
            memcpy(bot, tmp, stride);
            stride = item->fE * 3;
            bot -= stride;
            top += stride;
        }
        item->f13 |= 0x20;
    }
    return 1;
}

int func_001B2F10(S_001B3560 *item, int a)
{
    unsigned int count = item->f10 * item->fE;
    unsigned int size = count * 4;
    unsigned int *p;
    if (size > (unsigned int)item->f18) {
        if (item->f14) func_001E8390(item->f14);
        item->f14 = 0;
        item->f18 = 0;
    }
    if (!item->f14) {
        item->f14 = func_001E8AA5(size);
        if (!item->f14) return 0;
        item->f18 = size;
    }
    p = (unsigned int *)item->f14;
    size += (unsigned int)p;
    if (item->f2 == 2) {
        if (D_002BEAAC->func_0013C8A0(a, p, 4, count) != (int)count) return 0;
    } else {
        unsigned char packet;
        unsigned int pixel;
        while (p < (unsigned int *)size) {
            D_002BEAAC->func_0013C8A0(a, &packet, 1, 1);
            unsigned int n = packet;
            if (n & 0x80) {
                n &= 0x7f;
                if (D_002BEAAC->func_0013C8A0(a, &pixel, 4, 1) != 1) return 0;
                do { *p++ = pixel; } while (n--);
            } else {
                ++n;
                do {
                    if (D_002BEAAC->func_0013C8A0(a, p, 4, 1) != 1) return 0;
                    ++p;
                } while (--n);
            }
        }
    }
    if (!(item->f13 & 0x20)) {
        char *first = (char *)item->f14;
        char *last = first + (item->f10 - 1) * item->fE * 4;
        if (item->f120 && (unsigned int)item->f124 < (unsigned int)(item->fE * 4)) {
            func_001E8390((void *)item->f120);
            item->f124 = 0;
            item->f120 = 0;
        }
        if (!item->f120) {
            item->f120 = (int)func_001E8AA5(item->fE * 4);
            if (!item->f120) return 0;
            item->f124 = item->fE * 4;
        }
        void *tmp = (void *)item->f120;
        for (int i = 0; i < item->f10 / 2; ++i) {
            memcpy(tmp, first, item->fE * 4);
            memcpy(first, last, item->fE * 4);
            memcpy(last, tmp, item->fE * 4);
            last -= item->fE * 4;
            first += item->fE * 4;
        }
        item->f13 |= 0x20;
    }
    return 1;
}

int func_001B3150(S_001B3560 *item, int a)
{
    int count = item->fE;
    count *= item->f10;
    unsigned int size = count * 2;
    if (size > (unsigned int)item->f18) {
        if (item->f14) func_001E8390(item->f14);
        item->f14 = 0;
        item->f18 = 0;
    }
    if (!item->f14) {
        item->f14 = func_001E8AA5(size);
        if (!item->f14) return 0;
        item->f18 = size;
    }
    unsigned short *p = (unsigned short *)item->f14;
    unsigned short *end = p + count;
    if (item->f2 == 2) {
        for (int i = 0; i < item->f10; i++) {
            if (D_002BEAAC->func_0013C8A0(a, p, 2, item->fE) != item->fE) return 0;
            p += item->fE;
        }
    } else {
        do {
            unsigned char packet;
            unsigned short pixel;
            D_002BEAAC->func_0013C8A0(a, &packet, 1, 1);
            unsigned int n = packet;
            if (n & 0x80) {
                n &= 0x7f;
                if (D_002BEAAC->func_0013C8A0(a, &pixel, 2, 1) != 1) return 0;
                do { *p++ = pixel; } while (n--);
            } else {
                ++n;
                if (D_002BEAAC->func_0013C8A0(a, p, 2, n) != (int)n) return 0;
                p += n;
            }
        } while (p < end);
    }
    if (!(item->f13 & 0x20)) {
        char *first = (char *)item->f14;
        char *last = first + (item->f10 - 1) * item->fE * 2;
        if (item->f120 && (unsigned int)item->f124 < (unsigned int)(item->fE * 2)) {
            func_001E8390((void *)item->f120);
            item->f124 = 0;
            item->f120 = 0;
        }
        if (!item->f120) {
            item->f120 = (int)func_001E8AA5(item->fE * 2);
            if (!item->f120) return 0;
            item->f124 = item->fE * 2;
        }
        void *tmp = (void *)item->f120;
        for (int i = 0; i < item->f10 / 2; ++i) {
            memcpy(tmp, first, item->fE * 2);
            memcpy(first, last, item->fE * 2);
            memcpy(last, tmp, item->fE * 2);
            last -= item->fE * 2;
            first += item->fE * 2;
        }
        item->f13 |= 0x20;
    }
    return 1;
}

S_001B3560 *func_001B33A0(int a, int b)
{
    S_001B3560 *item = (S_001B3560 *)b;

    if (item == 0) {
        item = (S_001B3560 *)func_001E8AA5(0x128);
        if (item == 0) {
            goto fail;
        }
        item->f14 = 0;
        item->f18 = 0;
        item->f120 = 0;
        item->f124 = 0;
    }
    item->f1c = 0;
    if (D_002BEAAC->func_0013C8A0(a, &item->f0, 1, 1) == 1 &&
        D_002BEAAC->func_0013C8A0(a, &item->f1, 1, 1) == 1 &&
        D_002BEAAC->func_0013C8A0(a, &item->f2, 1, 1) == 1 &&
        D_002BEAAC->func_0013C8A0(a, &item->f4, 2, 1) == 1 &&
        D_002BEAAC->func_0013C8A0(a, &item->f6, 2, 1) == 1 &&
        D_002BEAAC->func_0013C8A0(a, &item->f8, 1, 1) == 1 &&
        D_002BEAAC->func_0013C8A0(a, &item->fA, 2, 1) == 1 &&
        D_002BEAAC->func_0013C8A0(a, &item->fC, 2, 1) == 1 &&
        D_002BEAAC->func_0013C8A0(a, &item->fE, 2, 1) == 1 &&
        D_002BEAAC->func_0013C8A0(a, &item->f10, 2, 1) == 1 &&
        D_002BEAAC->func_0013C8A0(a, &item->kind, 1, 1) == 1 &&
        D_002BEAAC->func_0013C8A0(a, &item->f13, 1, 1) == 1 &&
        (item->kind == 0x10 || item->kind == 0x18 || item->kind == 0x20) &&
        (item->f2 == 2 || item->f2 == 10)) {
        return item;
    }
    if (item->f14 != 0) {
        func_001E8390(item->f14);
    }
    func_001E8390(item);
fail:
    return 0;
}

S_001B3560 *func_001B3560(int param_1, int param_2)
{
    S_001B3560 *item;
    int ok;

    item = func_001B33A0(param_1, param_2);
    if (item != 0) {
        if (item->kind == 0x18) {
            ok = func_001B2CD0(item, param_1);
        } else if (item->kind == 0x20) {
            ok = func_001B2F10(item, param_1);
        } else {
            if (func_001B3150(item, param_1) != 0) {
                goto success;
            }
            ok = 0;
        }
        if (ok != 0) {
success:
            item->f1c = 0;
            return item;
        }
        if (item->f14 != 0) {
            func_001E8390(item->f14);
        }
        func_001E8390(item);
    }
    return 0;
}

