//C program to find power of a number using recursion
#include <stdio.h>
int power(int n,int p){
    static int result=1;
    result*=n;
    if (p>1){power(n,--p);}
    if (p==1){return result;}
}
int main (){
    printf("please enter the number :");
    int n;
    scanf("%d",&n);
    printf("please enter the power :");
    int p;
    scanf("%d",&p);
    printf("the power of number is %d\n",power(n,p));
return 0;
}
