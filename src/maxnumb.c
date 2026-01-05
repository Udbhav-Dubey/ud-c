// Write a C program to find maximum between 3 numbers.
#include <stdio.h>
int main (){

    int x,y,z;
    printf("please enter the two numbers to find the maximum\n");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if (x>y && x>z){
             printf("%d is maximum\n",x);}
    else if (y>x && y>z) { printf("%d is maximum\n",y);}

    else if (z>x && z>y) {
                 printf("%d is maximum\n",z);}
    else if (x==y && x==z ) {
                 printf("same number\n");}


return 0;
}
