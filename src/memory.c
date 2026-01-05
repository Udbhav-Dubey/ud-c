#include <stdio.h>
#include <stdlib.h>

int global_var = 100;        // Global variable
static int static_global = 200; // Static global variable

void function() {
    int local_var = 10;      // Local variable (stack)
    static int static_local = 20; // Static local variable (data segment)
    int* heap_var = malloc(sizeof(int)); // Heap variable
    *heap_var = 30;

    printf("Local var: %d\n", local_var);
    printf("Static local: %d\n", static_local);
    printf("Heap var: %d\n", *heap_var);

    free(heap_var);
}

int main() {
    function();
    return 0;
}

