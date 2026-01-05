#include <stdio.h>
struct A {
    int x;
};
int main(){
    struct A a;
    a.x=10;
    printf("%d\n",a.x);
    return 0;
}
