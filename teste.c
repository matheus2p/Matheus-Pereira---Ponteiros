#include <stdio.h>
#include <assert.h>
#include <gc.h>

int main(void)
{
    int i;
    const int size = 10000000;

    GC_INIT();
    for (i = 0; i < size; ++i)
    {
        int **p = GC_MALLOC(sizeof *p);
        int *q = GC_MALLOC_ATOMIC(sizeof *q);

        assert(*p == 0);
        *p = GC_REALLOC(q, 2 * sizeof *p);
        if (i == size-1)
            printf("Heap size = %zu\n", GC_get_heap_size());
    }

    return 0;
}

ubuntu@ubuntu-VirtualBox:~/Área de Trabalho/Código$ gcc teste.c -o teste -lgc
ubuntu@ubuntu-VirtualBox:~/Área de Trabalho/Código$ ./teste
Heap size = 131072
