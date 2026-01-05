//C program to check whether a number is divisible by 5 and 11 or not
#include <stdio.h>
int main (){
int x,y;
printf("please enter the number\n");
scanf("%d",&x);
y = x%55;
if (y==0){
            printf("the number is divisible\n");}
else { printf("the number is not divisible\n");}


return 0;
}
