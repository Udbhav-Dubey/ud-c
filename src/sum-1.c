#include <stdio.h>
int main(){
int x=0,sum=0;
int n;
printf("please enter the number \n");
scanf("%d",&n);
while (x<n){
x++;
sum+=x;
printf("sum from 1 till %d is %d\n",x,sum);
}
printf("till %d is %d\n",n,sum);
return 0;
}
