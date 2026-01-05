#include <stdio.h>
int main (){
int x,y;
printf("please enter the number\n");
scanf("%d",&x);
y=x&128;
if (y==1){
printf("msb is 1\n");}
else {printf("msb is 0\n");}
return 0;
}
