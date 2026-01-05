#include <stdio.h>
int main (){
int p,x=2;
float r;

printf("please enter the number\n");
scanf("%d",&p);
while(p>x){
r=p%x;
x++;
// printf("%d\n",r);
}if (r>0){printf(" not a prime number\n");}
else if (r==0){printf("prime number\n");}
else {printf("notprime number\n");}
return 0;
}
