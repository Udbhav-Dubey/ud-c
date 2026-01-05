// program to find sum of digits using recursion
#include <stdio.h>
int summer(int number){
    if (number==0){return 0;}
    else {
        return (number%10)+summer(number/10);
    }
}
    int main (){
    printf("please enter the digits : ");
    int number ;
    scanf("%d",&number);
    printf("%d is your output",summer(number));
return 0;
}
