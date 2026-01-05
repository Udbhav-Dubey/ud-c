//C program to find nth fibonacci term using recursion
#include <stdio.h>
int fibo(int num){
    if (num==0){return 0;}
    else if (num==1){return 1;}
    else {
        printf(" %d ",num);
        return fibo(num-1) + fibo (num-2);
    }
}
int main (){
    int num;
    printf("please enter the number ");
    scanf("%d",&num);
   printf("%d", fibo(num));
return 0;
}
