//WAP to print the address/values of the different variables (int,float,char) using &amp; and *operators.
#include <stdio.h>
int main (){
    int x=10;
    int *px=&x;
    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",*px);
    printf("%d\n",px);
return 0;
}

