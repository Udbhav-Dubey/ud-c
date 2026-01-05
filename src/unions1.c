#include <stdio.h>
union A {
    int a;
    char c ;
}aa;
union B {
    int b ;
    float d;
}bb;
int main (){
    printf("%d\n",sizeof(aa));
    printf("%d\n",sizeof(bb));
    return 0;
}
