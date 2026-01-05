#include <stdio.h>
struct B {
    double y;
};
struct A {
    int x;
    struct B b;
};
int main(){
    struct A a={10,12.231};
    printf("%d %f\n",a.x,a.b.y);
    return 0;
}
