//C program to check palindrome number using recursion
#include <stdio.h>
int reverse(int number,int reverse){
    if (number==0){return result;}
    else {return (number/10,result*10+number%10);}
}
int main (){
    printf("please enter the number");
    int number=0;
    scanf("%d",&number);
    int rev=reverse(int number , 0);
    if (rev==reverse){printf("palindrome");}
    else {printf("not a palindrome");}
return 0;
}
