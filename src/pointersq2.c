#include <stdio.h>
void  address (int i){
    int *add = &i;
     printf("the address of i is %u\n",&add);
}
int main (){
    int i = 21;
    int *i_ptr = &i;
    printf("the address of i is %u\n",&i_ptr);
    void address (int i);
    printf("the address of the variable i is %p\n", &i);
    return 0;
}
