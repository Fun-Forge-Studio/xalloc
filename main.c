#include "xalloc.c"

int main() {
    for (int i = 0; i < 20; ++i) {
        void* p = xalloc(i);
        //if(i %2 == 0) {
        //    xfree(p);
        //}
    }

    chunk_list_dump(&alloced_chunks);

    return 0;
}