//C program to print multiplication table of a given number
#include <stdio.h>
int main (){
    int x,numb;
    printf("please enter the number for its multipication table\n");
    scanf("%d",&numb);
    for (x=1;x<=10;x++){
        printf("%d x %d = %d\n",numb,x,numb*x);
    }
    return 0;
}
