// C program to find sum of natural numbers from 1 to n
#include <stdio.h>
int main (){
int n,i=1,sum;
printf("please enter number so we can find sum of natural numbers from 1 to n\n");
scanf("%d",&n);
while (n>=i){
sum += i;
i++;
}
printf("the sum till %d is %d\n",n,sum);
return 0;
}
