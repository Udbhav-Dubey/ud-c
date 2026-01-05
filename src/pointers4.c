#include <stdio.h>
int tener (int a);
int main (){
    int a;
    printf("please enter the value of a\n");
    scanf("%d",&a);
    tener (a);
    printf("the value of a after tener is %d\n",a);
    return 0;
}
int tener (int a){
    int b;
    b = a ;
    b = b * 10 ;
    a = b ;
    return a ;
}
