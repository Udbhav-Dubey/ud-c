#include <stdio.h>
int main(){
int n,x;
printf("please enter the number\n");
scanf("%d\n",&n);
while (n>0){
printf("%d X %d\n",n,x);
x++
if (x=10){break;}
}
return 0;
}
