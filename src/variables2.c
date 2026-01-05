#include <stdio.h>

    int x=123;
    char z='y';

void function1() { printf("function1: %d\n",x);}
void function2() { printf("function2: %c\n",z);}

int main (){

    function1();
    function2();    
    return 0;
}



