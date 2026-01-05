#include <stdio.h>
int main(){
int n,x;
printf("please enter the number\n");
scanf("%d",&n);
while (n>0){
printf("%d X %d = %d \n",n,x,n*x);
x++ ;
if (x==11){break;}
}
return 0;
}
