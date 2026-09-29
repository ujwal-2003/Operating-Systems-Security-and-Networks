#include <stdio.h>
#include <stdlib.h> 

int global_initialized =10;
int global_uninitialized;

int main() {
    int local_variable =20;
    int *heap_variable =malloc(sizeof(int));

    if(heap_variable == NULL) {
        printf("memory allocation failed.\n");
        return 1;
    }

    *heap_variable=30;

    printf("Memory segment address mapping\n");
    printf("################################\n");
    printf("Global initialized (Date) :%p\n", (void *)&global_initialized);
    printf("Global uninitialized (BSS) : %p\n", (void *)&global_uninitialized);

    printf("Local Variable (Stack)  :%p\n", (void *)&local_variable);
    printf("Dyanamic Variable (Heap)  :%p\n", (void *)&heap_variable);


    long long difference =(char *)&local_variable - (char *)heap_variable;

    printf("\nAddress Difference (Stack - Heap): %lld bytes\n",difference);

    printf("\nNote: Exact addresses vary between program runs and systems.\n");

    free(heap_variable);

    return 0;

}

