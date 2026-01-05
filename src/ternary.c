#include <stdio.h>
int main (){
float x,y;
printf("please enter x and y\n");
scanf("%f %f",&x,&y);
(x>y)? printf("%f is greater than %f\n",x,y)
     : printf("%f is greater than %f\n",y,x);
return 0;
}
