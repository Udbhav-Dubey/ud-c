#include <stdio.h>
void A(){
    printf("can you smell what the rock is cooking \n");
}
void B(void (*ptr)()){
    (*ptr)();
}
int main ()
{
    void (*ptr)() = &A;
    B(ptr);
    return 0;
}
