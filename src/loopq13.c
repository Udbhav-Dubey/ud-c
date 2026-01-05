// C program to swap first and last digit of a number
#include <stdio.h>
#include <math.h>
int main (){
    int numb,ld,fd,hold,numb1,numb2,count=0,hold1; // ld is last digit , fd is first digit
    printf("please enter the number\n");
    scanf("%d",&numb);
    numb2=numb; // hold numb
    ld = numb % 10 ;
    while (numb > 10){
        numb = numb / 10;
        count ++ ;
    }
     fd = numb % 10 ;
    printf("the first and last digit is %d and %d\n",fd,ld);
    numb2=numb2/10;
    numb2=numb2% (int)pow(10,count-1);
    printf("swapped is %d%d%d\n",ld,numb2,fd);
    return 0;
}
