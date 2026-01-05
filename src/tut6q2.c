//WAP to find out the difference between %u, %p, %x while printing the address of a
//variable.
#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;

    printf("Address using %%p (pointer format) : %p\n", (void *)ptr);
    printf("Address using %%u (unsigned int)   : %u\n", (unsigned int)(uintptr_t)ptr);
    printf("Address using %%x (hexadecimal)    : %x\n", (unsigned int)(uintptr_t)ptr);

    return 0;
}

return 0;
}
