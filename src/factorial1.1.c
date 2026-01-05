#include <stdio.h>
int x;
int factorial (int x){
    if (x==0){return 1;}
    else return (x)* factorial(x-1);
}
int main (){
scanf("%d",&x);
printf("the factorial of %d is %d\n",x,factorial(x));
return 0;
}
