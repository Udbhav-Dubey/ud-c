// C program to check whether a number is prime or not
#include <stdio.h>
#include <math.h>
int main (){
int numb,x=2,remainder;
printf("please enter the number that has to be checked for prime or not\n");
scanf("%d",&numb);
while (numb>x){
remainder = numb % x;
printf("numb is %d\nremainder is %d\nx is %d\n",numb,remainder,x);
if (remainder==0){printf("%d is prime number\n",numb);}
else{printf("%d is not a prime number\n",numb);}
x++;
}
return 0;
}
