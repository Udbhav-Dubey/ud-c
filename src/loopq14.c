//C program to find sum of digits of a number
#include <stdio.h>
int main (){
int numb,sum=0;
printf("please enter the number\n");
scanf("%d",&numb);
while (numb!=0){
    sum += numb % 10 ;
    numb = numb / 10;
}
printf("the sum of digits is %d\n",sum);
return 0;
}
