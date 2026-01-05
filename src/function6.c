#include <stdio.h>
int factorial (int x);
int main (){
    int a ;
    printf("please enter the number\n");
    scanf("%d",&a);
    printf("the factorial of number %d is %d\n",a,factorial(a));
    return 0;
}
int factorial (int x){
    if (x==1 || x==0){
        return 1;
    }
    else {
        return x * factorial (x-1);
    }
}
