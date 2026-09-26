#include <stdio.h>
#include <stdlib.h>

int main () {
    int *forheap; // Declare pointer (lives on STACK)
    forheap = (int *)malloc(sizeof(int)); // Allocate memory on HEAP first!
    *forheap = 30; // store value to allocated memory

    //print addresses
    printf("Address of pointer (STACK) : %p\n", (void*)&forheap);
    printf("Address od data (HEAP) : %p\n", (void*)forheap);
    printf("Value stored: %d\n", *forheap);

    return 0;
}
