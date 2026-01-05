//C program to find factorial of a number using recursion
#include <stdio.h>
long long unsigned int factorial(int num){
  static long long int result =1;
  result *=  num;
    if (num==1){
        return result;
    }
    else {factorial(--num);}
}
int main (){
    int num;
    printf("please enter the number to find its factorial");
    scanf("%d",&num);
    printf("%d is the output",factorial(num)); 
return 0;
}
