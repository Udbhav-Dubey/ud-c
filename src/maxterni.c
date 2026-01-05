#include <stdio.h>
int main (){
int x,y,z;
printf("please enter 3 numbers\n");
scanf("%d %d %d",&x,&y,&z);
(x>y && x>z )? printf("%d is maximum",x)
             : (y>x && y>z) ?  printf("%d is maximum\n",y)
             : (z>x && z>y) ?  printf("%d is maximum\n",y)
             : (x==y && x>z)?  printf("%d is equal to %d and greater than %d\n",x,y,z)
             : (x==z && x>y)?  printf("%d is equal to %d and greater than %d\n",x,z,y)
             : (y==z && y>x)?  printf("%d is equal to %d and greater than %d\n",y,z,x)
             : (x==y && x>z)?  printf("%d is equal to %d and greater than %d\n",x,y,z)
             : (x==z && x>y)?  printf("%d is equal to %d and greater than %d\n",x,z,y)
             : (y==z && y>x)?  printf("%d is equal to %d and greater than %d\n",y,z,x)
             : (y==z && z==x)? printf("everything is equal"):
                printf("pata nahi");
return 0;
}
