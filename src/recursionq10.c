//C program to find GCD (HCF) of two numbers using recursion
#include <stdio.h>
int hcf(int num1,int num2,int min){
    if (num1 % min ==0 && num2 % min==0){
        return min;
    }
    else {return hcf(num1,num2,--min);}
}
int main (){
    printf("enter the two numbers \n");
    int num1,num2,min;
    scanf("%d%d",&num1,&num2);
     if (num1<=num2){
         min=num1;
    }        
    else { min = num2;}
    printf("hcf is %d",hcf(num1,num2,min));
return 0;
}
