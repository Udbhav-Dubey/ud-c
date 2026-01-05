#include <stdio.h>
int main (){
    int a=12;
    int *a_ptr = &a;
    printf("the address of a is %p\n",&a_ptr);
    printf("the value of a is %d\n",*a_ptr);
    return 0;

}
