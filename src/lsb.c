#include <stdio.h>
int main (){
int x,y;
printf("please enter the number\n");
scanf("%d",&x);
y=x&1;
if (y==1){
printf("lsb is 1\n");}
else {printf("lsb is 0\n");}
return 0;
}
