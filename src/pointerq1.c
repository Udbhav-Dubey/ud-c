//C program to add two numbers using pointers
#include <stdio.h>
int main (){
    int num1,num2;
    int *p1=&num1;
    int *p2=&num2;
    printf("enter the numbers \n");
    scanf("%d %d", p1, p2);
    int sum= *p1+ *p2;
    int diffrence = *p1-*p2;
    int multi= *p1 * *p2;
    printf("sum is %d\n diffrence is %d\n mutli is %d\n",sum,diffrence,multi);
return 0;
}
