#include <stdio.h>
int main (){
int x,y,z=1;
printf("please enter the number\n");
scanf("%d",&y);
for (x=1;x<=y;x++){
z *=x;
printf("%d\n",z);
}printf("%d\n",z);
return 0;
}
