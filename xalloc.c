#include <assert.h>
#include <stdio.h>

#define XCAPACITY 640000

char x[XCAPACITY] = {0};
size_t xsize = 0;

void* xalloc(size_t size) {

    assert(xsize + size <= XCAPACITY);
    void* result = x + xsize;
    xsize += size;
    return result;
}

void xfree(void* ptr) {
}

void xcollect() {
}