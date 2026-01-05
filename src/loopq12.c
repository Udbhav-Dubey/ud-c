//C program to find sum of first and last digit of any number
#include <stdio.h>
int main (){
    int numb,ld,fd; // ld is last digit , fd is first digit
    printf("please enter the number\n");
    scanf("%d",&numb);
    ld = numb % 10 ;
    while (numb > 10){
        numb = numb / 10;
    }
    fd = numb % 10 ;
    printf("the first and last digit is %d and %d\nsum is %d\n",fd,ld,fd+ld);
    return 0;
}
