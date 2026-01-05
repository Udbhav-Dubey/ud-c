#include <stdio.h>
int swap (int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b= temp;
}
int main (){
    int a,b;
    printf("please enter the value of a and b \n");
    scanf("%d%d",&a,&b);
    swap (&a,&b);
    printf("now a :%d b : %d\n",a,b);
    return 0;
}
