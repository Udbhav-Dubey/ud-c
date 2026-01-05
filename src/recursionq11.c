// C program to find LCM of two numbers using recursion
#include <stdio.h>
int lcm(int num1,int num2,int max){
    if (num1 ==0 || num2 ==0){return 0;} 
    if (max % num1 ==0 && max % num2==0){
            return max;
        }
        else {return lcm(num1,num2,++max);}
}
int main (){
    printf("enter the numbers ");
    int num1,num2,max;
    scanf("%d%d",&num1,&num2);
    if (num1>=num2){
        max=num1;
    }
    else {max=num2;}
    printf("%d is the lcm",lcm(num1,num2,max));
return 0;
}
