#include "xalloc.c"
#include <stdlib.h>

int main() {
    initialize_memory_pool();

    char* a = (char*)xalloc(100);

    if(a) {
        printf("Allocated 100 bytes.\n");
    }
    
    xfree(a);
    printf("Freed 100 bytes.\n");

    return 0;
}