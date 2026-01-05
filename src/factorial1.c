// C program to find all factors of a number Categories C programming
#include <stdio.h>
int main (){
int numb,i;
unsigned long long factorial=1LL;
printf("please enter the number\n");
scanf("%d",&numb);
printf("factorial of %d",numb);
for (i=1;i<=numb;i++){
factorial= factorial * i;
}
printf("is %llu\n",factorial);
return 0;
}
