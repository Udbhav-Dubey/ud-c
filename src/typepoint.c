#include <stdio.h>
typedef int* pointy;
int main(){
    int a =10;
    pointy ptr = &a;
    printf("%d\n",*ptr);
    return 0;
}
