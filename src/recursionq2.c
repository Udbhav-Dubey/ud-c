//C program to print all natural numbers from 1 to n using recursion
#include <stdio.h>
void printer(int i,int n){
    if (i>n){return ;}
    else {printf("%d ",i);
         
        printer(i+1,n);
    }
}
int main (){
    printf("enter the number till to be printed\n");
    int n;
    scanf("%d",&n);
    int i=1;
    printer(i,n);
return 0;
}
