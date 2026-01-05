#include <stdio.h>
#include <math.h>
int main (){
int a,b,c ;
double roots ,D;
double r1,r2;
printf ("in quadratic equation ax^2 + bx + c please provide a,b,c respectfully\n");
scanf("%d %d %d",&a,&b,&c);
printf("the quadratic is %dx^2 + %dx + %d\n",a,b,c);
D = (b*b)- (4*a*c);
printf("D is %f\n",D);
if (D==0){
roots = -b/(a+a);
printf("the roots are %f\n",roots);
}
if (D>0){
double scare=sqrt(D);
r1 = (-b + scare)/ (a+a);
r2 = (-b - scare)/ (a+a);
printf("roots are %f and %f\n",r1,r2);
}
if (D<0){
printf("roots are imaginary\n");
}
return 0;
}
