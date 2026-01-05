#include <stdio.h>
int main (){
int a,b,c;
printf("please enter the sides of triangle a,b,c respectfully\n");
scanf("%d %d %d",&a,&b,&c);
if (a!=b && a!=c && c!=b){
printf("it is a scalene triangle\n");
}
if (a==b && a==c && c==b){
printf("it is a equilateral triangle\n");
}
if ((a==b && a!=c) || (b==c && b!=a) || (a==c && a!=b)){
printf("it is an isosceles triangle\n");
}
return 0;
}
