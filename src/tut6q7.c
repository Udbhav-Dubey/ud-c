#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int) * 5);

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign values using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        *(ptr + i) = i;
    }

    // Print values using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        printf("Value at index %d = %d\n", i, *(ptr + i));
    }

    // Free memory
    free(ptr);
    ptr = NULL;

    return 0;
}

