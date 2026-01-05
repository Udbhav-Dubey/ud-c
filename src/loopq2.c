// C program to print natural numbers in reverse from n to 1
#include <stdio.h>
int main (){
int n,i=1;
printf("please enter the number till we have to write\n");
scanf("%d",&n);
while (n>=i){
printf("%d\n",n);
n--;
}
return 0;
}
