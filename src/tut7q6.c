//Pass and return structure into other functions besides main().
#include <stdio.h>
struct A {
    int a;
    int b;
}x;
int adder (struct A z,struct A x){
    z.b=z.a+x.a;
    return z.b;
}
int main (){
    struct A z;
    z.a=1;
    x.a=2;
    printf("%d",adder(z,x));

return 0;
}
