#include <stdio.h>
int sum (int a,int b){
return a + b ;
}
int main (){
int a,b,plus;
printf("please enter the two numbers we have to sum respectfully\na : ");
scanf("%d",&a);
printf("b : ");
scanf("%d",&b);
plus = sum (a,b);
printf("sum is %d\n",plus);
return 0;
}
