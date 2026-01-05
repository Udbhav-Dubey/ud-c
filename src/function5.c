#include <stdio.h>
int area (){
    int l,A;
    printf("please give side of variable\n");
    scanf("%d",&l);
    A = l*l;
    printf("area is %d\n",A);
}
int main (){
    area ();
    return 0;
}
