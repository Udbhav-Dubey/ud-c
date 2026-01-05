// C program to find HCF (GCD) of two numbers
#include <stdio.h>
int main (){
int min,i,numb1,numb2,hcf=1;
printf("please enter 2 numbers to find hcf\n");
scanf("%d%d",&numb1,&numb2);
//min = (numb1<numb2) ? numb1 : numb2 ;
if (numb1>numb2){min = numb2;}
else {min = numb1;}
for (i=1;i<=min;i++){
if (numb1 % i == 0 && numb2 % i == 0){
hcf = i ;
}
}
printf("the hcf of two numbers is %d and %d is %d\n",numb1,numb2,hcf);
return 0;
}
