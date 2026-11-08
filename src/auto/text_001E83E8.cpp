/* 3 functions from 0x001E83E8 to 0x001E84D5, found by Ghidra. */
#include "common.h"

extern int D_002FB364;
extern int D_002F69EC;
void *func_001E8AA5(unsigned int size);
void func_001E8390(void *p);
void func_001EB390(int n);
int func_001EB302(...);
int func_001DF5B3(void);
int __stdcall func_001E148B(int heap, int flags, void *p, unsigned int size);
int func_001EB3BE(unsigned int size);

#pragma optimize("t", off)
void *func_001E83E8(void *block, unsigned int size)
{
    void *result;
    int in_heap;

    if (block == 0) {
        return func_001E8AA5(size);
    }
    if (size == 0) {
        func_001E8390(block);
        return 0;
    }
    if (D_002FB364 == 3) {
        do {
            result = 0;
            if (size <= 0xffffffe0) {
                func_001EB390(4);
                __try {
                    in_heap = 0;
                    if (in_heap) {
                        result = block;
                    }
                } __finally {
                    func_001EB302(4);
                }
                if (in_heap == 0) {
                    if (size == 0) {
                        size = 1;
                    }
                    size = (size + 15) & ~15;
                    result = (void *)func_001E148B(func_001DF5B3(), 0, block, size);
                }
            }
            if (result != 0 || D_002F69EC == 0) {
                return result;
            }
        } while (func_001EB3BE(size) != 0);
        return 0;
    }
    do {
        result = 0;
        if (size <= 0xffffffe0) {
            if (size == 0) {
                size = 1;
            }
            result = (void *)func_001E148B(func_001DF5B3(), 0, block, size);
        }
        if (result != 0 || D_002F69EC == 0) {
            return result;
        }
    } while (func_001EB3BE(size) != 0);
    return 0;
}
#pragma optimize("", on)

void func_001E848F(void) {
    int func_001EB302(...);
    func_001EB302(4);
}

#pragma optimize("t", off)
void *func_001E8498(void *block, unsigned int size, unsigned int z)
{
    void *p;
    for (;;) {
        p = 0;
        if (size <= 0xffffffe0) {
            if (size == z) {
                size = 1;
            }
            p = (void *)func_001E148B(func_001DF5B3(), z, block, size);
        }
        if (p != (void *)z || D_002F69EC == z) {
            return p;
        }
        if (func_001EB3BE(size) == 0) {
            return 0;
        }
    }
}
#pragma optimize("", on)

