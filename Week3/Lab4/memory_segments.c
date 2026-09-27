#include <stdio.h>
#include <stdlib.h>

int global_var = 150;	// Data segment
int bss_var; // BSS

int main() {
    int local_var = 30;  // Stack
    static int local_static = 20;    // Data Segment

    int *heap_var = (int *)malloc(sizeof(int));  // Heap
    *heap_var = 500;

    printf(".......Variable Addresses.......\n\n");
    printf("global_var: %p (Data/BSS)\n", (void*)&global_var);
    printf("bss_var: %p (Data/BSS)\n", (void*)&bss_var);
    printf("local_var: %p (Stack)\n", (void*)&local_var);
    printf("local_static: %p (Data/BSS)\n", (void*)&local_static);
    printf("heap_var ptr: %p (Stack - pointer)\n",(void*)&heap_var);
    printf("*heap_var: %p (Heap - data)\n", (void*)heap_var);

    free(heap_var);
    return 0;
}
