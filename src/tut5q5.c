//If a number is prime or not 
#include <stdio.h>
int prime (int n,int i){
    if (n<=2){(n==2)?2:0;}
    if (n%i==0){return 0;}
    if (i*i>n) return 1;
    else prime(n,i+1);
}
int main (){
    printf("enter the number : ");
    int n;
    scanf("%d",&n);
    int val=prime(n,2);
    if (val>0){printf("it is");}
    else (val<0){printf("nah");}
return 0;
}
