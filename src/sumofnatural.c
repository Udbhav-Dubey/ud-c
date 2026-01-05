#include <stdio.h>
int main (){
int x=0;
long long int y=0;
long double  z = -0.08333333333;
while (x>=0){
printf("x is %d\n",x);
x++;
y=x+y;
printf("sum till %d is %lld\n",x,y);
if (y<0){break;}
}
return 0;
}
