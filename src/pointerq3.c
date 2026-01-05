//C program to swap two numbers using call by reference
#include <stdio.h>
void swap (int  num1,int  num2){
    int temp =  num1;
     num1= num2;
     num2= temp;
}
int main (){
    printf("please enter the numbers ");
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    swap( num1, num2);
    printf("num1: %d \nnum2: %d ",num1,num2);
return 0;
}
