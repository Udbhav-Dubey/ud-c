#include <stdio.h>
int main (){
int number , remainder,x=2, indicator ;
printf("please enter the number that has to be checked for prime or not\n");
scanf("%d",&number);
while (number>x ){
remainder = number % x ;
if (remainder==0){ indicator = 1;
break; }
printf("%d is ",number);
if (indicator==1){printf("not a \n");}
printf("not a prime number\n");
x++;
}
return 0;
}
