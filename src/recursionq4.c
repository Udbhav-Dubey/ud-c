//c-program-to-find-sum-of-even-odd-number-using-recursion
#include <stdio.h>
int summer(int i,int number){
    if (i>number){return 0;}
    else {return i+summer(i+2,number);}
}
int main (){
    printf("please enter the number ");
    int number;
    scanf("%d",&number);
    int i=1;
    printf("%d is the sum",summer(i,number));
return 0;
}
