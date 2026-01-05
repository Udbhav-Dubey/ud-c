#include <stdio.h>
int main (){
int x,y,z,t;
scanf("%d",&t);
x=0;
z=0;
while (x<10){
x++;
y=x*t;
printf("%d x %d is %d\n",t,x,y);
z+=y;
printf("%d\n",z);
}
return 0;
}
